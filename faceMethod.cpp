#include "faceMethod.h"


/*
 * 
 * 顔配列データ
 * 
 */
//1
int normal[] = {1, 13, 20, 21, 32, 33, 38, 39, 50, 51, 56, 57, 68, 69, 74, 75, 86, 87, 109, 111, 122, 124, 149, 156, 168, 173, 187, 188, 189, 190};
int *pnormal = normal;

//2
int normal2[] = {1, 16, 20, 21, 32, 33, 38, 39, 50, 51, 56, 57, 68, 69, 74, 75, 86, 87, 109, 111, 122, 124, 149, 150, 151, 152, 153, 154, 155, 156, 167, 174, 186, 187, 188, 189, 190, 191};
int *pnormal2 = normal2;

//3
int niko[] = {1, 2, 15, 16, 21, 22, 31, 32, 41, 48, 57, 58, 67, 68, 73, 74, 87, 88, 109, 111, 122, 124, 126, 128, 141, 143, 149, 156, 168, 173, 187, 188, 189, 190};
int *pniko = niko;

//4
int mun[] = {37, 38, 51, 52, 55, 56, 57, 58, 67, 68, 69, 70, 74, 75, 86, 87, 108, 110, 123, 125, 148, 157, 167, 168, 169, 170, 171, 172, 173, 174};
int *pmun = mun;

//5
int niko2[] = {0, 1, 16, 17, 20, 21, 32, 33, 40, 49, 54, 55, 56, 57, 68, 69, 70, 71, 91, 93, 104, 106, 108, 110, 123, 125, 131, 132, 133, 134, 135, 136, 137, 138, 149, 156, 168, 173, 187, 188, 189, 190};
int *pniko2 = niko2;

//6
int yaju[] = {18, 19, 34, 35, 38, 39, 50, 51, 58, 67, 74, 75, 79, 80, 81, 82, 86, 87, 90, 91, 97, 100, 106, 107, 115, 118, 126, 127, 128, 129, 133, 136, 140, 141, 142, 143, 150, 154, 162, 163, 164, 165, 168, 169, 170, 171, 172, 173, 176, 177, 178, 179, 185, 191};
int *pyaju = yaju;

//7
int sad[] = {20, 21, 32, 33, 37, 38, 40, 49, 50, 52, 55, 56, 57, 58, 67, 68, 69, 70, 74, 75, 86, 87, 88, 105, 107, 124, 150, 151, 154, 155, 166, 167, 170, 171, 174, 175};
int *psad = sad;

//8
int tere[] = {19, 20, 33, 34, 39, 40, 49, 50, 59, 66, 73, 74, 75, 76, 85, 86, 87, 88, 110, 112, 122, 124, 127, 129, 139, 141, 168, 169, 172, 173, 184, 185, 188, 189, 192, 193};
int *ptere = tere;

//9
int ase[] = {3, 4, 5, 14, 15, 16, 20, 22, 23, 24, 31, 33, 34, 35, 38, 40, 41, 42, 49, 51, 52, 53, 56, 60, 67, 71, 75, 76, 77, 86, 87, 88, 91, 127, 132, 151, 156, 170, 171, 172, 173};
int *pase = ase;


/*
 * 
 * 顔配列データ取得メソッド
 * ：配列番号iを指定して配列データを取得します
 * ：配列番号iは各配列データの上に書いてある//iです
 * 
 */
int* getFace(int i) {
  if (i == 1) {
    return pnormal;
  }

  if (i == 2) {
    return pnormal2;
  }

  if (i == 3) {
    return pniko;
  }

  if (i == 4) {
    return pmun;
  }

  if (i == 5) {
    return pniko2;
  }

  if (i == 6) {
    return pyaju;
  }

  if (i == 7) {
    return psad;
  }

  if (i == 8) {
    return ptere;
  }

  if (i == 9) {
    return pase;
  }
 
}

/*
 * 
 * 顔配列データの要素数取得メソッド
 * ：配列番号iを指定して配列データの要素数を取得します
 * ：配列番号iは各配列データの上に書いてある//iです
 * 
 */
int getSize(int i) {
  if (i == 1) {
    int arraySize = sizeof normal / sizeof normal[0];
    return arraySize;
  }

  if (i == 2) {
    int arraySize = sizeof normal2 / sizeof normal2[0];
    return arraySize;
  }

  if (i == 3) {
    int arraySize = sizeof niko / sizeof niko[0];
    return arraySize;
  }

  if (i == 4) {
    int arraySize = sizeof mun / sizeof mun[0];
    return arraySize;
  }

  if (i == 5) {
    int arraySize = sizeof niko2 / sizeof niko2[0];
    return arraySize;
  }

  if (i == 6) {
    int arraySize = sizeof yaju / sizeof yaju[0];
    return arraySize;
  }

  if (i == 7) {
    int arraySize = sizeof sad / sizeof sad[0];
    return arraySize;
  }

  if (i == 8) {
    int arraySize = sizeof tere / sizeof tere[0];
    return arraySize;
  }

  if (i == 9) {
    int arraySize = sizeof ase / sizeof ase[0];
    return arraySize;
  }
}

//
//int main(void){
//
//    //printf("%d\n",faceSize(1));
//
//    int swt = 2;
//
//    for(int i=0; i<faceSize(swt); i++){
//        printf("%d\n",*(faceSelect(swt) + i));
//    }
//
//}
