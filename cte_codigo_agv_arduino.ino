int mt1p = 4;
int mt1n = 5;
int mt2p = 8;
int mt2n = 9;

String foward, backward, left, right;


void setup() {
  Serial.begin(9600);
  pinMode(mt1p, OUTPUT);
  pinMode(mt1n, OUTPUT);
  pinMode(mt2p, OUTPUT);
  pinMode(mt2n, OUTPUT);
  digitalWrite(mt1p, LOW);
  digitalWrite(mt1n, LOW);
  digitalWrite(mt2p, LOW);
  digitalWrite(mt2n, LOW);
}

void loop() {
  Serial.println("Para movimentar o veiculo para frente digite 'F': ");  
  while(Serial.available() == 0);
  foward = Serial.readString();
  
  if(foward == "F"){
    digitalWrite(mt1p, HIGH);
    digitalWrite(mt1n, LOW);
    digitalWrite(mt2n, HIGH);
    digitalWrite(mt2p, LOW);
  }
  
  Serial.println("Para movimentar o veiculo para tras digite 'B': ");
  while(Serial.available() == 0);
  backward = Serial.readString();
  
  if(backward == "B"){
    digitalWrite(mt1p, LOW);
    digitalWrite(mt1n, HIGH);
    digitalWrite(mt2n, LOW);
    digitalWrite(mt2p, HIGH);
  }
  
    Serial.println("Para movimentar o veiculo para esquerda digite 'L': ");
  while(Serial.available() == 0);
  left = Serial.readString();
  
  if(left == "L"){
    digitalWrite(mt1p, LOW);
    digitalWrite(mt1n, LOW);
    digitalWrite(mt2n, LOW);
    digitalWrite(mt2p, HIGH);
  }
  
  
  Serial.println("Para movimentar o veiculo para direita digite 'R': ");
  while(Serial.available() == 0);
  right = Serial.readString();
  
  if(right == "R"){
    digitalWrite(mt1p, LOW);
    digitalWrite(mt1n, HIGH);
    digitalWrite(mt2n, LOW);
    digitalWrite(mt2p, LOW);
  }
  
  
}
