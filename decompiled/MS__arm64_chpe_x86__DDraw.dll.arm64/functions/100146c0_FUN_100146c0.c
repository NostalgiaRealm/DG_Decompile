/*
 * FUN_100146c0 at 100146c0
 * undefined FUN_100146c0(void)
 * Address ranges: 100146c0-100146d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100146c0(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xe0) >> (ulonglong)(param_2 & 0x1f);
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}

