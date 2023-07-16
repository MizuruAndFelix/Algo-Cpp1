#include <iostream>
#include <locale.h>
#include <windows.h>
#include <string>
#include<array>
using namespace std;
void printArr(int arr[], int size) {
	cout << endl;
	for (int i = 0; i < size; i++) {
		cout << '|' << arr[i] << '|';
	}
	cout << endl;
}
int search(int arr[], int target, int size) {
	int couter = 0;
	int NumTarget = 0;
	int left = 0;
	int right = size;
	int middle = (left + right) / 2;

	if (arr[left] > target) {
		return couter = size;
	}

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
