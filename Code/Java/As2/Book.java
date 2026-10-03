import java.util.Scanner;
class Book {
    String title;
    String author;
    String isbn;
    Book(String title, String author, String isbn) {
        this.title = title;
        this.author = author;
        this.isbn = isbn;
    }
    static void displayLibrary(Book[] library) {
        for (int i = 0; i < library.length; i++) {
            System.out.println("Title: " + library[i].title);
            System.out.println("Author: " + library[i].author);
            System.out.println("ISBN: " + library[i].isbn);
            System.out.println();
        }
    }
    static void searchBook(Book[] library, String title) {
        for (int i = 0; i < library.length; i++) {
            if (library[i].title.equalsIgnoreCase(title)) {
                System.out.println("Book Found");
                System.out.println("Title: " + library[i].title);
                System.out.println("Author: " + library[i].author);
                System.out.println("ISBN: " + library[i].isbn);
                return;
            }
        }
        System.out.println("Book not found");
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Book[] library = new Book[5];
        for (int i = 0; i < library.length; i++) {
            System.out.println("Enter details of Book " + (i + 1));
            System.out.print("Enter title: ");
            String title = sc.nextLine();
            System.out.print("Enter author: ");
            String author = sc.nextLine();
            System.out.print("Enter ISBN: ");
            String isbn = sc.nextLine();
            library[i] = new Book(title, author, isbn);
        }
        System.out.println("//Library Books//");
        displayLibrary(library);
        System.out.print("Enter book title to search: ");
        String searchTitle = sc.nextLine();
        searchBook(library, searchTitle);
        sc.close();
    }
}
