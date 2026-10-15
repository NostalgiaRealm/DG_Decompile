/*
 * FUN_10012ef0 at 10012ef0
 * undefined FUN_10012ef0(void)
 * Address ranges: 10012ef0-10012f57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10012ef0(int param_1,undefined4 param_2,uint *param_3)

{
  byte *pbVar1;
  
  if ((char)param_3[1] != '\0') {
    pbVar1 = (byte *)((*param_3 >> 3 & 0x1f) + param_1 + 0x10);
    *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(*param_3 & 7)) ^ 0xff);
    return;
  }
  FUN_10002350(param_2,0x8f0200000000,*param_3,0xffffffff,0,0);
  return;
}

