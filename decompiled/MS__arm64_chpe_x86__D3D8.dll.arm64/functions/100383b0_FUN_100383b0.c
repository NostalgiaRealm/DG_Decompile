/*
 * FUN_100383b0 at 100383b0
 * undefined FUN_100383b0(void)
 * Address ranges: 100383b0-10038c9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100383b0(int param_1)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  undefined4 uVar10;
  int iVar11;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  code *extraout_w11_08;
  code *extraout_w11_09;
  code *extraout_w11_10;
  code *extraout_w11_11;
  code *extraout_w11_12;
  code *extraout_w11_13;
  code *extraout_w11_14;
  code *extraout_w11_15;
  code *extraout_w11_16;
  code *extraout_w11_17;
  uint uVar12;
  undefined1 auStack_80 [64];
  
  iVar4 = *(int *)(param_1 + 0xd9b0);
  if (iVar4 != 0) {
    (*(code *)PTR_FUN_10134070)(iVar4 + 0x4a0);
    *(int *)(iVar4 + 0x49c) = param_1;
    FUN_1003c5e8(param_1);
    (*(code *)PTR_FUN_101340bc)(*(int *)(param_1 + 0xd9b0) + 0x4a0);
    piVar1 = (int *)(*(int *)(param_1 + 0xd9b0) + 0x49c);
    do {
      iVar4 = *piVar1;
      if (iVar4 == param_1) {
        iVar4 = 0;
      }
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar8) {
        *piVar1 = iVar4;
        cVar7 = ExclusiveMonitorsStatus();
      }
      pcVar9 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    } while (cVar7 != '\0');
    DataMemoryBarrier(2,3);
    uVar10 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar10);
    *(undefined4 *)(param_1 + 0xda30) = 0;
    uVar10 = (*pcVar9)();
    (*extraout_w11_00)(uVar10);
    *(undefined4 *)(param_1 + 0xda40) = 0;
    uVar10 = (*pcVar9)();
    (*extraout_w11_01)(uVar10);
    *(undefined4 *)(param_1 + 0xda34) = 0;
    uVar10 = (*pcVar9)();
    (*extraout_w11_02)(uVar10);
    *(undefined4 *)(&DAT_0000da38 + param_1) = 0;
    uVar10 = (*pcVar9)();
    (*extraout_w11_03)(uVar10);
    *(undefined4 *)(param_1 + 0xda3c) = 0;
    puVar2 = (uint *)(param_1 + 0xd9fc);
    uVar12 = 0;
    if (*puVar2 != 0) {
      do {
        uVar10 = (*pcVar9)();
        (*extraout_w11_04)(uVar10);
        uVar12 = uVar12 + 1;
      } while (uVar12 < *puVar2);
    }
    *puVar2 = 0;
    FUN_10043520(param_1 + 0xda10);
    FUN_100426d8(param_1 + 0xd9dc);
    iVar4 = *(int *)(param_1 + 0xdb58);
    if (iVar4 != 0) {
      iVar11 = *(int *)(param_1 + 0xd9b4);
      (*pcVar9)();
      (*extraout_w11_05)(iVar4,auStack_80);
      iVar11 = FUN_100da158(iVar11 + 0x39c,auStack_80);
      if (iVar11 != 0) {
        uVar12 = 0;
        do {
          if (*(int *)(iVar11 + 0x1c + uVar12 * 0x24) == iVar4) {
            *(undefined1 *)(iVar11 + uVar12 * 0x24 + 0x20) = 0;
            break;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < 0x14);
      }
    }
    iVar4 = *(int *)(param_1 + 0xdb5c);
    if (iVar4 != 0) {
      iVar11 = *(int *)(param_1 + 0xd9b4);
      (*pcVar9)();
      (*extraout_w11_06)(iVar4,auStack_80);
      iVar11 = FUN_100da158(iVar11 + 0x39c,auStack_80);
      if (iVar11 != 0) {
        uVar12 = 0;
        do {
          if (*(int *)(iVar11 + 0x1c + uVar12 * 0x24) == iVar4) {
            *(undefined1 *)(iVar11 + uVar12 * 0x24 + 0x20) = 0;
            break;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < 0x14);
      }
    }
    iVar4 = *(int *)(param_1 + 0xdb60);
    if (iVar4 != 0) {
      iVar11 = *(int *)(param_1 + 0xd9b4);
      (*pcVar9)();
      (*extraout_w11_07)(iVar4,auStack_80);
      iVar11 = FUN_100da158(iVar11 + 0x39c,auStack_80);
      if (iVar11 != 0) {
        uVar12 = 0;
        do {
          if (*(int *)(iVar11 + 0x1c + uVar12 * 0x24) == iVar4) {
            *(undefined1 *)(iVar11 + uVar12 * 0x24 + 0x20) = 0;
            break;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < 0x14);
      }
    }
    iVar4 = *(int *)(param_1 + 0xdb64);
    if (iVar4 != 0) {
      iVar11 = *(int *)(param_1 + 0xd9b4);
      (*pcVar9)();
      (*extraout_w11_08)(iVar4,auStack_80);
      iVar11 = FUN_100da158(iVar11 + 0x39c,auStack_80);
      if (iVar11 != 0) {
        uVar12 = 0;
        do {
          if (*(int *)(iVar11 + 0x1c + uVar12 * 0x24) == iVar4) {
            *(undefined1 *)(iVar11 + uVar12 * 0x24 + 0x20) = 0;
            break;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < 0x14);
      }
    }
    iVar4 = *(int *)(param_1 + 0xdb68);
    if (iVar4 != 0) {
      iVar11 = *(int *)(param_1 + 0xd9b4);
      (*pcVar9)();
      (*extraout_w11_09)(iVar4,auStack_80);
      iVar11 = FUN_100da158(iVar11 + 0x39c,auStack_80);
      if (iVar11 != 0) {
        uVar12 = 0;
        do {
          if (*(int *)(iVar11 + 0x1c + uVar12 * 0x24) == iVar4) {
            *(undefined1 *)(iVar11 + uVar12 * 0x24 + 0x20) = 0;
            break;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < 0x14);
      }
    }
    iVar4 = *(int *)(param_1 + 0xdb6c);
    if (iVar4 != 0) {
      iVar11 = *(int *)(param_1 + 0xd9b4);
      (*pcVar9)();
      (*extraout_w11_10)(iVar4,auStack_80);
      iVar11 = FUN_100da158(iVar11 + 0x39c,auStack_80);
      if (iVar11 != 0) {
        uVar12 = 0;
        do {
          if (*(int *)(iVar11 + 0x1c + uVar12 * 0x24) == iVar4) {
            *(undefined1 *)(iVar11 + uVar12 * 0x24 + 0x20) = 0;
            break;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < 0x14);
      }
    }
    iVar4 = *(int *)(param_1 + 0xdb70);
    if (iVar4 != 0) {
      iVar11 = *(int *)(param_1 + 0xd9b4);
      (*pcVar9)();
      (*extraout_w11_11)(iVar4,auStack_80);
      iVar11 = FUN_100da158(iVar11 + 0x39c,auStack_80);
      if (iVar11 != 0) {
        uVar12 = 0;
        do {
          if (*(int *)(iVar11 + 0x1c + uVar12 * 0x24) == iVar4) {
            *(undefined1 *)(iVar11 + uVar12 * 0x24 + 0x20) = 0;
            break;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < 0x14);
      }
    }
    iVar4 = *(int *)(param_1 + 0xdb74);
    if (iVar4 != 0) {
      iVar11 = *(int *)(param_1 + 0xd9b4);
      (*pcVar9)();
      (*extraout_w11_12)(iVar4,auStack_80);
      iVar11 = FUN_100da158(iVar11 + 0x39c,auStack_80);
      if (iVar11 != 0) {
        uVar12 = 0;
        do {
          if (*(int *)(iVar11 + 0x1c + uVar12 * 0x24) == iVar4) {
            *(undefined1 *)(iVar11 + uVar12 * 0x24 + 0x20) = 0;
            break;
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 < 0x14);
      }
    }
    piVar1 = (int *)(param_1 + 0x10);
    FUN_100d7500(*(undefined4 *)(param_1 + 0xd9b0),*piVar1,*(undefined4 *)(param_1 + 0xd9d8));
    *(undefined4 *)(param_1 + 0xd9d8) = 0;
    uVar10 = (*pcVar9)();
    (*extraout_w11_13)(uVar10);
    *(undefined4 *)(param_1 + 0xd9c8) = 0;
    uVar10 = (*pcVar9)();
    (*extraout_w11_14)(uVar10);
    *(undefined4 *)(param_1 + 0xd9c4) = 0;
    uVar10 = (*pcVar9)();
    (*extraout_w11_15)(uVar10);
    iVar11 = *(int *)(param_1 + 0xd9b0);
    *(undefined4 *)(param_1 + 0xd9cc) = 0;
    iVar5 = *(int *)(param_1 + 0xd9d0);
    iVar6 = *piVar1;
    iVar4 = iVar11 + 0x4a0;
    (*(code *)PTR_FUN_10134070)(iVar4);
    piVar3 = (int *)(iVar11 + iVar6 * 0x1510 + 0x7c4);
    if (iVar5 == *piVar3) {
      *piVar3 = 0;
    }
    (*pcVar9)();
    (*extraout_w11_16)(iVar5);
    (*(code *)PTR_FUN_101340bc)(iVar4);
    iVar11 = *(int *)(param_1 + 0xd9b0);
    *(undefined4 *)(param_1 + 0xd9d0) = 0;
    iVar5 = *piVar1;
    iVar6 = *(int *)(param_1 + 0xd9d4);
    iVar4 = iVar11 + 0x4a0;
    (*(code *)PTR_FUN_10134070)(iVar4);
    iVar11 = iVar11 + iVar5 * 0x1510;
    if (iVar6 == *(int *)(iVar11 + 0x704)) {
      *(int *)(iVar11 + 0x704) = 0;
    }
    if (iVar6 == *(int *)(iVar11 + 0x708)) {
      *(int *)(iVar11 + 0x708) = 0;
    }
    if (iVar6 == *(int *)(iVar11 + 0x70c)) {
      *(int *)(iVar11 + 0x70c) = 0;
    }
    if (iVar6 == *(int *)(iVar11 + 0x710)) {
      *(int *)(iVar11 + 0x710) = 0;
    }
    if (iVar6 == *(int *)(iVar11 + 0x714)) {
      *(int *)(iVar11 + 0x714) = 0;
    }
    if (iVar6 == *(int *)(iVar11 + 0x718)) {
      *(int *)(iVar11 + 0x718) = 0;
    }
    if (iVar6 == *(int *)(iVar11 + 0x71c)) {
      *(int *)(iVar11 + 0x71c) = 0;
    }
    if (iVar6 == *(int *)(iVar11 + 0x720)) {
      *(int *)(iVar11 + 0x720) = 0;
    }
    if (iVar6 == *(int *)(iVar11 + 0x724)) {
      *(int *)(iVar11 + 0x724) = 0;
    }
    if (iVar6 == *(int *)(iVar11 + 0x728)) {
      *(int *)(iVar11 + 0x728) = 0;
    }
    if (iVar6 == *(int *)(iVar11 + 0x72c)) {
      *(int *)(iVar11 + 0x72c) = 0;
    }
    if (iVar6 == *(int *)(iVar11 + 0x730)) {
      *(int *)(iVar11 + 0x730) = 0;
    }
    if (iVar6 == *(int *)(iVar11 + 0x734)) {
      *(int *)(iVar11 + 0x734) = 0;
    }
    if (iVar6 == *(int *)(iVar11 + 0x738)) {
      *(int *)(iVar11 + 0x738) = 0;
    }
    if (iVar6 == *(int *)(iVar11 + 0x73c)) {
      *(int *)(iVar11 + 0x73c) = 0;
    }
    if (iVar6 == *(int *)(iVar11 + 0x740)) {
      *(int *)(iVar11 + 0x740) = 0;
    }
    (*pcVar9)();
    (*extraout_w11_17)(iVar6);
    (*(code *)PTR_FUN_101340bc)(iVar4);
    *(undefined4 *)(param_1 + 0xd9d4) = 0;
    FUN_100fed00(*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    FUN_100fed00(*(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_100dafb0(*(undefined4 *)(param_1 + 0xd9b0));
    *(undefined4 *)(param_1 + 0xd9b0) = 0;
  }
  return;
}

