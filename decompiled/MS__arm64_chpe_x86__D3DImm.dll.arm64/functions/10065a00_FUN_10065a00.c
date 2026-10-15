/*
 * FUN_10065a00 at 10065a00
 * undefined FUN_10065a00(void)
 * Address ranges: 10065a00-10065a37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10065a00(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x20 + uVar1 * 0x1c) != 0) {
      *(undefined4 *)(param_1 + uVar1 * 0x1c + 0x20) = 0;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 2);
  return;
}

