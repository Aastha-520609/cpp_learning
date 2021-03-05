#include<iostream>
using namespace std;
int main()
{
	
	int i,a[5],temp,num,j;
	cout<<"Enter the number of elements\n";
	cin>>num;
	cout<<"Enter the elements\n";
	for(i=0;i<num;i++)
	{ 
	    cin>>a[i];
	}
	cout<<"unsorted array\n";
	for(i=0;i<num;i++)
	{ 
	    cout<<a[i]<<" ";
	}
    for(i=0;i<num;i++)
    {
    	for(j=i+1;j<num;j++)
    	{
    	    if(a[i]<a[j])
    	    {
		       temp= a[i];
	    	   a[i]=a[j];
		       a[j]=temp;
	        }	
		}
	 	
	}
	cout<<"\nsorted array\n";
	for(i=0;i<num;i++)
	{ 
	   cout<<a[i]<<" ";
	}
    return 0;
}
