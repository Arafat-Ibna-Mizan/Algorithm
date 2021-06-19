#include<bits/stdc++.h>
using namespace std;

string str;
vector<string>tmp;
vector<int>vec;

long long no_steps=0;
long long cnt=0;
long long fibonacci(long long n)
{
    no_steps++;
    if(n <= 1)
    {
        return n;
    }
    else{

        return(fibonacci(n-1)+fibonacci(n-2));
    }

}

//Using loop
long long fib(long long n)
{
    if(n<=1)
    {
        cnt++;
        return n;
    }
    else
    {
        int fn1=1;
        int fn2=0;
        int fn=0;
        for(int i=2;i<=n;i++)
        {
            cnt++;
            fn=fn1+fn2;
            fn2=fn1;
            fn1=fn;
        }
        cnt++;
        return fn;
    }
}


int main()
{
    ifstream f;
    f.open("fibonacci.txt");
    while(!f.eof())
    {
        f>>str;
        tmp.push_back(str);

    }
    long long n=tmp.size();

    for (long long i=0;i<n;i++)
    {
        long long k=stoi(tmp.at(i));
        no_steps=0;

        for(long long j=0;j<=k;j++)
        {
            cout<<fibonacci(j)<< " ";

        }
        cout<<endl;
        cout<< "Steps(Recursive):"<<no_steps<<endl;
        no_steps=0;

        //using loop

        for(int j=0;j<=k;j++)
        {
            cout<<fib(j)<< " ";

        }
        cout<<endl;
        cout<< "Steps(loop):"<<cnt<<endl;

        cout<<endl;
        cnt=0;

    }

    return 0;
}
