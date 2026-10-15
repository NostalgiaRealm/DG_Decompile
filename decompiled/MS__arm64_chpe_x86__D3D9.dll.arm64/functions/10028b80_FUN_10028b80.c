/*
 * FUN_10028b80 at 10028b80
 * undefined FUN_10028b80(void)
 * Address ranges: 10028b80-10028c3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10028b80(int param_1,ulonglong param_2,undefined4 param_3)

{
  byte *pbVar1;
  int extraout_w10;
  uint uVar2;
  undefined1 auStack_30 [16];
  
  FUN_10157b40(auStack_30);
  uVar2 = (uint)param_2;
  if (*(char *)(param_1 + 0x3c4) == '\0') {
    FUN_100390d8(*(int *)(param_1 + 0xd80) + uVar2 * 0x40,param_3);
    FUN_100289c0(param_1,param_2 & 0xffffffff);
  }
  else {
    FUN_100390d8(*(int *)(*(int *)(param_1 + 0x3b4) + *(int *)(param_1 + 0x3c0) * 4) + uVar2 * 0x40
                 + 0x770,param_3);
    pbVar1 = (byte *)(((uint)((param_2 & 0xffffffff) >> 3) & 3) +
                     extraout_w10 + ((uVar2 >> 5) + 0x2afa) * 4);
    *pbVar1 = *pbVar1 | (byte)(1 << (ulonglong)(uVar2 & 7));
  }
  FUN_10157a90(auStack_30);
  return;
}

