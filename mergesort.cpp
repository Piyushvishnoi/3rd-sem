#include<iostream>
using namespace std;
void merge(int A[],int start,int mid,int end);
 void merge_sort (int A[ ] , int start , int end );
 void merge_sort (int A[ ] , int start , int end )
   {
           if( start < end ) {
           int mid = (start + end ) / 2 ;           // defines the current array in 2 parts .
           merge_sort (A, start , mid ) ;                 // sort the 1st part of array .
           merge_sort (A,mid+1 , end ) ;              // sort the 2nd part of array.

         // merge the both parts by comparing elements of both the parts.
          merge(A,start , mid , end );   
   }                    
}
void merge(int A[ ] , int start, int mid, int end) {
 //stores the starting position of both parts in temporary variables.
int p = start ,q = mid+1;

int Arr[end-start+1] , k=0;

for(int i = start ;i <= end ;i++) {
    if(p > mid)    
       Arr[ k++ ] = A[ q++] ;

   else if ( q > end) 
       Arr[ k++ ] = A[ p++ ];

   else if( A[ p ] < A[ q ])   
      Arr[ k++ ] = A[ p++ ];
   else
      Arr[ k++ ] = A[ q++];
 }
  for (int p=0 ; p< k ;p ++)
 {
     A[ start++ ] = Arr[ p ] ;                          
  }
}
int main()
{
int array[100],l=0,r=9;
for(int i=0;i<9;i++)
{
cout<<"element"<<i+1<<"is: ";
cin>>array[i];
}
merge_sort(array,l,r);
cout<<"sorted array is:"<<endl;
for(int i=0;i<9;i++)
{
cout<<array[i]<<endl;
}
return 0;
}









