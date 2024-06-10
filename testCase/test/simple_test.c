#include "unity.h"
#include "esp_system.h"

void test_print_hello_world(void)
{
    printf("Hello, World!\n");
    TEST_ASSERT_TRUE(true);  // Simple test to always pass
}

void app_main(void)
{
    // Initialize Unity
    UNITY_BEGIN();
    
    // Run the test
    RUN_TEST(test_print_hello_world);

    // Finalize Unity
    UNITY_END();
}