#include <iostream>

using namespace std;

void RectVol(int a, int b, int c);

int main()
{
    RectVol(5, 6, 4);
    
}
void RectVol(int a, int b, int c)
{
    int volume = a*b*c;

    cout<<"Volume of Rectangle Prism: "<<volume<<endl;
}