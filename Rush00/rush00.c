#include <unistd.h>

int check_input_num(int num);
void one_line(char side, char middle, int len);
void rush00(int a, int b);

int main(void)
{
    rush00(5, 3);
    rush00(5, 1);
    rush00(1, 1);
    rush00(1, 5);
    rush00(0, 5);
    return 0;
}

int check_input_num(int num)
{
    if (0 < num && num <= 5)
    {
        return 0;
    }
    return -1;
}

void one_line(char side, char middle, int len)
{
    int i;
    i = 0;
    
    while (i < len)
    {
        if (i == 0 || i == 4)
        {
            write(1, &side, 1);
        }
        else
        {
            write(1, &middle, 1);
        }
        
        i++;
    }
    write(1, "\n", 1);
}

void rush00(int a, int b)
{
    if (check_input_num(a) != 0 || check_input_num(b) != 0)
    {
        return ;
    }
    
    int i;
    i = 0;
    
    while (i < b)
    {
        if (i == 0 || (i+1) == b)
        {
            one_line('o', '-', a);
        }
        else
        {
            one_line('|', ' ', a);
        }
        i++;
    }
}


