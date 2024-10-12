/*
Single File Programming Question
Problem Statement



In a mystical land known as Eldoria, ancient wizards use magical runes to cast powerful spells. These runes are represented by single characters, each possessing a unique magical property. However, the wizards have a challenge: they need these magical runes sorted in a specific order for their spells to work correctly.



Write a program to help the wizards of Eldoria sort their magical runes based on their potency. Each rune is represented by a single character, and each character holds a unique level of magical power, determined by its position in the ASCII table.



Your task is to implement a merge sorting logic and recursive function to arrange these magical runes in descending order of their magical potency.
*/
#include <iostream>
using namespace std;
void merge(char *arr, int start, int end)
{
    int mid = (start + end) / 2;
    int len1 = mid - start + 1;
    int len2 = end - mid;
    char *first = new char[len1];
    char *second = new char[len2];

    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[start + i];
    }

    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mid + i + 1];
    }

    int index1 = 0;
    int index2 = 0;
    int s = start;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] >= second[index2])
        {
            arr[s++] = first[index1++];
        }
        else
        {
            arr[s++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[s++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[s++] = second[index2++];
    }
};
void merge_sort(char *arr, int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int mid = (start + end) / 2;
    merge_sort(arr, start, mid);
    merge_sort(arr, mid + 1, end);

    merge(arr, start, end);
};
int main()
{
    int size;
    cin >> size;
    char arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int start = 0;
    merge_sort(arr, start, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
};