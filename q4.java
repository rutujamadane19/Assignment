
import java.util.Scanner;

public class q4 {
    public static final int maxi=170;

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter your speed in km/hr");
        int speed=sc.nextInt();
        if(speed > maxi)
        {
            System.out.println("Alert !! you are exceeding the speed limit ");
        }
        else 
        {
            System.out.println("You care about your life ");
        }
    }
}
