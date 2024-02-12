import java.util.*;

class Program38_1
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iNo = sc.nextInt();

        int iRet = 0;

        iRet = OffBit(iNo);

        System.out.println("Modified number is : "+iRet);
    }

    public static int OffBit(int iNo)
    {
        int iMask = 0x00000040;
        int iResult = 0;

        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            return (iNo ^ iMask);
        }
        else
        {
            return iNo;
        }
    }
}
