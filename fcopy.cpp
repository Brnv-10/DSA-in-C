#include<iostream>
using namespace std;
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>

void filecopy(int f1, int f2);
int main(int argc, char {*argv[]){
    if(argc!=3){
        cout<<"file not found"
        exit(1);
    }
int fd1=open(argv[1],0);
if(fd1==-1){
    cout<<"\n error in file opening";
    exit(1);
}
if(fd2==-1){
    cout<<"\n error while creating file";
    exit(1);
}
filecopy(fd1,fd2);
close(fd1);
close(fd2);
return 0;
}

void filecopy(int f1,int f2)
{
    char buff[512];
    int cnt;
    while(cnt=read(f1,buf,sizeof(buf)))
    {
        write(f2,buf,cnt);
    }
    
    


}