import java.util.*;

public class tictactoe {
	
	static String[] board;
	static String turn;
	
	
	// CheckWinner method will decide the combination of three box given below
	static String checkWinner()
	{
		for (int i = 0; i < 8; i++) {
			String line = null;

			switch (i) {
			case 0:
				line = board[0] + board[1] + board[2];
				break;
			case 1:
				line = board[3] + board[4] + board[5];
				break;
			case 2:
				line = board[6] + board[7] + board[8];
				break;
			case 3:
				line = board[0] + board[3] + board[6];
				break;
			case 4:
				line = board[1] + board[4] + board[7];
				break;
			case 5:
				line = board[2] + board[5] + board[8];
				break;
			case 6:
				line = board[0] + board[4] + board[8];
				break;
			case 7:
				line = board[2] + board[4] + board[6];
				break;
			}
			
			if (line.equals("XXX")) {
				return "X";
			}
			
			
			else if (line.equals("OOO")) {
				return "O";
			}
		}
		
		for (int i = 0; i < 9; i++) {
			if (Arrays.asList(board).contains(
					String.valueOf(i + 1))) {
				break;
			}
			else if (i==8) {
				return "draw";
			}
		}

	// To enter the X Or O at the exact place on board.
		System.out.println(
			turn + "'s turn; enter a slot number to place "
			+ turn + " in:");
		return null;
	}
	
	// To print out the board.
	/*  |---|---|---|
        | 1 | 2 | 3 |
        |-----------|
        | 4 | 5 | 6 |
        |-----------|
        | 7 | 8 | 9 |
        |---|---|---|*/
	
	static void printBoard()
	{
		System.out.println("|---|---|---|");
		System.out.println("| " + board[0] + " | "
						+ board[1] + " | " + board[2]
						+ " |");
		System.out.println("|-----------|");
		System.out.println("| " + board[3] + " | "
						+ board[4] + " | " + board[5]
						+ " |");
		System.out.println("|-----------|");
		System.out.println("| " + board[6] + " | "
						+ board[7] + " | " + board[8]
						+ " |");
		System.out.println("|---|---|---|");
	}

	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		board = new String[9];
		turn = "X";
		String winner = null;

		for (int i = 0; i < 9; i++) {
			board[i] = String.valueOf(i + 1);
		}

		System.out.println("Welcome to 3x3 Tic Tac Toe.");
		printBoard();

		System.out.println(
			"X will play first. Enter a slot number to place X in:");

		while (winner == null) {
			int numin;
			
		// For input validation
			try {
				numin = in.nextInt();
				if (numin < 0 && numin >= 9) {
					System.out.println(
						"Invalid input; re-enter slot number:");
					continue;
				}
			}
			catch (InputMismatchException e) {
				System.out.println(
					"Invalid input; re-enter slot number:");
				continue;
			}
			
			// This game has two player x and O.
			//The logic to decide the turn.
			if (board[numin - 1].equals(
					String.valueOf(numin))) {
				board[numin - 1] = turn;

				if (turn.equals("X")) {
					turn = "O";
				}
				else {
					turn = "X";
				}

				printBoard();
				winner = checkWinner();
			}
			else {
				System.out.println(
					"Slot already taken; re-enter slot number:");
			}
		}
		
		// If no one win or lose from both player x and O.then here is the logic to print "draw".
		if (winner.equalsIgnoreCase("draw")) {
			System.out.println(
				"It's a draw! Thanks for playing.");
		}
		
		// For winner -to display Congratulations! message.
		else {
			System.out.println(
				"Congratulations! " + winner
				+ "'s have won! Thanks for playing.");
		}
	}
}
