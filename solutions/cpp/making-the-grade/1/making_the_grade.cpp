#include <array>
#include <string>
#include <vector>
using namespace std;

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> int_scores;
    for (int i{ 0 }; i < student_scores.size(); i++) {
        int_scores.push_back(static_cast<int>(student_scores[i]));
    }
    return int_scores;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int count{};
    for (int score : student_scores) {
        if (score <= 40) count++;
    }

    return count;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    std::array<int, 4> grade_thresholds;
    grade_thresholds[0] = 41;
    int step_count{ (highest_score - 40) / 4 };
    for (int i{ 1 }; i < 4; i++) {
        grade_thresholds[i] = 41 + step_count * (i);
    }

    return grade_thresholds;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking

    std::vector<std::string> rank;
    for (int i{}; i < student_names.size(); i++) {
        rank.push_back(std::to_string(i+1)+". " + student_names[i] + ": " + std::to_string(student_scores[i]));
    }

    return rank;
}
// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
    std::vector<std::string> student_names) {
    // TODO: Implement perfect_score

    for (int i{}; i < student_names.size(); i++) {
        if (student_scores[i] == 100) return student_names[i];
    }

    return "";
}
