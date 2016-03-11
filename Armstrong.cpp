#include<stdio.h>
#include<conio.h>
#include<cmath>

int main(){
int n, n1, temp=0, temp1=0,arm=0;

scanf("%i",&n);

for(n1=n;n1!=0;n1/=10){
temp++;
}
for(n1=n;n1!=0;n1/=10){
temp1=n1%10;
arm+=pow(temp1,temp);
}
if(arm==n)
printf("True");
else
printf("False");

}


