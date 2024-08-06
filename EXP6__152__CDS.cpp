//Yash Nangia
//152
//ENTC B3
#include <iostream>
using namespace std; 

int main()
{
    // do-while
    cout << "Using do-while loop: " << endl;
    int a = 10;
    do
    {
        cout << a << endl;
        a--;
    } while (a != 0);

    cout << endl;

    // for loop
    cout << "Using for loop: " << endl;
    for (int i = 0; i <= 10; i++)
    {
        cout << i << endl;
    }
    cout << endl;

    // while loop
    cout << "Using while: " << endl;
    int b = 10;
    while (b > 0)
    {
        cout << b << endl;
        b--;
    }
    cout << endl;

    // for loop
    cout << "Using for: " << endl;
    for (int i = 0; i <= 100; i += 5)
    {
        cout << i << endl;
    }
    cout << endl;

    // nested for - pattern
    cout << "Using nested for loops for pattern: " << endl;
    int n2 = 5;
    for (int ii = 1; ii <= n2; ii++)
    {
        for (int j = 1; j <= n2 - ii; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < (2 * ii - 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    // nested do-while
    cout << "Using nested do-while to find the product of numbers:" << endl;
    int q = 0, r;
    do
    {
        q++;
        r = 0;
        do
        {
            r++;
            cout << "Product of " << q << " and " << r << ": " << q * r << endl;
        } while (r < 10);
    } while (q < 10);
    cout << endl;

    // nested while
    cout << "Sum of 2 numbers using nested while: " << endl;
    int q2 = 10, r2;
    while (q2 > 0)
    {
        q2--;
        r2 = 10;
        while (r2 > 0)
        {
            r2--;
            cout << "Sum: " << q2 + r2 << endl;
        }
    }
    cout << endl;

    // nested for - matrix
    cout << "Using nested for loops for matrix: " << endl;
    int mat[2][2][2] = {
        {
            {1, 2},
            {3, 4}
        },
        {
            {5, 6},
            {7, 8}
        }
    };

    for (int m = 0; m < 2; ++m)
    {
        for (int n = 0; n < 2; ++n)
        {
            for (int p = 0; p < 2; ++p)
            {
                cout << mat[m][n][p] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    cout << endl;

    // nested for + while - matrix
    cout << "Using nested for loops and while for matrix and checking some condition: " << endl;
    int mat1[2][2][2] = {
        {
            {1, 2},
            {3, 4}
        },
        {
            {5, 6},
            {7, 8}
        }
    };

    for (int m1 = 0; m1 < 2; ++m1)
    {
        for (int n1 = 0; n1 < 2; ++n1)
        {
            for (int p1 = 0; p1 < 2; ++p1)
            {
                while (mat1[m1][n1][p1] < 8)
                {
                    cout << mat1[m1][n1][p1] << " ";
                    break;
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}


//Output
Using do-while loop: 
10
9
8
7
6
5
4
3
2
1

Using for loop: 
0
1
2
3
4
5
6
7
8
9
10

Using while: 
10
9
8
7
6
5
4
3
2
1

Using for: 
0
5
10
15
20
25
30
35
40
45
50
55
60
65
70
75
80
85
90
95
100

Using nested for loops for pattern: 
    *
   ***
  *****
 *******
*********

Using nested do-while to find the product of numbers:
Product of 1 and 1: 1
Product of 1 and 2: 2
Product of 1 and 3: 3
Product of 1 and 4: 4
Product of 1 and 5: 5
Product of 1 and 6: 6
Product of 1 and 7: 7
Product of 1 and 8: 8
Product of 1 and 9: 9
Product of 1 and 10: 10
Product of 2 and 1: 2
Product of 2 and 2: 4
Product of 2 and 3: 6
Product of 2 and 4: 8
Product of 2 and 5: 10
Product of 2 and 6: 12
Product of 2 and 7: 14
Product of 2 and 8: 16
Product of 2 and 9: 18
Product of 2 and 10: 20
Product of 3 and 1: 3
Product of 3 and 2: 6
Product of 3 and 3: 9
Product of 3 and 4: 12
Product of 3 and 5: 15
Product of 3 and 6: 18
Product of 3 and 7: 21
Product of 3 and 8: 24
Product of 3 and 9: 27
Product of 3 and 10: 30
Product of 4 and 1: 4
Product of 4 and 2: 8
Product of 4 and 3: 12
Product of 4 and 4: 16
Product of 4 and 5: 20
Product of 4 and 6: 24
Product of 4 and 7: 28
Product of 4 and 8: 32
Product of 4 and 9: 36
Product of 4 and 10: 40
Product of 5 and 1: 5
Product of 5 and 2: 10
Product of 5 and 3: 15
Product of 5 and 4: 20
Product of 5 and 5: 25
Product of 5 and 6: 30
Product of 5 and 7: 35
Product of 5 and 8: 40
Product of 5 and 9: 45
Product of 5 and 10: 50
Product of 6 and 1: 6
Product of 6 and 2: 12
Product of 6 and 3: 18
Product of 6 and 4: 24
Product of 6 and 5: 30
Product of 6 and 6: 36
Product of 6 and 7: 42
Product of 6 and 8: 48
Product of 6 and 9: 54
Product of 6 and 10: 60
Product of 7 and 1: 7
Product of 7 and 2: 14
Product of 7 and 3: 21
Product of 7 and 4: 28
Product of 7 and 5: 35
Product of 7 and 6: 42
Product of 7 and 7: 49
Product of 7 and 8: 56
Product of 7 and 9: 63
Product of 7 and 10: 70
Product of 8 and 1: 8
Product of 8 and 2: 16
Product of 8 and 3: 24
Product of 8 and 4: 32
Product of 8 and 5: 40
Product of 8 and 6: 48
Product of 8 and 7: 56
Product of 8 and 8: 64
Product of 8 and 9: 72
Product of 8 and 10: 80
Product of 9 and 1: 9
Product of 9 and 2: 18
Product of 9 and 3: 27
Product of 9 and 4: 36
Product of 9 and 5: 45
Product of 9 and 6: 54
Product of 9 and 7: 63
Product of 9 and 8: 72
Product of 9 and 9: 81
Product of 9 and 10: 90
Product of 10 and 1: 10
Product of 10 and 2: 20
Product of 10 and 3: 30
Product of 10 and 4: 40
Product of 10 and 5: 50
Product of 10 and 6: 60
Product of 10 and 7: 70
Product of 10 and 8: 80
Product of 10 and 9: 90
Product of 10 and 10: 100

Sum of 2 numbers using nested while: 
Sum: 18
Sum: 17
Sum: 16
Sum: 15
Sum: 14
Sum: 13
Sum: 12
Sum: 11
Sum: 10
Sum: 9
Sum: 17
Sum: 16
Sum: 15
Sum: 14
Sum: 13
Sum: 12
Sum: 11
Sum: 10
Sum: 9
Sum: 8
Sum: 16
Sum: 15
Sum: 14
Sum: 13
Sum: 12
Sum: 11
Sum: 10
Sum: 9
Sum: 8
Sum: 7
Sum: 15
Sum: 14
Sum: 13
Sum: 12
Sum: 11
Sum: 10
Sum: 9
Sum: 8
Sum: 7
Sum: 6
Sum: 14
Sum: 13
Sum: 12
Sum: 11
Sum: 10
Sum: 9
Sum: 8
Sum: 7
Sum: 6
Sum: 5
Sum: 13
Sum: 12
Sum: 11
Sum: 10
Sum: 9
Sum: 8
Sum: 7
Sum: 6
Sum: 5
Sum: 4
Sum: 12
Sum: 11
Sum: 10
Sum: 9
Sum: 8
Sum: 7
Sum: 6
Sum: 5
Sum: 4
Sum: 3
Sum: 11
Sum: 10
Sum: 9
Sum: 8
Sum: 7
Sum: 6
Sum: 5
Sum: 4
Sum: 3
Sum: 2
Sum: 10
Sum: 9
Sum: 8
Sum: 7
Sum: 6
Sum: 5
Sum: 4
Sum: 3
Sum: 2
Sum: 1
Sum: 9
Sum: 8
Sum: 7
Sum: 6
Sum: 5
Sum: 4
Sum: 3
Sum: 2
Sum: 1
Sum: 0

Using nested for loops for matrix: 
1 2 
3 4 

5 6 
7 8 


Using nested for loops and while for matrix and checking some condition: 
1 2 
3 4 

5 6 
7 
