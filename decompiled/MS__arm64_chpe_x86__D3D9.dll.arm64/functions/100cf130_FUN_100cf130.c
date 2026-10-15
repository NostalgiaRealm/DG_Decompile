/*
 * FUN_100cf130 at 100cf130
 * undefined FUN_100cf130(void)
 * Address ranges: 100cf130-100cf147
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100cf130(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x14) >> (ulonglong)(param_2 & 0x1f);
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}

