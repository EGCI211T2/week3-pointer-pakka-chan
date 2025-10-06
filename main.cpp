#include <iostream>
#include <iomanip>
#define SIZE 10

using namespace std;

int main(int argc,char *argv[]){
  int *pa, *pb, i, temp;
int n =argc-1;

  pa=new int[n];

  for(i=0;i<n;i++){

   // cout<<"Input no."<<i<<":";

    //cin>> *pa;

    *pa=atoi(argv[i+1]);

  }
  
  pa-=n;

cout<<"Original: ";
for (i=0; i<SIZE-1; i++ ,pa++){
   cout<<setw(3)<<*pa ;//<<endl;
  //cout<<pa<<endl;
}
cout<<setw(3)<<*pa<<endl;
pb=pa;
pa -= (n-1);

for (i=0; i<SIZE/2; i++)
{
   temp = *pa;  
   *pa = *pb;  
   *pb = temp;
   pa++;  pb--;
}
pa -= (n/2);
/*
pa = &a[0];  
pb = &a[SIZE-1];
for (i=0; i<SIZE/2; i++)
{
   temp = *pa;  
   *pa = *pb;  
   *pb = temp;
   pa++;  pb--;
}
pa=&a[0];
pb-=SIZE/2;*/
cout<<"Reversed: ";
for (i=0; i<SIZE-1; i++ ,pa++){
   cout<<setw(3)<<*pa ;//<<endl;
  //cout<<pa<<endl;
}
cout<<setw(3)<<*pa<<endl;
pa-=n-1;
delete []pa;

return 0;
}
