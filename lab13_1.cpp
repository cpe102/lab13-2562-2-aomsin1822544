#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}



//Write your code here.
 
   


    

	template <typename T>
void insertionSort(T d[],int N){
int s=0;
	for(int i = 1 ; i<N;i++){
		for (int j = 0;j < N;j++){
			if(j==i){
				cout<< "\b[" << d[j] << "]" << " ";
				s=d[j];
			}
			else{
				cout << d[j] << " ";
			}
			
		}
	cout << "=>";
	for(int j=0;j<N;j++){
		if(d[j]==s && j<i+1 && d[j+1] != s){
			cout << "\b["<< d[j] << "]" << " ";
		}
		else{
			cout << d[j] << " ";
		}
		
	}
	
	
	cout << endl;
	for(int j=i;j>0;j--){
		if (d[j]>d[j-1]){
			swap(d, j , j-1);
		}
    
}
	}
}
         


 

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
				
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
