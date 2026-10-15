/*
 * FUN_10058760 at 10058760
 * undefined FUN_10058760(void)
 * Address ranges: 10058760-1005879b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10058760(int param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)(((int)param_2 >> 3) + param_1 + 0x20);
  bVar1 = *pbVar2;
  *pbVar2 = bVar1 & ((byte)(1 << (ulonglong)(param_2 & 7)) ^ 0xff);
  return (bVar1 >> (ulonglong)(param_2 & 7) & 1) != 0;
}

