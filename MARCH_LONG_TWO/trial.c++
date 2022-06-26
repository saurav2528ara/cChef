#include <iostream>
using namespace std;
int main()
{
   int t;
   cout<<"Enter loop: ";
   cin>>t;
   for (int i=0; i<t; i++)
   {
     int arr[4];
      for(int i =0;i<4;i++){
		   cin>>arr[i];
		}
		int l=0;
		int ll=0;
		for(int j=0;j<3;j++){
		    int k=arr[j];
		    if(arr[j+1]>l){
		        l=arr[j+1];
		    }
		}
		
		for(int j=0;j<3;j++){
		    if(arr[j]==l){
		        arr[j]=0;
		    }
		}
		
		for(int j=0;j<3;j++){
		    int k=arr[j];
		    if(arr[j+1]>ll){
		        ll=arr[j+1];
		    }
		}
		
		
		for(int i =1;i<=100000;i++){
		    for(int j=1;j<=100000;j++){
		        if(i<j){
		            if((i-j)<0){
		                if((i*j)==l){
		                    if((i+j)==ll){
		                        cout<<i<<j;
		                        break;
		                    }else{
		                    cout<<("-1 ");
		                        break;
		                    
		                    }
		                }
		            }
		            
		        }
		    }
		}

   }

    return 0;
}