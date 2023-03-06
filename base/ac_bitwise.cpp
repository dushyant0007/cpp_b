#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    { // &, |,~(not),^(exor),

        int a = 4;
        int b = 5;
        cout << (a & b) << endl;
        cout << (a && b) << endl; // (Return True or 1 if both are true or +ve )

        cout << (a | b) << endl;
        cout << (~a) << endl;
        cout << (a ^ b) << endl;

        // 101
        int ans = 5 << 31; // left shift
        cout << ans << endl;

        ans = 5 >> 1; // right shift
        cout << ans << endl;

        b += 1; // b = b + 1
    }
    //! INT to BINARY
    {
        int x = 11000000;
        int arr[sizeof(int) * 8];
        int i = 0;
        int bNum = 0;
        // while(x!=0) // or
        for (i = 0; i < sizeof(int) * 8; i++)
        {
            arr[i] = (x & 1);
            cout << arr[i] << " ";

            if (x != 0)
            {
                bNum += pow(10, i) * (x & 1);
            }

            x = x >> 1;
        }

        cout << endl;
        cout << "bNum " << bNum << endl;
        for (int e = 0; e < i; e++)
        {
            cout << arr[e] << " ";
        }
    }

    //! Binary To INT

    {
        int binary = 1011;

        int dec = 0;
        int i = 0;
        while (binary != 0)
        {
            int digit = binary % 10;
            if (digit == 1)
            {
                dec += digit * (pow(2, i));
            }
            i++;
            binary /= 10;
        }
        cout << "\n dec " << dec << endl;
    }

    //! 1,2,3 = 123

    {
        int ans = 0;
        int arr[3] = {1, 2, 4};
        for (int i = 0; i < 3; i++)
        {
            ans = (arr[i] + ans * 10);
        }
        cout << "1,2,3 => 123 " << ans << endl;
    }

    //! 1,2,3 => 321
    {
        int ans = 0;
        int arr[3] = {1, 2, 4};
        for (int i = 0; i < 3; i++)
        {
            ans = (arr[i]*pow(10,i) + ans);
        }
        cout << "1,2,3 => 321 " << ans << endl;
    }
}