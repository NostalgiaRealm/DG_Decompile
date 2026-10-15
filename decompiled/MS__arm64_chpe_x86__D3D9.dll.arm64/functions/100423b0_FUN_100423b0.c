/*
 * FUN_100423b0 at 100423b0
 * undefined FUN_100423b0(void)
 * Address ranges: 100423b0-10042bc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100423b0(int param_1)

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
  uint uVar12;
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
  uint uVar13;
  undefined1 auStack_b8 [56];
  undefined1 auStack_80 [64];
  
  iVar4 = *(int *)(param_1 + 0xf6b0);
  if (iVar4 != 0) {
    (*(code *)PTR_FUN_1016c074)(iVar4 + 0x4a0);
    *(int *)(iVar4 + 0x49c) = param_1;
    FUN_10047f08(param_1);
    (*(code *)PTR_FUN_1016c0c0)(*(int *)(param_1 + 0xf6b0) + 0x4a0);
    piVar1 = (int *)(*(int *)(param_1 + 0xf6b0) + 0x49c);
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
    *(undefined4 *)(param_1 + 0xf730) = 0;
    uVar10 = (*pcVar9)();
    (*extraout_w11_00)(uVar10);
    *(undefined4 *)(param_1 + 0xf744) = 0;
    uVar10 = (*pcVar9)();
    (*extraout_w11_01)(uVar10);
    *(undefined4 *)(param_1 + 0xf734) = 0;
    uVar10 = (*pcVar9)();
    (*extraout_w11_02)(uVar10);
    *(undefined4 *)(param_1 + 0xf738) = 0;
    uVar10 = (*pcVar9)();
    (*extraout_w11_03)(uVar10);
    *(undefined4 *)(param_1 + 0xf73c) = 0;
    puVar2 = (uint *)(param_1 + 0xf6fc);
    uVar13 = 0;
    if (*puVar2 != 0) {
      do {
        uVar10 = (*pcVar9)();
        (*extraout_w11_04)(uVar10);
        uVar13 = uVar13 + 1;
      } while (uVar13 < *puVar2);
    }
    *puVar2 = 0;
    FUN_10051720(param_1 + 0xf710);
    FUN_1004fef8(param_1 + 0xf6dc);
    uVar13 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0xf8fc + uVar13 * 4);
      if (iVar4 != 0) {
        iVar11 = *(int *)(param_1 + 0xf6b4);
        (*pcVar9)();
        (*extraout_w11_05)(iVar4,auStack_80);
        iVar11 = FUN_1010c898(iVar11 + 0x39c,auStack_80);
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
      uVar13 = uVar13 + 1;
    } while (uVar13 < 0x10);
    iVar4 = *(int *)(param_1 + 0xf9b0);
    if (iVar4 != 0) {
      iVar11 = *(int *)(param_1 + 0xf6b4);
      (*pcVar9)();
      (*extraout_w11_06)(iVar4,auStack_b8);
      iVar11 = FUN_1010c898(iVar11 + 0x39c,auStack_b8);
      if (iVar11 != 0) {
        uVar13 = 0;
        do {
          if (*(int *)(iVar11 + 0x1c + uVar13 * 0x24) == iVar4) {
            *(undefined1 *)(iVar11 + uVar13 * 0x24 + 0x20) = 0;
            break;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < 0x14);
      }
    }
    iVar4 = *(int *)(param_1 + 0xf9b4);
    if (iVar4 != 0) {
      iVar11 = *(int *)(param_1 + 0xf6b4);
      (*pcVar9)();
      (*extraout_w11_07)(iVar4,auStack_b8);
      iVar11 = FUN_1010c898(iVar11 + 0x39c,auStack_b8);
      if (iVar11 != 0) {
        uVar13 = 0;
        do {
          if (*(int *)(iVar11 + 0x1c + uVar13 * 0x24) == iVar4) {
            *(undefined1 *)(iVar11 + uVar13 * 0x24 + 0x20) = 0;
            break;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < 0x14);
      }
    }
    iVar4 = *(int *)(param_1 + 0xf9b8);
    if (iVar4 != 0) {
      iVar11 = *(int *)(param_1 + 0xf6b4);
      (*pcVar9)();
      (*extraout_w11_08)(iVar4,auStack_b8);
      iVar11 = FUN_1010c898(iVar11 + 0x39c,auStack_b8);
      if (iVar11 != 0) {
        uVar13 = 0;
        do {
          if (*(int *)(iVar11 + 0x1c + uVar13 * 0x24) == iVar4) {
            *(undefined1 *)(iVar11 + uVar13 * 0x24 + 0x20) = 0;
            break;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < 0x14);
      }
    }
    iVar4 = *(int *)(param_1 + 0xf9bc);
    if (iVar4 != 0) {
      iVar11 = *(int *)(param_1 + 0xf6b4);
      (*pcVar9)();
      (*extraout_w11_09)(iVar4,auStack_b8);
      iVar11 = FUN_1010c898(iVar11 + 0x39c,auStack_b8);
      if (iVar11 != 0) {
        uVar13 = 0;
        do {
          if (*(int *)(iVar11 + 0x1c + uVar13 * 0x24) == iVar4) {
            *(undefined1 *)(iVar11 + uVar13 * 0x24 + 0x20) = 0;
            break;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < 0x14);
      }
    }
    iVar4 = *(int *)(param_1 + 0xf9c0);
    if (iVar4 != 0) {
      iVar11 = *(int *)(param_1 + 0xf6b4);
      (*pcVar9)();
      (*extraout_w11_10)(iVar4,auStack_b8);
      iVar11 = FUN_1010c898(iVar11 + 0x39c,auStack_b8);
      if (iVar11 != 0) {
        uVar13 = 0;
        do {
          if (*(int *)(iVar11 + 0x1c + uVar13 * 0x24) == iVar4) {
            *(undefined1 *)(iVar11 + uVar13 * 0x24 + 0x20) = 0;
            break;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < 0x14);
      }
    }
    piVar1 = (int *)(param_1 + 0x10);
    FUN_10109700(*(undefined4 *)(param_1 + 0xf6b0),*piVar1,*(undefined4 *)(param_1 + 0xf6d8));
    *(undefined4 *)(param_1 + 0xf6d8) = 0;
    uVar10 = (*pcVar9)();
    (*extraout_w11_11)(uVar10);
    *(undefined4 *)(param_1 + 0xf6c8) = 0;
    uVar10 = (*pcVar9)();
    (*extraout_w11_12)(uVar10);
    *(undefined4 *)(param_1 + 0xf6c4) = 0;
    uVar10 = (*pcVar9)();
    (*extraout_w11_13)(uVar10);
    iVar11 = *(int *)(param_1 + 0xf6b0);
    *(undefined4 *)(param_1 + 0xf6cc) = 0;
    iVar5 = *(int *)(param_1 + 0xf6d0);
    iVar6 = *piVar1;
    iVar4 = iVar11 + 0x4a0;
    (*(code *)PTR_FUN_1016c074)(iVar4);
    piVar3 = (int *)(iVar11 + iVar6 * 0x1510 + 0x7c4);
    if (iVar5 == *piVar3) {
      *piVar3 = 0;
    }
    (*pcVar9)();
    (*extraout_w11_14)(iVar5);
    (*(code *)PTR_FUN_1016c0c0)(iVar4);
    iVar11 = *(int *)(param_1 + 0xf6b0);
    *(undefined4 *)(param_1 + 0xf6d0) = 0;
    iVar5 = *piVar1;
    iVar6 = *(int *)(param_1 + 0xf6d4);
    iVar4 = iVar11 + 0x4a0;
    (*(code *)PTR_FUN_1016c074)(iVar4);
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
    (*extraout_w11_15)(iVar6);
    (*(code *)PTR_FUN_1016c0c0)(iVar4);
    *(undefined4 *)(param_1 + 0xf6d4) = 0;
    FUN_101322d0(*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    FUN_101322d0(*(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_1010d6f0(*(undefined4 *)(param_1 + 0xf6b0));
    *(undefined4 *)(param_1 + 0xf6b0) = 0;
  }
  return;
}

