/*
 * FUN_100582e0 at 100582e0
 * undefined FUN_100582e0(void)
 * Address ranges: 100582e0-1005831b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100582e0(int param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)(((int)param_2 >> 3) + param_1 + 0x20);
  bVar1 = *pbVar2;
  *pbVar2 = bVar1 & ((byte)(1 << (ulonglong)(param_2 & 7)) ^ 0xff);
  return (bVar1 >> (ulonglong)(param_2 & 7) & 1) != 0;
}

