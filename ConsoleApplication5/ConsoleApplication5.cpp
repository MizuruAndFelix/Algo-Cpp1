
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
		cout << '|' << arr[i] << '|';
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

//int NumSet(int arr[], int target, int size) {
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
//		return result;
//	}



int search(int arr[], int target, int size) {
	int couter = 0;
	int NumTarget = 0;
	int left = 0;
	int right = size;
	int middle = (left + right) / 2;

	if (arr[middle] == target) {
		NumTarget = middle;// мид
		
	}





	if (arr[left] <= target) {//лево
		NumTarget = left;

		if (arr[NumTarget] == target) {
			for (int i = NumTarget; i < size; i++) {
				if (arr[i] > target) {
					couter++;
				}
			}
		}

		if (arr[right] >= target) {//право
			NumTarget = right;

			if (arr[NumTarget] == target) {
				for (int i = NumTarget; i < size; i++) {
					if (arr[i] > target) {
						couter++;
					}
				}
			}
		}


		right = middle;
		middle = (left + right) / 2;

			if (arr[middle] == target) {
				NumTarget = middle;

				for (int i = NumTarget; i < size; i++) {
					if (arr[i] > target) {
						couter++;
					}
				}
			}
			else

			while (arr[NumTarget] != target){
				left++;
				right--;
				middle = (left + right) / 2;

				if (arr[left] == target) {
					NumTarget = left;

					for (int i = NumTarget; i < size; i++) {
						if (arr[i] > target) {
							couter++;
						}
					}
				}

				if (arr[middle] == target) {
					NumTarget = middle;

					for (int i = NumTarget; i < size; i++) {
						if (arr[i] > target) {
							couter++;
						}
					}
				}

				if (arr[right] == target) {
					NumTarget = right;

					for (int i = NumTarget; i < size; i++) {
						if (arr[i] > target) {
							couter++;
						}
					}
				}

			}
		}
	return couter;
	}



	//                                left { 14, 16, 19, 32, 32, 32, 56, 69, 72 } right num = 17
	//if (arr[NumTarget] != target) { // NumT = 0
	//	if (NumTarget == left) {  // 0 = 0  t
	//		while (arr[NumTarget] < target ) { // 14 < 17 t |
	//			NumTarget++; // 0+1 = 1 | 16 < 17
	//		}
	//	}
	//	if (NumTarget == middle) {
	//		while (arr[NumTarget] != target) {
	//			NumTarget++;
	//		}
	//	}
	//}




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

	cout << "Количество элементов в массиве больших, чем " << target << ":" << search(arr, target, size);
}
