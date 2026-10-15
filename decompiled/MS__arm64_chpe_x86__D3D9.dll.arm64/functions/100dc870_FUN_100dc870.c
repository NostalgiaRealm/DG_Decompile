/*
 * FUN_100dc870 at 100dc870
 * undefined FUN_100dc870(void)
 * Address ranges: 100dc870-100dcb7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_100dc870(int param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5,int param_6,
            int param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_50 [16];
  
  uVar9 = 0x8876086c;
  if (((*(uint *)(param_1 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar4 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    bVar4 = true;
    iVar7 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar7 == 0) {
      FUN_100071d0(0);
    }
  }
  if ((((param_2 - 1U < 6 && param_8 != 0) &&
       (param_5 < *(uint *)(*(int *)(param_1 + 0x50) + 0xb4) && param_6 != 0)) &&
      (param_7 - 0x65U < 2)) && (*(char *)(param_1 + -0x6410) != '\0')) {
    iVar2 = param_1 + -0x66b4;
    iVar7 = *(int *)(param_1 + -0x6268);
    uVar9 = 0;
    uVar6 = FUN_100dac70(iVar2);
    uVar8 = FUN_100dad10(iVar2,uVar6,iVar7 != 0);
    uVar10 = FUN_100d3bd0(iVar2,uVar8);
    if ((((uVar10 & 1) != 0) && (uVar10 = FUN_100dadb0(iVar2), (uVar10 & 1) != 0)) &&
       ((uVar10 = FUN_100db290(iVar2), (uVar10 & 1) != 0 &&
        (uVar10 = FUN_100d4070(iVar2), (uVar10 & 1) != 0)))) {
      uVar9 = 0x8876086c;
      if ((((*(uint *)(*(int *)(param_1 + 0x5c24) + 0x10) & *(uint *)(param_1 + -0x60)) == 1) &&
          (uVar9 = 0, *(char *)(param_1 + -0x17) == '\0')) && (*(int *)(param_1 + -0x669c) != 0)) {
        FUN_10157b40(auStack_50);
        if ((*(int *)(param_1 + -0x6064) == 0) && (*(char *)(param_1 + -0x15) != '\0')) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((*(int *)(param_1 + -0x6268) == 0) && (*(int *)(*(int *)(param_1 + 0x5c24) + 4) == 0)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        uVar11 = 3;
        if (!bVar3 || !bVar5) {
          uVar11 = 1;
        }
        uVar1 = *(uint *)(param_1 + -0x6304);
        uVar12 = 4;
        if (*(int *)(param_1 + -0x6064) == 0) {
          uVar12 = 0;
        }
        uVar11 = uVar12 | uVar1 & 0xfffffff9 | uVar11;
        *(uint *)(param_1 + -0x6304) = uVar11;
        *(byte *)(param_1 + -0x59ee) = uVar11 != uVar1 | *(byte *)(param_1 + -0x59ee);
        iVar7 = *(int *)(param_1 + 0x5bd0);
        FUN_100d4440(iVar2);
        FUN_1000b700(iVar2,iVar7 == 0);
        uVar9 = FUN_10011750(iVar2,param_1 + 0x5c24,param_2,param_3,param_4,param_5,param_6,param_7,
                             param_8);
        FUN_10157a90(auStack_50);
      }
    }
  }
  if (bVar4) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return uVar9;
}

