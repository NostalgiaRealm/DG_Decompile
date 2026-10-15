/*
 * FUN_100d75a0 at 100d75a0
 * undefined FUN_100d75a0(void)
 * Address ranges: 100d75a0-100d787b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100d75a0(int param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  code *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  int iVar10;
  int iVar11;
  
  if ((param_2 - 0x10 < 0xf0 || 0x103 < param_2) && (param_2 != 0x104)) {
    return 0x8876086c;
  }
  if (((*(uint *)(param_1 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar5 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    bVar5 = true;
    iVar7 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar7 == 0) {
      FUN_100071d0(0);
    }
  }
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar7 = 0;
  iVar10 = 0;
  if (param_3 != 0) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar8 = (*extraout_w11)(param_3);
    switch(uVar8) {
    case 3:
    case 5:
      iVar7 = param_3 + -0x78;
      break;
    case 4:
      iVar10 = param_3 + -200;
    }
  }
  uVar4 = param_2 - 0x100;
  if (4 < uVar4) {
    FUN_1000c040(param_1 + -0x66b4,param_2,iVar7,iVar10);
    goto LAB_100d7834;
  }
  if (iVar7 == 0) {
    iVar11 = 0;
    if (iVar10 != 0) {
      iVar9 = *(int *)(iVar10 + 0xb0);
      iVar11 = iVar10;
      goto LAB_100d76ec;
    }
  }
  else {
    iVar9 = *(int *)(iVar7 + 0x60);
    iVar11 = iVar7;
LAB_100d76ec:
    iVar3 = 0;
    if (*(int *)(iVar11 + 0x14) != 0) {
      iVar3 = *(int *)(iVar11 + 0x14) + -0x66b4;
    }
    if (((iVar9 == 3) || (((iVar9 == 2 && (*(int *)(param_1 + -0x58ec) != 3)) || (iVar3 != 0)))) &&
       (iVar3 != param_1 + -0x66b4)) goto LAB_100d7834;
  }
  if (*(char *)(param_1 + -0x62f0) == '\0') {
    FUN_100d37c0(param_1 + -0x66b4,uVar4,iVar11,iVar7,iVar10);
  }
  else {
    if (iVar11 != 0) {
      (*pcVar6)();
      (*extraout_w11_00)(iVar11);
    }
    iVar7 = *(int *)(*(int *)(param_1 + -0x6300) + *(int *)(param_1 + -0x62f4) * 4);
    piVar2 = (int *)(iVar7 + (param_2 + 0x12e8) * 4);
    if (*piVar2 != 0) {
      uVar8 = (*pcVar6)();
      (*extraout_w11_01)(uVar8);
    }
    *piVar2 = iVar11;
    pbVar1 = (byte *)((uVar4 >> 3 & 3) + iVar7 + ((uVar4 >> 5) + 0x2b14) * 4);
    *pbVar1 = *pbVar1 | (byte)(1 << (ulonglong)(uVar4 & 7));
  }
LAB_100d7834:
  if (bVar5) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return 0;
}

