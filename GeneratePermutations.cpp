#include<iostream>
using namespace std;
void generate( char arr[], int start , int end)
{
    int i;
    if(start==end)
    {
		  cout<<arr;
		  
		 cout<<endl;
    }
    else
    {
        for(i=start;i<=end;i++)
        {
            swap(arr[start],arr[i]);
            generate(arr,start+1,end);
            swap(arr[start],arr[i]);
            
        }
    }
}
int main()
{
    
     int n;	
     cout<<"Enter the number of Alphabets:";
     cin>>n;
     char *arr=new char[n+1];
     char alpha='A';
    
     arr[n]='\0';
     for(int i=0;i<n;i++)
     {
     	arr[i]=alpha++;
	 }
     generate(arr,0,n-1);
     return 0;

}
