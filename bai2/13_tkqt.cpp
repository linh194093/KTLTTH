#include<bits/stdc++.h>

using namespace std;

struct bigNum
{
    char sign;
    char num[101];
};

void printBigNum(bigNum a)
{
    cout << a.sign <<" "<< a.num << endl;
}

bool isSmaller (char str1[], char str2[])
{
    int n1 = strlen(str1);
    int n2 = strlen(str2);
    if(n1 < n2) return true;
    else if(n1 > n2) return false;

        for(int i = 0; i < n1; i++)
        {
            if(str1[i] < str2[i]) return true;
            else if(str1[i] > str2[i]) return false;
        }
        return false;

}
bigNum operator + (bigNum num1, bigNum num2);
bigNum operator - (bigNum num1, bigNum num2)
{
    bigNum temp;
    if(num1.sign == num2.sign)
    {
        if(isSmaller(num1.num, num2.num))
        {
            temp.sign = (num1.sign == '0') ? '1' : '0';
            swap(num1, num2);
        }
        else temp.sign = (num1.sign == '0') ? '0' : '1';
        int n1 = strlen(num1.num);
        int n2 = strlen(num2.num);
        reverse(num1.num, num1.num + n1);
        reverse(num2.num, num2.num + n2);
        int sub = 0, carry = 0, j = 0;
        for(int i = 0; i < n2; i++)
        {
            sub = (num1.num[i] - '0') - carry - (num2.num[i] - '0');

            if(sub < 0)
            {
                temp.num[j++] = sub + 10 + '0';
                carry = 1;
            }
            else
            {
                temp.num[j++] = sub + '0';
                carry = 0;
            }
        }
        for(int i = n2; i < n1; i++)
        {
            sub = (num1.num[i] - '0') - carry;
            if(sub < 0)
            {
                temp.num[j++] = sub + 10 + '0';
                carry = 1;
            }
            else
            {
                temp.num[j++] = sub + '0';
                carry = 0;
            }
        }
        temp.num[j] = '\0';
        reverse(temp.num, temp.num + strlen(temp.num));
    }
    else
    {
        if(num1.sign == '1')
        {
            num2.sign = '1';
            temp = num1 + num2;
        }
        else
        {
            num2.sign = '0';
            temp = num1 + num2;
        }
    }
    return temp;
}
bigNum operator + (bigNum num1, bigNum num2)
{
    int n1 = strlen(num1.num);
        int n2 = strlen(num2.num);
        if(n1 > n2)
        {
            swap(num1, num2);
            swap(n1, n2);
        }
    bigNum temp;
    if(num1.sign == num2.sign)
    {
        temp.sign = num1.sign;

        reverse(num1.num, num1.num + n1);
        reverse(num2.num, num2.num + n2);

        int sum = 0, carry = 0, j = 0;

        for(int i = 0; i < n1; i++)
        {
            sum = (num1.num[i] - '0') + (num2.num[i] - '0') + carry;
            temp.num[j++] = sum % 10 + '0';
            carry = sum / 10;
        }
        for(int i = n1; i < n2; i++)
        {
            sum = (num2.num[i] - '0') + carry;
            temp.num[j++] = sum % 10 + '0';
            carry = sum / 10;
        }
        if(carry)
        {
            temp.num[j++] = carry + '0';
        }
        temp.num[j] = '\0';
        reverse(temp.num, temp.num + strlen(temp.num));
    }
    else
    {
        if(num1.sign == '0')
        {
            num1.sign = '1';
            temp = num2 - num1;
        }
        else
        {
            num2.sign = '1';
            temp = num1 - num2;
        }
    }
    return temp;
}

bigNum operator * (bigNum num1, int a)
{
    bigNum temp;
    temp.sign = (num1.sign == '1') ? '1' : '0';
    int n1 = strlen(num1.num);
    int sum = 0, carry = 0, j = 0;
    reverse(num1.num, num1.num + n1);
    for(int i = 0; i < n1; i++)
    {
        sum = a * (num1.num[i] - '0') + carry;
        temp.num[j++] = sum % 10 + '0';
        carry = sum / 10;
    }
    if(carry != 0)
    {
        temp.num[j++] = carry + '0';
    }
    temp.num[j] = '\0';
    reverse(temp.num, temp.num + strlen(temp.num));
    return temp;
}
bigNum operator * (int a, bigNum num1)
{
    bigNum temp;
    temp = num1 * a;
    return temp;
}
bigNum operator * (bigNum num1, bigNum num2)
{
    bigNum temp;
    bigNum sum;
    int n2 = strlen(num2.num);
    reverse(num2.num, num2.num + n2);
    temp = num1 * (num2.num[0] - '0');
    for(int i = 1; i < n2; i++)
    {
        sum = num1 * (num2.num[i] - '0');
        for(int j = 1; j <= i; j++)
        {
            sum = sum * 10;
        }
        temp = temp + sum;
    }
    temp.sign = (num1.sign == num2.sign) ? '1' : '0';
    return temp;
}
int main()
{
    bigNum a, b, c;
    cin >> a.sign >> a.num >> b.sign >> b.num;
    c = a*b - 3*a + 4*b;
    printBigNum(c);
}