#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Structure to store candidate details
struct Candidate {
    int id;          // Candidate ID
    string name;     // Candidate name
    int votes = 0;   // Number of votes the candidate has received (initialized to 0)
};

// Function prototypes
void registerVoter(vector<string>& voters, string voterID);  // Function to register a voter
bool checkVoterEligibility(const vector<string>& voters, const string& voterID); // Check if voter is registered
void vote(vector<Candidate>& candidates, int candidateID); // Function to cast a vote
void displayResults(const vector<Candidate>& candidates);  // Display voting results

int main() {
    // Vector to store registered voters
    vector<string> registeredVoters;

    // Vector to store voter IDs of those who have already voted
    vector<string> votersWhoVoted;

    // List of candidates available for voting
    vector<Candidate> candidates = {
        {1, "Candidate A"},
        {2, "Candidate B"},
        {3, "Candidate C"}
    };

    int choice;     // Menu choice
    string voterID; // Voter ID input

    do {
        // Display menu
        cout << "\n--- Online Voting System ---\n";
        cout << "1. Register as a Voter\n";
        cout << "2. Cast Vote\n";
        cout << "3. Display Results\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: { // Register a new voter
                cout << "Enter your Voter ID: ";
                cin >> voterID;
                registerVoter(registeredVoters, voterID); // Call function to register voter
                break;
            }
            case 2: { // Cast a vote
                cout << "Enter your Voter ID: ";
                cin >> voterID;

                // Check if voter has already voted
                if (find(votersWhoVoted.begin(), votersWhoVoted.end(), voterID) != votersWhoVoted.end()) {
                    cout << "You have already voted!\n";
                    break;
                }

                // Check if voter is registered
                if (!checkVoterEligibility(registeredVoters, voterID)) {
                    cout << "You are not registered. Please register first.\n";
                    break;
                }

                // Display available candidates
                cout << "\nAvailable Candidates:\n";
                for (const auto& candidate : candidates) {
                    cout << candidate.id << ". " << candidate.name << "\n";
                }

                int candidateID;
                cout << "Enter the Candidate ID to vote for