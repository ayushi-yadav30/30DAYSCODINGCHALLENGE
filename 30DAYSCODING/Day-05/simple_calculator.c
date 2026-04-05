#include<stdio.h>
void utility(int a, int b, int opr){
switch(opr) {
        case 1:
            printf("%d", a + b);
            break;
        case 2:
            printf("%d", a - b);
            break;
        case 3:
            printf("%d", a * b);
            break;
            case 4:
            printf("%d", a/b);
        default:
            printf("Invalid Input");
            break;
    }
}
int main(){
    int operator1,operator2,operation;
    printf("Enter the operators:");
    scanf("%d %d", &operator1,&operator2);
    printf("Enter the operation:");//"1 for add","2 for subtraction","3 for multiplication","4 for division"
     scanf("%d",&operation);

 utility(operator1,operator2,operation);

 return 0;


}