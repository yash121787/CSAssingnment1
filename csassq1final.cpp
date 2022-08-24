#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
class Array
{
	private:
	int n;
	int arr[];
	public:
	Array(int n)
	{
		this->n = n;
		int arr[this->n];
	}
	void input()
	{
	cout<<"Enter elements of array"<<endl;
	for (int i = 0; i < this->n; i++)
	{
		cin >> arr[i];
	}
		
	}
	void display()
	{
	for (int i = 0; i < this->n; i++)
	{
		cout << arr[i]<<" ";
	}
	cout<<endl;
	}

	void sum()
	{
		int add = 0;
	for (int i = 0; i < this->n; i++)
	{
		add += arr[i];
	}
	cout<<add<<endl;
	}
	int maxelement()
	{
	   int mx = INT_MIN;
	for (int i = 0; i < this->n; i++)
	{
		 mx = max(mx,arr[i]);
	}
	return mx;
	}
	int minelement()
	{
	   int mini = INT_MAX;
	for (int i = 0; i < this->n; i++)
	{
		 mini = min(mini,arr[i]);
	}
	return mini;
	}
	void reverse()
	{   int s = 0;
	    int e =this->n-1;

    while(s<=e) {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
	}

	void sort()
	{
		for(int i = 0; i < n-1; i++ ) {
        int minIndex = i;
        
        for(int j = i+1; j<n; j++) {
            
            if(arr[j] < arr[minIndex]) 
                minIndex = j;
            
        }
        swap(arr[minIndex], arr[i]);
    }
	}
	};
int main() {
	int n;
	cout<<"Enter size of array"<<endl;
	cin>>n;
	Array arr(n);
	//Taking input in array
	arr.input();
	//Displaying array
	arr.display();
	//Sum of array
	// int sum_of_array = arr.sum();
	 cout<<"Sum of the array is ";
     arr.sum();

	cout<<"Max element is "<<arr.maxelement()<<endl;
	cout<<"Min element is "<<arr.minelement()<<endl;

	arr.sort();
	cout<<"Displaying array in sorted"<<endl;
	arr.display();

	arr.reverse();
	cout<<"Displaying array in reverse"<<endl;
	arr.display();

	
}
