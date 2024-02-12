import java.util.*;

class Program39_5
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iNo = sc.nextInt();

        int iRet = 0;

        iRet = ToggleBit(iNo);

        System.out.println("Modified number is : "+iRet);
    }

    public static int ToggleBit(int iNo)
    {
        int iMask = 0xf000000f;

        return iNo ^ iMask;
    }
}
