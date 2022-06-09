#include<iostream>
#include<cstring>
bool search(char *a, char *b, int sizeA, int sizeB )
{
    std::string av = a;
    for (int i = 0; i < sizeA; ++i) 
    {
       if (av.substr(i, sizeB) == b) 
            return true;
    }
    return false;
}
int main()
{
	char a[] = "Hello world";
	char b[] = "wor";
    int sizeA = sizeof(a)-1;
    int sizeB = sizeof(b)-1;
    std::cout << search(a, b, sizeA,sizeB);
}

