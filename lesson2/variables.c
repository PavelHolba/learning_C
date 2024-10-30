#include <stdio.h>

int main() {
    // Declare a variable
    int myNum;

    // Assign a value to the variable
    myNum = 15;

    // Declare variable and immidiately assign a value to it
    int myNum2 = 20;

    printf("myNum = %d and myNum2 = %d\n",myNum, myNum2);

    // Create variables
    int myInt = 15;                 // Integer (whole number), 2 or 4 bytes
    float myFloatNum = 5.9;        // Floating point number, up to 7 decimal digits, 4 bytes
    double myDoubleNum = 1.336547845564;  // Double point number, up to 15 decimal digits, 8 bytes
    char myLetter = 'D';            // Character, 1 byte

    // Print variables
    printf("%d\n", myInt); // %d or %i
    printf("%f\n", myFloatNum); // %f or %F
    printf("%lf\n", myDoubleNum);
    printf("%c\n", myLetter); 

    int x = 5, y = 6, z = 50, sum; // declare more variables at once
    sum = x + y + z;
    printf("Sum of %d, %d and %d is %d\n", x, y, z, sum);

    // we can use ASCII in char type
    char myCharacter = 94;
    printf("%c\n", myCharacter);

    // char type can be used for a string, but we need to create a list
    char myText[] = "Hello";
    printf("%s\n", myText);

    // scientific notation
    float f1 = 35e3;
    double d1 = 12E4;

    printf("%f\n", f1);
    printf("%.2lf\n", d1); // precision on two decimal places (default is 6)

    // Print size of variables, sizeof() returns usually "long unsigned int", that's why %lu instead %d (%d should work too)
    printf("size of int myInt is %lu\n", sizeof(myInt));
    printf("size of float myFloatNum is %lu\n", sizeof(myFloatNum));
    printf("size of double myDoubleNum is %lu\n", sizeof(myDoubleNum));
    printf("size of char myLetter is %lu\n", sizeof(myLetter));
    printf("size of string (char[]) myText is %lu\n", sizeof(myText)); 
    printf("size of sizeof() %lu\n", sizeof(myInt));

    // Type conversion
    float cislo = 9; // implicit conversion, value is 9.000000
    int cislo2 = 9.99; // implicit conversion, value will be 9
    printf("cislo has assigned value 9, but result is: %f, meanwhile, cislo2 has assigned value 9.99 but result is: %d\n", cislo, cislo2);

    x = 5;
    y = 2;
    int wrongDivision = x/2; // without conversion it is clearly wrong
    float expectedCorrectDivision = x/2; // still wrong, we need to converse x and y, not just store their division to float
    printf("Divison of %d and %d is %d\n", x, y, wrongDivision);
    printf("There were no conversion, we divided two integers, so result is wrong\n");
    printf("Divison of %d and %d is %f\n", x, y, expectedCorrectDivision);
    printf("This is still wrong even though, division itself is float\n");
    float correctDivision = (float) x/y; // this is explicit conversion, we say that x/y itself should be float instead int (which is inherited from types of x and y)
    printf("Divison of %d and %d is %.1f\n", x, y, correctDivision);
    printf("This is finally correct!\n");

    // Constants, this is "variable", which is unchangeable and read-only
    const int MINUTESPERHOUR  = 60; // must be assigned with a value, assigning later will not work
    // MINUTESPERHOUR = 10; // this will print error

    return 0;
}