struct Score {
    int playerScore = 0;

    void playerScored() {
        playerScore += 1;
    }
    void reset() {
        playerScore = 0;
    }
};
