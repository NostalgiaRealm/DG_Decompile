/*
 * FUN_10079a60 at 10079a60
 * undefined FUN_10079a60(void)
 * Address ranges: 10079a60-10079a9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10079a60(int param_1,uint param_2)

{
  byte *pbVar1;
  
  if (param_2 != 0) {
    pbVar1 = (byte *)((param_2 & 0xff) + *(int *)(param_1 + 0x30));
    *pbVar1 = *pbVar1 & ((byte)((1 << (ulonglong)(param_2 >> 0x14 & 7)) + 0xff <<
                               (ulonglong)(param_2 >> 0x12 & 3)) ^ 0xff);
  }
  return;
}

