#include<iostream>
#include<stdarg.h>
using namespace std;

int mulnum(int x,...){
 int pro=1,i;   
 va_list n;
 va_start(n,x);
 for(i=1;i<=x;i++)
 {
   pro*=va_arg(n,int);
   
 }
 va_end(n);
 return(pro);

}

int main(){
    printf("product is:%d",mulnum(7,3,4,2,3,4,5,6));
    return 0;
}