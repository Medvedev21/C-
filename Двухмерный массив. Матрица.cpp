#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main()
{
    srand(time(0));
    int H, W, max_index, min_index;
    std::cout << "Введите H: ";
    std::cin >> H;
    std::cout << "Введите W: ";
    std::cin >> W;
    std::cout << "\n";
    double max, min;
    double** M = new double* [H];
    for (int i = 0; i < H; i++)
        M[i] = new double[W];

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            M[i][j] = (double)(rand() % 5);
            std::cout << std::setw(7) << M[i][j];
        }
        std::cout << "\n\n";
    }

    max = min = M[0][0];
    max_index = min_index = 0; //на всякий, если условие ниже не выполнится, чтобы было знач. 0

    for (int j = 0; j < W; j++)
    {
        for (int i = 0; i < H; i++)
        {
            if (max < M[i][j])
            {
                max = M[i][j];
                max_index = j;
            }

            if (min > M[i][j])
            {
                min = M[i][j];
                min_index = j;
            }
        }
    }

    if (max_index == min_index)
        std::cout << "\nMax and Min elements are on the same column\n\n";
    else
    {
        for (int i = 0; i < H; i++)
            std::swap(M[i][max_index], M[i][min_index]);

        std::cout << "\nПосле того как поменял\n\n";

        for (int i = 0; i < H; i++)
        {
            for (int j = 0; j < W; j++)
                std::cout << std::setw(7) << M[i][j];
            std::cout << "\n\n";
        }
    }

    for (int i = 0; i < H; i++)
        delete[] M[i];
    delete[] M;
    return 0;
}
