/*
 * FUN_100d78c0 at 100d78c0
 * undefined FUN_100d78c0(void)
 * Address ranges: 100d78c0-100d7a8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100d78c0(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  byte *pbVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 0x8876086c;
  if (((0xef < param_2 - 0x10 && param_2 < 0x104) ||
      ((param_2 == 0x104 && param_3 != 0) && param_3 < 0xe)) &&
     ((&DAT_10170a20)[param_3 * 8] != '\0')) {
    if (((*(uint *)(param_1 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
      bVar3 = false;
      *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
    }
    else {
      bVar3 = true;
      iVar4 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
      if (iVar4 == 0) {
        FUN_100071d0(0);
      }
    }
    if (*(char *)(param_1 + -0x62f0) == '\0') {
      FUN_100d3a00(param_1 + -0x66b4,param_2,param_3,param_4);
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + -0x6300) + *(int *)(param_1 + -0x62f4) * 4);
      iVar4 = iVar2 + param_3 * 4 + param_2 * 0x38;
      param_3 = param_3 + param_2 * 0xe;
      if (param_2 < 0x100) {
        *(undefined4 *)(iVar4 + 0x4abc) = param_4;
        iVar4 = 0x2b09;
      }
      else {
        *(undefined4 *)(iVar4 + 0x163c) = param_4;
        param_3 = param_3 - 0xe00;
        iVar4 = 0x2b10;
      }
      pbVar1 = (byte *)((param_3 >> 3 & 3) + iVar2 + (iVar4 + (param_3 >> 5)) * 4);
      *pbVar1 = *pbVar1 | (byte)(1 << (ulonglong)(param_3 & 7));
    }
    uVar5 = 0;
    if (bVar3) {
      (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
    }
    else {
      *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
    }
  }
  return uVar5;
}

