
#include <iostream>
using namespace std;

int main()
{
    int choise;
    while (true)
    {
        system("cls");
        cout << "\nchoose task:\n1 - min from 3 num`s\n2 - num == < > 0&\n3 - calculator\n4 - char itendefication\n5 - num is multiply 3; 5; 7 ?\n6 - much of units in num\n0 - exit\n";
        cin >> choise;
        if (choise == 1)
        {
            int num_0;
            int num_1;
            int num_2;
            cout << "enter firs/second/third number:\n";
            cin >> num_0 >> num_1 >> num_2;
            cout << "\nmin number is " << (num_0 <= num_1 && num_0 <= num_2 ? num_0 : (num_1 <= num_0 && num_1 <= num_2 ? num_1 : num_2)) << "\n";
            //min(num_0, num_1, num_2); - easer, but we learning '?:' operator
        }
        else if (choise == 2)
        {
            int num_0;
            cout << "enter number:\n";
            cin >> num_0;
            cout << (num_0 == 0 ? "\nnumber is 0" : (num_0 > 0 ? "\nnumber is more then 0" : "\nnumber is less then 0")) << "\n";
        }
        else if (choise == 3)
        {
            while (true)
            {
                int num_0;
                int num_1;
                char d_o;
                cout << "\nenter first number /action/ second number\list of actions:\n'+' - a + b\n'-' - a - b \n'*' - a * b\n'/' - a / b\n'%' - a % b\n0 - end";
                cin >> num_0 >> d_o >> num_1;
                switch (d_o)
                {
                case '+':
                    cout << num_0 + num_1;
                    break;
                case '-':
                    cout << num_0 - num_1;
                    break;
                case '*':
                    cout << num_0 * num_1;
                    break;
                case '/':
                    if (num_1 != 0)
                    {
                        cout << num_0 / num_1;
                        break;
                    }
                case '%':
                    if (num_1 != 0)
                    {
                        cout << num_0 % num_1;
                        break;
                    }
                }
                if (d_o == 0)
                {
                    break;
                }
            }
        }
        else if (choise == 4)
        {
            char what;
            cout << "\nenter symbol:\n";
            cin >> what;
            int n = 47;
            bool yes = 1;
            for (int i = 48; i < 58; i++)
            {
                if (what == i)
                {
                    cout << "\nis integer";
                    yes = false;
                }
            }
            if (yes)
            {
                for (int i = 44; i < 47; i++)
                {
                    if (what == i || what == 33 || what == 88 || what == 59 || what == 63)
                    {
                        cout << "\nis punctuation mark";
                        yes = false;
                    }
                }
            }
            if (yes)
            {
                for (int i = 65; i < 82; i++)
                {
                    if (what == i)
                        cout << "is letter";
                }
                for (int i = 97; i < 123; i++)
                {
                    if (what == i)
                    {
                        cout << "is letter";
                    }
                }
            }
        }
        else if (choise == 5)
        {
            int num_0;
            cout << "enter number";
            cin >> num_0;
            if (num_0 % 3 == 0 && num_0 % 5 == 0 && num_0 % 7 == 0)
            {
                cout << "is multiply";
            }
        }
        else if (choise == 6)
        {
            int num_0;
            cout << "\nenter number(with lenght not more then 4)^\n";
            cin >> num_0;
            if (num_0 / 10000 == 0)
            {
                cout << (num_0 / 10 == 0 ? 1 : (num_0 / 100 == 0 ? 2 : (num_0 / 1000 == 0 ? 3 : 4)));
            }
        }
        else if (choise == 0)
        {
            exit(1);
        }
        cout << "enter any symbol and prees enter";
        string skip;
        cin >> skip;
    }
}