#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::max;
using namespace std;

int main() {
    int i,numrefill,lastrefill,currentrefill;
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;
    int arr[n+2];
    arr[0]=0;

    for (i = 1; i <= n; ++i)
        cin >> arr[i];
    arr[n+1]=d;
    
    numrefill=0;
    currentrefill=0;
    while(currentrefill<=n)
    {
        lastrefill=currentrefill;
        while(currentrefill<=n && arr[currentrefill+1]-arr[lastrefill]<=m)
            currentrefill=currentrefill+1;
            if(currentrefill==lastrefill)
                {
                    numrefill=-1;
                    break;
                }
            if(currentrefill<=n)
                numrefill=numrefill+1;
    }

    cout<<numrefill;

    return 0;
}
