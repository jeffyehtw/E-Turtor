#include<iostream>  
  
using namespace std;  
  
int main()  
{  
    int n;  
    while (cin >> n)  
    {  
        int time[25] = { 0 };  
        while (n--)  
        {  
            int s, d;  
            cin >> s >> d;  
  
            for (int i = s; i < d; i++)  
                time[i]++;  
        }  
  
        //find max  
        int max = 0;  
        for (int i = 0; i < 25; i++)  
        if (time[i] > max)  
            max = time[i];  
  
        cout << max << endl;  
    }  
    return 0;   
}  