import java.util.Scanner;

class BMIcalculator{
	public static void main(String[] args){
		
		Scanner input = new Scanner(System.in);

		System.out.print("No. of People: ");
		int noOfPeople = input.nextInt();

		String[] nameList = new String[noOfPeople];
		int[] ageList = new int[noOfPeople];
		double[] heightList = new double[noOfPeople];
		double[] weightList = new double[noOfPeople];
		double[] BMIList = new double[noOfPeople];


		for(int i=1; i <= noOfPeople; i++){
			System.out.print("\nName " + i + ": ");
			String name = input.next().toUpperCase();
			nameList[i-1] = name;

			System.out.print("Age " + i + ": ");
			int age = input.nextInt();
			ageList[i-1] = age;

			System.out.print("Height(cm) " + i + ": ");
			int height = input.nextInt();
			heightList[i-1] = height;

			System.out.print("Weight(kg) " + i + ": ");
			int weight = input.nextInt();
			weightList[i-1] = weight;

			double BMI = weight / Math.pow( (height/100.0), 2.0);
			BMIList[i - 1] = BMI;

			System.out.println("-----------------------------------");
		}

		for(int j = 0; j < noOfPeople; j++){
			System.out.printf("Name: %s  |  Age: %d  |  BMI: %.2f", nameList[j], ageList[j], BMIList[j]);
			System.out.println(" ");
		}
		input.close();
	}
}

