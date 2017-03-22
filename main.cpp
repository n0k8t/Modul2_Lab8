#include <iostream>

template<class IT>
void mySort(IT begin, IT end)
{   IT b(begin), e(end);

    for(IT  i = begin; i != end; ++i)
    {
        for(IT  k = i; k != end; ++k)
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
    print(&arr[3], &arr[8]);

    std::cout << std::endl;

    print(&arr[0], &arr[10]);
    mySort(&arr[0], &arr[10]);
    print(&arr[0], &arr[10]);

    std::cout << std::endl << std::endl;


    double ARR[] = {1.0, 228.0, 0.0, -1.1, -500.0, 1000.0, 21.0, 11.0, 2.0, -3000.0, 4.0};
    print(&ARR[3], &ARR[8]);
    mySort(&ARR[3], &ARR[8]);
    print(&ARR[3], &ARR[8]);

    std::cout << std::endl;

    print(&ARR[0], &ARR[10]);
    mySort(&ARR[0], &ARR[10]);
    print(&ARR[0], &ARR[10]);

    return 0;
}
