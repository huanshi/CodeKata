
#include <string>
#include <gtest/gtest.h>

#include "ChessBoard.h"

TEST(TestChessBoard, getLeftPosTest)
{
	ASSERT_EQ("XX", ChessBoard::getInstance().getPos("A1", LEFT));
	ASSERT_EQ("A1", ChessBoard::getInstance().getPos("B1", LEFT));
}

TEST(TestChessBoard, getRightPosTest)
{
	ASSERT_EQ("XX", ChessBoard::getInstance().getPos("H1", RIGHT));
	ASSERT_EQ("H1", ChessBoard::getInstance().getPos("G1", RIGHT));
}
TEST(TestChessBoard, getUpPosTest)
{
	ASSERT_EQ("XX", ChessBoard::getInstance().getPos("H1", UP));
	ASSERT_EQ("G1", ChessBoard::getInstance().getPos("G2", UP));
}

TEST(TestChessBoard, getDownPosTest)
{
	ASSERT_EQ("XX", ChessBoard::getInstance().getPos("H8", DOWN));
	ASSERT_EQ("H8", ChessBoard::getInstance().getPos("H7", DOWN));
}

TEST(TestChessBoard, getLeftUpPosTest)
{
	ASSERT_EQ("XX", ChessBoard::getInstance().getPos("A1", LEFT_UP));
	ASSERT_EQ("XX", ChessBoard::getInstance().getPos("A2", LEFT_UP));
	ASSERT_EQ("XX", ChessBoard::getInstance().getPos("B1", LEFT_UP));
	ASSERT_EQ("A1", ChessBoard::getInstance().getPos("B2", LEFT_UP));
}

TEST(TestChessBoard, getRightUpPosTest)
{
	ASSERT_EQ("XX", ChessBoard::getInstance().getPos("H1", RIGHT_UP));
	ASSERT_EQ("XX", ChessBoard::getInstance().getPos("H2", RIGHT_UP));
	ASSERT_EQ("XX", ChessBoard::getInstance().getPos("G1", RIGHT_UP));
	ASSERT_EQ("H1", ChessBoard::getInstance().getPos("G2", RIGHT_UP));

	ASSERT_EQ("B7", ChessBoard::getInstance().getPos("A8", RIGHT_UP));
	ASSERT_EQ("B6", ChessBoard::getInstance().getPos("A7", RIGHT_UP));
	ASSERT_EQ("C7", ChessBoard::getInstance().getPos("B8", RIGHT_UP));
	ASSERT_EQ("C6", ChessBoard::getInstance().getPos("B7", RIGHT_UP));
}

TEST(TestChessBoard, getLeftDownPosTest)
{
	ASSERT_EQ("XX", ChessBoard::getInstance().getPos("A8", LEFT_DOWN));
	ASSERT_EQ("XX", ChessBoard::getInstance().getPos("A1", LEFT_DOWN));
	ASSERT_EQ("XX", ChessBoard::getInstance().getPos("B8", LEFT_DOWN));
	ASSERT_EQ("XX", ChessBoard::getInstance().getPos("G8", LEFT_DOWN));

	ASSERT_EQ("XX", ChessBoard::getInstance().getPos("H8", LEFT_DOWN));
	ASSERT_EQ("F8", ChessBoard::getInstance().getPos("G7", LEFT_DOWN));
	ASSERT_EQ("A3", ChessBoard::getInstance().getPos("B2", LEFT_DOWN));
	ASSERT_EQ("G8", ChessBoard::getInstance().getPos("H7", LEFT_DOWN));
}

TEST(TestChessBoard, getRightDownPosTest)
{
	ASSERT_EQ("XX", ChessBoard::getInstance().getPos("H8", RIGHT_DOWN));
	ASSERT_EQ("XX", ChessBoard::getInstance().getPos("H7", RIGHT_DOWN));
	ASSERT_EQ("XX", ChessBoard::getInstance().getPos("G8", RIGHT_DOWN));
	ASSERT_EQ("H8", ChessBoard::getInstance().getPos("G7", RIGHT_DOWN));

	ASSERT_EQ("B2", ChessBoard::getInstance().getPos("A1", RIGHT_DOWN));
	ASSERT_EQ("C2", ChessBoard::getInstance().getPos("B1", RIGHT_DOWN));
	ASSERT_EQ("B3", ChessBoard::getInstance().getPos("A2", RIGHT_DOWN));
	ASSERT_EQ("C3", ChessBoard::getInstance().getPos("B2", RIGHT_DOWN));
}

TEST(TestChessBoard, isInverseTest)
{
	ASSERT_EQ(false, ChessBoard::getInstance().isInverse('B', 'B'));
	ASSERT_EQ(true, ChessBoard::getInstance().isInverse('W', 'B'));
	ASSERT_EQ(true, ChessBoard::getInstance().isInverse('B', 'W'));
	ASSERT_EQ(false, ChessBoard::getInstance().isInverse('W', 'W'));
}

