#include <iostream>
#include <cstdlib>
#include <iomanip>

void FillArrayMin10(int arr[]);
void PrintArrayMin10(int arr[]);
int Min10(int a[100], int element, int& minElement);

void FillArray(int arr[15]);
void FillArray(int arr[3][4]);
void FillArray(int arr[2][3][4]);

void PrintArray(int arr[15]);
void PrintArray(int arr[3][4]);
void PrintArray(int arr[2][3][4]);

int MaxElement(int arr[15]);
int MaxElement(int arr[3][4]);
int MaxElement(int arr[2][3][4]);

int MaxValue(int num1, int num2);
int MaxValue(int num1, int num2, int num3);








int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));


    int arr[100]{};
    int minElement;

    FillArrayMin10(arr);

    std::cout << "Массив:\n";
    PrintArrayMin10(arr);

    std::cout << "\n\n";

    Min10(arr, 0, minElement);

    std::cout << "Минимальная позиция: " << minElement;




    std::cout << "\n\n===================================================================\n\n";



    int arr1[15]{};
    int arr2[3][4]{};
    int arr3[2][3][4]{};

    std::cout << "\nArray 1:\n";
    FillArray(arr1);
    PrintArray(arr1);
    std::cout << "\nMax element: " << MaxElement(arr1);

    std::cout << "\n\nArray 2:\n";
    FillArray(arr2);
    PrintArray(arr2);
    std::cout << "\nMax element: " << MaxElement(arr2);

    std::cout << "\n\nArray 3:\n";
    FillArray(arr3);
    PrintArray(arr3);
    std::cout << "Max element: " << MaxElement(arr3);



    std::cout << "\n\n===================================================\n\n";



    int number1, number2, number3;
    std::cout << "Enter 1-st number: ";
    std::cin >> number1;
    std::cout << "Enter 2-nd number: ";
    std::cin >> number2;

    std::cout << "Biggest value: " << MaxValue(number1, number2);

    std::cout << "\n\nEnter 3-rd number: ";
    std::cin >> number3;

    std::cout << "\nBiggest value from 1-3 numbers: " << MaxValue(number1, number2, number3)<<"\n\n";

    return 0;
}






void FillArrayMin10(int arr[])
{
    for (int i = 0; i < 100; i++)
    {
        arr[i] = rand() % 200 - 100;
    }
}

void PrintArrayMin10(int arr[])
{
    for (int i = 0; i < 100; i++)
    {
        std::cout << std::right << std::setw(3) << arr[i] << " ";
    }
}

int Min10(int arr[100], int element, int& minElement)
{
    int sum = 0;
    for (int i = element; i < element + 10; ++i) 
    {
        sum += arr[i];
    }

    if (100 - element == 10)
    {
        minElement = element;
        return sum;
    }
    else
    {
        int sum1 = Min10(arr, element + 1, minElement);
        if (sum <= sum1)
        {
            minElement = element;
            return sum;
        }
        else 
        {
            return sum1;
        }
    }
}



void FillArray(int arr[15])
{
    for (int i = 0; i < 15; i++)
    {
        arr[i] = rand() % 15;
    }
}
void FillArray(int arr[3][4])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            arr[i][j] = rand() % 15;
        }
    }
}
void FillArray(int arr[2][3][4])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                arr[i][j][k] = rand() % 15;
            }
        }
    }
}

void PrintArray(int arr[15])
{
    for (int i = 0; i < 15; i++)
    {
        std::cout << std::left << std::setw(2) << arr[i] << " ";
    }
}
void PrintArray(int arr[3][4])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout << std::left << std::setw(2) << arr[i][j] << " ";
        }
        std::cout << "\n";
    }
}
void PrintArray(int arr[2][3][4])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                std::cout << std::left << std::setw(2) << arr[i][j][k] << " ";
            }
            std::cout << "\n";
        }
        std::cout << "\n";
    }
}

int MaxElement(int arr[15])
{
    int max = arr[0];

    for (int i = 0; i < 15; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int MaxElement(int arr[3][4])
{
    int max = arr[0][0];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}
int MaxElement(int arr[2][3][4])
{
    int max = arr[0][0][0];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                if (arr[i][j][k] > max)
                {
                    max = arr[i][j][k];
                }
            }
        }
    }
    return max;
}

int MaxValue(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int MaxValue(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)
    {
        return num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}