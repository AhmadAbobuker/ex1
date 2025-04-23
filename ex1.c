/******************
Name:Ahmad abubkr
ID:213109192
Assignment:1
*******************/
#include <stdio.h>

int main() {
  
  // What bit
  printf("What bit:\n");
  int Number, Position;
  printf("Please enter a number:\n");
  scanf("%d", &Number);
  printf("Please enter a position:\n");
  scanf("%d", &Position);
  // Now since the integer is 4 bytes at max the user has a limit in which he can write numbers .
  // The question explicitly states that he wants a certain position in the numbers binary form .
  // If its 1 at that postition and we do the logic gate "and" it should return 1 since its true and vice versa .
  // the number that we wanna use in such a case is a number that has on that poistion 1 in its binary form and nothing else .
  unsigned int TheOne = (1 << Position);
  printf("The bit in position %d of number %d is :%d\n" ,Position,Number,((Number & TheOne))>>Position);// A complication is that computers translate machine language to human form  .




  printf("\nSet bit:\n");
  printf("Please enter a number:\n");
  scanf("%d", &Number);
  printf("Please enter a position:\n");
  scanf("%d", &Position);
  TheOne = (1 << Position);
  printf("Number with bit %d set to 1 : %d\n", Position, (Number | TheOne));//using the logic gate OR so if its 1 it wont change the answer and if its 0 it changes to 1
  printf("Number with bit %d set to 0 : %d\n", Position, ((Number | TheOne)^TheOne));// by using XOR on the OR form , we make sure that if its changed it reverts , and if not it will now .



  printf("\nToggle bit:\n");
  printf("Please enter a number:\n");
  scanf("%d", &Number);
  printf("Please enter a position:\n");
  scanf("%d", &Position);
  TheOne = (1 << Position);
  printf("Number with bit %d toggled: %d\n", Position, (Number  ^ TheOne));//Since TheOne is awlays 1 ,XOR gate fits ,its either 0 or 1 = 1 | 1 or 1 = 0 .



    // Even - Odd
    printf("\nEven - Odd:\n");
  Position=0;
  printf("Please enter a number:\n");
  scanf("%d", &Number);
  TheOne = (1 << Position);
  printf("%d\n",(((Number & TheOne) >> Position) + 1) % 2);//With the help of the first question we already have the msp which decieds if the number is odd or even , we just add  1 and %2 to flip the answer .




      int Number1, Number2;
    printf("\n3, 5, 7, 11:\n");
    printf("Please enter the first number (octal):\n");
    scanf("%d", &Number1);
    printf("Please enter the seconde number (octal):\n");
    scanf("%d", &Number2);
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




    int O1, O2, O3, O4, O5, O6, O7, O8, O9, O10, O11;
    int square8 = 8, square10 = 10;




       O1 = (((Number1) % 10) * 1);

       O2 = (((Number1 / square10) % 10) * square8) ;      square8 = square8 * 8;  square10 = square10 * 10;

       O3 = (((Number1 / square10) % 10) * square8) ;      square8 = square8 * 8;  square10 = square10 * 10;

       O4 = (((Number1 / square10) % 10) * square8) ;      square8 = square8 * 8;  square10 = square10 * 10;

       O5 = (((Number1 / square10) % 10) * square8) ;      square8 = square8 * 8;  square10 = square10 * 10;

       O6 = (((Number1 / square10) % 10) * square8) ;      square8 = square8 * 8;  square10 = square10 * 10;

       O7 = (((Number1 / square10) % 10) * square8) ;      square8 = square8 * 8;  square10 = square10 * 10;

       O8 = (((Number1 / square10) % 10) * square8) ;      square8 = square8 * 8;  square10 = square10 * 10;

       O9 = (((Number1 / square10) % 10) * square8) ;      square8 = square8 * 8;  square10 = square10 * 10;

       O10 = (((Number1 / square10) % 10) * square8);      square8 = square8 * 8;  square10 = square10 * 10;

       O11 = (((Number1 / square10) % 10) * square8);

       Number1 = O1 + O2 + O3 + O4 + O5 + O6 + O7 + O8 + O9 + O10 + O11;
   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    square8 = 8, square10 = 10;

    O1 = (((Number2) % 10) * 1);

    O2 = (((Number2 / square10) % 10) * square8);       square8 = square8 * 8;  square10 = square10 * 10;

    O3 = (((Number2 / square10) % 10) * square8);        square8 = square8 * 8;  square10 = square10 * 10;

    O4 = (((Number2 / square10) % 10) * square8);       square8 = square8 * 8;  square10 = square10 * 10;

    O5 = (((Number2 / square10) % 10) * square8);       square8 = square8 * 8;  square10 = square10 * 10;

    O6 = (((Number2 / square10) % 10) * square8);       square8 = square8 * 8;  square10 = square10 * 10;

    O7 = (((Number2 / square10) % 10) * square8);       square8 = square8 * 8;  square10 = square10 * 10;

    O8 = (((Number2 / square10) % 10) * square8);       square8 = square8 * 8;  square10 = square10 * 10;

    O9 = (((Number2 / square10) % 10) * square8);       square8 = square8 * 8;  square10 = square10 * 10;

    O10 = (((Number2 / square10) % 10) * square8);       square8 = square8 * 8;  square10 = square10 * 10;

    O11 = (((Number2 / square10) % 10) * square8);

    Number2 = O1 + O2 + O3 + O4 + O5 + O6 + O7 + O8 + O9 + O10 + O11;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


    int HD1, HD2, HD3, HD4, HD5, HD6, HD7, HD8;
    int square16 = 16;

    HD1 = (Number1 + Number2) % 16;

    HD2 = ((Number1 + Number2) / square16) % 16;       square16 = square16 * 16;

    HD3 = ((Number1 + Number2) / square16) % 16;      square16 = square16 * 16;

    HD4 = ((Number1 + Number2) / square16) % 16;      square16 = square16 * 16;

    HD5 = ((Number1 + Number2) / square16) % 16;      square16 = square16 * 16;

    HD6 = ((Number1 + Number2) / square16) % 16;      square16 = square16 * 16;

    HD7 = ((Number1 + Number2) / square16) % 16;      square16 = square16 * 16;

    HD8 = ((Number1 + Number2) / square16) % 16;
    printf("The sum in hexadecimal: %X\n" , HD1*1+HD2*16+HD3*16*16+HD4*16*16*16+HD5*16*16*16*16+HD6*16*16*16*16*16+HD7*16*16*16*16*16*16+HD8*16*16*16*16*16*16*16 );

   // printf("%X %X %X %X %X %X %X %X\n", HD8, HD7, HD6, HD5, HD4, HD3, HD2, HD1);
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


    int bit3, bit5, bit7, bit11;
    bit3 = (HD1 & (1 << 2)) >> 2;
    bit5 = (HD2 & (1 << 1)) >> 1;
    bit7 = (HD2 & (1 << 3)) >> 3;
    bit11 = (HD3 & (1 << 3)) >>3;
    printf("The 3,5,7,11 bits are: %d%d%d%d\n", bit3, bit5, bit7, bit11);

  printf("Bye!\n");
  
  return 0;
}
