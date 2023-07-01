#include <fstream>
#include <iostream>
#include <locale.h>
#include <windows.h>
#include <string>
#include<array>
using namespace std;
// 2 3 3 2
// 2 2 0 0
void printArr(int arr[], int size) {
	cout << endl;
	for (int i = 0; i < size; i++) {
		cout << '|' << arr[i]<<'|';
	}
	cout << endl;
}
//void RemoveArrItem (int arr[], int target, int size) {
//	int counter = 0;
//	for (int i = 0; i < size; i++){
//		if (arr[i] == target) {
//			arr[i] = 0;
//			counter++;
//		}
//	}
//	cout << endl << "couter = " << counter << endl;
//	printArr(arr, size);
//}

//void search(int arr[], int target, int size) {
//	int result = 0;
//	int left = 0;
//	int right = size;
//	int middle = (left + right) / 2;
//
//	//for (int i = 0; i<size; i++) {
//		if (arr[middle] = target){
//			result = middle;
//		}
//		else if (arr[middle] > target) {
//			result = left;
//		}
//		else if (arr[middle] < target) {
//			result = right;
//		}
//	}
//}

int search(int arr[], int target, int size) {
	int couter = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] > target) {
			couter++;
		}
	}
	return couter;
}

int main()
{
	setlocale(LC_ALL, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int size = 9;
	int target = 0;
	int arr[size] = { 14, 16, 19, 32, 32, 32, 56, 69, 72 };
	cout << "Введите точку отсчёта: ";
	cin >> target;
	
	cout << "Количество элементов в массиве больших, чем " << target << ":" << search(arr,target,size);
}