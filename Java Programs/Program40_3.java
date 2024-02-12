import java.util.*;

class Program40_3
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iNo = sc.nextInt();

        boolean bRet = false;

        bRet = CheckBit(iNo);

        if(bRet == true)
        {
            System.out.println("9th or 12th bit is on.");
        }
        else
        {
            System.out.println("9th or 12th bit is off.");
        }
    }

    public static boolean CheckBit(int iNo)
    {

        int iMask1 = 0x00000100;
        int iMask2 = 0x00000800;

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
