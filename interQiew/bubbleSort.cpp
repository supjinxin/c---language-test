#include <iostream>


void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}


void bubble_sort(int arr[], int num)
{
	int k = num;
	bool flag = true;

	while(flag)
	{
		flag = false;
		int i;	
		for( i=1; i<k; i++)
		{
			if(arr[i-1] < arr[i])
			{
				swap(arr[i-1], arr[i]);
				flag = true;
			}
		}
		
		k = i;
	}
}


int main()
{
	int seq[8] = {1,5,6,3,8,9,4,5};
	bubble_sort(seq, 8);
	int i;
	for(i=0;i<8;i++)
		std::cout << seq[i] << " " ;
	std::cout << std::endl; 
	
}
			
