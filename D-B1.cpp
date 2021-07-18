#include <iostream>
using namespace std;

void merge(int arry[],int l, int mid ,int r ){
 int n1=mid-l+1;
 int n2=r-mid;

 int a[n1];
 int b[n2];

 for (int i = 0; i < n1; i++)
 {
    a[i]=arry[l+i];
 }
  
  for (int i = 0; i < n2; i++)
 {
    b[i]=arry[mid+1+i];
 }

 int i=0;
 int j=0;
 int k=l;

 while (i<n1 && j<n2)
 {
    if (a[i]<b[j])
    {
      arry[k]=a[i]; 
      k++; i++;
    }
    else
    {
       arry[k]=b[j];
       k++; j++;
    }
    
}

while (i<n1)
{
    arry[k++]=a[i++]; 
}

while (j<n2)
{
    arry[k++]=b[j++];
}

 

 


}
void MergeSort(int arry[], int l, int r){

if(l<r){
int mid=(l+r)/2;
MergeSort(arry,l,mid);
MergeSort(arry,mid+1,r);

merge(arry,l,mid,r);
}


}

    
 

int main(){
int arry[]={5,7,3,2,1};
MergeSort(arry,0,4);


for (int i = 0; i <5; i++)
{
   cout<<arry[i]<<" ";
}

}   
