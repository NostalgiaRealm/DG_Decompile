/*
 * FUN_10047080 at 10047080
 * undefined FUN_10047080(void)
 * Address ranges: 10047080-100476a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10047080(int param_1)

{
  int *piVar1;
  ulonglong *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar14;
  
  if (*(int *)(param_1 + 0xd9b4) != 0) {
    FUN_100fd9e8(*(int *)(param_1 + 0xd9b8) + 0x11c0);
    pcVar8 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1,0);
    FUN_100e1060(*(int *)(*(int *)(param_1 + 0xd9b8) + 0x1304) + 4,0);
    piVar1 = (int *)(*(int *)(param_1 + 0xd9b4) + 0x49c);
    do {
      iVar3 = *piVar1;
      if (iVar3 == param_1) {
        iVar3 = 0;
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar7) {
        *piVar1 = iVar3;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    DataMemoryBarrier(2,3);
    if (*(int *)(param_1 + 0xdcf8) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xdcf8) + 0x10) = 0;
    }
    if (*(int *)(param_1 + 0xdcfc) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xdcfc) + 0x10) = 0;
    }
    if (*(int *)(param_1 + 0xdd00) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xdd00) + 0x10) = 0;
    }
    if (*(int *)(param_1 + 0xdd04) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xdd04) + 0x10) = 0;
    }
    if (*(int *)(param_1 + 0xdd08) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xdd08) + 0x10) = 0;
    }
    if (*(int *)(param_1 + 0xdd0c) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xdd0c) + 0x10) = 0;
    }
    if (*(int *)(param_1 + 0xdd10) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xdd10) + 0x10) = 0;
    }
    if (*(int *)(param_1 + 0xdd14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xdd14) + 0x10) = 0;
    }
    if (*(int *)(param_1 + 0xdd18) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xdd18) + 0x10) = 0;
    }
    if (*(int *)(param_1 + 0xdd1c) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xdd1c) + 0x10) = 0;
    }
    if (*(int *)(param_1 + 0xdd20) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xdd20) + 0x10) = 0;
    }
    if (*(int *)(param_1 + 0xdd24) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xdd24) + 0x10) = 0;
    }
    if (*(int *)(param_1 + 0xdd28) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xdd28) + 0x10) = 0;
    }
    if (*(int *)(param_1 + 0xdd2c) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xdd2c) + 0x10) = 0;
    }
    if (*(int *)(param_1 + 0xdd30) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xdd30) + 0x10) = 0;
    }
    if (*(int *)(param_1 + 0xdd34) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xdd34) + 0x10) = 0;
    }
    if (*(int *)(param_1 + 0xdd38) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0xdd38) + 0x10) = 0;
    }
    if (*(int *)(param_1 + 0xda60) != 0) {
      FUN_10046cd0(*(int *)(param_1 + 0xda60),1);
    }
    if (*(int *)(param_1 + 0xda58) != 0) {
      FUN_10046cd0(*(int *)(param_1 + 0xda58),1);
    }
    if (*(int *)(param_1 + 0xda5c) != 0) {
      FUN_10046cd0(*(int *)(param_1 + 0xda5c),1);
    }
    if (*(int *)(param_1 + 0xd9e8) != 0) {
      FUN_10046cd0(*(int *)(param_1 + 0xd9e8),1);
    }
    if (*(int *)(param_1 + 0xda54) != 0) {
      FUN_10046cd0(*(int *)(param_1 + 0xda54),1);
    }
    *(undefined4 *)(param_1 + 0xda60) = 0;
    *(undefined8 *)(param_1 + 0xda58) = 0;
    *(undefined4 *)(param_1 + 0xd9e8) = 0;
    *(undefined4 *)(param_1 + 0xda54) = 0;
    *(undefined4 *)(param_1 + 0xda10) = 0;
    FUN_1005e3e0(param_1 + 0xda18);
    FUN_1005d8a8(param_1 + 0xd9ec);
    uVar13 = 0;
    do {
      uVar4 = *(uint *)(param_1 + 0xdb48 + uVar13 * 4);
      if (uVar4 != 0xffffffff) {
        iVar3 = *(int *)(param_1 + 0xd9b8);
        uVar5 = *(uint *)(iVar3 + 0x167c);
        if (uVar5 != 0) {
          uVar10 = 0;
          uVar12 = uVar5;
          do {
            uVar14 = uVar12 + uVar10 >> 1;
            uVar11 = *(ulonglong *)(*(int *)(iVar3 + 0x1678) + uVar14 * 0x10);
            uVar9 = uVar14;
            if (uVar11 <= uVar4) {
              if (uVar4 <= uVar11) break;
              uVar10 = uVar14 + 1;
              uVar14 = uVar10;
              uVar9 = uVar12;
            }
            uVar12 = uVar9;
          } while (uVar12 != uVar10);
          if (((uVar14 != uVar5) &&
              (puVar2 = (ulonglong *)(*(int *)(iVar3 + 0x1678) + uVar14 * 0x10),
              *puVar2 == (ulonglong)uVar4)) &&
             (piVar1 = (int *)((int)puVar2 + 0xc), piVar1 != (int *)0x0)) {
            *(undefined1 *)(*piVar1 + 0x20) = 0;
          }
        }
      }
      uVar4 = *(uint *)(param_1 + 0xdb4c + uVar13 * 4);
      if (uVar4 != 0xffffffff) {
        iVar3 = *(int *)(param_1 + 0xd9b8);
        uVar5 = *(uint *)(iVar3 + 0x167c);
        if (uVar5 != 0) {
          uVar10 = 0;
          uVar12 = uVar5;
          do {
            uVar14 = uVar12 + uVar10 >> 1;
            uVar11 = *(ulonglong *)(*(int *)(iVar3 + 0x1678) + uVar14 * 0x10);
            uVar9 = uVar14;
            if (uVar11 <= uVar4) {
              if (uVar4 <= uVar11) break;
              uVar10 = uVar14 + 1;
              uVar14 = uVar10;
              uVar9 = uVar12;
            }
            uVar12 = uVar9;
          } while (uVar12 != uVar10);
          if (((uVar14 != uVar5) &&
              (puVar2 = (ulonglong *)(*(int *)(iVar3 + 0x1678) + uVar14 * 0x10),
              *puVar2 == (ulonglong)uVar4)) &&
             (piVar1 = (int *)((int)puVar2 + 0xc), piVar1 != (int *)0x0)) {
            *(undefined1 *)(*piVar1 + 0x20) = 0;
          }
        }
      }
      uVar4 = *(uint *)(param_1 + 0xdb50 + uVar13 * 4);
      if (uVar4 != 0xffffffff) {
        iVar3 = *(int *)(param_1 + 0xd9b8);
        uVar5 = *(uint *)(iVar3 + 0x167c);
        if (uVar5 != 0) {
          uVar10 = 0;
          uVar12 = uVar5;
          do {
            uVar14 = uVar12 + uVar10 >> 1;
            uVar11 = *(ulonglong *)(*(int *)(iVar3 + 0x1678) + uVar14 * 0x10);
            uVar9 = uVar14;
            if (uVar11 <= uVar4) {
              if (uVar4 <= uVar11) break;
              uVar10 = uVar14 + 1;
              uVar14 = uVar10;
              uVar9 = uVar12;
            }
            uVar12 = uVar9;
          } while (uVar12 != uVar10);
          if (((uVar14 != uVar5) &&
              (puVar2 = (ulonglong *)(*(int *)(iVar3 + 0x1678) + uVar14 * 0x10),
              *puVar2 == (ulonglong)uVar4)) &&
             (piVar1 = (int *)((int)puVar2 + 0xc), piVar1 != (int *)0x0)) {
            *(undefined1 *)(*piVar1 + 0x20) = 0;
          }
        }
      }
      uVar4 = *(uint *)(param_1 + 0xdb54 + uVar13 * 4);
      if (uVar4 != 0xffffffff) {
        iVar3 = *(int *)(param_1 + 0xd9b8);
        uVar5 = *(uint *)(iVar3 + 0x167c);
        if (uVar5 != 0) {
          uVar10 = 0;
          uVar12 = uVar5;
          do {
            uVar14 = uVar12 + uVar10 >> 1;
            uVar11 = *(ulonglong *)(*(int *)(iVar3 + 0x1678) + uVar14 * 0x10);
            uVar9 = uVar14;
            if (uVar11 <= uVar4) {
              if (uVar4 <= uVar11) break;
              uVar10 = uVar14 + 1;
              uVar14 = uVar10;
              uVar9 = uVar12;
            }
            uVar12 = uVar9;
          } while (uVar12 != uVar10);
          if (((uVar14 != uVar5) &&
              (puVar2 = (ulonglong *)(*(int *)(iVar3 + 0x1678) + uVar14 * 0x10),
              *puVar2 == (ulonglong)uVar4)) &&
             (piVar1 = (int *)((int)puVar2 + 0xc), piVar1 != (int *)0x0)) {
            *(undefined1 *)(*piVar1 + 0x20) = 0;
          }
        }
      }
      uVar13 = uVar13 + 4;
    } while (uVar13 < 8);
    iVar3 = *(int *)(param_1 + 0xd9e0);
    if (iVar3 != 0) {
      FUN_100ec118(*(undefined4 *)(*(int *)(param_1 + 0xd9b4) + 0x172c0),iVar3,1);
      (*pcVar8)();
      (*extraout_w11_00)(iVar3);
    }
    *(undefined4 *)(param_1 + 0xd9e0) = 0;
    if (*(int *)(param_1 + 0xd9e4) != 0) {
      FUN_10046cd0(*(int *)(param_1 + 0xd9e4),1);
    }
    *(undefined4 *)(param_1 + 0xd9e4) = 0;
    if (*(int *)(param_1 + 0xd9dc) != 0) {
      FUN_10046cd0(*(int *)(param_1 + 0xd9dc),1);
    }
    *(undefined4 *)(param_1 + 0xd9dc) = 0;
    if (*(int *)(param_1 + 0xd9d0) != 0) {
      FUN_100ebf50(*(undefined4 *)(*(int *)(param_1 + 0xd9b4) + 0x172c0),*(int *)(param_1 + 0xd9d0),
                   0,1);
    }
    if (*(int *)(param_1 + 0xd9d4) != 0) {
      FUN_100ebf50(*(undefined4 *)(*(int *)(param_1 + 0xd9b4) + 0x172c0),*(int *)(param_1 + 0xd9d4),
                   0,1);
    }
    if (*(int *)(param_1 + 0xd9d0) != 0) {
      FUN_10046cd0(*(int *)(param_1 + 0xd9d0),1);
    }
    *(undefined4 *)(param_1 + 0xd9d0) = 0;
    if (*(int *)(param_1 + 0xd9d4) != 0) {
      FUN_10046cd0(*(int *)(param_1 + 0xd9d4),1);
    }
    *(undefined4 *)(param_1 + 0xd9d4) = 0;
    if (*(int *)(param_1 + 0xd9cc) != 0) {
      FUN_10046ed0(*(int *)(param_1 + 0xd9cc));
    }
    *(undefined4 *)(param_1 + 0xd9cc) = 0;
    if (*(int *)(param_1 + 0xd9c8) != 0) {
      FUN_10046ed0(*(int *)(param_1 + 0xd9c8));
    }
    *(undefined4 *)(param_1 + 0xd9c8) = 0;
    FUN_100fed00(*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    FUN_100fed00(*(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_100dafb0(*(undefined4 *)(param_1 + 0xd9b4));
    *(undefined4 *)(param_1 + 0xd9b4) = 0;
  }
  return;
}

