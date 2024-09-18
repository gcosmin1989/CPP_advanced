
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <ostream>
#include <map>
#include <iomanip>
#include <exception>
#include <stdexcept>
#include <algorithm>

//Biblioteca virtuala
//Clasa de biblioteca care gestioneaza toate cartile pentru a le afisa,sortare in fuctie de nume, pagini, rating, gen, numar de folosiri
//Clasa de carte afisare detalii carte, rating carte, numarul de folosiri
//Clasa utilizator afisare carti inchiriate, carti de returnat, date de intentificare a persoanei, rating acordat
//Clasa de gestionare a cartilor inchiriere, returnare, acordare rating



void drawWelcomeMessage(std::string message) {
    //ToDO declarare de variabile si functii 
    std::string separator_draw = "               *******************************************************";
    std::string box_draw = "               *                                                     *";
    std::string first_text_draw = "               *       WELCOME TO YOUR VIRTUAL LIBRARY!              *";
    std::string second_text_draw = "               *   Discover, Explore, and Enjoy Your Next Read!      *";
    std::cout << separator_draw << std::endl;
    std::cout << box_draw << std::endl;
    std::cout << first_text_draw << std::endl;
    std::cout << box_draw << std::endl;
    std::cout << separator_draw << std::endl;
    std::cout << box_draw << std::endl;
    std::cout << message << std::endl;
    std::cout << box_draw << std::endl;
    std::cout << separator_draw << std::endl << std::endl;;
}

class Book {
private:
    std::string book_title;
    std::string book_author;
    int book_pages;
    int book_year;
    std::string book_genre;
    int unique_code;
    bool all_rented;
    int no_pieces ;
    double rating;
    std::vector<int> ratings;
    
    void setRating(double book_rating) {
        rating = book_rating;
    }

public:
    static int increment;
    static int increment_pieces;
    

    Book(std::string title, std::string author, int pages, int year, std::string genre)
        : book_title(title), book_author(author), book_pages(pages), book_year(year), book_genre(genre), all_rented(false), rating(0) {
        increment++;
        unique_code = increment;
        no_pieces= 1;
        for (int i = 0; i < 5; i++) {
            ratings.push_back(0);
        }
    };
    //Copy constructor
    Book(const Book & src) :
        book_title(src.book_title),
        book_author(src.book_author),
        book_pages(src.book_pages),
        book_year(src.book_year),
        book_genre(src.book_genre),
        unique_code(src.unique_code), // Pastreaza aceasi valoare unica daca cartea e copiata
        all_rented(src.all_rented),
        no_pieces(src.no_pieces),
        ratings(src.ratings),
        rating(src.rating)

    {
        //const_cast<Book&>(src).no_pieces++;
    }

    Book& operator = (const Book& src) {
        if (&src == this)
            return *this;

        book_title = src.book_title;
        book_author = src.book_author;
        book_pages = src.book_pages;
        book_year = src.book_year;
        book_genre = src.book_genre;
        unique_code = src.unique_code; 
        all_rented = src.all_rented;
        no_pieces = src.no_pieces;
        rating = src.rating;

        return *this;
    }
    //Constructor default
    Book() {
         book_title = "";
         book_author = "";
         book_pages = 0;
         book_year = 0;
         book_genre = "";
         all_rented = false;
         increment++;
         unique_code = increment;
         no_pieces = 0;
         increment_pieces = 0;
         rating = 0;
         for (int i = 0; i < 5; i++) {
             ratings.push_back(0);
         }

    };

    void setName(std::string title) {
      
        try {

            book_title = title;
            if (title.length() < 1) {
                throw std::invalid_argument("The title is too short!");
            }
        }
        catch (const std::exception& e) {
            book_title = "Anonim";
            std::cerr << "Erorr: " << e.what() << std::endl;
        }
       

    }
    void setAuthor(std::string author) {
        
        try {

            book_author = author;
            if (author.length() < 1) {
                throw std::invalid_argument("The author name is too short!");
            }
        }
        catch (const std::exception& e) {
            book_author = "Anonim";
            std::cerr << "Erorr: " << e.what() << std::endl;
        }
    }

