/*
 * FUN_1005bf70 at 1005bf70
 * undefined FUN_1005bf70(void)
 * Address ranges: 1005bf70-1005bfab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1005bf70(int param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)(((int)param_2 >> 3) + param_1 + 0x20);
  bVar1 = *pbVar2;
  *pbVar2 = bVar1 & ((byte)(1 << (ulonglong)(param_2 & 7)) ^ 0xff);
  return (bVar1 >> (ulonglong)(param_2 & 7) & 1) != 0;
}

