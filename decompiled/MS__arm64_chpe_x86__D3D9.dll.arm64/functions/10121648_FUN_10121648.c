/*
 * FUN_10121648 at 10121648
 * undefined FUN_10121648(void)
 * Address ranges: 10121648-10121683
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10121648(int param_1,uint param_2)

{
  byte *pbVar1;
  
  if (param_2 != 0) {
    pbVar1 = (byte *)((param_2 & 0xff) + *(int *)(param_1 + 0x30));
    *pbVar1 = *pbVar1 & ((byte)((1 << (ulonglong)(param_2 >> 0x14 & 7)) + 0xff <<
                               (ulonglong)(param_2 >> 0x12 & 3)) ^ 0xff);
  }
  return;
}

