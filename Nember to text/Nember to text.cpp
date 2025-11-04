#include <iostream>
#include <string>
using namespace std;

string NumberToText(long long Number)
{
    if (Number == 0)
        return "";

    if (Number >= 1 && Number <= 19)
    {
        string arr[] = { "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
                         "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen",
                         "Sixteen", "Seventeen", "Eighteen", "Nineteen" };
        return arr[Number] + string(" ");
    }

    if (Number >= 20 && Number <= 99)
    {
        string arr[] = { "", "", "Twenty-", "Thirty-", "Forty-", "Fifty-", "Sixty-", "Seventy-", "Eighty-", "Ninety-" };
        return arr[Number / 10] + NumberToText(Number % 10);
    }

    if (Number >= 100 && Number <= 999)
    {
        string arr1[] = { "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine" };
        int Hundreds = Number / 100;
        int Remainder = Number % 100;
        return arr1[Hundreds] + string(" Hundred ") + NumberToText(Remainder);
    }

    if (Number >= 1000 && Number <= 9999)
    {
        string arr1[] = { "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine" };
        int Thousands = Number / 1000;
        int Remainder = Number % 1000;
        return arr1[Thousands] + string(" Thousand ") + NumberToText(Remainder);
    }

    if (Number >= 10000 && Number <= 999999)
    {
        long long Thousands = Number / 1000;
        long long Remainder = Number % 1000;

        string result = NumberToText(Thousands) + "Thousand";
        if (Remainder != 0)
            result += " " + NumberToText(Remainder);
        return result;
    }

    if (Number >= 1000000 && Number <= 999999999)
    {
        long long Milions = Number / 1000000;
        long long Remainrs = Number % 1000000;

        string Result = NumberToText(Milions) + " Milion ";

        if (Remainrs != 0)
            Result += NumberToText(Remainrs);
        return Result;
    }

    if (Number >= 1000000000 && Number <= 999999999999)
    {
        long long Bilions = Number / 1000000000;
        long long B_remainder = Number % 1000000000;

        string results = NumberToText(Bilions) + " Bilion ";

        if (B_remainder != 0)
            results += NumberToText(B_remainder);
        return results;

        
    }
   
}

long long ReadNumber()
{
    long long Number;
    cout << "Enter Number: ";
    cin >> Number;
    return Number;
}

int main()
{
    long long Number = ReadNumber();
    cout << NumberToText(Number);
    cout << "\n\n";
    system("pause > 0");

}
