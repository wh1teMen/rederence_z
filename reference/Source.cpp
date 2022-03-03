
#include<iostream>
using namespace std;
int a[10][2];

//дублируется значение из первого столбика массива копируется во второй
int& rf(int i) {
return a[i][1];
}
//Функция определяет ссылку максимального значения массива


int& rmax(int array[], int length) {
	int  imax = 0;
	for (int i = 1; i < length; i++)
		if (array[i] > array[imax])
			imax = i;
	return array[imax];

}

int main() {
	setlocale(LC_ALL, "ru");
	int n,m;
	/*cout << "Ввод значений в массив: \n";
	for (int i = 0; i < 10; i++){
		cout << "Введите " << i << " элемент: ";
		cin >> a[i][0];
		rf(i) = a[i][0];
	}
	cout << "Итоговый массив:\n";
	for (int i = 0; i < 10; i++) 
		cout << a[i][0] << "\t" << rf(i)<<endl;*/
	

	int arr[5] = { 4,10,7,11,0 };
	cout << "Изначальный массив: \n[";
	for (int i = 0; i < 5; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]"<<endl;
	cout << "Макс. = " << rmax(arr, 5);
	rmax(arr, 5) = 0;
	cout << "Итоговый массив:\n[";
	for (int i = 0; i < 5; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]" << endl;































	cout << "\n\n\n\n\n\n\n\n\n\n";
	system("pause");


	return 0;
}