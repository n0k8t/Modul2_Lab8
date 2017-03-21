#include <iostream>

template<class IT>
void mySort(IT begin, IT end)
{   IT b(begin), e(end);

    for(IT  i = begin; i != end; ++i)
    {
        for(IT  k = i + 1; k != end; ++k)
        {
            if (*i > *k)
            {
                std::swap(*i, *k);
            }
        }
    }
}

template<typename IT>
void print(IT begin, IT end)
{
    for (IT  i = begin; i != end; ++i)
    {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int arr[] = {122, 228, 0, -1, -500, 1000, 21, 1, 2, 3, 4};
    print(&arr[3], &arr[8]);
    mySort(&arr[3], &arr[8]);
    std::cout << arr[3] << std::endl;
    print(&arr[3], &arr[8]);

    std::cout << std::endl;

    print(&arr[0], &arr[10]);
    mySort(&arr[0], &arr[10]);
    std::cout << arr[0] << std::endl;
    print(&arr[0], &arr[10]);

    return 0;
}