#include <iostream>
#include <string>

using namespace std;

void quiz1() {
    cout << "What construction tool are you? Quiz!" << endl;
    cout << "Answer the following questions to find out what type of construction tool you are.\n" << endl;

    // Points accumulator
    int total_points = 0;
    char answer;

    // Question 1
    cout << "1. How do you approach problems?" << endl;
    cout << "a) I like to tackle them with brute force." << endl;
    cout << "b) I prefer precision and careful planning." << endl;
    cout << "c) I improvise and adapt as needed." << endl;
    cout << "Your answer (a/b/c): ";
    cin >> answer;
    if (answer == 'a') {
        total_points += 10;  // Hammer
    } else if (answer == 'b') {
        total_points += 20;  // Level
    } else if (answer == 'c') {
        total_points += 30;  // Saw
    }

    // Question 2
    cout << "\n2. What's your ideal work environment?" << endl;
    cout << "a) Outdoors, with a lot of room to move around." << endl;
    cout << "b) Indoors, where I can focus." << endl;
    cout << "c) Anywhere, as long as I can get the job done." << endl;
    cout << "Your answer (a/b/c): ";
    cin >> answer;
    if (answer == 'a') {
        total_points += 10;  // Jackhammer
    } else if (answer == 'b') {
        total_points += 20;  // Drill
    } else if (answer == 'c') {
        total_points += 30;  // Multi-tool
    }

    // Question 3
    cout << "\n3. How do you handle stress?" << endl;
    cout << "a) I power through it." << endl;
    cout << "b) I take a step back and assess the situation." << endl;
    cout << "c) I adapt quickly and find a solution." << endl;
    cout << "Your answer (a/b/c): ";
    cin >> answer;
    if (answer == 'a') {
        total_points += 10;  // Hammer
    } else if (answer == 'b') {
        total_points += 20;  // Wrench
    } else if (answer == 'c') {
        total_points += 30;  // Pliers
    }

    // Question 4
    cout << "\n4. How do you prefer to work on tasks?" << endl;
    cout << "a) I work fast and get it done." << endl;
    cout << "b) I work steadily and take my time." << endl;
    cout << "c) I work in bursts of energy." << endl;
    cout << "Your answer (a/b/c): ";
    cin >> answer;
    if (answer == 'a') {
        total_points += 10;  // Nail Gun
    } else if (answer == 'b') {
        total_points += 20;  // Screwdriver
    } else if (answer == 'c') {
        total_points += 30;  // Saw
    }

    // Continue similarly for the rest of the questions...

    // Final tool determination based on points
    string tool;
    if (total_points <= 30) {
        tool = "Hammer";
    } else if (total_points <= 60) {
        tool = "Drill";
    } else if (total_points <= 90) {
        tool = "Wheelbarrow";
    } else if (total_points <= 120) {
        tool = "Portable concrete mixer";
    } else if (total_points <= 150) {
        tool = "Plumb bob";
    } else if (total_points <= 180) {
        tool = "Jack hammer";
    } else if (total_points <= 210) {
        tool = "Concrete saw";
    } else if (total_points <= 240) {
        tool = "Plate compactor";
    } else if (total_points <= 270) {
        tool = "Forklift";
    } else {
        tool = "Excavator";
    }

    cout << "\nYou are a " << tool << "! You're strong, reliable, and always up for a challenge." << endl;
}

int main() {
    quiz1();
    return 0;
}
