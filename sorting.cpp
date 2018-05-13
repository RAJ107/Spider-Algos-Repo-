// Raj 106117073
// selection sorting
#include <stdio.h>
  void main()
  {
  int arr[10];
  int i, j, n, temp;
  int maximum(int  a[10], int k); 
  void interchange(int  a[10], int k);
  printf("\nEnter no. of values in the array : ");
  scanf("%d",&n);
   printf("\nEnter the elements: ");
  for(i=0;i<n;i++)
  {
  scanf("%d",&arr[i]);
  }
  interchange(arr,n);
  printf("Sorted array:\n");
  for(i=0;i<n;i++)
  {
  printf("%d\n",arr[i]);
  }
}
  int maximum(int a[10], int k)
  {
  int max=0,j;
  for(j=1;j<=k;j++)
  {
  if (a[j]>a[max])
  {
  max=j;
  }
  }
  return(max);
  }
  void interchange(int a[10],int k)
  {
  int  temp, big, j;
  for ( j=k-1;j>=1;j--)
  {
  big=maximum(a,j);
  temp=a[big];
  a[big]=a[j];
  a[j]=temp;
  }
  return;
  }
