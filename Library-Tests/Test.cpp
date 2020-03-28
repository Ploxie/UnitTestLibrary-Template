#include <gtest/gtest.h>
#include <ExampleClass.h>

TEST(ExampleTest, Test1)
{
    ExampleClass example;

    ASSERT_EQ(example.GetInteger(), 1);
}