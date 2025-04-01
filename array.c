// Nota la notazione usata per inputArray, chiamata "a gobba di cammello", invece che usare l'underscore si pone la prima lettera della
// seconda parola in maiuscolo
#include <stdio.h>
#define DIM 10



void inputArray(int a[], int n){
	for(int i=0; i<n; i++)
		scanf("%d", &a[i]);
}

void outputArray(int a[], int n){
	for(int i=0; i<n; i++)
		printf("%d\t", a[i]);
}

void swap(int *a, int*b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

//f(n) = O(n) = Omega(n) = Theta(n)
int minimo(int a[], int n){
	int min=0;
	for(int i=1; i< n; i++){
		if(a[i]<a[min])
			min=i;
		}
	return min;
}

//f(n)= O(n2) = Omega(n2) = Theta(n2)
void selectionSort(int a[], int n){
	int min;
	for(int i=0; i<n-1; i++){
		min=minimo((a+i),n-i)+i;
		swap(&a[i], &a[min]);
	}

}

//f(n) = O(n) = Omega(1)
void insertSorted(int a[], int *n, int val){
	int i;
	for(i=*n; i>0 && a[i-1]>val; i--)
		a[i]=a[i-1];
	a[i]=val;
	(*n)++;
}

//f(n) = n*O(n) = O(n2) = n* Omega(1) = Omega(n)
//caso peggiore: quadratica; caso migliore: lineare
void insertionSort(int a[], int n){
	int i;
	for(i=1; i<n; )
		insertSorted(a, &i, a[i]);
}

//f(n) = Theta(n2)
void bubbleSort(int a[], int n){
	int i;
	for(i=1; i<n; i++)
		for(int j=0; j< n-i; j++)
			if(a[j+1]<a[j])
				swap(&(a[j+1]), &(a[j]));


}

//f(n) = O(n2) = Omega(n)
int adaptiveBubbleSort(int a[], int n){
	int i;
	int ordinato=0;
	int c=0;
	for(i=1; i<n && !ordinato; i++){
		ordinato=1;
		for(int j=0; j< n-i; j++){
			c++;
			if(a[j+1]<a[j]){
				swap(&(a[j+1]), &(a[j]));
				ordinato=0;
			}
		}
	}
	return c;
}

//O(log(n)) = Omega(1)
int binarySearch(int a[], int n, int el){

	int begin = 0, end = n-1, center;

	while(begin <= end){

		center = (begin + end) / 2;
		if(a[center] == el){
			return center;
		}else if(el < a[center]){
			end = center -1;
		}else{
			begin = center + 1;
		}
	}
	return -1;
}

//f(n)=f(n/2)+c =O(log n)
int ricercaBinariaRec(int a[], int inf, int sup, int el){
	if(inf>sup)
		return -1;
	int centro=(inf + sup)/2;
	if(a[centro]==el)
		return centro;
	else if(el<a[centro])
		return ricercaBinariaRec(a, inf, centro-1, el);
	else
		return ricercaBinariaRec(a, centro+1, sup, el);

}

void merge(int a1[], int a2[], int n1, int n2, int a[]){

	int i, j, k;
	int temp[n1+n2];
	for(i=0, j=0, k=0; i<n1 && j<n2;k++){
		if( a1[i]<=a2[j])
			temp[k]= a1[i++];
		else
			temp[k]= a2[j++];
	}
	for( ; i<n1; i++, k++)
		temp[k]= a1[i];
	for( ; j<n2; j++, k++)
		temp[k]= a2[j];
	for(k=0; k<n1+n2; k++)
		a[k]=temp[k];
}

void mergeSort(int a[], int n){
	if(n>1){
		mergeSort(a,n/2);
		mergeSort(a+n/2, n-n/2);
		merge(a, a+n/2, n/2, n-n/2, a);
	}
}

int partition(int a[], int lower, int higher){
    int i = lower-1;
    int j = higher+1;
    int pivot = a[lower];

    while(1){   
        do{
            j--;
        }while(a[j]>pivot);

        do{
            i++;
        }while(a[i]<pivot);

        if(i>=j)
            return j;
        swap(&a[i], &a[j]);   
    }
}
void qSort(int a[], int low, int high){
    if(low<high){
        int p = partition(a, low, high);
        qSort(a, low, p);
        qSort(a, p+1, high);
    }
}

void quickSort(int a[],int n){
    qSort(a, 0, n-1);
}



int main(void){
	int a[DIM];
	int n=5;
	inputArray(a, n);
	quickSort(a, n);
	outputArray(a, n);
	return 0;
}