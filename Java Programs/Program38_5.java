import java.util.*;

class Program38_5
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iNo = sc.nextInt();

        int iRet = 0;

        iRet = OnBit(iNo);

        System.out.println("Modified number is : "+iRet);
    }

    public static int OnBit(int iNo)
    {
        int iMask = 0x0000000f;
        int iResult = 0;

        iResult = iNo & iMask;

            return (iNo | iMask);

    }
}
