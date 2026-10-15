/*
 * FUN_100a0210 at 100a0210
 * undefined FUN_100a0210(void)
 * Address ranges: 100a0210-100a0227
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100a0210(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x134) >> (ulonglong)(param_2 & 0x1f);
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}

