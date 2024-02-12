import java.util.*;

class Program34_4
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        Digit digit = new Digit();

        int iNo = 0;
        int iRet = 0;
        System.out.println("Enter number :");
        iNo = sc.nextInt();

        iRet = digit.Multiply(iNo);

        System.out.println("Multiplication is :"+iRet);
    }
}
class Digit
{
    public int Multiply(int iNo)
    {
        int Mult = 1;
        int iDigit = 0;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            Mult = Mult * iDigit;
            iNo = iNo / 10;
        }
        return Mult;
    }
}

