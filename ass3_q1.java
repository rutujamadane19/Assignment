//package SurfaceAreaPrograms;

import java.util.Scanner;

public class ass3_q1{
	private static Scanner sc;

	public static void main(String[] args) {
		double radius, sa, Volume;
		sc = new Scanner(System.in);
		
		System.out.println("\n Please Enter the radius of a Sphere : ");
		radius = sc.nextDouble();
		
		sa =  4 * Math.PI * radius * radius;
		Volume = (4.0 / 3) * Math.PI * radius * radius * radius;

		System.out.format("\n The Surface area of a Sphere = %.2f", sa);
		System.out.format("\n The Volume of a Sphere = %.2f", Volume);
	}
}