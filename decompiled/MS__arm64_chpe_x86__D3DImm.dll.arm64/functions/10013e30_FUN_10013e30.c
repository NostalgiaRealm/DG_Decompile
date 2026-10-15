/*
 * FUN_10013e30 at 10013e30
 * undefined FUN_10013e30(void)
 * Address ranges: 10013e30-10014787
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10013e30(int param_1)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  code *pcVar10;
  undefined4 uVar11;
  int iVar12;
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
  uint uVar13;
  undefined1 auStack_78 [56];
  
  piVar4 = (int *)(param_1 + 0x1d50);
  iVar5 = *piVar4;
  if (iVar5 != 0) {
    (*(code *)PTR_FUN_100a1014)(iVar5 + 0x4a0);
    *(int *)(iVar5 + 0x49c) = param_1;
    FUN_100179c0(param_1);
    (*(code *)PTR_FUN_100a1044)(*piVar4 + 0x4a0);
    piVar1 = (int *)(*piVar4 + 0x49c);
    do {
      iVar5 = *piVar1;
      if (iVar5 == param_1) {
        iVar5 = 0;
      }
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar9) {
        *piVar1 = iVar5;
        cVar8 = ExclusiveMonitorsStatus();
      }
      pcVar10 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    } while (cVar8 != '\0');
    DataMemoryBarrier(2,3);
    uVar11 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar11);
    *(undefined4 *)(param_1 + 0x1dcc) = 0;
    puVar2 = (uint *)(param_1 + 0x1d9c);
    uVar13 = 0;
    if (*puVar2 != 0) {
      do {
        uVar11 = (*pcVar10)();
        (*extraout_w11_00)(uVar11);
        uVar13 = uVar13 + 1;
      } while (uVar13 < *puVar2);
    }
    *puVar2 = 0;
    FUN_1001c090(param_1 + 0x1db0);
    FUN_1001b988(param_1 + 0x1d7c);
    iVar5 = *(int *)(param_1 + 0x1ec4);
    if (iVar5 != 0) {
      iVar12 = *(int *)(param_1 + 0x1d54);
      (*pcVar10)();
      (*extraout_w11_01)(iVar5,auStack_78);
      iVar12 = FUN_1006f9e8(iVar12 + 0x39c,auStack_78);
      if (iVar12 != 0) {
        uVar13 = 0;
        do {
          if (*(int *)(iVar12 + 0x1c + uVar13 * 0x24) == iVar5) {
            *(undefined1 *)(iVar12 + uVar13 * 0x24 + 0x20) = 0;
            break;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < 0x14);
      }
    }
    iVar5 = *(int *)(param_1 + 0x1ec8);
    if (iVar5 != 0) {
      iVar12 = *(int *)(param_1 + 0x1d54);
      (*pcVar10)();
      (*extraout_w11_02)(iVar5,auStack_78);
      iVar12 = FUN_1006f9e8(iVar12 + 0x39c,auStack_78);
      if (iVar12 != 0) {
        uVar13 = 0;
        do {
          if (*(int *)(iVar12 + 0x1c + uVar13 * 0x24) == iVar5) {
            *(undefined1 *)(iVar12 + uVar13 * 0x24 + 0x20) = 0;
            break;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < 0x14);
      }
    }
    iVar5 = *(int *)(param_1 + 0x1ecc);
    if (iVar5 != 0) {
      iVar12 = *(int *)(param_1 + 0x1d54);
      (*pcVar10)();
      (*extraout_w11_03)(iVar5,auStack_78);
      iVar12 = FUN_1006f9e8(iVar12 + 0x39c,auStack_78);
      if (iVar12 != 0) {
        uVar13 = 0;
        do {
          if (*(int *)(iVar12 + 0x1c + uVar13 * 0x24) == iVar5) {
            *(undefined1 *)(iVar12 + uVar13 * 0x24 + 0x20) = 0;
            break;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < 0x14);
      }
    }
    iVar5 = *(int *)(param_1 + 0x1ed0);
    if (iVar5 != 0) {
      iVar12 = *(int *)(param_1 + 0x1d54);
      (*pcVar10)();
      (*extraout_w11_04)(iVar5,auStack_78);
      iVar12 = FUN_1006f9e8(iVar12 + 0x39c,auStack_78);
      if (iVar12 != 0) {
        uVar13 = 0;
        do {
          if (*(int *)(iVar12 + 0x1c + uVar13 * 0x24) == iVar5) {
            *(undefined1 *)(iVar12 + uVar13 * 0x24 + 0x20) = 0;
            break;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < 0x14);
      }
    }
    iVar5 = *(int *)(param_1 + 0x1ed4);
    if (iVar5 != 0) {
      iVar12 = *(int *)(param_1 + 0x1d54);
      (*pcVar10)();
      (*extraout_w11_05)(iVar5,auStack_78);
      iVar12 = FUN_1006f9e8(iVar12 + 0x39c,auStack_78);
      if (iVar12 != 0) {
        uVar13 = 0;
        do {
          if (*(int *)(iVar12 + 0x1c + uVar13 * 0x24) == iVar5) {
            *(undefined1 *)(iVar12 + uVar13 * 0x24 + 0x20) = 0;
            break;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < 0x14);
      }
    }
    iVar5 = *(int *)(param_1 + 0x1ed8);
    if (iVar5 != 0) {
      iVar12 = *(int *)(param_1 + 0x1d54);
      (*pcVar10)();
      (*extraout_w11_06)(iVar5,auStack_78);
      iVar12 = FUN_1006f9e8(iVar12 + 0x39c,auStack_78);
      if (iVar12 != 0) {
        uVar13 = 0;
        do {
          if (*(int *)(iVar12 + 0x1c + uVar13 * 0x24) == iVar5) {
            *(undefined1 *)(iVar12 + uVar13 * 0x24 + 0x20) = 0;
            break;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < 0x14);
      }
    }
    iVar5 = *(int *)(param_1 + 0x1edc);
    if (iVar5 != 0) {
      iVar12 = *(int *)(param_1 + 0x1d54);
      (*pcVar10)();
      (*extraout_w11_07)(iVar5,auStack_78);
      iVar12 = FUN_1006f9e8(iVar12 + 0x39c,auStack_78);
      if (iVar12 != 0) {
        uVar13 = 0;
        do {
          if (*(int *)(iVar12 + 0x1c + uVar13 * 0x24) == iVar5) {
            *(undefined1 *)(iVar12 + uVar13 * 0x24 + 0x20) = 0;
            break;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < 0x14);
      }
    }
    iVar5 = *(int *)(param_1 + 0x1ee0);
    if (iVar5 != 0) {
      iVar12 = *(int *)(param_1 + 0x1d54);
      (*pcVar10)();
      (*extraout_w11_08)(iVar5,auStack_78);
      iVar12 = FUN_1006f9e8(iVar12 + 0x39c,auStack_78);
      if (iVar12 != 0) {
        uVar13 = 0;
        do {
          if (*(int *)(iVar12 + 0x1c + uVar13 * 0x24) == iVar5) {
            *(undefined1 *)(iVar12 + uVar13 * 0x24 + 0x20) = 0;
            break;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < 0x14);
      }
    }
    piVar1 = (int *)(param_1 + 0x10);
    FUN_1006df70(*piVar4,*piVar1,*(undefined4 *)(param_1 + 0x1d78));
    *(undefined4 *)(param_1 + 0x1d78) = 0;
    uVar11 = (*pcVar10)();
    (*extraout_w11_09)(uVar11);
    *(undefined4 *)(param_1 + 0x1d68) = 0;
    uVar11 = (*pcVar10)();
    (*extraout_w11_10)(uVar11);
    *(undefined4 *)(param_1 + 0x1d64) = 0;
    uVar11 = (*pcVar10)();
    (*extraout_w11_11)(uVar11);
    iVar12 = *piVar4;
    *(undefined4 *)(param_1 + 0x1d6c) = 0;
    iVar6 = *piVar1;
    iVar7 = *(int *)(param_1 + 0x1d70);
    iVar5 = iVar12 + 0x4a0;
    (*(code *)PTR_FUN_100a1014)(iVar5);
    piVar3 = (int *)(iVar12 + iVar6 * 0x1510 + 0x7c4);
    if (iVar7 == *piVar3) {
      *piVar3 = 0;
    }
    (*pcVar10)();
    (*extraout_w11_12)(iVar7);
    (*(code *)PTR_FUN_100a1044)(iVar5);
    iVar12 = *piVar4;
    iVar6 = *piVar1;
    *(int *)(param_1 + 0x1d70) = 0;
    iVar7 = *(int *)(param_1 + 0x1d74);
    iVar5 = iVar12 + 0x4a0;
    (*(code *)PTR_FUN_100a1014)(iVar5);
    iVar12 = iVar12 + iVar6 * 0x1510;
    if (iVar7 == *(int *)(iVar12 + 0x704)) {
      *(int *)(iVar12 + 0x704) = 0;
    }
    if (iVar7 == *(int *)(iVar12 + 0x708)) {
      *(int *)(iVar12 + 0x708) = 0;
    }
    if (iVar7 == *(int *)(iVar12 + 0x70c)) {
      *(int *)(iVar12 + 0x70c) = 0;
    }
    if (iVar7 == *(int *)(iVar12 + 0x710)) {
      *(int *)(iVar12 + 0x710) = 0;
    }
    if (iVar7 == *(int *)(iVar12 + 0x714)) {
      *(int *)(iVar12 + 0x714) = 0;
    }
    if (iVar7 == *(int *)(iVar12 + 0x718)) {
      *(int *)(iVar12 + 0x718) = 0;
    }
    if (iVar7 == *(int *)(iVar12 + 0x71c)) {
      *(int *)(iVar12 + 0x71c) = 0;
    }
    if (iVar7 == *(int *)(iVar12 + 0x720)) {
      *(int *)(iVar12 + 0x720) = 0;
    }
    if (iVar7 == *(int *)(iVar12 + 0x724)) {
      *(int *)(iVar12 + 0x724) = 0;
    }
    if (iVar7 == *(int *)(iVar12 + 0x728)) {
      *(int *)(iVar12 + 0x728) = 0;
    }
    if (iVar7 == *(int *)(iVar12 + 0x72c)) {
      *(int *)(iVar12 + 0x72c) = 0;
    }
    if (iVar7 == *(int *)(iVar12 + 0x730)) {
      *(int *)(iVar12 + 0x730) = 0;
    }
    if (iVar7 == *(int *)(iVar12 + 0x734)) {
      *(int *)(iVar12 + 0x734) = 0;
    }
    if (iVar7 == *(int *)(iVar12 + 0x738)) {
      *(int *)(iVar12 + 0x738) = 0;
    }
    if (iVar7 == *(int *)(iVar12 + 0x73c)) {
      *(int *)(iVar12 + 0x73c) = 0;
    }
    if (iVar7 == *(int *)(iVar12 + 0x740)) {
      *(int *)(iVar12 + 0x740) = 0;
    }
    (*pcVar10)();
    (*extraout_w11_13)(iVar7);
    (*(code *)PTR_FUN_100a1044)(iVar5);
    *(int *)(param_1 + 0x1d74) = 0;
    FUN_10081dc0(*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    FUN_10081dc0(*(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
    iVar5 = *piVar4;
    if (iVar5 != 0) {
      piVar1 = (int *)(iVar5 + 8);
      do {
        iVar12 = *piVar1;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar9) {
          *piVar1 = iVar12 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      DataMemoryBarrier(2,3);
      if (iVar12 + -1 == 0) {
        if (*(short *)(iVar5 + 0xc) != 0) {
          uVar11 = (*(code *)PTR_FUN_100a1028)(0);
          (*(code *)PTR_FUN_100a109c)(*(short *)(iVar5 + 0xc),uVar11);
          iVar12 = *(int *)(iVar5 + 0x10);
          if (iVar12 != 0) {
            (*(code *)PTR_FUN_100a101c)(iVar12);
            *(int *)(iVar5 + 0x10) = 0;
          }
        }
        (*pcVar10)();
        (*extraout_w11_14)(iVar5);
      }
    }
    *piVar4 = 0;
  }
  return;
}

