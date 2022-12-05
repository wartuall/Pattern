#include <iostream>
using namespace std;
int main()
{

    // *
    // **
    // ***
    // ****
    // *****
    // ******
    //     int n;
    //     cin >> n;
    //     for (int i = 0; i < n; i++)
    //     {
    //         for (int j = 0; j <= i; j++)
    //         {
    //             cout << "*";
    //         }
    //         cout<<endl;
    // }

    // 1
    // 22
    // 333
    // 4444
    // 55555
    // int n;
    // cin >> n;
    // for (int i = 1; i <=n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << i;
    //     }
    //     cout << endl;
    // }

    // 1
    // 23
    // 456
    // 78910
    //     int n;
    //     cin >> n;
    //     int c=0;
    //     for (int i = 1; i <=n; i++)
    //     {
    //         for (int j = 1; j <= i; j++)
    //         {
    //             c++;
    //             cout << c;
    //         }
    //         cout << endl;
    //     }

    // 1
    // 23
    // 345
    // 4567
    // 56789
    //     int n;
    //     cin >> n;
    //     int c=0;
    //     for (int i = 1; i <=n; i++)
    //     {
    //         c=i;
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << c;
    //             ++c;
    //         }
    //         cout << endl;
    //     }

    // 1
    // 21
    // 321
    // 4321
    // 54321
    //     int n;
    //     cin >> n;
    //     int c = 0;
    //     for (int i = 1; i <= n; i++)
    //     {
    //         c = i;
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << c;
    //             --c;
    //         }
    //         cout << endl;
    //     }

    // AAAAA
    // BBBBB
    // CCCCC
    // DDDDD
    // EEEEE
    //     int n;
    //     cin >> n;
    //     for (int i = 1; i <=n; i++)
    //     {
    //         for (int j = 1; j <= n; j++)
    //         {
    //             char ch='A'+i-1;
    //             cout << ch;
    //         }
    //         cout << endl;
    // }

    // A
    // BC
    // CDE
    // DEFG
    // EFGHI
    //         int n;
    //         cin >> n;
    //         for (int i = 1; i <=n; i++)
    //         {
    //             int h=i;
    //             for (int j = 1; j <= i; j++)
    //             {
    //                 char ch='A'+h-1;
    //                 ++h;
    //                 cout << ch;
    //             }
    //             cout << endl;
    //         }

    // ABCDE
    // FGHIJ
    // KLMNO
    // PQRST
    // UVWXY
    //     int n;
    //     cin >> n;
    //     char ch = 'A';
    //     for (int i = 1; i <= n; i++)
    //     {
    //         for (int j = 1; j <= n; j++)
    //         {
    //             cout << ch;
    //             ++ch;
    //         }
    //         cout << endl;
    //     }

    // ABCD
    // BCDE
    // CDEF
    // DEFG
    // int n;
    //     cin >> n;
    //     char ch = 'A';
    //     for (int i = 1; i <= n; i++)
    //     {
    //         ch='A'+i-1;
    //         for (int j = 1; j <= n; j++)
    //         {
    //             cout << ch;
    //             ++ch;
    //         }
    //         cout << endl;
    //     }

    // A
    // BB
    // CCC
    // DDDD
    // int n;
    //     cin >> n;
    //     char ch = 'A';
    //     for (int i = 1; i <= n; i++)
    //     {

    //         for (int j = 1; j <= i; j++)
    //         {
    //             ch='A'+i-1;
    //             cout << ch;
    //         }
    //         cout << endl;
    //     }

    // A
    // BC
    // CDE
    // DEFG
    // int n;
    //     cin >> n;
    //     char ch = 'A';
    //     for (int i = 1; i <= n; i++)
    //     {
    //         ch='A'+i-1;
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << ch;
    //             ++ch;
    //         }
    //         cout << endl;
    //     }

    // D
    // CD
    // BCD
    // ABCD
    // int n;
    //     cin >> n;
    //     for (int i = 1; i <= n; i++)
    //     {
    //        char ch='A'+n-i;
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << ch;
    //             ++ch;
    //         }
    //         cout << endl;
    //     }

    //    *
    //   **
    //  ***
    // ****
    //         int n;
    //         cin >> n;
    //         for (int i = 1; i <=n; i++)
    //         {
    //             for (int j = 1; j <=n; j++)
    //             {
    //                 if(j<=n-i)
    //                 cout << " ";
    //                 else
    //                 cout<<'*';
    //             }
    //             cout<<endl;
    //         }

    // *      *
    // **    **
    // ***  ***
    // ********
    // ********
    // ***  ***
    // **    **
    // *      *
    //     int n;
    //     cin >> n;
    //     for (int i = 1; i <= n; i++)
    //     {
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << '*';
    //         }
    //         int space = 2 * n - 2 * i;
    //         for (int j = 1; j <= space; j++)
    //         {
    //             cout << " ";
    //         }
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << '*';
    //         }
    //         cout << endl;
    //     }
    //     for (int i = n; i >= 1; i--)
    //     {
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << '*';
    //         }
    //         int space = 2 * n - 2 * i;
    //         for (int j = 1; j <= space; j++)
    //         {
    //             cout << " ";
    //         }
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << '*';
    //         }
    //         cout << endl;
    //     }

    // ****
    // ***
    // **
    // *
    //     int n;
    //     cin >> n;
    //     for (int i = n; i >= 1; i--)
    //     {
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << '*';
    //         }
    //         int space = n - i;
    //         for (int j = 1; j <= space; j++)
    //         {
    //             cout << " ";
    //         }
    //         cout << endl;
    //     }

    //    *
    //   ***
    //  *****
    // *******
    //     int n;
    //     cin >> n;
    //     for (int i = 1; i <= n; i++)
    //     {
    //         for (int j = 1; j <= n - i; j++)
    //         {
    //             cout << " ";
    //         }
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << '*';
    //         }
    //         for (int j = 2; j <= i; j++)
    //         {
    //             cout << '*';
    //         }
    //         cout << endl;
    //     }

    //    1
    //   121
    //  12321
    // 1234321
    //     int n;
    //     cin >> n;
    //     for (int i = 1; i <= n; i++)
    //     {
    //         for (int j = 1; j <= n - i; j++)
    //         {
    //             cout << " ";
    //         }
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << j;
    //         }
    //         int r=i-1;
    //         for (int j = 2; j <= i; j++)
    //             {
    //                 cout << r;
    //                 --r;
    //             }
    //         cout << endl;
    //     }

// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
//     int n;
//     cin >> n;
//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j;
//         }
//         int space = 2 * n - 2 * i;
//         for (int j = 1; j <= space; j++)
//         {
//             cout << "*";
//         }
//         int t=i;
//         for (int j = 1; j <= i; j++)
//         {
//             cout << t;
//             --t;
//         }
//         cout << endl;
//     }
    return 0;
}
