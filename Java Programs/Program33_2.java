import java.util.*;

class Program33_2
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        ArrayDemo ad = new ArrayDemo();
        int iSize = 0;
        int iCnt = 0;
        int bRet = 0;

        System.out.println("How many elements you want to enter : ");
        iSize = sc.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter array elements :");

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sc.nextInt();
        }

         ad.Display(Arr);

    }
}

class ArrayDemo
{
    public void Display(int Brr[])
    {
        int iCnt = 0;

        System.out.println("Numbers divisible by 5 are : ");
        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            if((Brr[iCnt] % 5) == 0)
            {
                System.out.print(Brr[iCnt]+"\t");
            }
        }
        System.out.println();
    }
}
