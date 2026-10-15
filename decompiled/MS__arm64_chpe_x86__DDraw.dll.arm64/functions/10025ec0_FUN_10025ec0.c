/*
 * FUN_10025ec0 at 10025ec0
 * undefined FUN_10025ec0(void)
 * Address ranges: 10025ec0-10025ed7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10025ec0(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x134) >> (ulonglong)(param_2 & 0x1f);
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}

