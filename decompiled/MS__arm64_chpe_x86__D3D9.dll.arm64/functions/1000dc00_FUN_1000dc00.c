/*
 * FUN_1000dc00 at 1000dc00
 * undefined FUN_1000dc00(void)
 * Address ranges: 1000dc00-1000dc47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000dc00(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)(param_1 + 26000 + uVar1 * 4) == param_2) {
      *(uint *)(param_1 + 0x668c) = 1 << (ulonglong)(uVar1 & 0x1f) | *(uint *)(param_1 + 0x668c);
      return;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  return;
}

