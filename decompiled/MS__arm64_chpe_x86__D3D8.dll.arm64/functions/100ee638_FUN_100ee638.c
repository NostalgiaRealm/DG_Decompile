/*
 * FUN_100ee638 at 100ee638
 * undefined FUN_100ee638(void)
 * Address ranges: 100ee638-100ee673
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ee638(int param_1,uint param_2)

{
  byte *pbVar1;
  
  if (param_2 != 0) {
    pbVar1 = (byte *)((param_2 & 0xff) + *(int *)(param_1 + 0x30));
    *pbVar1 = *pbVar1 & ((byte)((1 << (ulonglong)(param_2 >> 0x14 & 7)) + 0xff <<
                               (ulonglong)(param_2 >> 0x12 & 3)) ^ 0xff);
  }
  return;
}

