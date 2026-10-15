/*
 * FUN_10024800 at 10024800
 * undefined FUN_10024800(void)
 * Address ranges: 10024800-1002487f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10024800(int param_1)

{
  undefined4 *puVar1;
  
  if (*(char *)(param_1 + 300) != '\0') {
    puVar1 = (undefined4 *)(param_1 + 0x24);
    FUN_10020e88(param_1 + 0xf0,*(undefined4 *)(param_1 + 0x20),*puVar1);
    FUN_10020e88(param_1 + 0x48,*(undefined4 *)(param_1 + 0x2c),*puVar1);
    FUN_10020e88(param_1 + 0x84,*(undefined4 *)(param_1 + 0x20),*puVar1);
    FUN_100914d0(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
    *(char *)(param_1 + 300) = '\0';
  }
  return;
}

