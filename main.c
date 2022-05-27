#include <stdio.h>

void printSquare(int x) {
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < x; j++) {
      printf("X");
    }
    printf("\n");
  }
}

void printTriangle(int x) {
  for (int i = 0, y = 1; i < x; i++, y++) {
    for (int j = 0; j < y; j++) {
      printf("X");
    }
    printf("\n");
  }
}

void printAlternateryChangingPairs(int x) {
  for (int i = 0; i < x; i++) {
    for (int s = 0; s < x; s++) {
      i % 2 == 0 ? printf("Xo") : printf("oX");

    }
    printf("\n");
  }

}

void printFrame(int x) {
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < x + 1; j++) {
      if (j == 0 || j == x || i == 0 || i == x - 1)
        printf("X");
      else
        printf("o");

    }
    printf("\n");
  }

}

void printFrameWitX(int x) {
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < x; j++) {
      if (j == 0 || j == x - 1 || i == 0 || i == x - 1 || i == j || x - i - 1 == j)
        printf("X");
      else
        printf("o");

    }
    printf("\n");
  }
}

void printDiamond(int x) {
  int temp = 0;
  int temp2 = x % 2 == 0 ? 1 : 2;
  for (int i = 0; i < x; i++) {
    for (int j = 0; j < x - temp2; j++) {
      if (j <= x / 2 - 1 - temp || j >= x / 2 - 1 + temp)
        printf("o");
      else
        printf("X");
    }
    printf("\n");
    if (i < x / 2)
      temp++;
    else
      temp--;
  }
}

void printChess(int x) {
  for (int i = 0; i < x; i++) {
    for (int s = 0; s < x / 5; s++) {
      if (i % 2 == 0)
        printf("XXXooo");
      else
        printf("oooXXX");

    }
    printf("\n");
  }

}
void printFrameInFrame(int x) {
  int temp3 = 0;
  for (int i = 0; i < x; i++) {
    if ((x % 2 == 0) && (i == x / 2) && (i % 2 == 0)) {
      temp3--;
      continue;
    }

    for (int j = 0; j < x; j++) {
      if (i % 2 == 0) {
        if (j < temp3) {
          printf("Xo");
          j++;
        } else if (j > x - temp3 - 1) {
          printf("oX");
          j++;
        } else {
          printf("X");
        }

      } else {
        if (j < temp3) {
          printf("Xo");
          j++;
        } else if (j > x - temp3 - 2) {

          if ((i == x / 2) && (j == x / 2 + 1)) {
            printf("X");
          } else {
            printf("oX");
            j++;
          }

        } else {
          printf("o");
        }
      }

    }
    printf("\n");
    if (i < x / 2)
      temp3++;

    else
      temp3--;

  }

  if (x % 2 == 0) {
    for (int i = 0; i < x; i++) {
      printf("X");
    }

  }

}

int main() {
  int x;
  int menu_choice;
  printf("How many Xs?: ");
  scanf_s("%d", & x);
  printf("What you want to draw?:\n1 EVERYTHING\n2 Square\n3 Triangle\n4 Alernatery changing pairs\n5 Single frame\n6 Frame with X\n"
    "7 Diamond\n8 Chess\n9 Frame in frame\n Youre choice:");
  scanf_s("%d", & menu_choice);

  switch (menu_choice) {
  case 1:
    printSquare(x);
    printf("\n\n");
    printTriangle(x);
    printf("\n\n");
    printAlternateryChangingPairs(x);
    printf("\n\n");
    printFrame(x);
    printf("\n\n");
    printFrameWitX(x);
    printf("\n\n");
    printDiamond(x);
    printf("\n\n");
    printChess(x);
    printf("\n\n");
    printFrameInFrame(x);

    break;
  case 2:
    printSquare(x);
    break;
  case 3:
    printTriangle(x);
    break;
  case 4:
    printAlternateryChangingPairs(x);
    break;
  case 5:
    printFrame(x);
    break;
  case 6:
    printFrameWitX(x);
    break;
  case 7:
    printDiamond(x);
    break;
  case 8:
    printChess(x);
    break;
  case 9:
    printFrameInFrame(x);
    break;

  default:
    break;
  }

}