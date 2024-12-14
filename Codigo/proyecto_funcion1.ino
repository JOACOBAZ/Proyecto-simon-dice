int ALEATORIO1 = 0;

int ALEATORIO2 = 0;

int ALEATORIO3 = 0;

int ALEATORIO4 = 0;

int ALEATORIO5 = 0;

int BOTON1 = 0;

int BOTON2 = 0;

int BOTON3 = 0;

int BOTON4 = 0;

int BOTON5 = 0;

int vecesGanadas = 4;

int record = 0;

void setup()
{
  Serial.begin(9600);
 
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
 
  pinMode(7, OUTPUT);

  pinMode(9, INPUT);
  pinMode(8, INPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
  pinMode(10, INPUT);
 
  randomSeed(analogRead(A0));
}

void loop()
{
  if(vecesGanadas<5){
    normal();
  }else if(vecesGanadas>=5){
    botonextra();
  }
}

void normal()
{
  if ((ALEATORIO1 == 0 && ALEATORIO2 == 0) && (ALEATORIO3 == 0 && ALEATORIO4 == 0)) {
    ALEATORIO1 = random(2, 5 + 1);
    ALEATORIO2 = random(2, 5 + 1);
    ALEATORIO3 = random(2, 5 + 1);
    ALEATORIO4 = random(2, 5 + 1);
    Serial.println(ALEATORIO1);
    Serial.println(ALEATORIO2);
    Serial.println(ALEATORIO3);
    Serial.println(ALEATORIO4);
    delay(1000);
    // ENCENDEMOS EL LED QUE CORRESPONDAN DEPENDIENDO
    // DEL ALEATORIO
    if (ALEATORIO1 == 2) {
      digitalWrite(2, HIGH);
      tone(7, 294, 500);
    }
    if (ALEATORIO1 == 3) {
      digitalWrite(3, HIGH);
      tone(7, 294, 500);
    }
    if (ALEATORIO1 == 4) {
      digitalWrite(4, HIGH);
      tone(7, 165, 500);
    }
    if (ALEATORIO1 == 5) {
      digitalWrite(5, HIGH);
      tone(7, 92, 500);
    }
    delay(500);
    // APAGAMOS TODOS LOS LEDS
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    delay(500);
   
    if (ALEATORIO2 == 2) {
      digitalWrite(2, HIGH);
      tone(7, 294, 500);
    }
    if (ALEATORIO2 == 3) {
      digitalWrite(3, HIGH);
      tone(7, 294, 500);
    }
    if (ALEATORIO2 == 4) {
      digitalWrite(4, HIGH);
      tone(7, 165, 500);
    }
    if (ALEATORIO2 == 5) {
      digitalWrite(5, HIGH);
      tone(7, 92, 500);
    }
    delay(500);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    delay(500);
   
    if (ALEATORIO3 == 2) {
      digitalWrite(2, HIGH);
      tone(7, 294, 500);
    }
    if (ALEATORIO3 == 3) {
      digitalWrite(3, HIGH);
      tone(7, 294, 500);
    }
    if (ALEATORIO3 == 4) {
      digitalWrite(4, HIGH);
      tone(7, 165, 500);
    }
    if (ALEATORIO3 == 5) {
      digitalWrite(5, HIGH);
      tone(7, 92, 500);
    }
    delay(500);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    delay(500);
   
    if (ALEATORIO4 == 2) {
      digitalWrite(2, HIGH);
      tone(7, 294, 500);
    }
    if (ALEATORIO4 == 3) {
      digitalWrite(3, HIGH);
      tone(7, 294, 500);
    }
    if (ALEATORIO4 == 4) {
      digitalWrite(4, HIGH);
      tone(7, 165, 500);
    }
    if (ALEATORIO4 == 5) {
      digitalWrite(5, HIGH);
      tone(7, 92, 500);
    }
    delay(500);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    delay(500);
    noTone(7);
   
    delay(2000);
  }


/*Serial.print(digitalRead(8));
Serial.print(" ");
Serial.print(digitalRead(9));
Serial.print(" ");
Serial.print(digitalRead(11));
Serial.print(" ");
Serial.println(digitalRead(12));*/
 
  if (digitalRead(9) == LOW && BOTON1 == 0) {
    tone(7, 92, 500);
    BOTON1 = 5;
    digitalWrite(5, HIGH);
    delay(200);
    digitalWrite(5, LOW);
    delay(500);
  }else if (digitalRead(8) == LOW && BOTON1 == 0) {
    tone(7, 165, 500);
     BOTON1 = 4;
    digitalWrite(4, HIGH);
    delay(200);
    digitalWrite(4, LOW);    
    delay(500);
  }else if (digitalRead(11) == LOW && BOTON1 == 0) {
    tone(7, 294, 500);
    BOTON1 = 3;
    digitalWrite(3, HIGH);
    delay(200);
    digitalWrite(3, LOW);    
    delay(500);
  }else if (digitalRead(12) == LOW && BOTON1 == 0) {
    tone(7, 294, 500);
    BOTON1 = 2;
    digitalWrite(2, HIGH);
    delay(200);
    digitalWrite(2, LOW);    
    delay(500);
  }
 
  if (digitalRead(9) == LOW && BOTON2 == 0) {
    tone(7, 92, 500);
    BOTON2 = 5;
    digitalWrite(5, HIGH);
    delay(200);
    digitalWrite(5, LOW);    
    delay(500);
  }else if (digitalRead(8) == LOW && BOTON2 == 0) {
    tone(7, 165, 500);
    BOTON2 = 4;
    digitalWrite(4, HIGH);
    delay(200);
    digitalWrite(4, LOW);
    delay(500);
  }else if (digitalRead(11) == LOW && BOTON2 == 0) {
    tone(7, 294, 500);
    BOTON2 = 3;
    digitalWrite(3, HIGH);
    delay(200);
    digitalWrite(3, LOW);
    delay(500);
  }else if (digitalRead(12) == LOW && BOTON2 == 0) {
    tone(7, 294, 500);
    BOTON2 = 2;
    digitalWrite(2, HIGH);
    delay(200);
    digitalWrite(2, LOW);
    delay(500);
  }
 
  if (digitalRead(9) == LOW && BOTON3 == 0) {
    tone(7, 92, 500);
    BOTON3 = 5;
    digitalWrite(5, HIGH);
    delay(200);
    digitalWrite(5, LOW);
    delay(500);
  }else if (digitalRead(8) == LOW && BOTON3 == 0) {
    tone(7, 165, 500);
    BOTON3 = 4;
    digitalWrite(4, HIGH);
    delay(200);
    digitalWrite(4, LOW);
    delay(500);
  }else if (digitalRead(11) == LOW && BOTON3 == 0) {
    tone(7, 294, 500);
    BOTON3 = 3;
    digitalWrite(3, HIGH);
    delay(200);
    digitalWrite(3, LOW);
    delay(500);
  }else if (digitalRead(12) == LOW && BOTON3 == 0) {
    tone(7, 294, 500);
    BOTON3 = 2;
    digitalWrite(2, HIGH);
    delay(200);
    digitalWrite(2, LOW);
    delay(500);
  }
 
  if (digitalRead(9) == LOW && BOTON4 == 0) {
    tone(7, 92, 500);
    BOTON4 = 5;
    digitalWrite(5, HIGH);
    delay(200);
    digitalWrite(5, LOW);
    delay(500);
  }else if (digitalRead(8) == LOW && BOTON4 == 0) {
    tone(7, 165, 500);
    BOTON4 = 4;
    digitalWrite(4, HIGH);
    delay(200);
    digitalWrite(4, LOW);
    delay(500);
  }else if (digitalRead(11) == LOW && BOTON4 == 0) {
    tone(7, 294, 500);
    BOTON4 = 3;
    digitalWrite(3, HIGH);
    delay(200);
    digitalWrite(3, LOW);
    delay(500);
  }else if (digitalRead(12) == LOW && BOTON4 == 0) {
    tone(7, 294, 500);
    BOTON4 = 2;
    digitalWrite(2, HIGH);
    delay(200);
    digitalWrite(2, LOW);
    delay(500);
  }
 
  /*if (BOTON1 != 0) {
    Serial.print("BOTON1: ");
    Serial.println(BOTON1);
  }
  if (BOTON2 != 0) {
    Serial.print("BOTON2: ");
    Serial.println(BOTON2);
  }
  if (BOTON3 != 0) {
    Serial.print("BOTON3: ");
    Serial.println(BOTON3);
  }
  if (BOTON4 != 0) {
    Serial.print("BOTON4: ");
    Serial.println(BOTON4);
  }*/
 
  if ((BOTON1 != 0 && BOTON2 != 0) && (BOTON3 != 0 && BOTON4 != 0)) {
   
   
    if ((ALEATORIO1 == BOTON1 && ALEATORIO2 == BOTON2) && (ALEATORIO3 == BOTON3 && ALEATORIO4 == BOTON4)) {
      Serial.println("GANO");
      tone(7, 1000, 1000);
      digitalWrite(5, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(2, HIGH);
      delay(100);
      digitalWrite(5, LOW);
      digitalWrite(4, LOW);
      digitalWrite(3, LOW);
      digitalWrite(2, LOW);
      ALEATORIO1 = 0;
      ALEATORIO2 = 0;
      ALEATORIO3 = 0;
      ALEATORIO4 = 0;
      BOTON1 = 0;
      BOTON2 = 0;
      BOTON3 = 0;
      BOTON4 = 0;
      
      vecesGanadas = vecesGanadas + 1;
      Serial.print("Cantidad de veces ganadas por seguido: ");
      Serial.println(vecesGanadas);
      delay(500);
      
      if(vecesGanadas == 5){
        Serial.println("Se va a activar el quinto boton y quinto led (naranja)");
        delay(30);
        digitalWrite(6, HIGH);
        delay(400);
        digitalWrite(6, LOW);
        delay(400);
        digitalWrite(6, HIGH);
        delay(400);
        digitalWrite(6, LOW);
        delay(400);
      }
      
    } else {
      Serial.println("PERDIO");
      tone(7, 39, 1000);
      ALEATORIO1 = 0;
      ALEATORIO2 = 0;
      ALEATORIO3 = 0;
      ALEATORIO4 = 0;
      BOTON1 = 0;
      BOTON2 = 0;
      BOTON3 = 0;
      BOTON4 = 0;
      perder();
      //delay(500);
    }
  }
  delay(100);
}


////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////


  
void botonextra()
{
  if ((ALEATORIO1 == 0 && ALEATORIO2 == 0) && (ALEATORIO3 == 0 && ALEATORIO4 == 0) && ALEATORIO5 == 0) {
    ALEATORIO1 = random(2, 6 + 1);
    ALEATORIO2 = random(2, 6 + 1);
    ALEATORIO3 = random(2, 6 + 1);
    ALEATORIO4 = random(2, 6 + 1);
    ALEATORIO5 = random(2, 6 + 1);
    Serial.println(ALEATORIO1);
    Serial.println(ALEATORIO2);
    Serial.println(ALEATORIO3);
    Serial.println(ALEATORIO4);
    Serial.println(ALEATORIO5);
    delay(1000);
    
    if (ALEATORIO1 == 2) {
      digitalWrite(2, HIGH);
      tone(7, 294, 500);
    }
    if (ALEATORIO1 == 3) {
      digitalWrite(3, HIGH);
      tone(7, 294, 500);
    }
    if (ALEATORIO1 == 4) {
      digitalWrite(4, HIGH);
      tone(7, 165, 500);
    }
    if (ALEATORIO1 == 5) {
      digitalWrite(5, HIGH);
      tone(7, 92, 500);
    }
    if (ALEATORIO1 == 6) {
      digitalWrite(6, HIGH);
      tone(7, 208, 500);
    }
    delay(500);
    
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    delay(500);
   
    if (ALEATORIO2 == 2) {
      digitalWrite(2, HIGH);
      tone(7, 294, 500);
    }
    if (ALEATORIO2 == 3) {
      digitalWrite(3, HIGH);
      tone(7, 294, 500);
    }
    if (ALEATORIO2 == 4) {
      digitalWrite(4, HIGH);
      tone(7, 165, 500);
    }
    if (ALEATORIO2 == 5) {
      digitalWrite(5, HIGH);
      tone(7, 92, 500);
    }
    if (ALEATORIO2 == 6) {
      digitalWrite(6, HIGH);
      tone(7, 208, 500);
    }
    delay(500);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    delay(500);
   
    if (ALEATORIO3 == 2) {
      digitalWrite(2, HIGH);
      tone(7, 294, 500);
    }
    if (ALEATORIO3 == 3) {
      digitalWrite(3, HIGH);
      tone(7, 294, 500);
    }
    if (ALEATORIO3 == 4) {
      digitalWrite(4, HIGH);
      tone(7, 165, 500);
    }
    if (ALEATORIO3 == 5) {
      digitalWrite(5, HIGH);
      tone(7, 92, 500);
    }
    if (ALEATORIO3 == 6) {
      digitalWrite(6, HIGH);
      tone(7, 208, 500);
    }
    delay(500);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    delay(500);
   
    if (ALEATORIO4 == 2) {
      digitalWrite(2, HIGH);
      tone(7, 294, 500);
    }
    if (ALEATORIO4 == 3) {
      digitalWrite(3, HIGH);
      tone(7, 294, 500);
    }
    if (ALEATORIO4 == 4) {
      digitalWrite(4, HIGH);
      tone(7, 165, 500);
    }
    if (ALEATORIO4 == 5) {
      digitalWrite(5, HIGH);
      tone(7, 92, 500);
    }
    if (ALEATORIO4 == 6) {
      digitalWrite(6, HIGH);
      tone(7, 208, 500);
    }
    delay(500);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    delay(500);
    
    if (ALEATORIO5 == 2) {
      digitalWrite(2, HIGH);
      tone(7, 294, 500);
    }
    if (ALEATORIO5 == 3) {
      digitalWrite(3, HIGH);
      tone(7, 294, 500);
    }
    if (ALEATORIO5 == 4) {
      digitalWrite(4, HIGH);
      tone(7, 165, 500);
    }
    if (ALEATORIO5 == 5) {
      digitalWrite(5, HIGH);
      tone(7, 92, 500);
    }
    if (ALEATORIO5 == 6) {
      digitalWrite(6, HIGH);
      tone(7, 208, 500);
    }
    delay(500);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    delay(500);
    noTone(7);
    delay(2000);
  }


/*Serial.print(digitalRead(8));
Serial.print(" ");
Serial.print(digitalRead(9));
Serial.print(" ");
Serial.print(digitalRead(11));
Serial.print(" ");
Serial.println(digitalRead(12));*/
 
  if (digitalRead(9) == LOW && BOTON1 == 0) {
    tone(7, 92, 500);
    BOTON1 = 5;
    digitalWrite(5, HIGH);
    delay(200);
    digitalWrite(5, LOW);
    delay(500);
  }else if (digitalRead(8) == LOW && BOTON1 == 0) {
    tone(7, 165, 500);
     BOTON1 = 4;
    digitalWrite(4, HIGH);
    delay(200);
    digitalWrite(4, LOW);    
    delay(500);
  }else if (digitalRead(11) == LOW && BOTON1 == 0) {
    tone(7, 294, 500);
    BOTON1 = 3;
    digitalWrite(3, HIGH);
    delay(200);
    digitalWrite(3, LOW);    
    delay(500);
  }else if (digitalRead(12) == LOW && BOTON1 == 0) {
    tone(7, 294, 500);
    BOTON1 = 2;
    digitalWrite(2, HIGH);
    delay(200);
    digitalWrite(2, LOW);    
    delay(500);
  }else if (digitalRead(10) == LOW && BOTON1 == 0) {
    tone(7, 208, 500);
    BOTON1 = 6;
    digitalWrite(6, HIGH);
  }
 
  if (digitalRead(9) == LOW && BOTON2 == 0) {
    tone(7, 92, 500);
    BOTON2 = 5;
    digitalWrite(5, HIGH);
    delay(200);
    digitalWrite(5, LOW);    
    delay(500);
  }else if (digitalRead(8) == LOW && BOTON2 == 0) {
    tone(7, 165, 500);
    BOTON2 = 4;
    digitalWrite(4, HIGH);
    delay(200);
    digitalWrite(4, LOW);
    delay(500);
  }else if (digitalRead(11) == LOW && BOTON2 == 0) {
    tone(7, 294, 500);
    BOTON2 = 3;
    digitalWrite(3, HIGH);
    delay(200);
    digitalWrite(3, LOW);
    delay(500);
  }else if (digitalRead(12) == LOW && BOTON2 == 0) {
    tone(7, 294, 500);
    BOTON2 = 2;
    digitalWrite(2, HIGH);
    delay(200);
    digitalWrite(2, LOW);
    delay(500);
  }else if (digitalRead(10) == LOW && BOTON2 == 0) {
    tone(7, 208, 500);
    BOTON2 = 6;
    digitalWrite(6, HIGH);
    delay(200);
    digitalWrite(6, LOW);
    delay(500);
  }
 
  if (digitalRead(9) == LOW && BOTON3 == 0) {
    tone(7, 92, 500);
    BOTON3 = 5;
    digitalWrite(5, HIGH);
    delay(200);
    digitalWrite(5, LOW);
    delay(500);
  }else if (digitalRead(8) == LOW && BOTON3 == 0) {
    tone(7, 165, 500);
    BOTON3 = 4;
    digitalWrite(4, HIGH);
    delay(200);
    digitalWrite(4, LOW);
    delay(500);
  }else if (digitalRead(11) == LOW && BOTON3 == 0) {
    tone(7, 294, 500);
    BOTON3 = 3;
    digitalWrite(3, HIGH);
    delay(200);
    digitalWrite(3, LOW);
    delay(500);
  }else if (digitalRead(12) == LOW && BOTON3 == 0) {
    tone(7, 294, 500);
    BOTON3 = 2;
    digitalWrite(2, HIGH);
    delay(200);
    digitalWrite(2, LOW);
    delay(500);
  }else if (digitalRead(10) == LOW && BOTON3 == 0) {
    tone(7, 208, 500);
    BOTON3 = 6;
    digitalWrite(6, HIGH);
    delay(200);
    digitalWrite(6, LOW);
    delay(500);
  }
 
  if (digitalRead(9) == LOW && BOTON4 == 0) {
    tone(7, 92, 500);
    BOTON4 = 5;
    digitalWrite(5, HIGH);
    delay(200);
    digitalWrite(5, LOW);
    delay(500);
  }else if (digitalRead(8) == LOW && BOTON4 == 0) {
    tone(7, 165, 500);
    BOTON4 = 4;
    digitalWrite(4, HIGH);
    delay(200);
    digitalWrite(4, LOW);
    delay(500);
  }else if (digitalRead(11) == LOW && BOTON4 == 0) {
    tone(7, 294, 500);
    BOTON4 = 3;
    digitalWrite(3, HIGH);
    delay(200);
    digitalWrite(3, LOW);
    delay(500);
  }else if (digitalRead(12) == LOW && BOTON4 == 0) {
    tone(7, 294, 500);
    BOTON4 = 2;
    digitalWrite(2, HIGH);
    delay(200);
    digitalWrite(2, LOW);
    delay(500);
  }else if (digitalRead(10) == LOW && BOTON4 == 0) {
    tone(7, 208, 500);
    BOTON4 = 6;
    digitalWrite(6, HIGH);
    delay(200);
    digitalWrite(6, LOW);
    delay(500);
  }
    
  if (digitalRead(9) == LOW && BOTON5 == 0) {
    tone(7, 92, 500);
    BOTON5 = 5;
    digitalWrite(5, HIGH);
    delay(200);
    digitalWrite(5, LOW);
    delay(500);
  }else if (digitalRead(8) == LOW && BOTON5 == 0) {
    tone(7, 165, 500);
    BOTON5 = 4;
    digitalWrite(4, HIGH);
    delay(200);
    digitalWrite(4, LOW);
    delay(500);
  }else if (digitalRead(11) == LOW && BOTON5 == 0) {
    tone(7, 294, 500);
    BOTON5 = 3;
    digitalWrite(3, HIGH);
    delay(200);
    digitalWrite(3, LOW);
    delay(500);
  }else if (digitalRead(12) == LOW && BOTON5 == 0) {
    tone(7, 294, 500);
    BOTON5 = 2;
    digitalWrite(2, HIGH);
    delay(200);
    digitalWrite(2, LOW);
    delay(500);
  }else if (digitalRead(10) == LOW && BOTON5 == 0) {
    tone(7, 208, 500);
    BOTON5 = 6;
    digitalWrite(6, HIGH);
    delay(200);
    digitalWrite(6, LOW);
    delay(500);
  }
 
/*  if (BOTON1 != 0) {
    Serial.print("BOTON1: ");
    Serial.println(BOTON1);
  }
  if (BOTON2 != 0) {
    Serial.print("BOTON2: ");
    Serial.println(BOTON2);
  }
  if (BOTON3 != 0) {
    Serial.print("BOTON3: ");
    Serial.println(BOTON3);
  }
  if (BOTON4 != 0) {
    Serial.print("BOTON4: ");
    Serial.println(BOTON4);
  }*/
 
  if ((BOTON1 != 0 && BOTON2 != 0) && (BOTON3 != 0 && BOTON4 != 0) && BOTON5 != 0) {
   
   
    if ((ALEATORIO1 == BOTON1 && ALEATORIO2 == BOTON2) && (ALEATORIO3 == BOTON3 && ALEATORIO4 == BOTON4) && ALEATORIO5 == BOTON5) {
      Serial.println("GANO");
      tone(7, 1000, 1000);
      digitalWrite(5, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(2, HIGH);
      digitalWrite(6, HIGH);
      delay(100);
      digitalWrite(5, LOW);
      digitalWrite(4, LOW);
      digitalWrite(3, LOW);
      digitalWrite(2, LOW);
      digitalWrite(6, LOW);
      ALEATORIO1 = 0;
      ALEATORIO2 = 0;
      ALEATORIO3 = 0;
      ALEATORIO4 = 0;
      ALEATORIO5 = 0;
      BOTON1 = 0;
      BOTON2 = 0;
      BOTON3 = 0;
      BOTON4 = 0;
      BOTON5 = 0;
      
      vecesGanadas = vecesGanadas + 1;
      Serial.print("Cantidad de veces ganadas por seguido: ");
      Serial.println(vecesGanadas);      
      delay(500);
    } else {
      Serial.println("PERDIO");
      tone(7, 39, 1000);
      ALEATORIO1 = 0;
      ALEATORIO2 = 0;
      ALEATORIO3 = 0;
      ALEATORIO4 = 0;
      ALEATORIO5 = 0;
      BOTON1 = 0;
      BOTON2 = 0;
      BOTON3 = 0;
      BOTON4 = 0;
      BOTON5 = 0;
      perder();
      //delay(500);
    }
  }
  delay(100);
}


void perder()
{
    tone(7, 39, 1000);
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(6, HIGH);
    delay(50);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    digitalWrite(2, LOW);
    digitalWrite(6, LOW);
    delay(50);
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(6, HIGH);
    delay(50);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    digitalWrite(2, LOW);
    digitalWrite(6, LOW);
    delay(50);
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(6, HIGH);
    delay(50);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    digitalWrite(2, LOW);
    digitalWrite(6, LOW);
    delay(50);    

    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(6, HIGH);
    noTone(7);
    delay(1000);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    digitalWrite(2, LOW);
    digitalWrite(6, LOW);
    delay(500);
    
  if(record < vecesGanadas){
    record = vecesGanadas;
    Serial.print("Nuevo record de veces ganadas por seguido: ");
    Serial.println(record);
    delay(1500);
  }
  vecesGanadas = 0;
  Serial..println("Se perdio la cantidad de veces ganadas por seguido.");
  delay(1000);
  if(vecesGanadas >= 5){
    Serial.println("Se quitara el quinto boton y el quinto led.");
    delay(1000);
  }
}