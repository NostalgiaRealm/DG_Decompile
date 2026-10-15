/*
 * FUN_100dbd30 at 100dbd30
 * undefined FUN_100dbd30(void)
 * Address ranges: 100dbd30-100dc2a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100dbd30(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  undefined1 auVar15 [16];
  undefined1 auStack_11c [4];
  undefined1 auStack_118 [216];
  
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
  uVar9 = 0x8876086c;
  if (((5 < param_2 - 1U) || (*(uint *)(*(int *)(param_1 + 0x50) + 0xb4) <= param_4)) ||
     (*(char *)(param_1 + -0x6410) == '\0')) goto LAB_100dc258;
  iVar2 = param_1 + -0x66b4;
  iVar7 = *(int *)(param_1 + -0x6268);
  uVar9 = 0;
  uVar6 = FUN_100dac70(iVar2);
  uVar8 = FUN_100dad10(iVar2,uVar6,iVar7 != 0);
  uVar10 = FUN_100d3bd0(iVar2,uVar8);
  if ((((uVar10 & 1) == 0) || (uVar10 = FUN_100dadb0(iVar2), (uVar10 & 1) == 0)) ||
     ((uVar10 = FUN_100db290(iVar2), (uVar10 & 1) == 0 ||
      (uVar10 = FUN_100d4070(iVar2), (uVar10 & 1) == 0)))) goto LAB_100dc258;
  uVar9 = 0x8876086c;
  if ((((*(uint *)(*(int *)(param_1 + 0x5c24) + 0x10) & *(uint *)(param_1 + -0x60) &
        (*(uint *)(param_1 + -100) ^ 0xffffffff)) != 0) ||
      (uVar9 = 0, *(char *)(param_1 + -0x17) != '\0')) || (*(int *)(param_1 + -0x669c) == 0))
  goto LAB_100dc258;
  FUN_10157b40(auStack_11c);
  uVar10 = FUN_10010a40(iVar2,*(undefined4 *)(param_1 + 0x5c24));
  if (((uVar10 & 1) == 0) ||
     ((*(int *)(param_1 + -0x6064) == 0 && (*(char *)(param_1 + -0x15) != '\0')))) {
    uVar14 = 1;
  }
  else {
    uVar14 = 3;
  }
  uVar1 = *(uint *)(param_1 + -0x6304);
  uVar13 = 4;
  if (*(int *)(param_1 + -0x6064) == 0) {
    uVar13 = 0;
  }
  uVar14 = uVar13 | uVar1 & 0xfffffff9 | uVar14;
  *(uint *)(param_1 + -0x6304) = uVar14;
  *(byte *)(param_1 + -0x59ee) = uVar14 != uVar1 | *(byte *)(param_1 + -0x59ee);
  iVar7 = *(int *)(param_1 + 0x5bd0);
  FUN_100d4440(iVar2);
  FUN_1000b700(iVar2,iVar7 == 0);
  if (*(char *)(param_1 + 0x5c38) == '\0') {
    uVar9 = FUN_10011a80(iVar2,param_1 + 0x5c24,param_2,param_3,param_4);
  }
  else {
    FUN_100daba0(iVar2,*(undefined4 *)(param_1 + 0x5c24),param_1 + 0x5bdc,param_3,auStack_118);
    pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    auVar15 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(auVar15._0_8_ & 0xffffffff,auVar15._8_8_ & 0xffffffff,
                    *(undefined4 *)(param_1 + 0x5c28),*(undefined4 *)(param_1 + 0x5c2c),auStack_118)
    ;
    if ((*(char *)(param_1 + -0x5927) == '\0') &&
       (*(char *)(*(int *)(param_1 + -0x66a8) + 0x75e) == '\0')) {
      if (*(char *)(param_1 + -0x6413) != '\0') {
        bVar3 = false;
        goto LAB_100dc07c;
      }
    }
    else {
      bVar3 = true;
LAB_100dc07c:
      uVar8 = (*pcVar5)();
      (*extraout_w11_00)(uVar8);
      uVar8 = (*pcVar5)();
      (*extraout_w11_01)(uVar8,*(undefined4 *)(param_1 + -0x641c),*(undefined4 *)(param_1 + -0x6418)
                        );
      if (bVar3) {
        uVar8 = (*pcVar5)();
        (*extraout_w11_02)(uVar8,*(undefined4 *)(param_1 + -0x641c),
                           *(undefined4 *)(param_1 + -0x6418));
        if (*(char *)(*(int *)(param_1 + -0x66a8) + 0x75f) != '\0') {
          (*(code *)PTR_FUN_1016c068)();
        }
      }
    }
    if (*(char *)(param_1 + -0x6412) == '\0') {
      uVar8 = (*pcVar5)();
      (*extraout_w11_03)(uVar8);
      if (*(int *)(param_1 + -0x668c) != 0) {
        uVar8 = (*pcVar5)();
        (*extraout_w11_04)(uVar8);
      }
      *(char *)(param_1 + -0x6412) = '\x01';
    }
    if (*(char *)(param_1 + -0x6411) != '\0') {
      if (*(int *)(param_1 + -0x621c) != 0) {
        puVar11 = (undefined4 *)(param_1 + -0x6418);
        puVar12 = (undefined4 *)(param_1 + -0x641c);
        uVar8 = (*pcVar5)();
        (*extraout_w11_05)(uVar8,*puVar12,*puVar11,1);
      }
      *(char *)(param_1 + -0x6411) = '\0';
    }
  }
  FUN_10157a90(auStack_11c);
LAB_100dc258:
  if (bVar4) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return uVar9;
}

