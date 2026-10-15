/*
 * FUN_100112e0 at 100112e0
 * undefined FUN_100112e0(void)
 * Address ranges: 100112e0-10011313
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100112e0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_2 + param_3 * 0x10;
  return (*(byte *)((uVar1 >> 3 & 3) + param_1 + ((uVar1 >> 5) + 5) * 4) >> (ulonglong)(uVar1 & 7) &
         1) != 0;
}

