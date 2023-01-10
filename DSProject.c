#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void Bubble_sort(int[],int);
void Selection_sort(int[],int);
void Insertion_sort(int[],int);
int Partition(int[],int,int);
void Quick_sort(int[],int,int);
void merge_sort(int [],int,int);
int merge(int[],int,int,int);
int main()
{
	int n,start,end;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the values of the array:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n\n");
	int option;
	printf("*****Methods for sorting*****\n\n");
	printf("1.Bubble sort\n");
	printf("Best case:o(n)\t\t average case:o(n^2)\t\t worst case:o(n^2)\n\n");
	printf("2.Selection sort\n");
	printf("Best case:o(n^2)\t average case:o(n^2)\t\t worst case:o(n^2)\n\n");
	printf("3.Insertion sort\n");
	printf("Best case:o(n)\t\t average case:o(n^2)\t\t worst case:o(n^2)\n\n");
	printf("4.Quick sort\n");
	printf("Best case:o(nlogn)\t average case:o(nlogn)\t\t worst case:o(n^2)\n\n");
	printf("5.Merge sort\n");
	printf("Best case:o(n)\t\t average case:o(nlogn)\t\t worst case:o(nlogn)\n\n");
	printf("Enter your option:");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
			Bubble_sort(a,n);
			break;
		case 2:
			Selection_sort(a,n);
			break;
		case 3:
			Insertion_sort(a,n);
			break;
		case 4:
			Quick_sort(a,0,n-1);
	        printf("The sorted array using quick sort is:\n");
	        for(int i=0;i<n;i++)
	        {
	    	printf("%d\t",a[i]);
	        }
	        printf("\n\n");
			break;
		case 5:
			merge_sort(a,0,n-1);
			printf("The sorted array using merge sort is:\n");
        	for(int i=0;i<n;i++)
        	{
		    printf("%d\t",a[i]);
	        }
	        printf("\n\n");
	        break;
		default:
			printf("\n Wrong Choice\n");
            break;
    }
}
void Bubble_sort(int a[],int n)           
{   
    clock_t t;
	t=clock();                                 
	int temp,i,j;
	for(i=0;i<n-1;i++)                    
	{                                     
		for(j=0;j<n-1-i;j++)              
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("The sorted array using bubble sort is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n\n");
	t=clock()-t;
	double time_taken=((double)t)/CLOCKS_PER_SEC;
	delay(3000);
	printf("The time taken is:%..10f",time_taken);
}
void Selection_sort(int a[],int n)           
{ 
    clock_t t;
	t=clock();                                           
	int i,j,temp,min;                        
	for(i=0;i<n-1;i++)                       
	{                                        
		min=i;                              
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
	printf("The sorted array using selection sort is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n\n");
    t=clock()-t;
	double time_taken=((double)t)/CLOCKS_PER_SEC;
	delay(3000);
	printf("The time taken is:%.10f",time_taken);
}
void Insertion_sort(int a[],int n)            
{  
    clock_t t;
	t=clock();                                           
	int i,j,temp;                             
	for(i=0;i<n;i++)                          
	{                                         
		temp=a[i];                            
		j=i-1;
		while(j>=0&&a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	printf("The sorted array using insertion sort is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n\n");
    t=clock()-t;
	double time_taken=((double)t)/CLOCKS_PER_SEC;
	printf("The time taken is:%f",time_taken);
}
int Partition(int a[],int lb,int ub)
{
   int pivot=a[lb];
   int start=lb+1;
   int end=ub;
   int temp;
   while(start<end)
   {
   	    while(a[start]<=pivot&&start<=ub)
   	    {
   		    start++;
	    }
	    while(a[end]>=pivot)
	    {
		    end--;
	    }
	    if(start<end)
	    {
	    temp=a[start];
		a[start]=a[end];
		a[end]=temp;
	    }
    }
    temp=a[end];
    a[end]=a[lb];
    a[lb]=temp;
    return end;
}
void Quick_sort(int a[],int lb,int ub)           
{ 
    clock_t t;
	t=clock();                                               
	if(lb<ub)                                    
	{                                            
	    int loc= Partition(a,lb,ub);            
		Quick_sort(a,lb,loc-1);                  
		Quick_sort(a,loc+1,ub);
	}
	t=clock()-t;
	double time_taken=((double)t)/CLOCKS_PER_SEC;
	printf("The time taken is:%f",time_taken);
}
int merge(int a[],int lb,int mid,int ub)
{
	int i,j,k;
	int m1 = mid-lb+1;
	int m2 = ub-mid;
	int left[m1],right[m2];
	for(i=0;i<m1;i++)
	{
		left[i] = a[lb+i];
	}
	for(j=0;j<m2;j++)
	{
		right[j] = a[mid+1+j];
	}
	i = 0;
	j = 0;
	k = lb;
	while(i<m1 && j<m2)
	{
		if(left[i]<=right[j])
		{
			a[k] = left[i];
			i++;
			k++;
		}
		else if(left[i]>=right[j])
		{
			a[k] = right[j];
			j++;
			k++;
		}
	}
	while(i<m1)
	{
		a[k] = left[i];
		i++;
		k++;
	}
	while(j>m2)
	{
		a[k] = right[j];
		j++;
		k++;
	}
}
void merge_sort(int a[],int lb,int ub)          
{ 
    clock_t t;
	t=clock();                                              
	if(lb<ub)                                   
	{                                           
		int mid;                                
		mid = (lb+ub)/2;                        
		merge_sort(a,lb,mid);
		merge_sort(a,mid+1,ub);
		merge(a,lb,mid,ub);
	}
	t=clock()-t;
	double time_taken=((double)t)/CLOCKS_PER_SEC;
	printf("The time taken is:%f",time_taken);
}





