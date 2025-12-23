from collections import Counter

def get_diagonals(board: list[str]) -> list[str]:
    diags = []
    
    # \ diags
    # row - col = d
    for d in range(-7, 8):
        upright = ""
        for row in range(8):
            col = row - d
            if 0 <= col < 8:
                upright += board[row][col]
        diags.append(upright)
    
    # / diags
    # row + col = d
    for d in range(15):
        downright = ""
        for row in range(8):
            col = d - row
            if 0 <= col < 8:
                downright += board[row][col]
        diags.append(downright)
    return diags

def main():
    board = [line.strip() for line in [input() for i in range(8)]]

    if Counter("".join(board)).get("*", 0) != 8:
        print("invalid")
        return

    lanes = board + [[''.join(board[row][col]) for row in range(8)] for col in range(8)] + get_diagonals(board)
    for lane in lanes:
        counts = Counter(lane)
        if counts.get("*", 0) >= 2:
            print("invalid")
            return
    print("valid")

if __name__ == "__main__":
    main()