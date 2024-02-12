import java.util.*;


class Program32_1
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        StringDemo sd = new StringDemo();
        int Count = 0;

        System.out.println("Enter String : ");
        String str = sc.nextLine();

        Count = sd.CountCapital(str);

        System.out.println("Number of Capital characters are : "+Count);

    }
}

class StringDemo
{
    public int CountCapital(String str)
    {
        int iCnt = 0;
        int iCount = 0;
        char[] Arr = str.toCharArray(); 

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iCount++;
            }
        }
        return iCount;
    }
}
