#include <iostream>
using namespace std;
int main()
{

/*Write the code for the pattern given below:-
Pattern must be dynamic. It should work for any odd numbers. (Excluding 1 and any negative numbers)
It should not run for even numbers .

n always starts from 5(or greater).
if user input is 7.(n=7)-
Output: 
   
    *
   ***
  *****
 *******
*********
@       @
@       @
@       @
@       @
@       @
@   *   @
@  ***  @
@ ***** @
@*******@
*********
*/   
//     int n;
//     cin >> n;
//     int t = 0;
//     for (int i = 1; i <= n - n / 2; ++i)
//     {
//         for (int j = 1; j <= (n - n / 2) - i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }

//         for (int j = 2; j <= i; ++j)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         if (i <= n - n / 2)
//         {
//             for (int j = 1; j <= 1; j++)
//             {
//                 cout << "@";
//             }
//             for (int j = 1; j <= n - 2; j++)
//             {
//                 cout << " ";
//             }
//             for (int j = 1; j <= 1; j++)
//             {
//                 cout << "@";
//             }
//             cout << endl;
//         }
//         else
//         {
//             ++t;
//             for (int j = 1; j <= 1; j++)
//             {
//                 cout << "@";
//             }
//             for (int j = 1; j <= n / 2 - t; j++)
//             {
//                 cout << " ";
//             }
//             for (int j = 1; j <= t; ++j)
//             {
//                 cout << "*";
//             }
//             for (int j = 2; j <= t; ++j)
//             {
//                 cout << "*";
//             }
//             for (int j = 1; j <= n / 2 - t; j++)
//             {
//                 cout << " ";
//             }
//             for (int j = 1; j <= 1; j++)
//             {
//                 cout << "@";
//             }
//             cout << endl;
//         }
//     }
//     for (int j = 1; j <= n; j++)
//     {
//         cout << "*";
//     }
    return 0;
}
