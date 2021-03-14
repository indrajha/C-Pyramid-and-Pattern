#include <iostream>
using namespace std;



void halfPyramidWithStar()
{
    int rows;

    cout << "Enter number of rows for half pyramid with stars: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

void halfPyramidWithNumber()
{
    int rows;

    cout << "Enter number of rows for half pyramid with numbers: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}

void halfPyramidWithAlphabets()
{
    char input, alphabet = 'A';

    cout << "Enter the uppercase character you want to print in the last row for half pyramid with alphabets: ";
    cin >> input;

    for(int i = 1; i <= (input-'A'+1); ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << alphabet << " ";
        }
        ++alphabet;

        cout << endl;
    }
}

void invertedHalfPyramidWithStar()
{
    int rows;

    cout << "Enter number of rows for inverted half pyramid with stars: ";
    cin >> rows;

    for(int i = rows; i >= 1; --i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << endl;
    }
}


void invertedHalfPyramidWithNumber()
{
    int rows;

    cout << "Enter number of rows for inverted half pyramid with numbers: ";
    cin >> rows;

    for(int i = rows; i >= 1; --i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void fullPyramidWithStars()
{
    int space, rows;

    cout <<"Enter number of rows for full pyramid with stars: ";
    cin >> rows;

    for(int i = 1, k = 0; i <= rows; ++i, k = 0)
    {
        for(space = 1; space <= rows-i; ++space)
        {
            cout <<"  ";
        }

        while(k != 2*i-1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }
}

void fullPyramidWithNumers()
{
    int rows, count = 0, count1 = 0, k = 0;

    cout << "Enter number of rows for full pyramid with numbers: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i)
    {
        for(int space = 1; space <= rows-i; ++space)
        {
            cout << "  ";
            ++count;
        }

        while(k != 2*i-1)
        {
            if (count <= rows-1)
            {
                cout << i+k << " ";
                ++count;
            }
            else
            {
                ++count1;
                cout << i+k-2*count1 << " ";
            }
            ++k;
        }
        count1 = count = k = 0;

        cout << endl;
    }
}

void invertedFullPyramidWithStar()
{
    int rows;

    cout << "Enter number of rows for inverted full pyramid with stars: ";
    cin >> rows;

    for(int i = rows; i >= 1; --i)
    {
        for(int space = 0; space < rows-i; ++space)
            cout << "  ";

        for(int j = i; j <= 2*i-1; ++j)
            cout << "* ";

        for(int j = 0; j < i-1; ++j)
            cout << "* ";

        cout << endl;
    }
}
void pascalsPyramid()
{
    int rows, coef = 1;

    cout << "Enter number of rows for pascals pyramid: ";
    cin >> rows;

    for(int i = 0; i < rows; i++)
    {
        for(int space = 1; space <= rows-i; space++)
            cout <<"  ";

        for(int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef*(i-j+1)/j;

            cout << coef << "   ";
        }
        cout << endl;
    }
}

void floydsTriangle()
{
    int rows, number = 1;

    cout << "Enter number of rows for floyds triangle: ";
    cin >> rows;

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << number << " ";
            ++number;
        }

        cout << endl;
    }
}

int main()
{
    halfPyramidWithStar();
    halfPyramidWithNumber();
    halfPyramidWithAlphabets();
    invertedHalfPyramidWithStar();
    invertedHalfPyramidWithNumber();
    fullPyramidWithStars();
    fullPyramidWithNumers();
    invertedFullPyramidWithStar();
    pascalsPyramid();
    floydsTriangle();
    return 0;
}