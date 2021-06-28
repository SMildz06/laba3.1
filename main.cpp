// №3.1
#include <iostream>
using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");


    //создание и заполнение массива
    cout << "Введите размер массива, а затем заполните его: ";
    int count;
    cin >> count;
    int* arr = new int[count];     
    for (int i = 0; i < count; i++) {
        cin >> arr[i];
    }
   //вывод массива в обычном виде
    for (int i = 0; i < count; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    //вывод массива без отрицательных элементов
    for (int i = 0; i < count; i++) {
        if (!(arr[i] < 0)) {
            cout << arr[i] << " ";
        }
    }






	return 0;
}