/*
 * FUN_1801e5788 at 1801e5788
 * undefined FUN_1801e5788(void)
 * Address ranges: 1801e5788-1801e59f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801e5788(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  uint *puVar3;
  int *piVar4;
  uint *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  code *extraout_x11;
  code *extraout_x11_00;
  
  iVar10 = FUN_1801042d0((longlong)param_1 + 0x124);
  if (*(int *)(param_1 + 0x24) + iVar10 == 0) {
    puVar3 = (uint *)&DAT_00000e78;
    if (param_1[3] != 0) {
      puVar3 = (uint *)(param_1[3] + -0x59c0);
    }
    if (((*puVar3 >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
      bVar7 = false;
      *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
    }
    else {
      bVar7 = true;
      iVar10 = thunk_FUN_1802236e4(DAT_180258900);
      if (iVar10 == 0) {
        FUN_1801085c8();
      }
    }
    lVar12 = param_1[3];
    bVar9 = lVar12 != 0;
    lVar1 = 0;
    if (bVar9) {
      lVar1 = lVar12 + -0x6838;
    }
    plVar2 = (longlong *)&DAT_00000ee0;
    if (bVar9) {
      plVar2 = (longlong *)(lVar12 + -0x5958);
    }
    puVar3 = (uint *)&DAT_00000ee8;
    if (bVar9) {
      puVar3 = (uint *)(lVar12 + -0x5950);
    }
    if (*puVar3 != 0) {
      uVar14 = 0;
      do {
        uVar13 = (uint)uVar14;
        if (*(undefined8 **)(*plVar2 + uVar14 * 8) == param_1) {
          if (uVar13 != 0xffffffff) {
            if (*(int *)(param_1 + 0x20) == 0) {
              piVar4 = (int *)&DAT_00000e68;
              if (lVar12 != 0) {
                piVar4 = (int *)(lVar12 + -0x59d0);
              }
              if (*piVar4 == 1) {
                puVar5 = (uint *)&DAT_00000ea8;
                if (lVar12 != 0) {
                  puVar5 = (uint *)(lVar12 + -0x5990);
                }
                (&DAT_18024ea60)[(ulonglong)*puVar5 * 0x4b] =
                     (&DAT_18024ea60)[(ulonglong)*puVar5 * 0x4b] +
                     (ulonglong)*(uint *)((longlong)param_1 + 0x104);
              }
            }
            uVar15 = *puVar3;
            if (uVar13 < uVar15) {
              while (uVar11 = uVar13 + 1, uVar11 < uVar15) {
                *(undefined8 *)(*plVar2 + (ulonglong)uVar13 * 8) =
                     *(undefined8 *)(*plVar2 + (ulonglong)uVar11 * 8);
                uVar13 = uVar11;
                uVar15 = *puVar3;
              }
              *puVar3 = uVar15 - 1;
            }
            puVar6 = (undefined8 *)0x0;
            if (param_1 != (undefined8 *)0x0) {
              puVar6 = param_1 + 0x22;
            }
            FUN_180105cb0(lVar1,puVar6);
          }
          break;
        }
        uVar14 = (ulonglong)(uVar13 + 1);
      } while (uVar13 + 1 < *puVar3);
    }
    puVar8 = __hybrid_os_arm64x_dispatch_icall;
    uVar13 = 0;
    if (*(short *)((longlong)param_1 + 0x3c) != 0) {
      do {
        (*(code *)puVar8)();
        (*extraout_x11)(param_1,uVar13);
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(ushort *)((longlong)param_1 + 0x3c));
    }
    if (param_1[0x1c] != 0) {
      (*(code *)puVar8)(0x180224000);
      (*extraout_x11_00)();
    }
    param_1[0x1c] = 0;
    param_1[0x22] = &PTR_FUN_1802297e8;
    param_1[0x23] = &PTR_FUN_18022f338;
    *param_1 = &PTR_D3DPERF_GetStatus_native_180229eb0;
    FUN_180116678(param_1 + 1);
    FUN_1802229d8(param_1,0x138);
    if (bVar7) {
      thunk_FUN_18022370c(DAT_180258900);
    }
    else {
      *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
    }
  }
  return;
}

