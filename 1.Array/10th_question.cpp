/*
Problem Statement



You're an instructor managing a list of exam scores for a group of students. The scores are stored in an array, and you need to sort this array in ascending order so that you can easily identify the highest and lowest scores. You'll use two different sorting algorithms: bubble sort and selection sort.



Bubble sort is selected if the array is nearly sorted. An array is considered nearly sorted if at most one pair of elements is out of order. The selection sort is chosen if the array is not nearly sorted.
*/

// You are using GCC
#include <iostream>
using namespace std;

void bubbleSort(int scores[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (scores[i] > scores[j])
            {
                swap(scores[i], scores[j]);
            }
        }
    }
}

void selectionSort(int scores[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (scores[j] < scores[min])
            {
                min = j;
            }
        }
        if (scores[i] != min)
        {
            swap(scores[i], scores[min]);
        }
    }
}

bool isNearlySorted(int scores[], int n)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (scores[i] > scores[i + 1])
        {
            count++;
            if (count > 1)
            {
                return false;
            }
        }
    }
    return true;
}

void sortArray(int scores[], int n)
{
    if (isNearlySorted(scores, n))
    {
        cout << "Using Bubble Sort" << endl;
        bubbleSort(scores, n);
    }
    else
    {
        cout << "Using Selection Sort" << endl;
        selectionSort(scores, n);
    }
}

void printArray(int scores[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << scores[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    int examScores[n];
    for (int i = 0; i < n; i++)
    {
        cin >> examScores[i];
    }

    sortArray(examScores, n);

    cout << "Sorted Exam Scores: ";
    printArray(examScores, n);

    return 0;
}