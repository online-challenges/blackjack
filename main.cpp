#include <iostream>

void head();
void quit(unsigned short games_played, unsigned short player_bal);
bool is_lost(unsigned short &points, unsigned short balance);

int main() {
  unsigned short player_bal = 500;
  unsigned short player_points = 0;
  unsigned short pc_points = 0;
  unsigned short games_played = 0;
  char interested;

  head();
  std::cin >> interested;
  system("clear");

  while (interested != 'n' || interested != 'N') {
    // game
  }

  quit(games_played, player_bal);

  return 0;
}

// print heading information on user console
void head() {
  std::cout << " _     _            _     _            _" << std::endl;
  std::cout << "| |__ | | __ _  ___| | __(_) __ _  ___| | __" << std::endl;
  std::cout << "| '_ \\| |/ _` |/ __| |/ /| |/ _` |/ __| |/ /" << std::endl;
  std::cout << "| |_) | | (_| | (__|   < | | (_| | (__|   <" << std::endl;
  std::cout << R"(|_.__/|_|\__,_|\___|_|\__/ |\__,_|\___|_|\_\)" << std::endl;
  std::cout << "                       |__/" << std::endl;

  std::cout << "How to play:" << std::endl;
  std::cout << "- you start the game with $500.00" << std::endl;
  std::cout << "- on every turn you can either [h]hit or [s]stay" << std::endl;
  std::cout << "- objective of the game is to get closer to 21 without going over it." << std::endl;
  std::cout << "- with every hit you would be gambling some money which should be over some said limit" << std::endl;
  std::cout << "- player to go over 21 loses" << std::endl;
  std::cout << "- first player to go out of all funds loses" << std::endl;

  std::cout << std::endl;
  std::cout << "Continue? [Y/n]: ";
}

void quit(unsigned short games_played, unsigned short player_bal) {
  system("clear");
  std::cout << "Thank you for playing blackjack." << std::endl;
  std::cout << "You played total of [" << games_played << "] games" << std::endl;
  std::cout << "And you're leaving the game with $" << player_bal << ".00 ." << std::endl;
}

// Will check for if the player lost
bool is_lost(unsigned short &points, unsigned short balance = 1) {
  if (balance <= 0 ||  points > 21) {
    return true;
  }
  return false; // game can continue
}