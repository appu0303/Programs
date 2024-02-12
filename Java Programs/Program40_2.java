import java.util.*;

class Program40_2
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter first number : ");
        int iNo1 = sc.nextInt();

        System.out.println("Enter second number : ");
        int iNo2 = sc.nextInt();

        CommonBits(iNo1, iNo2);

    }

    public static void CommonBits(int iNo1, int iNo2)
    {
        int iMask = 0x00000001;

        int iResult1 = 0;
        int iResult2 = 0;
        int Count = 0;
        int iPos = 1;

        System.out.println();
        while(iMask != 0)
        {
        
        iResult1 = iNo1 & iMask;
        iResult2 = iNo2 & iMask;


        if((iResult1 == iMask) && (iResult1 == iMask))
        {
            System.out.print(iPos+"\t");
        }
        iPos = iPos + 1;
         iMask = iMask << 1;
        }
         System.out.println();
    }
}