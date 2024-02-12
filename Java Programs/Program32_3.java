import java.util.*;


class Program32_3
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        StringDemo sd = new StringDemo();
        int Count = 0;

        System.out.println("Enter String : ");
        String str = sc.nextLine();

        Count = sd.CountDiff(str);

        System.out.println("Difference between capital and small characters is : "+Count);

    }
}

class StringDemo
{
    public int CountDiff(String str)
    {
        int iCnt = 0;
        int iCountSmall = 0;
        int iCountCapital = 0;
        char[] Arr = str.toCharArray(); 

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iCountSmall++;
            }
            else if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iCountCapital++;
            }
        }
        return iCountSmall - iCountCapital;
    }
}
