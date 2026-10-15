/*
 * FUN_1001ebd0 at 1001ebd0
 * undefined FUN_1001ebd0(void)
 * Address ranges: 1001ebd0-1001f17f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001ebd0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  ulonglong *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  bool bVar10;
  code *pcVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  uint uVar18;
  
  piVar2 = (int *)(param_1 + 0x1d50);
  if (*piVar2 != 0) {
    piVar3 = (int *)(param_1 + 0x1d54);
    FUN_100816d8(*piVar3 + 0x11c0);
    pcVar11 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1,0);
    FUN_10071e00(*(int *)(*piVar3 + 0x1304) + 4,0);
    piVar1 = (int *)(*piVar2 + 0x49c);
    do {
      iVar5 = *piVar1;
      if (iVar5 == param_1) {
        iVar5 = 0;
      }
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar10) {
        *piVar1 = iVar5;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    DataMemoryBarrier(2,3);
    iVar5 = *(int *)(param_1 + 0x1d84);
    if (iVar5 != 0) {
      FUN_1001e820(iVar5,1);
    }
    *(int *)(param_1 + 0x1d84) = 0;
    *(undefined4 *)(param_1 + 0x1dac) = 0;
    FUN_10031960(param_1 + 0x1db4);
    FUN_100314c8(param_1 + 0x1d88);
    uVar17 = 0;
    do {
      uVar7 = *(uint *)(param_1 + 0x1ed0 + uVar17 * 4);
      if (uVar7 != 0xffffffff) {
        iVar5 = *piVar3;
        uVar8 = *(uint *)(iVar5 + 0x167c);
        if (uVar8 != 0) {
          uVar14 = 0;
          uVar16 = uVar8;
          do {
            uVar18 = uVar16 + uVar14 >> 1;
            uVar15 = *(ulonglong *)(*(int *)(iVar5 + 0x1678) + uVar18 * 0x10);
            uVar12 = uVar18;
            if (uVar15 <= uVar7) {
              if (uVar7 <= uVar15) break;
              uVar14 = uVar18 + 1;
              uVar18 = uVar14;
              uVar12 = uVar16;
            }
            uVar16 = uVar12;
          } while (uVar16 != uVar14);
          if (((uVar18 != uVar8) &&
              (puVar4 = (ulonglong *)(*(int *)(iVar5 + 0x1678) + uVar18 * 0x10),
              *puVar4 == (ulonglong)uVar7)) &&
             (piVar1 = (int *)((int)puVar4 + 0xc), piVar1 != (int *)0x0)) {
            *(undefined1 *)(*piVar1 + 0x20) = 0;
          }
        }
      }
      uVar7 = *(uint *)(param_1 + 0x1ed4 + uVar17 * 4);
      if (uVar7 != 0xffffffff) {
        iVar5 = *piVar3;
        uVar8 = *(uint *)(iVar5 + 0x167c);
        if (uVar8 != 0) {
          uVar14 = 0;
          uVar16 = uVar8;
          do {
            uVar18 = uVar16 + uVar14 >> 1;
            uVar15 = *(ulonglong *)(*(int *)(iVar5 + 0x1678) + uVar18 * 0x10);
            uVar12 = uVar18;
            if (uVar15 <= uVar7) {
              if (uVar7 <= uVar15) break;
              uVar14 = uVar18 + 1;
              uVar18 = uVar14;
              uVar12 = uVar16;
            }
            uVar16 = uVar12;
          } while (uVar16 != uVar14);
          if (((uVar18 != uVar8) &&
              (puVar4 = (ulonglong *)(*(int *)(iVar5 + 0x1678) + uVar18 * 0x10),
              *puVar4 == (ulonglong)uVar7)) &&
             (piVar1 = (int *)((int)puVar4 + 0xc), piVar1 != (int *)0x0)) {
            *(undefined1 *)(*piVar1 + 0x20) = 0;
          }
        }
      }
      uVar7 = *(uint *)(param_1 + 0x1ed8 + uVar17 * 4);
      if (uVar7 != 0xffffffff) {
        iVar5 = *piVar3;
        uVar8 = *(uint *)(iVar5 + 0x167c);
        if (uVar8 != 0) {
          uVar14 = 0;
          uVar16 = uVar8;
          do {
            uVar18 = uVar16 + uVar14 >> 1;
            uVar15 = *(ulonglong *)(*(int *)(iVar5 + 0x1678) + uVar18 * 0x10);
            uVar12 = uVar18;
            if (uVar15 <= uVar7) {
              if (uVar7 <= uVar15) break;
              uVar14 = uVar18 + 1;
              uVar18 = uVar14;
              uVar12 = uVar16;
            }
            uVar16 = uVar12;
          } while (uVar16 != uVar14);
          if (((uVar18 != uVar8) &&
              (puVar4 = (ulonglong *)(*(int *)(iVar5 + 0x1678) + uVar18 * 0x10),
              *puVar4 == (ulonglong)uVar7)) &&
             (piVar1 = (int *)((int)puVar4 + 0xc), piVar1 != (int *)0x0)) {
            *(undefined1 *)(*piVar1 + 0x20) = 0;
          }
        }
      }
      uVar7 = *(uint *)(param_1 + 0x1edc + uVar17 * 4);
      if (uVar7 != 0xffffffff) {
        iVar5 = *piVar3;
        uVar8 = *(uint *)(iVar5 + 0x167c);
        if (uVar8 != 0) {
          uVar14 = 0;
          uVar16 = uVar8;
          do {
            uVar18 = uVar16 + uVar14 >> 1;
            uVar15 = *(ulonglong *)(*(int *)(iVar5 + 0x1678) + uVar18 * 0x10);
            uVar12 = uVar18;
            if (uVar15 <= uVar7) {
              if (uVar7 <= uVar15) break;
              uVar14 = uVar18 + 1;
              uVar18 = uVar14;
              uVar12 = uVar16;
            }
            uVar16 = uVar12;
          } while (uVar16 != uVar14);
          if (((uVar18 != uVar8) &&
              (puVar4 = (ulonglong *)(*(int *)(iVar5 + 0x1678) + uVar18 * 0x10),
              *puVar4 == (ulonglong)uVar7)) &&
             (piVar1 = (int *)((int)puVar4 + 0xc), piVar1 != (int *)0x0)) {
            *(undefined1 *)(*piVar1 + 0x20) = 0;
          }
        }
      }
      uVar17 = uVar17 + 4;
    } while (uVar17 < 8);
    iVar5 = *(int *)(param_1 + 0x1d7c);
    if (iVar5 != 0) {
      FUN_10077dc0(*(undefined4 *)(*piVar2 + 0x172c0),iVar5,1);
      (*pcVar11)();
      (*extraout_w11_00)(iVar5);
    }
    *(int *)(param_1 + 0x1d7c) = 0;
    iVar5 = *(int *)(param_1 + 0x1d80);
    if (iVar5 != 0) {
      FUN_1001e820(iVar5,1);
    }
    *(int *)(param_1 + 0x1d80) = 0;
    iVar5 = *(int *)(param_1 + 0x1d78);
    if (iVar5 != 0) {
      FUN_1001e820(iVar5,1);
    }
    *(int *)(param_1 + 0x1d78) = 0;
    piVar1 = (int *)(param_1 + 0x1d6c);
    if (*piVar1 != 0) {
      FUN_10077c00(*(undefined4 *)(*piVar2 + 0x172c0),*piVar1,0,1);
    }
    piVar3 = (int *)(param_1 + 0x1d70);
    if (*piVar3 != 0) {
      FUN_10077c00(*(undefined4 *)(*piVar2 + 0x172c0),*piVar3,0,1);
    }
    if (*piVar1 != 0) {
      FUN_1001e820(*piVar1,1);
    }
    *piVar1 = 0;
    if (*piVar3 != 0) {
      FUN_1001e820(*piVar3,1);
    }
    *piVar3 = 0;
    iVar5 = *(int *)(param_1 + 0x1d68);
    if (iVar5 != 0) {
      FUN_1001ea20(iVar5);
    }
    *(int *)(param_1 + 0x1d68) = 0;
    iVar5 = *(int *)(param_1 + 0x1d64);
    if (iVar5 != 0) {
      FUN_1001ea20(iVar5);
    }
    *(int *)(param_1 + 0x1d64) = 0;
    FUN_10081dc0(*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    FUN_10081dc0(*(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
    iVar5 = *piVar2;
    if (iVar5 != 0) {
      piVar1 = (int *)(iVar5 + 8);
      do {
        iVar6 = *piVar1;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar10) {
          *piVar1 = iVar6 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      DataMemoryBarrier(2,3);
      if (iVar6 + -1 == 0) {
        if (*(short *)(iVar5 + 0xc) != 0) {
          uVar13 = (*(code *)PTR_FUN_100a1028)(0);
          (*(code *)PTR_FUN_100a109c)(*(short *)(iVar5 + 0xc),uVar13);
          iVar6 = *(int *)(iVar5 + 0x10);
          if (iVar6 != 0) {
            (*(code *)PTR_FUN_100a101c)(iVar6);
            *(int *)(iVar5 + 0x10) = 0;
          }
        }
        (*pcVar11)();
        (*extraout_w11_01)(iVar5);
      }
    }
    *piVar2 = 0;
  }
  return;
}

