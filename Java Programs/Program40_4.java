import java.util.*;

class Program40_4
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iNo = sc.nextInt();

        System.out.println("Enter first position : ");
        int iPos1 = sc.nextInt();

        System.out.println("Enter second position : ");
        int iPos2 = sc.nextInt();

        boolean bRet = false;

        bRet = CheckBit(iNo,iPos1,iPos2);

        if(bRet == true)
        {
            System.out.println("Bit at 1st or 2nd position is on.");
        }
        else
        {
            System.out.println("Bit at 1st or 2nd position is off.");
        }
    }

    public static boolean CheckBit(int iNo, int iPos1, int iPos2)
    {

        int iMask = 0x00000001;
        int iMask1 = iMask << (iPos1 -1);
        int iMask2 = iMask << (iPos2 - 1);

        int iResult1 = 0;
        int iResult2 = 0;

        boolean bFlag = false;

        iResult1 = (iNo & iMask1);
        iResult2 = (iNo & iMask2);

           if((iResult1 == iMask1) || (iResult2 == iMask2))
           {
            return true;
           }
           else
           {
            return false;
           }
    }
}