    void setPages(int pages) {
        try {
            if (pages < 10) {
                throw std::invalid_argument("Number of pages must be at least 10.");
            }
            book_pages = pages;
        }
        catch (const std::invalid_argument& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }

    void setYear(int year) {
        try {
            if (year > 2024 || year < 1500) {
                throw std::invalid_argument("Year must be between 1500 and 2024");
            }
            book_year = year;
        }
        catch (const std::invalid_argument& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }
    void setGenre(std::string genre) {
        try {

            book_genre = genre;
            if (genre.length() < 1) {
                throw std::invalid_argument("The genre is too short!");
            }
        }
        catch (const std::exception& e) {
            book_genre = "N/A";
            std::cerr << "Erorr: " << e.what() << std::endl;
        }
    }
    void setRented(bool rented) {
        all_rented = rented;
    }
    void setPieces(int pieces) {
        no_pieces = pieces;
    }

    std::string getName()const {
        return book_title;
    }
    std::string getAuthor()const {
        return book_author;
    }
    int getPages()const {
        return book_pages;
    }
    int getYear()const {
        return book_year;
    }
    std::string getGenre()const {
        return book_genre;
    }
    int getUniqueCode()const {
        return unique_code;
    }
    bool getIsRented()const {
        return all_rented;
    }
    int getNoPieces()const {
        return no_pieces;
    }
    double getRating()const {
        return rating;
    }
   

    void addCopy(int pieces= 1) {
        no_pieces+=pieces;
        all_rented = false;
    }

    void removeCopy() {
        if (no_pieces > 0) {
            std::cout << "REMOVE COPY BEFORE " << no_pieces << std::endl;
            no_pieces--;
            std::cout << "REMOVE COPY " << no_pieces << std::endl;
        }
        else if (no_pieces == 0) {
            all_rented = true;
        }
    }
    void addRating(int rating) {
        try {
            if (rating < 1 || rating > 5) {
                throw std::runtime_error("Rating must be between 1 and 5.");
            }
            ratings[rating - 1]++;
            calculateRating();
        }
        catch(std::runtime_error& e){
            std::cerr <<"Error: "<< e.what()<<std::endl;
        }
    }

    void calculateRating() {
        int sum = 0;
        int N = 0;
        double mean = 0;
  
        for (int i = 0; i < 5; i++) {
            sum += ratings[i]*(i+1);
            N += ratings[i];
        }
        if (N > 0) {
            mean = (double)sum / N;
        }
        setRating(mean);
    }
    void print() const {
        std::cout << "Code: " << unique_code << std::endl;
        std::cout << "Title:" << book_title << std::endl;
        std::cout << "Author: " << book_author << std::endl;
        std::cout << "Pages:" << book_pages << std::endl;
        std::cout << "Year: " << book_year << std::endl;
        std::cout << "Genre: " << book_genre << std::endl;
        std::cout << "Status: " << all_rented << std::endl;
        std::cout << "Pieces: " << no_pieces << std::endl;
        std::cout << "Rating: " <<std::setprecision(2)<<std::fixed<< rating << std::endl;
    }
    void generateNewUniqueCode() {
        increment++;
        unique_code = increment;
    }

};
int Book::increment = 100;
int Book::increment_pieces = 0;

class User {
private:
    std::string user_name;
    bool is_admin;
    std::vector<Book>userRentedBooks = {};

public:
    std::string getUserName() const {
        return user_name;
    }
    bool getAdminRights() const {
        return is_admin;
    }
    
    void setUserName(std::string user) {
        user_name = user;
    }
    void setAdminRights(bool hasRights) {
        is_admin = hasRights;
    }
};


class Library {
private:
    std::vector<Book>books = {
        {"Barte1","Autor1",200, 1989,"Romance"},
        {"Darte2", "Autor2", 100, 2019, "Drama"},
        {"Aarte3", "Autor3", 300, 2020,"Thriller"}
    };
    std::vector<Book>rentedBooks = {};
public:

    int getSize() const {
        return books.size();
    }
    
    void addBook(const Book& book) {
        for (auto& existingBook : books) {
            if (book.getUniqueCode() == existingBook.getUniqueCode()){
                existingBook.addCopy();
                return;
            }
        }
        books.push_back(book);
    }
    void print() const {
        for (auto& book : books) {
            std::cout << book.getUniqueCode() << " || "
                << book.getName() << " || "
                << book.getAuthor() << " || "
                << book.getPages() << " || "
                << book.getYear() << " || " 
                << book.getGenre() << " || "
                << book.getRating()<<" || ";
            if (book.getNoPieces() == 0) {
                std::cout << "Rented";
            }
            else {
                std::cout << "Copies: " << book.getNoPieces();
            }

            std::cout << std::endl;
        }
    };
    bool rentBook(int unique_code) {
        for (auto& book : books) {
            if (book.getUniqueCode() == unique_code) {
                
                book.removeCopy();
                if(!book.getIsRented()){
                    rentedBooks.push_back(book);
                    return true;
                }
                
            }
           
        }
        return false;
    }

        bool returnBook(int unique_code, int rating) {
            for (auto it = rentedBooks.begin(); it != rentedBooks.end(); ++it) {
                if (it->getUniqueCode() == unique_code) {
                    Book returnedBook = *it;
                    rentedBooks.erase(it);      

                    for (auto& existingBook : books) {
                        if (existingBook.getUniqueCode() == unique_code) {
                            existingBook.addCopy();
                            existingBook.addRating(rating);
                            return true;
                        }
                    }
                }
            }
            return false;
        }

    void printRentedBooks() const {
        std::cout << "Rented Books:\n";
        for (const auto& book : rentedBooks) {
            std::cout << book.getUniqueCode() << " || "
                << book.getName() << " || "
                << book.getAuthor() << " || "
                << book.getPages() << " || "
                << book.getYear() << " || "
                << book.getGenre() <<  std::endl;
        }
    }

    void sortBooks(int sortBy) {
        std::vector<Book> sortedBooks = books;

        std::sort(sortedBooks.begin(), sortedBooks.end(), [sortBy](const Book& first, const Book& second) {
            switch (sortBy)
            {
            case 1:
                return first.getName() < second.getName();
                break;
            case 2:
                return first.getAuthor() < second.getAuthor();
                break;
            case 3:
                return first.getPages() < second.getPages();
                break;
            case 4:
                return first.getYear() < second.getYear();
                break;
            case 5:
                return first.getRating() < second.getRating();
                break;
            default:
                break;
            }
          
            });

        for (auto& sorted : sortedBooks) {
            std::cout << sorted.getUniqueCode() << " || "
                << sorted.getName() << " || "
                << sorted.getAuthor() << " || "
                << sorted.getPages() << " || "
                << sorted.getYear() << " || "
                << sorted.getGenre() << " || "
                << sorted.getRating() << " || ";
            if (sorted.getNoPieces() == 0) {
                std::cout << "Rented";
            }
            else {
                std::cout << "Copies: " << sorted.getNoPieces();
            }

            std::cout << std::endl;
        }
    }

    
};



int main()
{
    Library lib;
    Book book("Carte4", "Autor4", 300, 2020, "Fictiune");
    lib.addBook(book);
    lib.addBook(book);
    lib.print();
    std::cout << "----ALFABETIC------" << std::endl;
    lib.sortBooks(1);
    std::cout << "----AUTOR------" << std::endl;
    lib.sortBooks(2);
    std::cout << "-----PAGINI-----" << std::endl;
    lib.sortBooks(3);
    std::cout << "-----AN-----" << std::endl;
    lib.sortBooks(4);
    std::cout << "-----RATING-----" << std::endl;
    lib.sortBooks(5);
   

    std::cout << "----------" << std::endl;
 

    lib.print();






    return 0;

}

