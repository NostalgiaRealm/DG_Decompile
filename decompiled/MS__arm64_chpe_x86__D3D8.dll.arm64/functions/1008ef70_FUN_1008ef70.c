/*
 * FUN_1008ef70 at 1008ef70
 * undefined FUN_1008ef70(void)
 * Address ranges: 1008ef70-1008ef87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1008ef70(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xe0) >> (ulonglong)(param_2 & 0x1f);
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}

