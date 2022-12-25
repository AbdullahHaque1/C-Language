#include <stdio.h>
int main(){
    char op;
    int a, b, ans;

    printf("Enter an Operator (+, *, *, /): ");
    scanf("%c", &op);
    printf("Enter two operands: \n");
    scanf("%d %d", &a, &b);

    switch(op){
        case '+':
            ans = a + b;
            break;
        case '-':
            ans = a - b;
            break;
        case '*':
            ans = a * b;
            break;
        case '/':
            ans = a / b;
            break;
    }
    printf("ans = %d", ans);
    return 0;
}