/*
 * FUN_10022ce0 at 10022ce0
 * undefined FUN_10022ce0(void)
 * Address ranges: 10022ce0-10022d9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10022ce0(int param_1,ulonglong param_2,undefined4 param_3)

{
  byte *pbVar1;
  int extraout_w10;
  uint uVar2;
  undefined1 auStack_30 [16];
  
  FUN_10121020(auStack_30);
  uVar2 = (uint)param_2;
  if (*(char *)(param_1 + 0x220) == '\0') {
    FUN_1002f5d8(*(int *)(param_1 + 0xabc) + uVar2 * 0x40,param_3);
    FUN_10022b20(param_1,param_2 & 0xffffffff);
  }
  else {
    FUN_1002f5d8(*(int *)(*(int *)(param_1 + 0x210) + *(int *)(param_1 + 0x21c) * 4) + uVar2 * 0x40
                 + 0x660,param_3);
    pbVar1 = (byte *)(((uint)((param_2 & 0xffffffff) >> 3) & 3) +
                     extraout_w10 + ((uVar2 >> 5) + 0x24db) * 4);
    *pbVar1 = *pbVar1 | (byte)(1 << (ulonglong)(uVar2 & 7));
  }
  FUN_10120f70(auStack_30);
  return;
}

