#include <stdio.h>


void increament(void)
{
     static int counter=0;// better to memorize without making anyone change the value
    ++counter;
    printf("counter=%d\n",counter);
}
void add(int *num)
{
    (*num)++;
    printf("num %d\n",num);
}
int *sum(int x, int y){
int s=0;
s=x+y;
return &s;}//how to return address with pointer
/*int counter=0;//global counter can memorize it value
void increament(void)
{

    ++counter;
    printf("counter=%d\n",counter);
}
void sum(void){printf("hello\n");}
void(*ptr_sum)(void);
void sum2(int x, int y){printf("Sum=%d\n",x+y);}
void(*ptr2_sum)(int,int)=sum2;
int sum3(void){int x=10, y=33;
return x+y;}
int(*ptr3_sum)(void)=&sum3;
int sum4(int n1,int n2, int n3){return(n1,n2,n3);}
int (*ptr4_sum)(int, int, int)=&sum4;
int main(){
//void (*ptr_sum)(void)=&sum;
//void (*ptr_sum)(void)=sum;
int value=ptr3_sum();
int value1=ptr4_sum(5,3,6);
void (*ptr_sum)(void);
ptr2_sum(3,4);
printf("sum3=%d\n",value);
printf("sum4=%d\n",value1);
ptr_sum=sum;
//calling
ptr_sum();

return 0;}
*/
int main(){
    int x=sum(10,33);
    int*x=&s;
    printf("x=%d\n",*x);//*to show the address of s
    int h=9;
    add(&h);
    printf("H in main function %d\n",h);
    increament();
    increament();
    increament();

return 0;}
