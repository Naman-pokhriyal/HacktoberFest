const cells = document.querySelectorAll(".cell");
const statusText = document.querySelector("#statusText");
const restartBtn = document.querySelector("#restartBtn");
const winningCondition = [
  [0, 1, 2],
  [3, 4, 5],
  [6, 7, 8],
  [0, 3, 6],
  [1, 4, 7],
  [2, 5, 8],
  [0, 4, 8],
  [2, 4, 6],
];
let options = ["", "", "", "", "", "", "", "", ""];
let currentPlayer = "X";
let gameRunning = false;

initializeGame();

function initializeGame() {
  cells.forEach((cell) => cell.addEventListener("click", cellClicked));
  restartBtn.addEventListener("click", restartGame);
  statusText.textContent = `${currentPlayer}'s turn`;
  gameRunning = true;
}
function cellClicked() {
  const cellIndex = this.getAttribute("cellIndex");

  if (options[cellIndex] != "" || !gameRunning) {
    return;
  }

  updateCell(this, cellIndex);
  checkWinner();
}
function updateCell(cell, index) {
  options[index] = currentPlayer;
  cell.textContent = currentPlayer;
}
function changePlayer() {
  currentPlayer = currentPlayer == "X" ? "O" : "X";
  statusText.textContent = `${currentPlayer}'s turn`;
}
function checkWinner() {
  let roundWon = false;
  let cellA;
  let cellB;
  let cellC;
  let condition;

  for (let i = 0; i < winningCondition.length; i++) {
    condition = winningCondition[i];
    cellA = options[condition[0]];
    cellB = options[condition[1]];
    cellC = options[condition[2]];

    if (cellA == "" || cellB == "" || cellC == "") {
      continue;
    }
    if (cellA == cellB && cellB == cellC) {
      roundWon = true;
      break;
    }
  }

  if (roundWon) {
    statusText.textContent = `${currentPlayer} wins 🏆🏆`;
    cells[condition[0]].style.background = "green";
    cells[condition[1]].style.background = "green";
    cells[condition[2]].style.background = "green";

    gameRunning = false;
  } else if (!options.includes("")) {
    statusText.textContent = `Its a Draw!`;
    cells.forEach((cell) => (cell.style.background = "red"));
    gameRunning = false;
  } else {
    changePlayer();
  }
}
function restartGame() {
  currentPlayer = "X";
  options = ["", "", "", "", "", "", "", "", ""];
  statusText.textContent = `${currentPlayer}'s turn`;
  cells.forEach((cell) => (cell.textContent = ""));
  cells.forEach((cell) => (cell.style.background = "white"));

  gameRunning = true;
}
