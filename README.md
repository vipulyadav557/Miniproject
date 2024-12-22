Online Voting System

This project is a simple Online Voting System implemented in C++. It allows users to register as voters, cast their votes, and view the voting results. The system ensures only registered voters can vote and prevents duplicate voting by the same voter.


---

Features

1. Voter Registration:

Users can register themselves with a unique Voter ID.

Prevents duplicate registration of the same Voter ID.



2. Voting:

Registered voters can cast a vote for their preferred candidate.

Ensures voters cannot vote more than once.



3. Results Display:

Displays the total votes each candidate has received.



4. Secure Voting:

Prevents unregistered users from casting votes.

Tracks which voters have already voted.





---

How to Run the Project

Prerequisites

A C++ compiler (e.g., GCC or MSVC).

Basic knowledge of running C++ programs using a terminal or an IDE.


Steps to Run

1. Clone the repository:

git clone https://github.com/vipulyadav557/Miniproject/blob/main/mini.cpp


2. Compile the code:

g++ -o voting_system voting_system.cpp


3. Run the executable:

./voting_system




---

Menu Options

When you run the program, you'll be presented with the following menu:

1. Register as a Voter:

Enter a unique Voter ID to register yourself as a voter.



2. Cast Vote:

Enter your Voter ID and select the candidate you wish to vote for.



3. Display Results:

View the total votes each candidate has received.



4. Exit:

Exit the program.





---

Example Usage

Input:

--- Online Voting System ---
1. Register as a Voter
2. Cast Vote
3. Display Results
4. Exit
Enter your choice: 1
Enter your Voter ID: VOTER123

Output:

Voter registered successfully!

--- Online Voting System ---
1. Register as a Voter
2. Cast Vote
3. Display Results
4. Exit
Enter your choice: 2
Enter your Voter ID: VOTER123

Available Candidates:
1. Candidate A
2. Candidate B
3. Candidate C
Enter the Candidate ID to vote for: 1
Vote cast successfully for Candidate A!


---

Code Structure

Main Functions:

registerVoter: Registers a new voter.

checkVoterEligibility: Verifies if a voter is registered.

vote: Allows voters to cast their votes.

displayResults: Displays the voting results.


Data Storage:

Voter information is stored in vector<string>.

Candidate details (ID, name, votes) are stored in vector<Candidate>.




---

Future Enhancements

Add authentication for voters (e.g., password-based login).

Store voter and candidate data in a database for persistence.

Provide a graphical user interface (GUI).

Add encryption for secure voting.



---

License

This project is licensed under the MIT License.


---

Contributions

Contributions are welcome! Please create a pull request or open an issue if you would like to suggest improvements.


---

Contact

For any questions or issues, please contact:

Name: VIPUL KUMAR YADAV 

Email: vipulyadav697@gmail.com

GitHub: vipulyadav557
