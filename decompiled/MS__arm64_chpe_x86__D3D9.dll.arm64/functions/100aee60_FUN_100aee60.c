/*
 * FUN_100aee60 at 100aee60
 * undefined FUN_100aee60(void)
 * Address ranges: 100aee60-100aee77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100aee60(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xe0) >> (ulonglong)(param_2 & 0x1f);
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}

