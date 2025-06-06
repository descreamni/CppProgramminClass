#include <iostream>
#include "Circle.cpp"
using namespace std;
void swap2(int *a, int *b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
void swap(int a, int b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}
void increase(Circle c){
    int r = c.getRadius();
    c.setRadius(r + 1);
}
bool average(int a[], int size, int& avg);
bool readRadius(int radian, int& returnParameter);
bool swapCircle(Circle& _target, Circle& _updateParameter);
void main()
{
    // 실제로 바뀌는 것이 아니다.
    /*
    Circle waffle(30);
    increase(waffle);
    cout << waffle.getRadius()<<endl;
    */
    /*
    int m = 2, n = 9;
    cout << m << " " << n << endl;
    swap2(&m, &n);
    cout << m << " " << n << endl;
    */
    //
    /*
    int m = 2, n = 9;
    int x[] = {1,2,3,4};
    int returnSize;
    if(average(x, -1, returnSize))
    {
        cout << "평균 : " <<returnSize << endl;
    }
    else
        cout << "매개변수 오류"<<endl;
        */
    /*
    int size;
    int radius;
    cin >> radius;
    if(readRadius(radius,size))
    {
        cout << "출력 : " << size << endl; 
    }
    else
        cout << "오류" << endl;
    */
   Circle a(3);
   Circle b(7);
    printf_s("a : %d || b : %d",a.getRadius(), b.getRadius() );
    swapCircle(a, b);
    printf_s("refined a : %d || refined b : %d", a.getRadius(), b.getRadius());
    system("pause");
}


bool average(int a[], int size, int& avg)
{
    if(size <= 0) return false;
    int sum = 0;
    for (int i = 0 ; i < size; i++)
    {
        sum += a[i];
    }
    avg = sum / size;
    return true;
}
bool swapCircle(Circle& _target, Circle& _updateParameter)
{
    Circle temp = _target;
    _target = _updateParameter;
    _updateParameter = temp;
    return true;
}
bool readRadius(int radian, int& returnParameter)
{
    if(radian > 0)
    {
        returnParameter = radian * radian * 3.14;
        return true;
    }
    else
        return false;
    
}