#include<bits/stdc++.h>
using namespace std;
int main(){
 int *a,*b,x,y,sum,diff;
 cin>>x>>y;
 *a=x;
 *b=y;
    sum= *a + *b;
    diff=*a -*b;
    if(diff<0){
        diff=-(diff);
    }   
    cout<<sum<<"\n"<<diff;
    return 0;
}
