/*
 * FUN_10127718 at 10127718
 * undefined FUN_10127718(void)
 * Address ranges: 10127718-10127feb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10127718(int param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  
  piVar1 = (int *)(param_1 + param_2 * 0x28 + 0x24);
  iVar8 = *piVar1 + -1;
  *piVar1 = iVar8;
  if (iVar8 == 0) {
    iVar8 = param_1 + param_2 * 0x18;
    piVar1 = (int *)(iVar8 + 0x520);
    iVar7 = param_1 + param_2 * 0x16c0;
    FUN_10130e60(iVar7 + 0x1880);
    FUN_101138b0(*(int *)(iVar7 + 0x19c4) + 4,0);
    FUN_101138b0(*(int *)(iVar7 + 0x19cc) + 4,0);
    pcVar10 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    uVar14 = 0;
    if (*(uint *)(param_1 + 0x518) != 0) {
      do {
        uVar11 = (*pcVar10)();
        (*extraout_w11)(uVar11,param_2);
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(uint *)(param_1 + 0x518));
    }
    puVar2 = (uint *)(iVar7 + 0x1d4c);
    uVar14 = 0;
    if (*puVar2 != 0) {
      do {
        FUN_10119b60((int *)(iVar7 + 0x1d44),
                     *(undefined4 *)(*(int *)(iVar7 + 0x1d44) + uVar14 * 0x40 + 0x3c));
        uVar14 = uVar14 + 1;
      } while (uVar14 < *puVar2);
    }
    *puVar2 = 0;
    FUN_10125df8(param_1,param_2);
    FUN_1011cc40(iVar7 + 0x19d0);
    FUN_1011cc40(iVar7 + 0x1a30);
    FUN_1011cc40(iVar7 + 0x1a90);
    FUN_1011cc40(iVar7 + 0x1af0);
    FUN_1011cc40(iVar7 + 0x1b50);
    iVar4 = iVar7 + 0x1bb0;
    (*(code *)PTR_FUN_1016c074)(iVar4);
    uVar13 = *(uint *)(iVar7 + 0x1be0);
    uVar14 = 0;
    if (uVar13 != 0) {
      if (uVar13 == 0) {
        puVar15 = (undefined4 *)&DAT_00000008;
        goto LAB_10127908;
      }
      do {
        puVar15 = (undefined4 *)(*(int *)(iVar7 + 0x1bdc) + uVar14 * 0x38 + 0x10);
LAB_10127908:
        FUN_101322d0(*puVar15);
        FUN_101322d0(puVar15[4]);
        FUN_101322d0(puVar15[5]);
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(uint *)(iVar7 + 0x1be0));
    }
    FUN_101322d0(*(undefined4 *)(iVar7 + 0x1bd8));
    *(undefined8 *)(iVar7 + 0x1bd8) = 0;
    *(undefined8 *)(iVar7 + 0x1be0) = 0;
    (*(code *)PTR_FUN_1016c0c0)(iVar4);
    (*(code *)PTR_FUN_1016c06c)(iVar4);
    FUN_1012bb50(iVar7 + 0x1be8);
    FUN_1012bb50(iVar7 + 0x1c40);
    iVar5 = *(int *)(iVar7 + 0x19c4);
    piVar3 = (int *)(param_1 + 0x172c0);
    iVar6 = *piVar3;
    iVar4 = iVar6 + 0x1c;
    (*(code *)PTR_FUN_1016c074)(iVar4);
    FUN_1011e550(iVar6,0,iVar5);
    (*(code *)PTR_FUN_1016c0c0)(iVar4);
    iVar5 = *piVar3;
    iVar6 = *(int *)(iVar7 + 0x19cc);
    iVar4 = iVar5 + 0x1c;
    (*(code *)PTR_FUN_1016c074)(iVar4);
    FUN_1011e550(iVar5,0,iVar6);
    (*(code *)PTR_FUN_1016c0c0)(iVar4);
    iVar5 = *piVar3;
    uVar11 = *(undefined4 *)(iVar7 + 0x19c0);
    iVar4 = iVar5 + 0x1c;
    (*(code *)PTR_FUN_1016c074)(iVar4);
    FUN_1011e550(iVar5,uVar11,0);
    (*(code *)PTR_FUN_1016c0c0)(iVar4);
    iVar5 = *piVar3;
    uVar11 = *(undefined4 *)(iVar7 + 0x19c8);
    iVar4 = iVar5 + 0x1c;
    (*(code *)PTR_FUN_1016c074)(iVar4);
    FUN_1011e550(iVar5,uVar11,0);
    (*(code *)PTR_FUN_1016c0c0)(iVar4);
    uVar12 = FUN_10132260(*(undefined4 *)(iVar7 + 0x1864),8);
    *(undefined8 *)(iVar7 + 0x1864) = 0;
    uVar12 = FUN_10119648(uVar12,0x2b,iVar7 + 0x17b0);
    uVar12 = FUN_10119648(uVar12,2,iVar7 + 0x185c);
    FUN_10119648(uVar12,4,iVar7 + 0x17a0);
    FUN_1011acc0((undefined4 *)(iVar7 + 0x1d00),*(undefined4 *)(iVar7 + 0x6d0));
    iVar4 = *(int *)(iVar7 + 0x740);
    iVar5 = *(int *)(iVar7 + 0x1d24);
    while (iVar5 != 0) {
      iVar9 = iVar5 + -1;
      iVar6 = iVar5 * 0x20;
      iVar5 = iVar9;
      if (*(int *)(*(int *)(iVar7 + 0x1d1c) + iVar6 + -0x18) == iVar4) {
        FUN_1011b380((int *)(iVar7 + 0x1d1c),iVar9);
      }
    }
    if (*(int *)(iVar7 + 0x6d0) != 0) {
      FUN_1011e7a0(*(undefined4 *)(param_1 + 0x172c0),*(int *)(iVar7 + 0x6d0),0,1);
    }
    if (*(int *)(iVar7 + 0x740) != 0) {
      FUN_1011e7a0(*piVar3,*(int *)(iVar7 + 0x740),0,1);
    }
    puVar2 = (uint *)(iVar7 + 0x1cb8);
    uVar14 = 0;
    if (*puVar2 != 0) {
      do {
        uVar11 = *(undefined4 *)(*(int *)(iVar7 + 0x1cb0) + uVar14 * 0x40 + 0x3c);
        FUN_1011b128(*(undefined4 *)(iVar7 + 0x1cbc),uVar11);
        FUN_10132260(uVar11,0x34);
        uVar14 = uVar14 + 1;
      } while (uVar14 < *puVar2);
    }
    *puVar2 = 0;
    puVar2 = (uint *)(iVar7 + 0x1cc8);
    uVar14 = 0;
    if (*puVar2 != 0) {
      do {
        uVar11 = *(undefined4 *)(*(int *)(iVar7 + 0x1cc0) + uVar14 * 0x158 + 0x150);
        FUN_1011af18(*(undefined4 *)(iVar7 + 0x1ccc),uVar11);
        FUN_10132260(uVar11,0x148);
        uVar14 = uVar14 + 1;
      } while (uVar14 < *puVar2);
    }
    *puVar2 = 0;
    puVar2 = (uint *)(iVar7 + 0x1cd8);
    uVar14 = 0;
    if (*puVar2 != 0) {
      do {
        uVar11 = *(undefined4 *)(*(int *)(iVar7 + 0x1cd0) + uVar14 * 0x158 + 0x150);
        FUN_1011af18(*(undefined4 *)(iVar7 + 0x1cdc),uVar11);
        FUN_10132260(uVar11,0x148);
        uVar14 = uVar14 + 1;
      } while (uVar14 < *puVar2);
    }
    *puVar2 = 0;
    puVar2 = (uint *)(iVar7 + 0x1ce8);
    uVar14 = 0;
    if (*puVar2 != 0) {
      do {
        uVar11 = *(undefined4 *)(*(int *)(iVar7 + 0x1ce0) + uVar14 * 0x38 + 0x34);
        FUN_1011b020(*(undefined4 *)(iVar7 + 0x1cec),uVar11);
        FUN_10132260(uVar11,0x2c);
        uVar14 = uVar14 + 1;
      } while (uVar14 < *puVar2);
    }
    *puVar2 = 0;
    puVar2 = (uint *)(iVar7 + 0x1cf8);
    uVar14 = 0;
    if (*puVar2 != 0) {
      do {
        FUN_101196c8((int *)(iVar7 + 0x1cf0),
                     *(undefined4 *)(*(int *)(iVar7 + 0x1cf0) + uVar14 * 0x18 + 0x10));
        uVar14 = uVar14 + 1;
      } while (uVar14 < *puVar2);
    }
    *puVar2 = 0;
    uVar14 = 0;
    if (*(uint *)(iVar7 + 0x1d14) != 0) {
      do {
        uVar13 = 0;
        piVar3 = *(int **)(*(int *)(iVar7 + 0x1d0c) + uVar14 * 0x18 + 0x10);
        puVar2 = (uint *)(piVar3 + 1);
        if (*puVar2 != 0) {
          do {
            FUN_1011e7a0(*(undefined4 *)(iVar7 + 0x1d00),
                         *(undefined4 *)(*piVar3 + uVar13 * 0x74 + 0x70),0,1);
            uVar11 = (*pcVar10)();
            (*extraout_w11_00)(uVar11);
            uVar13 = uVar13 + 1;
          } while (uVar13 < *puVar2);
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(uint *)(iVar7 + 0x1d14));
    }
    puVar2 = (uint *)(iVar7 + 0x1d14);
    uVar14 = 0;
    if (*puVar2 != 0) {
      do {
        puVar15 = *(undefined4 **)(*(int *)(iVar7 + 0x1d0c) + uVar14 * 0x18 + 0x10);
        if (puVar15 != (undefined4 *)0x0) {
          FUN_101322d0(*puVar15);
          FUN_10132260(puVar15,0xc);
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < *puVar2);
    }
    *puVar2 = 0;
    *(undefined4 *)(iVar7 + 0x1d18) = 0;
    uVar11 = (*pcVar10)();
    (*extraout_w11_01)(uVar11);
    *(int *)(iVar7 + 0x740) = 0;
    uVar11 = (*pcVar10)();
    (*extraout_w11_02)(uVar11);
    *(undefined4 *)(iVar7 + 0x6d0) = 0;
    *(undefined4 *)(iVar7 + 0x1cbc) = 0;
    *(undefined4 *)(iVar7 + 0x1ccc) = 0;
    *(undefined4 *)(iVar7 + 0x1cdc) = 0;
    *(undefined4 *)(iVar7 + 0x1cec) = 0;
    *(undefined4 *)(iVar7 + 0x1cfc) = 0;
    FUN_10126068(param_1,param_2);
    if (*piVar1 != 0) {
      uVar11 = (*pcVar10)();
      (*extraout_w11_03)(uVar11);
      *(undefined4 *)(iVar8 + 0x524) = 0;
      uVar11 = (*pcVar10)();
      (*extraout_w11_04)(uVar11);
      *piVar1 = 0;
    }
  }
  return;
}

