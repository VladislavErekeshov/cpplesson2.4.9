/* Вводится одно натуральное трёхзначное число. Догадайтесь по двум открытым тестам, какую надо написать программу, чтобы она прошла все оставшиеся закрытые наборы исходных данных.

Sample Input 1:

123
Sample Output 1:

61 30 15 7 3
Sample Input 2:

256
Sample Output 2:

128 64 32 16 8
*/

#include <iostream>
using namespace std;
int main()
{
    int x, a1, a2, a3, a4, a5;
    cin >> x;
    a1 = x / 2;
    a2 = a1 / 2;
    a3 = a2 / 2;
    a4 = a3 / 2;
    a5 = a4 / 2;
    cout << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a5;
    return 0;
}