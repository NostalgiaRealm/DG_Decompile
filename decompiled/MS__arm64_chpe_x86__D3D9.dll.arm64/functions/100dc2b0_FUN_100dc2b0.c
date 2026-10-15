/*
 * FUN_100dc2b0 at 100dc2b0
 * undefined FUN_100dc2b0(void)
 * Address ranges: 100dc2b0-100dc56b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_100dc2b0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,uint param_7)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_44 [4];
  
  uVar7 = 0x8876086c;
  if (((*(uint *)(param_1 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar3 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    bVar3 = true;
    iVar5 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar5 == 0) {
      FUN_100071d0(0);
    }
  }
  if ((((param_2 - 1U < 6) && (param_7 < *(uint *)(*(int *)(param_1 + 0x50) + 0xb4))) &&
      (*(char *)(param_1 + -0x6410) != '\0')) && (*(int *)(param_1 + -0x128) != 0)) {
    iVar2 = param_1 + -0x66b4;
    iVar5 = *(int *)(param_1 + -0x6268);
    uVar7 = 0;
    uVar4 = FUN_100dac70(iVar2);
    uVar6 = FUN_100dad10(iVar2,uVar4,iVar5 != 0);
    uVar8 = FUN_100d3bd0(iVar2,uVar6);
    if ((((uVar8 & 1) != 0) && (uVar8 = FUN_100dadb0(iVar2), (uVar8 & 1) != 0)) &&
       ((uVar8 = FUN_100db290(iVar2), (uVar8 & 1) != 0 &&
        (uVar8 = FUN_100d4070(iVar2), (uVar8 & 1) != 0)))) {
      uVar7 = 0x8876086c;
      if ((((*(uint *)(*(int *)(param_1 + 0x5c24) + 0x10) & *(uint *)(param_1 + -0x60) &
            (*(uint *)(param_1 + -100) ^ 0xffffffff)) == 0) &&
          (uVar7 = 0, *(char *)(param_1 + -0x17) == '\0')) && (*(int *)(param_1 + -0x669c) != 0)) {
        FUN_10157b40(auStack_44);
        uVar8 = FUN_10010a40(iVar2,*(undefined4 *)(param_1 + 0x5c24));
        if (((uVar8 & 1) == 0) ||
           ((*(int *)(param_1 + -0x6064) == 0 && (*(char *)(param_1 + -0x15) != '\0')))) {
          uVar10 = 1;
        }
        else {
          uVar10 = 3;
        }
        uVar1 = *(uint *)(param_1 + -0x6304);
        uVar9 = 4;
        if (*(int *)(param_1 + -0x6064) == 0) {
          uVar9 = 0;
        }
        uVar10 = uVar9 | uVar1 & 0xfffffff9 | uVar10;
        *(uint *)(param_1 + -0x6304) = uVar10;
        *(byte *)(param_1 + -0x59ee) = uVar10 != uVar1 | *(byte *)(param_1 + -0x59ee);
        iVar5 = *(int *)(param_1 + 0x5bd0);
        FUN_100d4440(iVar2);
        FUN_1000b700(iVar2,iVar5 == 0);
        uVar7 = FUN_10012180(iVar2,param_1 + 0x5c24,param_3,param_2,param_4,param_5,param_6,param_7)
        ;
        FUN_10157a90(auStack_44);
      }
    }
  }
  if (bVar3) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return uVar7;
}

