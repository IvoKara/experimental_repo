#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	return 0;
}
int is_pivot(float arr [20], int arr_size, int pivot_index)
{
	int i = 0, cnt1 = 0,cnt2 = 0;
	while(i<pivot_index){
		if(arr[i] < arr[pivot_index]) cnt1 = 1;
		i++;
	}
	i = arr_size - 1;
	
	while(i>pivot_index){
		if(arr[i] >= arr[pivot_index]) cnt2 = 1;
		i--;
	}
if(cnt1 == 1 && cnt2 == 1) return 1;
return 0;	
}

int is_sorted(float arr[20], int size)
{
	int i;
	for(i = 0;i < size;i++){
		if(arr,size,arr[1]== 0) return 0;
	}
	return 1;
}
