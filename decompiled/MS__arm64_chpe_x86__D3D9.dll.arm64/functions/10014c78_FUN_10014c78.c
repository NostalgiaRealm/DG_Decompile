/*
 * FUN_10014c78 at 10014c78
 * undefined FUN_10014c78(void)
 * Address ranges: 10014c78-10014cbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10014c78(int param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  
  if ((int)param_2 < 0) {
    bVar3 = false;
  }
  else {
    pbVar2 = (byte *)(((int)param_2 >> 3) + param_1 + 0x14);
    bVar1 = *pbVar2;
    *pbVar2 = bVar1 | (byte)(1 << (ulonglong)(param_2 & 7));
    bVar3 = (bVar1 >> (ulonglong)(param_2 & 7) & 1) != 0;
  }
  return bVar3;
}

