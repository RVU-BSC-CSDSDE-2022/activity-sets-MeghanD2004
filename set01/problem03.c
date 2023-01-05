  #include <stdio.h>

int input();
int add(int a, int b);
void output(int a, int b, int sum);

int input(){
    int a, b;
    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);
    return a, b;
}
int add(int a, int b){
    int sum;
    sum = a + b;
    return sum;
}

void output(int a, int b, int sum){
    printf("The sum of %d and %d is %d \n", a, b, sum);
}
int main(){
    int a, b;
    int sum;
    a, b = input();
    sum = add(a, b);
    output(a, b, sum);
}