/*
 * FUN_10011240 at 10011240
 * undefined FUN_10011240(void)
 * Address ranges: 10011240-10011273
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10011240(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_2 + param_3 * 0x10;
  return (*(byte *)((uVar1 >> 3 & 3) + param_1 + ((uVar1 >> 5) + 2) * 4) >> (ulonglong)(uVar1 & 7) &
         1) != 0;
}

