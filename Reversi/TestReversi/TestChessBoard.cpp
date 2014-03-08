
#include <string>
#include <gtest/gtest.h>

#include "ChessBoard.h"

TEST(TestChessBoard, getLeftPosTest)
{
	ChessBoard board;
	ASSERT_EQ("XX", board.getLeftPos("A1"));
	ASSERT_EQ("A1", board.getLeftPos("B1"));
}

TEST(TestChessBoard, getRightPosTest)
{
	ChessBoard board;
	ASSERT_EQ("XX", board.getRightPos("H1"));
	ASSERT_EQ("H1", board.getRightPos("G1"));
}
TEST(TestChessBoard, getUpPosTest)
{
	ChessBoard board;
	ASSERT_EQ("XX", board.getUpPos("H1"));
	ASSERT_EQ("G1", board.getUpPos("G2"));
}

TEST(TestChessBoard, getDownPosTest)
{
	ChessBoard board;
	ASSERT_EQ("XX", board.getDownPos("H8"));
	ASSERT_EQ("H8", board.getDownPos("H7"));
}

TEST(TestChessBoard, getLeftUpPosTest)
{
	ChessBoard board;
	ASSERT_EQ("XX", board.getLeftUpPos("A1"));
	ASSERT_EQ("XX", board.getLeftUpPos("A2"));
	ASSERT_EQ("XX", board.getLeftUpPos("B1"));
	ASSERT_EQ("A1", board.getLeftUpPos("B2"));
}

TEST(TestChessBoard, getRightUpPosTest)
{
	ChessBoard board;
	ASSERT_EQ("XX", board.getRightUpPos("H1"));
	ASSERT_EQ("XX", board.getRightUpPos("H2"));
	ASSERT_EQ("XX", board.getRightUpPos("G1"));
	ASSERT_EQ("H1", board.getRightUpPos("G2"));

	ASSERT_EQ("B7", board.getRightUpPos("A8"));
	ASSERT_EQ("B6", board.getRightUpPos("A7"));
	ASSERT_EQ("C7", board.getRightUpPos("B8"));
	ASSERT_EQ("C6", board.getRightUpPos("B7"));
}

TEST(TestChessBoard, getLeftDownPosTest)
{
	ChessBoard board;
	ASSERT_EQ("XX", board.getLeftDownPos("A8"));
	ASSERT_EQ("XX", board.getLeftDownPos("A1"));
	ASSERT_EQ("XX", board.getLeftDownPos("B8"));
	ASSERT_EQ("XX", board.getLeftDownPos("G8"));

	ASSERT_EQ("XX", board.getLeftDownPos("H8"));
	ASSERT_EQ("F8", board.getLeftDownPos("G7"));
	ASSERT_EQ("A3", board.getLeftDownPos("B2"));
	ASSERT_EQ("G8", board.getLeftDownPos("H7"));
}

TEST(TestChessBoard, getRightDownPosTest)
{
	ChessBoard board;
	ASSERT_EQ("XX", board.getRightDownPos("H8"));
	ASSERT_EQ("XX", board.getRightDownPos("H7"));
	ASSERT_EQ("XX", board.getRightDownPos("G8"));
	ASSERT_EQ("H8", board.getRightDownPos("G7"));

	ASSERT_EQ("B2", board.getRightDownPos("A1"));
	ASSERT_EQ("C2", board.getRightDownPos("B1"));
	ASSERT_EQ("B3", board.getRightDownPos("A2"));
	ASSERT_EQ("C3", board.getRightDownPos("B2"));
}

TEST(TestChessBoard, isInverseTest)
{
	ChessBoard board;
	ASSERT_EQ(false, board.isInverse('B', 'B'));
	ASSERT_EQ(true, board.isInverse('W', 'B'));
	ASSERT_EQ(true, board.isInverse('B', 'W'));
	ASSERT_EQ(false, board.isInverse('W', 'W'));
}

