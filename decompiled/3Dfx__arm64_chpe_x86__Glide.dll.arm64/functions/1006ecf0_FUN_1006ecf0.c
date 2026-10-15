/*
 * FUN_1006ecf0 at 1006ecf0
 * undefined FUN_1006ecf0(void)
 * Address ranges: 1006ecf0-1006ed2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006ecf0(int param_1,uint param_2)

{
  byte *pbVar1;
  
  if (param_2 != 0) {
    pbVar1 = (byte *)((param_2 & 0xff) + *(int *)(param_1 + 0x30));
    *pbVar1 = *pbVar1 & ((byte)((1 << (ulonglong)(param_2 >> 0x14 & 7)) + 0xff <<
                               (ulonglong)(param_2 >> 0x12 & 3)) ^ 0xff);
  }
  return;
}

