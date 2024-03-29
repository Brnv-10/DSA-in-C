#include<iostream>
#include<cstdlib>

/*Iterative method for merge sort*/

merging_iterative(int a,int n){
    int l1,l2,r1,r2,i,len;

    for(len=1;len<=n;len=2*len){
        for(i=0;i<n;i=i+2*len){
            l1=i;
            l2=i+len-1;
            r1=i+len;
            r2=i+2*len-1;
        }
        if(l2>=n){
            break;
        }
        if(r2>=n){
            r2=n-1;
        }
    }

}



main(){

}