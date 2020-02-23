#include<iostream> //Подключение библиотеки потока ввода вывода
                    //input-output stream

#include<cstdio>    //c++ std input output

using namespace std;

int main() {
    cout << "Hello world"  //std:: console output
         << endl;     //Добавляет в конче строки \n

    printf("Hello world\n"); //C function

    int num1, num2, num3;

    cin >> num1 >> num2 >> num3;

    cout << "Num1 = " << num1
         << ", Num2 = " << num2
         << ", Num3 = " << num3 << endl;

    scanf("%d, %d, %d",&num1,&num2,&num3);

    printf("Num1 = %d, "
           "Num2 = %d, "
           "Num3 = %d\n", num1, num2, num3);


    return 0;
}
