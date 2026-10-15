/*
 * FUN_1000c940 at 1000c940
 * undefined FUN_1000c940(void)
 * Address ranges: 1000c940-1000c987
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000c940(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x57bc + uVar1 * 4) == param_2) {
      *(uint *)(param_1 + 0x58ac) = 1 << (ulonglong)(uVar1 & 0x1f) | *(uint *)(param_1 + 0x58ac);
      return;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  return;
}

