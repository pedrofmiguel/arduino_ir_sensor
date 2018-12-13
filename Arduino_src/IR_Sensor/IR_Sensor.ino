int LED = 13; // Use the onboard Uno LED
int obstaclePin = 7;  // This is our input pin
int hasObstacle = HIGH;  // HIGH MEANS NO OBSTACLE

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(obstaclePin, INPUT);
  Serial.println("Sensor Conectado");
}
void loop() {
  //Vai ler o output do sensor do 7 pin  
  hasObstacle = digitalRead(obstaclePin); //Reads the output of the obstacle sensor from the 7th PIN of the Digital section of the arduino
  //LOW-> signifca que existe um obstáculo em frente 
  //HIGH -> Normal 
  //
  if (hasObstacle == LOW)
  {
    Serial.println("Carro detetado!");
    
    digitalWrite(LED, HIGH); // ->Vai iluminar o LED VERMELHO  NA PORTA 13
  }
  else
  {
   //
    //Serial.println("Sem Carros");
    digitalWrite(LED, LOW);
  }
  delay(200);
}
