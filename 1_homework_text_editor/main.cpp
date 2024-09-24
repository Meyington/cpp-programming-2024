#include "helper.h"
#include "texteditor.h"

int main() {
  TextEditor editor;
  int choice;

  do {
    std::cout << "\n==========================\n";
    std::cout << "       TEXT EDITOR     \n";
    std::cout << "==========================\n";
    std::cout << "  1. Add text\n";
    std::cout << "  2. Delete text\n";
    std::cout << "  3. Move cursor left\n";
    std::cout << "  4. Move cursor right\n";
    std::cout << "  5. Display text\n";
    std::cout << "  6. Exit\n";
    std::cout << "==========================\n";
    std::cout << "Enter your choice: ";
    correct(choice);

    switch (choice) {
      case 1: {
        std::string text;
        std::cout << "\nEnter text to add: ";
        std::cin.ignore();
        std::getline(std::cin, text);
        editor.addText(text);
        std::cout << "\nText added successfully!\n";
        break;
      }
      case 2: {
        int k;
        std::cout << "\nEnter the number of characters to delete: ";
        correct(k);
        int deletedCount = editor.deleteText(k);
        std::cout << "Deleted " << deletedCount << " characters\n";
        break;
      }
      case 3: {
        int k;
        std::cout << "\nEnter the number of characters to move left: ";
        correct(k);
        std::string leftText = editor.cursorLeft(k);
        std::cout << "Text to the left of the cursor: " << leftText << "\n";
        break;
      }
      case 4: {
        int k;
        std::cout << "\nEnter the number of characters to move right: ";
        correct(k);
        std::string rightText = editor.cursorRight(k);
        std::cout << "Text to the right of the cursor: " << rightText << "\n";
        break;
      }
      case 5: {
        std::cout << "\nCurrent text:\n";
        std::cout << editor;
        break;
      }
      case 6:
        std::cout << "\nExiting the editor.\n";
        break;
      default:
        std::cout
            << "\nInvalid choice. Please choose a number between 1 and 6.\n";
    }
  } while (choice != 6);

  return EXIT_SUCCESS;
}
