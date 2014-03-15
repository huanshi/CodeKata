#include <gtest/gtest.h>
#include <string>

#include "ChessChecker.h"

TEST(TestChessChecker, isBlankTest)
{
	std::string chessBoard[] = {
		"........",
		"........",
		"........",
		"...BW...",
		"...WB...",
		"........",
		"........",
		"........"
	};
	ChessChecker checker(chessBoard);
	ASSERT_EQ(true, checker.isEmpty("A1"));
	ASSERT_EQ(false, checker.isEmpty("D4"));
}

TEST(TestChessChecker, isWhiteTest)
{
	std::string chessBoard[] = {
		"........",
		"........",
		"........",
		"...BW...",
		"...WB...",
		"........",
		"........",
		"........"
	};
	ChessChecker checker(chessBoard);
	ASSERT_EQ(false, checker.isWhite("A1"));
	ASSERT_EQ(true, checker.isWhite("E4"));
	ASSERT_EQ(false, checker.isWhite("D4"));
}

TEST(TestChessChecker, isBlackTest)
{
	std::string chessBoard[] = {
		"........",
		"........",
		"........",
		"...BW...",
		"...WB...",
		"........",
		"........",
		"........"
	};
	ChessChecker checker(chessBoard);
	ASSERT_EQ(false, checker.isBlack("A1"));
	ASSERT_EQ(false, checker.isBlack("E4"));
	ASSERT_EQ(true, checker.isBlack("D4"));
}

TEST(TestChessChecker, canPlaceThroughLeftTest)
{
	std::string chessBoard[] = {
		"........",
		"........",
		"........",
		"...BW...",
		"...WB...",
		"........",
		"........",
		"........"
	};

	ChessChecker checker(chessBoard);
	ASSERT_EQ(false, checker.canPlace(LEFT, 'B', "A1"));
	ASSERT_EQ(true, checker.canPlace(LEFT, 'B', "F4"));

	ASSERT_EQ(false, checker.canPlace(LEFT, 'W', "A1"));
	ASSERT_EQ(true, checker.canPlace(LEFT, 'W', "F5"));
}


TEST(TestChessChecker, canPlaceThroughRightTest)
{
	std::string chessBoard[] = {
		"........",
		"........",
		"........",
		"...BW...",
		"...WB...",
		"........",
		"........",
		"........"
	};

	ChessChecker checker(chessBoard);
	ASSERT_EQ(false, checker.canPlace(RIGHT, 'B', "A1"));
	ASSERT_EQ(true, checker.canPlace(RIGHT, 'B', "C5"));
	ASSERT_EQ(false, checker.canPlace(RIGHT, 'B', "B5"));

	ASSERT_EQ(false, checker.canPlace(RIGHT, 'W', "A1"));
	ASSERT_EQ(true, checker.canPlace(RIGHT, 'W', "C4"));
}

TEST(TestChessChecker, canPlaceThroughUpTest)
{
	std::string chessBoard[] = {
		"........",
		"........",
		"........",
		"...BW...",
		"...WB...",
		"........",
		"........",
		"........"
	};

	ChessChecker checker(chessBoard);
	ASSERT_EQ(true, checker.canPlace(UP, 'B', "D6"));
	ASSERT_EQ(false, checker.canPlace(UP, 'B', "E6"));

	ASSERT_EQ(false, checker.canPlace(UP, 'W', "A1"));
	ASSERT_EQ(true, checker.canPlace(UP, 'W', "E6"));
}

TEST(TestChessChecker, canPlaceThroughDownTest)
{
	std::string chessBoard[] = {
		"........",
		"........",
		"........",
		"...BW...",
		"...WB...",
		"........",
		"........",
		"........"
	};

	ChessChecker checker(chessBoard);
	ASSERT_EQ(true, checker.canPlace(DOWN, 'B', "E3"));
	ASSERT_EQ(false, checker.canPlace(DOWN, 'B', "A1"));

	ASSERT_EQ(false, checker.canPlace(DOWN, 'W', "A1"));
	ASSERT_EQ(true, checker.canPlace(DOWN, 'W', "D3"));
}

TEST(TestChessChecker, canPlaceThroughLeftUpTest)
{
	std::string chessBoard[] = {
		"........",
		"........",
		"..W.....",
		"..BBW...",
		"...WB...",
		"........",
		"........",
		"........"
	};

	ChessChecker checker(chessBoard);
	ASSERT_EQ(true, checker.canPlace(LEFT_UP, 'B', "E6"));
	ASSERT_EQ(false, checker.canPlace(LEFT_UP, 'B', "G1"));

	ASSERT_EQ(false, checker.canPlace(LEFT_UP, 'W', "E6"));
	ASSERT_EQ(true, checker.canPlace(LEFT_UP, 'W', "F6"));
}

TEST(TestChessChecker, canPlaceThroughRightUpTest)
{
	std::string chessBoard[] = {
		"........",
		"........",
		"........",
		"..BBWW..",
		"..WWB...",
		"........",
		"........",
		"........"
	};

	ChessChecker checker(chessBoard);
	ASSERT_EQ(true, checker.canPlace(RIGHT_UP, 'B', "B6"));
	ASSERT_EQ(false, checker.canPlace(RIGHT_UP, 'B', "G4"));

	ASSERT_EQ(false, checker.canPlace(RIGHT_UP, 'W', "C6"));
	ASSERT_EQ(true, checker.canPlace(RIGHT_UP, 'W', "D6"));
}

TEST(TestChessChecker, canPlaceThroughLeftDwonTest)
{
	std::string chessBoard[] = {
		"........",
		"........",
		"........",
		"..BBWW..",
		"..WWB...",
		"........",
		"........",
		"........"
	};

	ChessChecker checker(chessBoard);
	ASSERT_EQ(true, checker.canPlace(LEFT_DOWN, 'B', "G3"));
	ASSERT_EQ(false, checker.canPlace(LEFT_DOWN, 'B', "G4"));

	ASSERT_EQ(false, checker.canPlace(LEFT_DOWN, 'W', "C6"));
	ASSERT_EQ(true, checker.canPlace(LEFT_DOWN, 'W', "E3"));
}

TEST(TestChessChecker, canPlaceThroughRightDwonTest)
{
	std::string chessBoard[] = {
		"........",
		"........",
		"........",
		"..BBWW..",
		"..WWBB..",
		"........",
		"........",
		"........"
	};

	ChessChecker checker(chessBoard);
	ASSERT_EQ(true, checker.canPlace(RIGHT_DOWN, 'B', "D3"));
	ASSERT_EQ(false, checker.canPlace(RIGHT_DOWN, 'B', "G4"));

	ASSERT_EQ(false, checker.canPlace(RIGHT_DOWN, 'W', "C6"));
	ASSERT_EQ(true, checker.canPlace(RIGHT_DOWN, 'W', "B3"));
}
