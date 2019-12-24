#include<stdio.h>

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void sort(int a[],int l,int h)
{
    int j;
    if(l<h){
        j=partition(a,l,h);
        sort(a,l,j-1);
        sort(a,j+1,h);
    }
    else
        return;


}
int partition(int a[],int l,int h)
{
   int temp,pivot=a[l],x=l,y=h;

   while(x<y){

    while(a[x]<=pivot && x<=h)
        x++;
    while(a[y]>pivot)
        y--;
    if(x<y)
       swap(&a[x],&a[y]);


   }
   swap(&a[l],&a[y]);

   return y;

}
int main()
{
    int n,i,a[100];
    printf("Enter number of elements\n");
    scanf("%d",&n);
    
    printf("enter elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("before sorting\n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);

    sort(a,0,n-1);

    printf("after sorting\n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);



}
