#include<iostream>
using namespace std;
 int main(){
    int array[5];					//declaring array
  cout<<"Enter 5 numbers randomly : "<<endl;
  for(int i=0; i<5; i++)
  {
        cin>>array[i];				//Taking input in array
  }
  cout<<endl;
  cout<<"Input array is: "<<endl;
   for(int j=0; j<5; j++)
  {
    cout<<"\t\t\tValue at "<<j<<" Index: "<<array[j]<<endl;	    //Displaying Array
  }
  cout<<endl;
  int temp;			  		// Bubble Sort Starts Here
  for(int i2=0; i2<=4; i2++)
  {
    for(int j=0; j<4; j++)
    {
      if(array[j]>array[j+1])		     	 //Swapping element in if statement
      {
        temp=array[j];
        array[j]=array[j+1];
        array[j+1]=temp;
      }
    }
  }
  cout<<"  Sorted Array is: "<<endl;		  // Displaying Sorted array
  for(int i3=0; i3<5; i3++)
  {
    cout<<"\t\t\tValue at "<<i3<<" Index: "<<array[i3]<<endl;
  }
  system("PAUSE");
  return 0;
} 


