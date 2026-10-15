/*
 * FUN_100d7120 at 100d7120
 * undefined FUN_100d7120(void)
 * Address ranges: 100d7120-100d7297
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100d7120(int param_1,ulonglong param_2,undefined4 param_3)

{
  byte *pbVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 auStack_40 [16];
  
  uVar4 = (uint)param_2;
  uVar5 = 0x8876086c;
  if ((uVar4 < 0xd2 && uVar4 != 0) && (*(char *)(*(int *)(param_1 + -0x66b0) + uVar4 * 8) != '\0'))
  {
    if (((*(uint *)(param_1 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
      bVar2 = false;
      *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
    }
    else {
      bVar2 = true;
      iVar3 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
      if (iVar3 == 0) {
        FUN_100071d0(0);
      }
    }
    if (*(char *)(param_1 + -0x62f0) == '\0') {
      FUN_10157b40(auStack_40);
      FUN_100d34a8(param_1 + -0x66b4,param_2 & 0xffffffff,param_3);
      FUN_10157a90(auStack_40);
    }
    else {
      iVar3 = *(int *)(*(int *)(param_1 + -0x6300) + *(int *)(param_1 + -0x62f4) * 4);
      *(undefined4 *)(iVar3 + uVar4 * 4 + 8) = param_3;
      pbVar1 = (byte *)(((uint)((param_2 & 0xffffffff) >> 3) & 3) +
                       iVar3 + ((uVar4 >> 5) + 0x2aea) * 4);
      *pbVar1 = *pbVar1 | (byte)(1 << (ulonglong)(uVar4 & 7));
    }
    uVar5 = 0;
    if (bVar2) {
      (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
    }
    else {
      *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
    }
  }
  return uVar5;
}

