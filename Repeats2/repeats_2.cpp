#include <iostream>

using namespace std;

void main() 
{
    setlocale(LC_ALL, "");
    const int rows = 3;
    const int cols = 4;
    int arr[rows][cols] = {
        {1, 2, 3, 4},
        {2, 5, 6, 1},
        {7, 3, 8, 2}
    };

    // ��� 1: ����� �������
    cout << "������:\n";
    for (int i = 0; i < rows; ++i) 
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << arr[i][j] << "\t";
        }
      cout << endl;
    }

    // ��� 2: ����� ������������� ���������
    cout << "\n������������� �������� � ���������� ����������:\n";
    bool found = false;

    // �������� �� ������� ��������
    for (int i1 = 0; i1 < rows; ++i1) 
    {
        for (int j1 = 0; j1 < cols; ++j1) 
        {

            int current = arr[i1][j1];

            // ���������� ��� ������� (-1)
            if (current == -1)
                continue;

            int count = 1;

            // ���������� � ����������� ����������
            for (int i2 = i1; i2 < rows; ++i2)
            {
                for (int j2 = (i2 == i1 ? j1 + 1 : 0); j2 < cols; ++j2)
                {
                    if (arr[i2][j2] == current) 
                    {
                        count++;
                        arr[i2][j2] = -1; // �������� ��� �������
                    }
                }
            }

            if (count > 1) {
                cout << "������� " << current << " ����������� " << count << " ���(�)\n";
                found = true;
            }
        }
    }

    if (!found)
        cout << "������������� ��������� ���.\n";
}