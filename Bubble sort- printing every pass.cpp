#include <iostream>
using namespace std;

int main(){
	int a[]= {7, 8 , 9 , 6, 2, 1};
	int c;
    int n = sizeof(a)/sizeof(int);
	
	for(int i=0; i< n-1; i ++)
	{
		for(int j=0; j<n-1-i; j++)
		{
			if(a[j]> a[j+1])
			{
			    c= a[j+1];
			    a[j+1]= a[j];
			    a[j]= c;
			}
	    }
	    for (int i =0;i <n; i++)
		   {
		   	 
			 cout<< a[i]<<"\t";
		   }
		   cout<<"this is a pass"<<i+1<<endl;
                
    }
   }




