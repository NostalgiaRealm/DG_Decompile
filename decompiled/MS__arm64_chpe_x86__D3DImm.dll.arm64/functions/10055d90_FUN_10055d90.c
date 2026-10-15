/*
 * FUN_10055d90 at 10055d90
 * undefined FUN_10055d90(void)
 * Address ranges: 10055d90-10055e9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10055d90(int param_1,ulonglong param_2,undefined4 param_3)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auStack_40 [16];
  
  uVar4 = (uint)param_2;
  uVar3 = 0x80070057;
  if ((uVar4 < 0x99 && uVar4 != 0) && (*(char *)(*(int *)(param_1 + 4) + uVar4 * 8) != '\0')) {
    iVar2 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
    if (iVar2 == 0) {
      FUN_1004bc70(0);
    }
    if (*(char *)(param_1 + 0x224) == '\0') {
      FUN_10096840(auStack_40);
      FUN_100520b0(param_1,param_2 & 0xffffffff,param_3);
      FUN_10096790(auStack_40);
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0x214) + *(int *)(param_1 + 0x220) * 4);
      *(undefined4 *)(iVar2 + uVar4 * 4 + 8) = param_3;
      pbVar1 = (byte *)(((uint)((param_2 & 0xffffffff) >> 3) & 3) +
                       iVar2 + ((uVar4 >> 5) + 0x287) * 4);
      *pbVar1 = *pbVar1 | (byte)(1 << (ulonglong)(uVar4 & 7));
    }
    uVar3 = 0;
    (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  }
  return uVar3;
}

