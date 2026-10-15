/*
 * FUN_100a01f0 at 100a01f0
 * undefined FUN_100a01f0(void)
 * Address ranges: 100a01f0-100a0207
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100a01f0(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x130) >> (ulonglong)(param_2 & 0x1f);
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}

