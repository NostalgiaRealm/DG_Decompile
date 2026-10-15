/*
 * FUN_100b2e30 at 100b2e30
 * undefined FUN_100b2e30(void)
 * Address ranges: 100b2e30-100b2fa7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100b2e30(int param_1,ulonglong param_2,undefined4 param_3)

{
  byte *pbVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 auStack_40 [16];
  
  uVar4 = (uint)param_2;
  uVar5 = 0x8876086c;
  if ((uVar4 < 0xae && uVar4 != 0) && (*(char *)(*(int *)(param_1 + -0x58dc) + uVar4 * 8) != '\0'))
  {
    if (((*(uint *)(param_1 + -0x4dd4) >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
      bVar2 = false;
      *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
    }
    else {
      bVar2 = true;
      iVar3 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
      if (iVar3 == 0) {
        FUN_10006560(0);
      }
    }
    if (*(char *)(param_1 + -0x56c0) == '\0') {
      FUN_10121020(auStack_40);
      FUN_100b1a48(param_1 + -0x58e0,param_2 & 0xffffffff,param_3);
      FUN_10120f70(auStack_40);
    }
    else {
      iVar3 = *(int *)(*(int *)(param_1 + -0x56d0) + *(int *)(param_1 + -0x56c4) * 4);
      *(undefined4 *)(iVar3 + uVar4 * 4 + 8) = param_3;
      pbVar1 = (byte *)(((uint)((param_2 & 0xffffffff) >> 3) & 3) +
                       iVar3 + ((uVar4 >> 5) + 0x24cd) * 4);
      *pbVar1 = *pbVar1 | (byte)(1 << (ulonglong)(uVar4 & 7));
    }
    uVar5 = 0;
    if (bVar2) {
      (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
    }
    else {
      *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
    }
  }
  return uVar5;
}

