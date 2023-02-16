#include <iostream>
using namespace std;
#include <bits/stdc++.h>
template <class T>
T largebetween2(T a, T b)
{
        return max(a,b);
}

int main()
{
        int a, b;
        cout << "Enter two integers: ";
        cin >> a >> b;
        cout << largebetween2(a, b) <<" is bigger" << endl;
        return 0;
}


