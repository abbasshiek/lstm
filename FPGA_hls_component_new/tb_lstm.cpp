#include <iostream>
#include <fstream>
#include "lstm.cpp"  // Include your main LSTM function
#include "weights.h" // Include the weights

// Testbench function
int main() {
    // Define input data based on the paper or your requirements
    float input_sequence[SEQ_LENGTH][INPUT_SIZE] = {
        {0.1, 0.2, 0.3},  // Example input values
        {0.4, 0.5, 0.6},
        {0.7, 0.8, 0.9},
    };

    // Define output placeholder
    float output_sequence[SEQ_LENGTH][OUTPUT_SIZE] = {0};

    // Call the LSTM function
    lstm_top_function(input_sequence, output_sequence);

    // Print output for validation
    for (int i = 0; i < SEQ_LENGTH; i++) {
        std::cout << "Output for timestep " << i << ": ";
        for (int j = 0; j < OUTPUT_SIZE; j++) {
            std::cout << output_sequence[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
