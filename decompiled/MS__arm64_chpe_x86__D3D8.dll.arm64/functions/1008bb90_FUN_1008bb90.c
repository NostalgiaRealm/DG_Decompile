/*
 * FUN_1008bb90 at 1008bb90
 * undefined FUN_1008bb90(void)
 * Address ranges: 1008bb90-1008bbc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1008bb90(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_2 + param_3 * 0x10;
  return (*(byte *)((uVar1 >> 3 & 3) + param_1 + ((uVar1 >> 5) + 5) * 4) >> (ulonglong)(uVar1 & 7) &
         1) != 0;
}

