import java.util.*;

class Program34_5
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        Digit digit = new Digit();

        int iNo = 0;
        int iRet = 0;
        System.out.println("Enter number :");
        iNo = sc.nextInt();

        iRet = digit.CountDiff(iNo);

        System.out.println("Difference is :"+iRet);
    }
}
class Digit
{
    public int CountDiff(int iNo)
    {
        int iSumOdd = 0;
        int iSumEven = 0;
        int iDigit = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 == 0)
            {
                iSumEven = iSumEven + iDigit;
            }
            else 
            {
                iSumOdd = iSumOdd + iDigit;
            }
            iNo = iNo / 10;
        }
        return iSumEven - iSumOdd;
    }
}

