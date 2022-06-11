#include <iostream>
#include<cstring>

bool search(char *a, char *b)
{
    int sizeA = strlen(a);
    int sizeB = strlen(b);
    std::string one = a;
    std::string two = b;
    if (sizeA < sizeB || sizeA == 0 || sizeB == 0)
        return false;
    for (int i = 0; i <sizeA; ++i) 
    {
       if (i > (sizeA - sizeB)) 
            return false;
       else if (one.substr(i, sizeB) == two) 
            return true;
    }
    return false;
}
int main()
{
	char a[] = "Hello world";
	char b[] = "wor";
    char c[] = "";
    std::cout << search(a, b)<<" "<<search(a,c);
}

