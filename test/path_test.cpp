#include "xzero.h"
#include "gtest/gtest.h"

TEST(KSGPathTest, ExistedDirectory)
{
    EXPECT_EQ(true, xzero::KG_IsDirExisted("C:/Windows"));
}

TEST(KSGPathTest, NotExistedDirectory)
{
    EXPECT_EQ(false, xzero::KG_IsDirExisted("C:/Linux"));
}

TEST(KSGPathTest, ExistedFile)
{
    EXPECT_EQ(true, xzero::KG_IsFileExisted("C:/Windows/System32/wininit.exe"));
}

TEST(KSGPathTest, NotExistedFile)
{
    EXPECT_EQ(false, xzero::KG_IsDirExisted("C:/Windows/System32/NotExistedFile.exe"));
}

TEST(KSGPathTest, ExistedPath)
{
    EXPECT_EQ(true, xzero::KG_CreatePath("C:/Windows/System32/"));
}

TEST(KSGPathTest, NotExistedPath)
{
    EXPECT_EQ(true, xzero::KG_CreatePath("D:/NotExistedPath1/NotExistedPath2/NotExistedPath3/"));
}
