/*
 * FUN_1006e870 at 1006e870
 * undefined FUN_1006e870(void)
 * Address ranges: 1006e870-1006e8ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006e870(int param_1,uint param_2)

{
  byte *pbVar1;
  
  if (param_2 != 0) {
    pbVar1 = (byte *)((param_2 & 0xff) + *(int *)(param_1 + 0x30));
    *pbVar1 = *pbVar1 & ((byte)((1 << (ulonglong)(param_2 >> 0x14 & 7)) + 0xff <<
                               (ulonglong)(param_2 >> 0x12 & 3)) ^ 0xff);
  }
  return;
}

