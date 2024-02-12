import java.util.*;

class Program34_3
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        Digit digit = new Digit();

        int iNo = 0;
        int iRet = 0;
        System.out.println("Enter number :");
        iNo = sc.nextInt();

        iRet = digit.CountRange(iNo);

        System.out.println("Count of Digits between 3 and 7 is :"+iRet);
    }
}
class Digit
{
    public int CountRange(int iNo)
    {
        int iCnt = 0;
        int iDigit = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if((iDigit > 3)&&(iDigit < 7))
            {
                iCnt++;
            }
            iNo = iNo / 10;
        }
        return iCnt;
    }
}

