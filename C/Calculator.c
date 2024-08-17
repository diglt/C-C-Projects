#include <stdio.h>

int Calculate(int Value1, char Opperand, int Value2);

int main(){
    int FirstNumber;
    int SecondNumber;
    char Opperand;
    int FinalNumber;

    printf("Welcome to the calculator! Please type the first number below:\n");
    scanf("%d", &FirstNumber);
    
    printf("Now select your second number!\n");
    scanf("%d", &SecondNumber);

    printf("Now select your opperand! (+, -, /, *)\n");
    scanf(" %c", &Opperand);

    FinalNumber = Calculate(FirstNumber, Opperand, SecondNumber);
    printf("Number returned was %d", FinalNumber);
    return 0;
}

int Calculate(int Value1, char Opperand, int Value2){
    if (Opperand == '+'){
        return Value1 + Value2;
    }

    if (Opperand == '-'){
        return Value1 - Value2;
    }

    if (Opperand == '/'){
        return Value1 / Value2;
    }

    if (Opperand == '*'){
        return Value1 * Value2;
    }
    return 0;
}
