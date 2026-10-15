/*
 * FUN_10055b60 at 10055b60
 * undefined FUN_10055b60(void)
 * Address ranges: 10055b60-1005633f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10055b60(int param_1)

{
  int *piVar1;
  int iVar2;
  ulonglong *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  if (*(int *)(param_1 + 0xf6b4) != 0) {
    FUN_10130fb8(*(int *)(param_1 + 0xf6b8) + 0x11c0);
    pcVar9 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1,0);
    FUN_101138b0(*(int *)(*(int *)(param_1 + 0xf6b8) + 0x1304) + 4,0);
    piVar1 = (int *)(*(int *)(param_1 + 0xf6b4) + 0x49c);
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
    } while (cVar7 != '\0');
    DataMemoryBarrier(2,3);
    iVar4 = *(int *)(param_1 + 0xf7f0);
    if (iVar4 != -1) {
      iVar5 = *(int *)(*(int *)(param_1 + 0xf6b8) + 0x15dc);
      iVar2 = iVar5 + 0x1c;
      (*(code *)PTR_FUN_1016c074)(iVar2);
      FUN_10111aa8(iVar5,iVar4,1);
      (*(code *)PTR_FUN_1016c0c0)(iVar2);
    }
    FUN_10070390(param_1 + 0xf768);
    FUN_10061c68(param_1);
    *(undefined4 *)(param_1 + 0xf710) = 0;
    FUN_10072da0(param_1 + 0xf718);
    FUN_1006ff18(param_1 + 0xf6ec);
    uVar13 = 0;
    do {
      uVar6 = *(uint *)(param_1 + 0xf900 + uVar13 * 4);
      if (uVar6 != 0xffffffff) {
        iVar4 = *(int *)(param_1 + 0xf6b8);
        uVar14 = *(uint *)(iVar4 + 0x167c);
        if (uVar14 != 0) {
          uVar11 = 0;
          uVar15 = uVar14;
          do {
            uVar16 = uVar15 + uVar11 >> 1;
            uVar12 = *(ulonglong *)(*(int *)(iVar4 + 0x1678) + uVar16 * 0x10);
            uVar10 = uVar16;
            if (uVar12 <= uVar6) {
              if (uVar6 <= uVar12) break;
              uVar11 = uVar16 + 1;
              uVar16 = uVar11;
              uVar10 = uVar15;
            }
            uVar15 = uVar10;
          } while (uVar15 != uVar11);
          if (((uVar16 != uVar14) &&
              (puVar3 = (ulonglong *)(*(int *)(iVar4 + 0x1678) + uVar16 * 0x10),
              *puVar3 == (ulonglong)uVar6)) &&
             (piVar1 = (int *)((int)puVar3 + 0xc), piVar1 != (int *)0x0)) {
            *(undefined1 *)(*piVar1 + 0x20) = 0;
          }
        }
      }
      uVar6 = *(uint *)(param_1 + 0xf904 + uVar13 * 4);
      if (uVar6 != 0xffffffff) {
        iVar4 = *(int *)(param_1 + 0xf6b8);
        uVar14 = *(uint *)(iVar4 + 0x167c);
        if (uVar14 != 0) {
          uVar11 = 0;
          uVar15 = uVar14;
          do {
            uVar16 = uVar15 + uVar11 >> 1;
            uVar12 = *(ulonglong *)(*(int *)(iVar4 + 0x1678) + uVar16 * 0x10);
            uVar10 = uVar16;
            if (uVar12 <= uVar6) {
              if (uVar6 <= uVar12) break;
              uVar11 = uVar16 + 1;
              uVar16 = uVar11;
              uVar10 = uVar15;
            }
            uVar15 = uVar10;
          } while (uVar15 != uVar11);
          if (((uVar16 != uVar14) &&
              (puVar3 = (ulonglong *)(*(int *)(iVar4 + 0x1678) + uVar16 * 0x10),
              *puVar3 == (ulonglong)uVar6)) &&
             (piVar1 = (int *)((int)puVar3 + 0xc), piVar1 != (int *)0x0)) {
            *(undefined1 *)(*piVar1 + 0x20) = 0;
          }
        }
      }
      uVar6 = *(uint *)(param_1 + 0xf908 + uVar13 * 4);
      if (uVar6 != 0xffffffff) {
        iVar4 = *(int *)(param_1 + 0xf6b8);
        uVar14 = *(uint *)(iVar4 + 0x167c);
        if (uVar14 != 0) {
          uVar11 = 0;
          uVar15 = uVar14;
          do {
            uVar16 = uVar15 + uVar11 >> 1;
            uVar12 = *(ulonglong *)(*(int *)(iVar4 + 0x1678) + uVar16 * 0x10);
            uVar10 = uVar16;
            if (uVar12 <= uVar6) {
              if (uVar6 <= uVar12) break;
              uVar11 = uVar16 + 1;
              uVar16 = uVar11;
              uVar10 = uVar15;
            }
            uVar15 = uVar10;
          } while (uVar15 != uVar11);
          if (((uVar16 != uVar14) &&
              (puVar3 = (ulonglong *)(*(int *)(iVar4 + 0x1678) + uVar16 * 0x10),
              *puVar3 == (ulonglong)uVar6)) &&
             (piVar1 = (int *)((int)puVar3 + 0xc), piVar1 != (int *)0x0)) {
            *(undefined1 *)(*piVar1 + 0x20) = 0;
          }
        }
      }
      uVar6 = *(uint *)(param_1 + 0xf90c + uVar13 * 4);
      if (uVar6 != 0xffffffff) {
        iVar4 = *(int *)(param_1 + 0xf6b8);
        uVar14 = *(uint *)(iVar4 + 0x167c);
        if (uVar14 != 0) {
          uVar11 = 0;
          uVar15 = uVar14;
          do {
            uVar16 = uVar15 + uVar11 >> 1;
            uVar12 = *(ulonglong *)(*(int *)(iVar4 + 0x1678) + uVar16 * 0x10);
            uVar10 = uVar16;
            if (uVar12 <= uVar6) {
              if (uVar6 <= uVar12) break;
              uVar11 = uVar16 + 1;
              uVar16 = uVar11;
              uVar10 = uVar15;
            }
            uVar15 = uVar10;
          } while (uVar15 != uVar11);
          if (((uVar16 != uVar14) &&
              (puVar3 = (ulonglong *)(*(int *)(iVar4 + 0x1678) + uVar16 * 0x10),
              *puVar3 == (ulonglong)uVar6)) &&
             (piVar1 = (int *)((int)puVar3 + 0xc), piVar1 != (int *)0x0)) {
            *(undefined1 *)(*piVar1 + 0x20) = 0;
          }
        }
      }
      uVar13 = uVar13 + 4;
    } while (uVar13 < 0x10);
    uVar13 = *(uint *)(param_1 + 0xf9f4);
    if (uVar13 != 0xffffffff) {
      iVar4 = *(int *)(param_1 + 0xf6b8);
      uVar6 = *(uint *)(iVar4 + 0x167c);
      if (uVar6 != 0) {
        uVar14 = 0;
        uVar11 = uVar6;
        do {
          uVar15 = uVar11 + uVar14 >> 1;
          uVar12 = *(ulonglong *)(*(int *)(iVar4 + 0x1678) + uVar15 * 0x10);
          uVar16 = uVar15;
          if (uVar12 <= uVar13) {
            if (uVar13 <= uVar12) break;
            uVar14 = uVar15 + 1;
            uVar15 = uVar14;
            uVar16 = uVar11;
          }
          uVar11 = uVar16;
        } while (uVar11 != uVar14);
        if (((uVar15 != uVar6) &&
            (puVar3 = (ulonglong *)(*(int *)(iVar4 + 0x1678) + uVar15 * 0x10),
            *puVar3 == (ulonglong)uVar13)) &&
           (piVar1 = (int *)((int)puVar3 + 0xc), piVar1 != (int *)0x0)) {
          *(undefined1 *)(*piVar1 + 0x20) = 0;
        }
      }
    }
    uVar13 = *(uint *)(param_1 + 0xf9f8);
    if (uVar13 != 0xffffffff) {
      iVar4 = *(int *)(param_1 + 0xf6b8);
      uVar6 = *(uint *)(iVar4 + 0x167c);
      if (uVar6 != 0) {
        uVar14 = 0;
        uVar11 = uVar6;
        do {
          uVar15 = uVar11 + uVar14 >> 1;
          uVar12 = *(ulonglong *)(*(int *)(iVar4 + 0x1678) + uVar15 * 0x10);
          uVar16 = uVar15;
          if (uVar12 <= uVar13) {
            if (uVar13 <= uVar12) break;
            uVar14 = uVar15 + 1;
            uVar15 = uVar14;
            uVar16 = uVar11;
          }
          uVar11 = uVar16;
        } while (uVar11 != uVar14);
        if (((uVar15 != uVar6) &&
            (puVar3 = (ulonglong *)(*(int *)(iVar4 + 0x1678) + uVar15 * 0x10),
            *puVar3 == (ulonglong)uVar13)) &&
           (piVar1 = (int *)((int)puVar3 + 0xc), piVar1 != (int *)0x0)) {
          *(undefined1 *)(*piVar1 + 0x20) = 0;
        }
      }
    }
    uVar13 = *(uint *)(param_1 + 0xf9fc);
    if (uVar13 != 0xffffffff) {
      iVar4 = *(int *)(param_1 + 0xf6b8);
      uVar6 = *(uint *)(iVar4 + 0x167c);
      if (uVar6 != 0) {
        uVar14 = 0;
        uVar11 = uVar6;
        do {
          uVar15 = uVar11 + uVar14 >> 1;
          uVar12 = *(ulonglong *)(*(int *)(iVar4 + 0x1678) + uVar15 * 0x10);
          uVar16 = uVar15;
          if (uVar12 <= uVar13) {
            if (uVar13 <= uVar12) break;
            uVar14 = uVar15 + 1;
            uVar15 = uVar14;
            uVar16 = uVar11;
          }
          uVar11 = uVar16;
        } while (uVar11 != uVar14);
        if (((uVar15 != uVar6) &&
            (puVar3 = (ulonglong *)(*(int *)(iVar4 + 0x1678) + uVar15 * 0x10),
            *puVar3 == (ulonglong)uVar13)) &&
           (piVar1 = (int *)((int)puVar3 + 0xc), piVar1 != (int *)0x0)) {
          *(undefined1 *)(*piVar1 + 0x20) = 0;
        }
      }
    }
    uVar13 = *(uint *)(param_1 + 64000);
    if (uVar13 != 0xffffffff) {
      iVar4 = *(int *)(param_1 + 0xf6b8);
      uVar6 = *(uint *)(iVar4 + 0x167c);
      if (uVar6 != 0) {
        uVar14 = 0;
        uVar11 = uVar6;
        do {
          uVar15 = uVar11 + uVar14 >> 1;
          uVar12 = *(ulonglong *)(*(int *)(iVar4 + 0x1678) + uVar15 * 0x10);
          uVar16 = uVar15;
          if (uVar12 <= uVar13) {
            if (uVar13 <= uVar12) break;
            uVar14 = uVar15 + 1;
            uVar15 = uVar14;
            uVar16 = uVar11;
          }
          uVar11 = uVar16;
        } while (uVar11 != uVar14);
        if (((uVar15 != uVar6) &&
            (puVar3 = (ulonglong *)(*(int *)(iVar4 + 0x1678) + uVar15 * 0x10),
            *puVar3 == (ulonglong)uVar13)) &&
           (piVar1 = (int *)((int)puVar3 + 0xc), piVar1 != (int *)0x0)) {
          *(undefined1 *)(*piVar1 + 0x20) = 0;
        }
      }
    }
    uVar13 = *(uint *)(param_1 + 0xfa04);
    if (uVar13 != 0xffffffff) {
      iVar4 = *(int *)(param_1 + 0xf6b8);
      uVar6 = *(uint *)(iVar4 + 0x167c);
      if (uVar6 != 0) {
        uVar14 = 0;
        uVar11 = uVar6;
        do {
          uVar15 = uVar11 + uVar14 >> 1;
          uVar12 = *(ulonglong *)(*(int *)(iVar4 + 0x1678) + uVar15 * 0x10);
          uVar16 = uVar15;
          if (uVar12 <= uVar13) {
            if (uVar13 <= uVar12) break;
            uVar14 = uVar15 + 1;
            uVar15 = uVar14;
            uVar16 = uVar11;
          }
          uVar11 = uVar16;
        } while (uVar11 != uVar14);
        if (((uVar15 != uVar6) &&
            (puVar3 = (ulonglong *)(*(int *)(iVar4 + 0x1678) + uVar15 * 0x10),
            *puVar3 == (ulonglong)uVar13)) &&
           (piVar1 = (int *)((int)puVar3 + 0xc), piVar1 != (int *)0x0)) {
          *(undefined1 *)(*piVar1 + 0x20) = 0;
        }
      }
    }
    iVar4 = *(int *)(param_1 + 0xf6e0);
    if (iVar4 != 0) {
      FUN_1011e968(*(undefined4 *)(*(int *)(param_1 + 0xf6b4) + 0x172c0),iVar4,1);
      (*pcVar9)();
      (*extraout_w11_00)(iVar4);
    }
    *(undefined4 *)(param_1 + 0xf6e0) = 0;
    if (*(int *)(param_1 + 0xf6e4) != 0) {
      FUN_100557b0(*(int *)(param_1 + 0xf6e4),1);
    }
    *(undefined4 *)(param_1 + 0xf6e4) = 0;
    if (*(int *)(param_1 + 0xf6dc) != 0) {
      FUN_100557b0(*(int *)(param_1 + 0xf6dc),1);
    }
    *(undefined4 *)(param_1 + 0xf6dc) = 0;
    if (*(int *)(param_1 + 0xf6d0) != 0) {
      FUN_1011e7a0(*(undefined4 *)(*(int *)(param_1 + 0xf6b4) + 0x172c0),*(int *)(param_1 + 0xf6d0),
                   0,1);
    }
    if (*(int *)(param_1 + 0xf6d4) != 0) {
      FUN_1011e7a0(*(undefined4 *)(*(int *)(param_1 + 0xf6b4) + 0x172c0),*(int *)(param_1 + 0xf6d4),
                   0,1);
    }
    if (*(int *)(param_1 + 0xf6d0) != 0) {
      FUN_100557b0(*(int *)(param_1 + 0xf6d0),1);
    }
    *(undefined4 *)(param_1 + 0xf6d0) = 0;
    if (*(int *)(param_1 + 0xf6d4) != 0) {
      FUN_100557b0(*(int *)(param_1 + 0xf6d4),1);
    }
    *(undefined4 *)(param_1 + 0xf6d4) = 0;
    if (*(int *)(param_1 + 0xf6cc) != 0) {
      FUN_100559b0(*(int *)(param_1 + 0xf6cc));
    }
    *(undefined4 *)(param_1 + 0xf6cc) = 0;
    if (*(int *)(param_1 + 0xf6c8) != 0) {
      FUN_100559b0(*(int *)(param_1 + 0xf6c8));
    }
    *(undefined4 *)(param_1 + 0xf6c8) = 0;
    FUN_101322d0(*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    FUN_101322d0(*(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_1010d6f0(*(undefined4 *)(param_1 + 0xf6b4));
    *(undefined4 *)(param_1 + 0xf6b4) = 0;
  }
  return;
}

