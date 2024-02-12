import java.util.*;

class Program34_2
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        Digit digit = new Digit();

        int iNo = 0;
        int iRet = 0;
        System.out.println("Enter number :");
        iNo = sc.nextInt();

        iRet = digit.CountOdd(iNo);

        System.out.println("Count of odd Digits :"+iRet);
    }
}
class Digit
{
    public int CountOdd(int iNo)
    {
        int iCnt = 0;
        int iDigit = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 != 0)
            {
                iCnt++;
            }
            iNo = iNo / 10;
        }
        return iCnt;
    }
}

