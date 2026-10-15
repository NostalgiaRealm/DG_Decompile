/*
 * FUN_10012d60 at 10012d60
 * undefined FUN_10012d60(void)
 * Address ranges: 10012d60-10012d8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10012d60(int param_1,uint param_2)

{
  byte *pbVar1;
  
  if (-1 < (int)param_2) {
    pbVar1 = (byte *)(((int)param_2 >> 3) + param_1 + 0x14);
    *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(param_2 & 7)) ^ 0xff);
  }
  return;
}

