interface Payment{
    void makePayment(double amount);
}
class CreditCardPayment implements Payment{
    public void makePayment(double amount){
        System.out.println("Payment of "+amount+" made using Credit Card");
    }
}
class UPIPayment implements Payment{
    public void makePayment(double amount){
        System.out.println("Payment of "+amount+" made using UPI");
    }
    public static void main(String[] args)
    {
        Payment p1=new CreditCardPayment();
        Payment p2=new UPIPayment();
        p1.makePayment(500);
        p2.makePayment(1000);
    }
}