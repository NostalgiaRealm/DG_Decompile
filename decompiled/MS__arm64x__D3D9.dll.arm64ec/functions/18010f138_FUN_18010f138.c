/*
 * FUN_18010f138 at 18010f138
 * undefined FUN_18010f138(void)
 * Address ranges: 18010f138-18010f173
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18010f138(longlong param_1,uint param_2)

{
  byte bVar1;
  bool bVar2;
  
  if ((int)param_2 < 0) {
    bVar2 = false;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x14 + (longlong)((int)param_2 >> 3));
    *(byte *)(param_1 + 0x14 + (longlong)((int)param_2 >> 3)) =
         bVar1 | (byte)(1 << (ulonglong)(param_2 & 7));
    bVar2 = (bVar1 >> (ulonglong)(param_2 & 7) & 1) != 0;
  }
  return bVar2;
}

