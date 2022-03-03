
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
//Задача 1
//возводит число в квадрат, если первое больше второго
void z1(int &nref, int &mref) {
	if (nref > mref) {
		nref *= nref; //pow(nref,2); // nref=nref*nref;
		mref *= mref;
	}
	else {
		nref = 0;
		mref = 0;
	}


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
	

	/*int arr[5] = {4,10,7,11,0};
	cout << "Изначальный массив: \n[";
	for (int i = 0; i < 5; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]"<<endl;
	cout << "Макс. = " << rmax(arr, 5);
	rmax(arr, 5) = 0;
	cout << "Итоговый массив:\n[";
	for (int i = 0; i < 5; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]" << endl;*/


	//Задача 1
	/*cout << "Задача 1.\nВведите два числа: ";
	int a, b;
	cin >> a >> b;
	z1(a, b);
	cout << a << "\t" << b << "\n\n";*/

	//Задача 2
	cout << "Задача 2.\nПервый массив: \n[";
	int z2_1[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++)	{
		cout << z2_1[i] << ", ";

	}
	cout << "\b\b]\n";

	cout << "Второй массив: \n[";
	int z2_2[5];
	int* pz2_1 = &z2_1[0];
	int* pz2_2 = &z2_2[0];
	for (int i = 0; i < 5; i++)	{
		*(pz2_2 + i) = *(pz2_1 + (4-i));

		cout << *(pz2_2 + i) << ", ";
	}
	cout << "\b\b]";





























	cout << "\n\n\n\n\n\n\n\n\n\n";
	system("pause");


	return 0;
}