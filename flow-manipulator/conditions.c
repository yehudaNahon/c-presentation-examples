#include <stdio.h>
#include <stdbool.h>

bool needs_adulte_in_car(bool has_license, int age, int years_of_driving)
{
    bool answer = true;
    if (has_license == false)
    {
        answer = true;
    }
    else if (age < 16)
    {
        answer = true;
    }
    else
    {
        if (age >= 25)
        {
            return false;
        }
        else if (years_of_driving > 2)
        {
            return false;
        }
        else
        {
            return true;
        }
    }

    return answer;
}

bool needs_adulte_in_car(bool has_license, int age, int years_of_driving)
{
    if (has_license && (age > 25 || (age >= 16 && years_of_driving >= 2)))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(int argc, char const *argv[])
{
    

    return 0;
}
