/* Coffee Selection in ARM Assembly
 * Author: [Your Name]
 * Date: [Date]
 * Description: Simulates a coffee selection process using inline ARM assembly.
 */

#include <MKL25Z4.H>

__asm void Coffee(int a, int b, int c, int d, int e) {
    // Coffee type
    CMP  r0, #0x0
    BNE check_frappe
    MOVS r5, #0x0        // Nescafe
check_frappe
    CMP  r0, #0x1
    BNE check_french
    MOVS r5, #0x1        // Frappe
check_french
    CMP  r0, #0x2
    BNE check_espresso
    MOVS r5, #0x2        // French
check_espresso
    CMP  r0, #0x3
    BNE sugar_check
    MOVS r5, #0x3        // Espresso

// Sugar level
sugar_check
    CMP  r1, #0x1
    BNE sugar_medium
    MOVS r6, #0x1        // Sketos
sugar_medium
    CMP  r1, #0x2
    BNE sugar_sweet
    MOVS r6, #0x2        // Metrios
sugar_sweet
    CMP  r1, #0x3
    BNE milk_check
    MOVS r6, #0x3        // Glykos

// Milk
milk_check
    CMP  r2, #0x1
    BNE no_milk
    MOVS r7, #0x1        // With milk
no_milk
    CMP  r2, #0x0
    BNE cinnamon_check
    MOVS r7, #0x0        // No milk

// Cinnamon
cinnamon_check
    CMP  r3, #0x1
    BNE no_cinnamon
    MOVS r0, #0x1        // With cinnamon
no_cinnamon
    CMP  r3, #0x0
    BNE stir_check
    MOVS r0, #0x0        // Without cinnamon

// Stirring (Anadeusi)
stir_check
    CMP  r4, #0x1
    BNE no_stir
    MOVS r1, #0x1        // With stirring
no_stir
    CMP  r4, #0x0
    BNE end
    MOVS r1, #0x0        // Without stirring
end
    BX LR
}

int main(void) {
    int a = 1; // Frappe
    int b = 2; // Metrios
    int c = 1; // With milk
    int d = 0; // No cinnamon
    int e = 0; // No stirring

    Coffee(a, b, c, d, e);

    while (1);
}
