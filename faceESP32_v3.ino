#include "faceMethod.h"
#include <FastLED.h>
#define NUM_LEDS 216
#define DATA_PIN 15

CRGB leds[NUM_LEDS];//LEDストリップの変数宣言:

int val1;//マニュアルモード切替変数
int val2;//オートモード切替変数
int swt = 0;//タクトスイッチ変数
int oldval = HIGH;//タクトスイッチチャタリング防止変数

void setup()
{
  FastLED.addLeds<WS2812B, DATA_PIN>(leds, NUM_LEDS);// fastLED初期化:
  FastLED.setBrightness(30);

  // Debug console
  Serial.begin(9600);

  //モード切替で使うインプットピン
  pinMode(2, INPUT_PULLUP);
  pinMode(0, INPUT_PULLUP);
}


/*
 * 
 * オートモード用の各表情メソッド
 * 
 */
void mabatakiFace(int i) {

  int face_rondom1[] = {20, 21, 32, 33, 38, 39, 50, 51, 56, 57, 68, 69, 74, 75, 86, 87, 109, 111, 122, 124, 149, 156, 168, 173, 187, 188, 189, 190}; //目開いてる 28
  int face_rondom2[] = {56, 57, 68, 69, 74, 75, 86, 87, 109, 111, 122, 124, 149, 156, 168, 173, 187, 188, 189, 190}; //目が半開き 20
  int face_rondom3[] = {55, 70, 74, 75, 76, 77, 84, 85, 86, 87, 109, 111, 122, 124, 149, 156, 168, 173, 187, 188, 189, 190}; //目が閉じてる 22


  if (i < 8) {

    //目開いてる
    for (int i = 0; i < 28; i++) {
      leds[face_rondom1[i]].setRGB(51, 255, 153);
    }
    FastLED.show();
    delay(2000);
    FastLED.clear();

    //目半開き
    for (int i = 0; i < 20; i++) {
      leds[face_rondom2[i]].setRGB(51, 255, 153);
    }
    FastLED.show();
    delay(20);
    FastLED.clear();

    //目閉じてる
    for (int i = 0; i < 22; i++) {
      leds[face_rondom3[i]].setRGB(51, 255, 153);
    }
    FastLED.show();
    delay(75);
    FastLED.clear();

    //目開いてる
    for (int i = 0; i < 28; i++) {
      leds[face_rondom1[i]].setRGB(51, 255, 153);
    }
    FastLED.show();
    delay(2000);
    FastLED.clear();

  }

}

void nikoFace(int i) {

  int face9[] = {19, 20, 33, 34, 39, 40, 49, 50, 59, 66, 75, 76, 85, 86, 91, 92, 105, 106, 126, 128, 141, 143, 149, 156, 168, 173, 187, 188, 189, 190};

  if (i == 9) {

    for (int i = 0; i < 30; i++) {

      leds[face9[i]].setRGB(51, 255, 153);
      // leds[0] = CRGB::Red;でledsテープの0番目のLEDの色を指定:
    }
    FastLED.show();
    delay(3000);
    FastLED.clear();

  }

}

void yajuFace(int i) {

  int face5[] = {18, 19, 34, 35, 38, 39, 50, 51, 58, 67, 74, 75, 79, 80, 81, 82, 86, 87, 90, 91, 97, 100, 106, 107, 115, 118, 126, 127, 128, 129, 133, 136, 140, 141, 142, 143, 150, 154, 162, 163, 164, 165, 168, 169, 170, 171, 172, 173, 176, 177, 178, 179, 185, 191};

  if (i == 10) {

    for (int i = 0; i < 54; i++) {

      leds[face5[i]].setRGB(51, 255, 153);
      // leds[0] = CRGB::Red;でledsテープの0番目のLEDの色を指定:
    }
    FastLED.show();
    delay(3000);
    FastLED.clear();
  }
}

void munFace(int i) {

  int face3[] = {37, 38, 51, 52, 55, 56, 57, 58, 67, 68, 69, 70, 74, 75, 86, 87, 108, 110, 123, 125, 148, 157, 167, 168, 169, 170, 171, 172, 173, 174};

  if (i == 11) {
    for (int i = 0; i < 30; i++) {

      leds[face3[i]].setRGB(51, 255, 153);
      // leds[0] = CRGB::Red;でledsテープの0番目のLEDの色を指定:
    }
    FastLED.show();
    delay(3000);
    FastLED.clear();
  }
}

void normalFace(int i) {

  int face_rondom1[] = {20, 21, 32, 33, 38, 39, 50, 51, 56, 57, 68, 69, 74, 75, 86, 87, 109, 111, 122, 124, 149, 156, 168, 173, 187, 188, 189, 190}; //目開いてる 28

  if (i > 12) {

    for (int i = 0; i < 28; i++) {
      leds[face_rondom1[i]].setRGB(51, 255, 153);
    }
    FastLED.show();
    delay(1000);
    FastLED.clear();
  }
}


/*
 * 
 * メイン処理
 * 
 */
void loop()
{

  //モード切替変数
  val1 = digitalRead(2);//マニュアルモードピン
  val2 = digitalRead(0);//オートモードピン

  //スイッチ
  if (val1 == LOW && oldval == HIGH) {

    swt = 1 + swt;
    if (swt == 10) {
      swt = 0;
    }
    FastLED.clear();
    FastLED.show();
    delay(10);
  }
  oldval = val1;

  
  /*
   * 
   * マニュアルモード
   * ：タクトスイッチを押すと表情が切り替わります。
   * 
   */
  if(val2 == HIGH) {
    for(int i=0; i<getSize(swt); i++){
      leds[*(getFace(swt) + i)].setRGB(51, 255, 153);
    }
    FastLED.show();
    delay(1);
  }
 
  /*
   * 
   * オートモード
   * ：通常は自動で瞬きをして、確率で表情が数秒切り替わります。
   * 
   */
  while (val2 != HIGH) {

    int i = random (100); //表情の乱数

    Serial.println(val2);

    normalFace(i);
    mabatakiFace(i);
    nikoFace(i);
    yajuFace(i);
    munFace(i);

    if (digitalRead(0) == HIGH) {
      FastLED.clear();
      FastLED.show();
      delay(1);
      break;
    }

  }
}
