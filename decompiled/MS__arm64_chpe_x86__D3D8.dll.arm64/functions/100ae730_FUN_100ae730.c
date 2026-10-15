/*
 * FUN_100ae730 at 100ae730
 * undefined FUN_100ae730(void)
 * Address ranges: 100ae730-100ae747
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100ae730(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x18) >> (ulonglong)(param_2 & 0x1f);
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}

