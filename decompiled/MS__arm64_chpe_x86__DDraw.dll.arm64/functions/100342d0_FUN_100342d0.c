/*
 * FUN_100342d0 at 100342d0
 * undefined FUN_100342d0(void)
 * Address ranges: 100342d0-100342e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100342d0(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x14) >> (ulonglong)(param_2 & 0x1f);
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}

