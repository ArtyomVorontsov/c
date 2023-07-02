enum PIECE {
	pawn,
	knight,
	rook,
	bishop,
	queen,
	king,
	empty
};

enum COLOR {
	white,
	black
};

struct Square {
	enum PIECE piece;
	enum COLOR color;
};


struct Square make_empty_square();
struct Square make_white_pawn();
struct Square make_black_pawn();

int main(void){
	enum piece;
	struct Square white_rook1 = { rook, white };
	struct Square white_rook2 = { rook, white };
	struct Square white_knight1 = { knight, white };
	struct Square white_knight2 = { knight, white };
	struct Square white_bishop1 = { bishop, white };
	struct Square white_bishop2 = { bishop, white };
	struct Square white_queen = { queen, white };
	struct Square white_king = { king, white };

	struct Square black_rook1 = { rook, black };
	struct Square black_rook2 = { rook, black };
	struct Square black_knight1 = { knight, black };
	struct Square black_knight2 = { knight, black };
	struct Square black_bishop1 = { bishop, black };
	struct Square black_bishop2 = { bishop, black };
	struct Square black_queen = { queen, black };
	struct Square black_king = { king, black };
	
	struct Square board[8][8] = {
		{ white_rook1, white_knight1, white_bishop1, white_queen, white_king, white_bishop2, white_knight2, white_rook2}, 
		{ make_white_pawn(), make_white_pawn(), make_white_pawn(), make_white_pawn(), make_white_pawn(), make_white_pawn(), make_white_pawn(), make_white_pawn() },
		{ make_empty_square(),  make_empty_square(),make_empty_square(),make_empty_square(),make_empty_square(),make_empty_square(),make_empty_square(),make_empty_square()},
		{ make_empty_square(),  make_empty_square(),make_empty_square(),make_empty_square(),make_empty_square(),make_empty_square(),make_empty_square(),make_empty_square()},
		{ make_empty_square(),  make_empty_square(),make_empty_square(),make_empty_square(),make_empty_square(),make_empty_square(),make_empty_square(),make_empty_square()},
		{ make_empty_square(),  make_empty_square(),make_empty_square(),make_empty_square(),make_empty_square(),make_empty_square(),make_empty_square(),make_empty_square()},
		{ make_black_pawn(), make_black_pawn(), make_black_pawn(), make_black_pawn(), make_black_pawn(), make_black_pawn(), make_black_pawn(), make_black_pawn() },
		{ black_rook1, black_knight1, black_bishop1, black_queen, black_king, black_bishop2, black_knight2, black_rook2}
	};

}

struct Square make_empty_square(){
	struct Square es = {
		empty,
		white
	};

	return es; 
}
struct Square make_white_pawn(){
	struct Square wp = {
		pawn,
		white
	};

	return wp;
}

struct Square make_black_pawn(){
	struct Square bp = {
		pawn,
		black
	};

	return bp;
}

