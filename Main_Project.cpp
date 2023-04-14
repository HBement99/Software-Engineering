//
// Started by Hunter Bement on 3/2/2023.
//

#include <iostream>
#include <vector>
#include <map>
#include <fstream>

struct Patient {
    std::string name;
    std::string address;
    int age{};
    std::string sex;
};

class HospitalManagement {
public:
    static void displayMainMenu() ;
    void addNewPatient();
    void searchPatient() const;
    static void findSpecialist() ;
    static void checkoutPatient();

private:
    std::vector<Patient> patients_;

};

void HospitalManagement::displayMainMenu() {
    std::cout << "-----------------------------------------------\n\n";
    std::cout << "          Welcome to Hunter Hospital           \n";
    std::cout << "                  Main Menu                    \n\n";
    std::cout << "-----------------------------------------------\n\n";

    std::cout << "1. New Patient \n";
    std::cout << "2. Existing Patient \n";
    std::cout << "3. Find your Specialist \n";
    std::cout << "4. Checkout Patient \n";
    std::cout << "5. Exit \n";
}

void HospitalManagement::addNewPatient() {
    Patient patient;
    std::cout << "You chose New Patient: \n";
    std::cout << "What is the patient's name?\n";
    std::cin.ignore();
    std::getline(std::cin, patient.name);
    std::cout << "What is the address? \n";
    std::getline(std::cin, patient.address);
    std::cout << "What is patient's age? \n";
    std::cin >> patient.age;
    std::cout << "What is patient's sex? \n";
    std::cin.ignore();
    std::getline(std::cin, patient.sex);
    patients_.push_back(patient);
    std::cout << "Patient " << patient.name << " added\n\n";

    /*std::ofstream myPatient("NewPatient.txt");
    if (myPatient.is_open()) {
        myPatient << "\n name: " << patient.name << "\n";
        myPatient << "\n address: " << patient.address << "\n";
        myPatient << "\n age: " << patient.age << "\n";
        myPatient << "\n sex: " << patient.sex << "\n";
        myPatient.close();
    }*/
}
void HospitalManagement::searchPatient() const {
    std::cout << "You chose Existing Patient: \n";
    std::string name;
    std::cout << "Please enter the patient's name: ";
    std::cin >> name;
    bool patient_found = false;
    for (const auto& patient : patients_) {
        if (patient.name == name) {
            std::cout << "Patient Name: " << patient.name << std::endl;
            std::cout << "Address: " << patient.address << std::endl;
            std::cout << "Age: " << patient.age << std::endl;
            std::cout << "Sex: " << patient.sex << std::endl;
            patient_found = true;
            break;
        }
    }
    if (!patient_found) {
        std::cout << "Patient " << name << " not found." << std::endl;
    }
}
        void HospitalManagement::findSpecialist() {

            std::cout << "Find your Specialist: \n\n";
            std::cout << "Please enter your area of issue:\n";
            std::cout << "Enter integer 1-7 regarding issue:\n";

            std::cout << "1. heart\n";
            std::cout << "2. brain \n";
            std::cout << "3. digestive_system \n";
            std::cout << "4. cancer \n";
            std::cout << "5. skin_issue \n";
            std::cout << "6. infection \n";
            std::cout << "7. eyes \n";

            // Define the mapping between areas of issue and specialists
            std::map<std::string, std::string> specialist_map = {
                    {"1", "cardiologist"},
                    {"2", "neurologist"},
                    {"3", "gastroenterologist"},
                    {"4", "oncologist"},
                    {"5", "dermatologist"},
                    {"6", "infection_specialist"},
                    {"7", "ophthalmologist"}
            };

            std::string issue;
            std::cin >> issue;

            // Check if the input issue is in the mapping
            auto it = specialist_map.find(issue);
            if (it != specialist_map.end()) {
                std::cout << "You require a " << it->second << std::endl;
            } else {
                std::cout << "Sorry, we do not have a specialist for that issue.\n";
            }
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
                    std::cout << "Your current bill is $225.00\n";
                    break;
                case 'b':
                    specialist = "Neurologist";//shows which letter in the list is assigned to each specialist.
                    specialistCost = 250.93;
                    std::cout << "Your current bill is $250.00\n";
                    break;
                case 'c':
                    specialist = "Gastroenterologist";//shows which letter in the list is assigned to each specialist.
                    specialistCost = 381.60;
                    std::cout << "Your current bill is $381.00\n";
                    break;
                case 'd':
                    specialist = "Oncologist";//shows which letter in the list is assigned to each specialist.
                    specialistCost = 143.75;
                    std::cout << "Your current bill is $143.00\n";
                    break;
                case 'e':
                    specialist = "Dermatologist";//shows which letter in the list is assigned to each specialist.
                    specialistCost = 175.15;
                    std::cout << "Your current bill is $175.00\n";
                    break;
                case 'f':
                    specialist = "Infectious Specialist";//shows which letter in the list is assigned to each specialist.
                    specialistCost = 50.30;
                    std::cout << "Your current bill is $50.00\n";
                    break;
                case 'g':
                    specialist = "Ophthalmologist";//shows which letter in the list is assigned to each specialist.
                    specialistCost = 115.80;
                    std::cout << "Your current bill is $115.00\n";
                    break;
                default:
                    std::cout << "Your choice was not an available specialist.\n";
                    break;
            }

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
                        hospital.findSpecialist();
                        break;
                    case 4:
                        hospital.checkoutPatient();
                        break;
                    case 5:
                        std::cout << "Exiting... Thank you!\n";
                        break;
                    default:
                        std::cout << "Invalid menu option. Please choose 1-5.\n";
                        break;
                }
            } while (menu_option != 5);

            return 0;
        }
