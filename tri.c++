#include<iostream>
using namespace std;
class triangle{
    private:
    int a,b,c;
    public:
    triangle(int x,int y){a=b=x;c=y;}
    triangle(int x){a=b=c=x;}
int is_equi(){
    if(a==b && b==c)
      return 1;
    else return 0;
}
float area();
};
