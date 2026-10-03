import java.util.*;
class Car{
    String make;
    String model;
    int year;
    String color;
    Car(String make, String model,int year,String color){
      this.make = make;
      this.model = model;
      this.year = year;
      this.color = color;
    }
    public static void main(String[] args) {
        Car c = new Car("Toyota","Fortuner",2025,"Grey");
        System.out.println("Make:"+c.make);
        System.out.println("Model:"+c.model);
        System.out.println("Year:"+c.year);
        System.out.println("Color:"+c.color);
    }
}