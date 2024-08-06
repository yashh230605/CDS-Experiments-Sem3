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
