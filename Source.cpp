#include <iostream>  
#include <cmath>
using namespace std; 

void binaryToDec();
void decToBinary();
int main()
{
	int opt; 
	cout << "Do you want binary to decimal (1) or decimal to binary (2) " << endl;  
	cin >> opt;  
	cout << "Enter value "; 
	if (opt==1)
		binaryToDec();  
	else 
		decToBinary(); 
	
	system("pause"); 
} 

void binaryToDec()
{
	int binary[100];
	int num;
	int work;
	int x;
	x = 0;
	cin >> num;
	work = num;
	while (work != 0)
	{
		binary[x] = work % 2;
		work /= 2;
		x++;
	}
	for (int i = x - 1; i >= 0; i--)
		cout << binary[i]<<endl;
} 

void decToBinary()//binary to decimal
{
	int binary[100];  
	int sum = 0; 
	int i; 
	int x=0; 
	int j;  
	int num; 
	cin >> num; 
	while (num > 0)
	{
		binary[x] = num % 2; 
		num /= 10; 
		x++; 
	}   
	
	for (i=0; i<x; i++)
		sum += binary[i] * pow(2, i); 
	cout << sum<<endl;

}