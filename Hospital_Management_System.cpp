//
// Started by Hunter Bement on 3/2/2023.
//

#include <iostream>
#include <vector>
#include <map>
#include <fstream>
#include <limits>


struct Patient {
    std::string name;
    std::string address;
    int age{};
    std::string sex;
    std::string issue;
};

class HospitalManagement {
public:
    static void displayMainMenu() ;
    void addNewPatient();
    void searchPatient() const;
    void deletePatient();
    static void findSpecialist() ;
    static void checkoutPatient();

private:
    std::vector<Patient> patients_;

};

void HospitalManagement::displayMainMenu() {
    std::cout << "-----------------------------------------------\n";
    std::cout << "|          Welcome to Hunter Hospital          | \n";
    std::cout << "|                  Main Menu                   | \n";
    std::cout << "-----------------------------------------------\n\n";

    std::cout << "1. New Patient \n";
    std::cout << "2. Existing Patient \n";
    std::cout << "3. Delete Existing Patient Info \n";
    std::cout << "4. Find your Specialist \n";
    std::cout << "5. Checkout Patient \n";
    std::cout << "6. Exit \n";
}

void HospitalManagement::addNewPatient() {
    Patient patient;

    std::cout << "You chose New Patient: \n\n";

    std::cout << "What is the patient's name?\n";
    std::cin.ignore();
    std::getline(std::cin, patient.name);

    std::cout << "What is the address? \n";
    std::getline(std::cin, patient.address);

    std::cout << "What is patient's age? \n";
    std::cin >> patient.age;
    if (patient.age > 0 && patient.age <= 100) {
        std::cout << patient.name << " is " << patient.age << "\n";
    } else
        std::cout << "invalid input";


    std::cout << "What is patient's sex? \n";
    std::cin >> patient.sex;


    std::cout << "What is patients issue? \n";
    std::cout << "Choose from the following list of issues. (do not include number)\n";
    std::cout << "1. heart\n";
    std::cout << "2. brain \n";
    std::cout << "3. digestive_system \n";
    std::cout << "4. cancer \n";
    std::cout << "5. skin_issue \n";
    std::cout << "6. infection \n";
    std::cin >> patient.issue;

    std::string specialist;
        switch (std::stoi(patient.issue)) {
        case 1:
            specialist = "cardiologist";
            break;
        case 2:
            specialist = "neurologist";
            break;
        case 3:
            specialist = "gastroenterologist";
            break;
        case 4:
            specialist = "oncologist";
            break;
        case 5:
            specialist = "dermatologist";
            break;
        case 6:
            specialist = "Infectious Specialist";
            break;
        default:
            std::cout << "Specialist is not available";
    }

    std::cout << "Your specialist is " << specialist << " .";
    
    patients_.push_back(patient);
    std::cout << "Patient " << patient.name << " added\n\n";

    std::ofstream newPatient("NewPatient.txt");
    if (newPatient.is_open()) {
        newPatient << " name: " << patient.name << "\n";
        newPatient << " address: " << patient.address << "\n";
        newPatient << " age: " << patient.age << "\n";
        newPatient << " sex: " << patient.sex << "\n";
        newPatient << " issue: " << patient.issue << "\n";
        }
        newPatient.close();
    }

void HospitalManagement::searchPatient() const {
    std::cout << "You chose Existing Patient: \n";
    std::string name;
    std::cout << "Please enter the patient's name: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, name);
    bool patient_found = false;
    for (const auto& patient : patients_) {
        if (patient.name == name) {
            std::ifstream newPatient("NewPatient.txt");
            std::string line;
            while (std::getline(newPatient, line)) {
                std::cout << line << std::endl;
            }
            newPatient.close();
            patient_found = true;
            break;
        }
    }
    if (!patient_found) {
        std::cout << "Patient " << name << " not found." << std::endl;
    }
}
void HospitalManagement::deletePatient() {
    std::string name;
    std::cout << "Please enter the name of the patient you would like to remove from the system: \n";
    std::cin.ignore();
    std::getline(std::cin, name);
    bool patient_found = false;
    for (auto it = patients_.begin(); it != patients_.end(); ++it) {
        if (it->name == name) {
            patients_.erase(it);
            std::remove("NewPatient.txt");
            patient_found = true;
            break;
        }
    }

    if (!patient_found) {
        std::cout << "Patient name could not be located in our system." << std::endl;
    }
}

