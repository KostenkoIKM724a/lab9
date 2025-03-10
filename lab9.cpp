#include <iostream>
using namespace std;

int main()
{
    //Ñòâîðèòè äâîâèì³ðíèé ìàñèâ, ùî ñêëàäàºòñÿ ç ä³éñíèõ ÷èñåë. 
    //Çíàéòè íîìåð ðÿäêà, â ÿêîìó çíàõîäÿòüñÿ ìàêñèìàëüíèé åëåìåíò ìàñèâó. 
    //Çíàéòè ñåðåäíº àðèôìåòè÷íå åëåìåíò³â, ðîçòàøîâàíèõ ò³ëüêè â ïàðíèõ ñòîâïöÿõ ìàñèâó. 
    //Ðåçóëüòàò âèâåñòè íà åêðàí.
    srand(time(nullptr));
    const int array_row = 5;
    const int array_col = 5;
    double array[array_row][array_col];

    for (int i = 0; i < array_row; i++)
    {
        for (int j = 0; j < array_col; j++)
        {
            double intNumberPart = rand() % 21 - 10;
            double fractionNumberPart = (double)(rand() % 2000 - 1000) / 1000; //-10...10
            double fullNumber = intNumberPart + fractionNumberPart;

            array[i][j] = fullNumber;
        } 
    }
    // 3. Display an array
    for (int i = 0; i < array_row; i++)
    {
        for (int j = 0; j < array_col; j++)
        {
            cout << array[i][j] << '\t';
        }
        cout << endl;
    }
    // 4. Find an index of a max num
    int index_Max = 0;
    double max_Number = array[0][0];

    for (int i = 0; i < array_row; i++)
    {
        for (int j = 0; j < array_col; j ++)
        {
            if (array[i][j]>max_Number)
            {
                max_Number = array[i][j];
                index_Max = i;
            }
        }
    }
    cout << "The row of a max number, which is " << max_Number << " is: " << index_Max+1 << endl;
    // 5. Calculate an average

    int numberOfElements = 0;
    double sum = 0;

    for (int i = 0; i < array_row; i++)
    {
        for (int j = 0; j < array_col; j+=2) //in even columns
        {
            sum += array[i][j]; // sum = sum + array[i][j];
            numberOfElements++;
        }
    }
    double average = (double)(sum) / numberOfElements;
    cout << "Average : " << average << endl;
}