void HospitalManagement::findSpecialist() {

    std::ifstream newPatient("NewPatient");
    std::string name;
    std::cout << "Please enter name of patient you would like to find?";
    /*std::cout << "Find your Specialist: \n\n";*/
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, name);

    std::string issue;
    std::cin >> issue;
    
}

void HospitalManagement::checkoutPatient() {
    std::string specialist;
    char specialistType;

    std::cout << "You chose to check out patient.\n";
    std::cout << "What specialist helped you out during this visit? (Enter corresponding letter)\n";
    std::cout << "a. Cardiologist\n";
    std::cout << "b. Neurologist\n";
    std::cout << "c. Gastroenterologist\n";
    std::cout << "d. Oncologist\n";
    std::cout << "e. Dermatologist\n";
    std::cout << "f. Infectious Specialist\n";
    std::cout << "g. Ophthalmologist\n";
    std::cin >> specialistType;

    double specialistCost;
    double stayCost;
    int days;

    switch (specialistType) {
        case 'a':
            specialist = "Cardiologist"; //shows which letter in the list is assigned to each specialist.
            specialistCost = 225.55;
            //std::cout << "Your current bill is $225.00\n";
            // break;
            // case 'b':
            specialist = "Neurologist";//shows which letter in the list is assigned to each specialist.
            specialistCost = 250.93;
            //std::cout << "Your current bill is $250.00\n";
            break;
        case 'c':
            specialist = "Gastroenterologist";//shows which letter in the list is assigned to each specialist.
            specialistCost = 381.60;
            //std::cout << "Your current bill is $381.00\n";
            break;
        case 'd':
            specialist = "Oncologist";//shows which letter in the list is assigned to each specialist.
            specialistCost = 143.75;
            //std::cout << "Your current bill is $143.00\n";
            break;
        case 'e':
            specialist = "Dermatologist";//shows which letter in the list is assigned to each specialist.
            specialistCost = 175.15;
            //std::cout << "Your current bill is $175.00\n";
            break;
        case 'f':
            specialist = "Infectious Specialist";//shows which letter in the list is assigned to each specialist.
            specialistCost = 50.30;
            //std::cout << "Your current bill is $50.00\n";
            break;
        case 'g':
            specialist = "Ophthalmologist";//shows which letter in the list is assigned to each specialist.
            specialistCost = 115.80;
            //std::cout << "Your current bill is $115.00\n";
            break;
        default:
            specialistCost = 0;
            std::cout << "Your choice was not an available specialist.\n";
            break;
    }

    std::cout << "Your " << specialist << "requires you pay " << specialistCost << ". \n";

            std::cout << "\nHow many days were you with us?\n";
            std::cin >> days;

            stayCost = days * 75.50;
            double totalCost;
            totalCost = specialistCost + stayCost;
            std::cout << "The total cost of your visit is: $" << totalCost << "\n\n";

        }

        int main() {
            int menu_option;
            HospitalManagement hospital;

            do {
                hospital.displayMainMenu();
                std::cout << "\nChoose Menu Options 1-4 (or 5 to exit): \n";
                std::cin >> menu_option;

                switch (menu_option) {
                    case 1:
                        hospital.addNewPatient();
                        break;
                    case 2:
                        hospital.searchPatient();
                        break;
                    case 3:
                        hospital.deletePatient();
                    case 4:
                        hospital.findSpecialist();
                        break;
                    case 5:
                        hospital.checkoutPatient();
                        break;
                    case 6:
                        std::cout << "Exiting... Thank you!\n";
                        break;
                    default:
                        std::cout << "Invalid menu option. Please choose 1-5.\n";
                        break;
                }
            } while (menu_option != 5);

            return 0;
        }
