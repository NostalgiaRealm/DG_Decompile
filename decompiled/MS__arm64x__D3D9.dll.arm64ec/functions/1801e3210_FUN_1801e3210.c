/*
 * FUN_1801e3210 at 1801e3210
 * undefined FUN_1801e3210(void)
 * Address ranges: 1801e3210-1801e3477
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1801e3210(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  int *piVar3;
  uint *puVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  longlong lVar14;
  longlong lVar15;
  
  lVar14 = *(longlong *)(param_1 + -0x50);
  iVar7 = FUN_1801042d0(param_1 + 8);
  if (*(int *)(param_1 + 0xc) + iVar7 == 0) {
    lVar15 = param_1 + -0x90;
    puVar2 = (uint *)&DAT_00000e78;
    if (*(longlong *)(param_1 + -0x50) != 0) {
      puVar2 = (uint *)(*(longlong *)(param_1 + -0x50) + -0x59c0);
    }
    if (((*puVar2 >> 2 & 1) == 0) && (*(int *)(DAT_180258900 + 0x30) == 0)) {
      bVar5 = false;
      *(undefined4 *)(DAT_180258900 + 0x2c) = 1;
    }
    else {
      bVar5 = true;
      iVar8 = thunk_FUN_1802236e4(DAT_180258900);
      if (iVar8 == 0) {
        FUN_1801085c8();
      }
    }
    lVar13 = *(longlong *)(param_1 + -0x50);
    plVar1 = (longlong *)&DAT_00000f00;
    if (lVar13 != 0) {
      plVar1 = (longlong *)(lVar13 + -0x5938);
    }
    puVar2 = (uint *)&DAT_00000f08;
    if (lVar13 != 0) {
      puVar2 = (uint *)(lVar13 + -0x5930);
    }
    if (*puVar2 != 0) {
      uVar11 = 0;
      do {
        uVar10 = (uint)uVar11;
        if (*(longlong *)(*plVar1 + uVar11 * 8) == lVar15) {
          if (uVar10 != 0xffffffff) {
            if (*(int *)(param_1 + -0x34) == 0) {
              piVar3 = (int *)&DAT_00000e68;
              if (lVar13 != 0) {
                piVar3 = (int *)(lVar13 + -0x59d0);
              }
              if (*piVar3 == 1) {
                puVar4 = (uint *)&DAT_00000ea8;
                if (lVar13 != 0) {
                  puVar4 = (uint *)(lVar13 + -0x5990);
                }
                (&DAT_18024ea60)[(ulonglong)*puVar4 * 0x4b] =
                     (&DAT_18024ea60)[(ulonglong)*puVar4 * 0x4b] +
                     (ulonglong)*(uint *)(param_1 + -0x70);
              }
            }
            uVar12 = *puVar2;
            if (uVar10 < uVar12) {
              while (uVar10 = (int)uVar11 + 1, uVar10 < uVar12) {
                *(undefined8 *)(*plVar1 + uVar11 * 8) =
                     *(undefined8 *)(*plVar1 + (ulonglong)uVar10 * 8);
                uVar11 = (ulonglong)uVar10;
                uVar12 = *puVar2;
              }
              *puVar2 = uVar12 - 1;
            }
          }
          break;
        }
        uVar11 = (ulonglong)(uVar10 + 1);
      } while (uVar10 + 1 < *puVar2);
    }
    puVar6 = __hybrid_os_arm64x_dispatch_icall;
    if (*(longlong *)(param_1 + -0x30) != 0) {
      uVar9 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11)(uVar9,1);
    }
    if (*(longlong *)(param_1 + -0x28) != 0) {
      uVar9 = (*(code *)puVar6)(0x180224000);
      (*extraout_x11_00)(uVar9,1);
    }
    *(undefined8 *)(param_1 + -0x30) = 0;
    *(undefined8 *)(param_1 + -0x28) = 0;
    if (*(longlong *)(param_1 + -0x88) != 0) {
      FUN_180222b28(*(undefined8 *)(*(longlong *)(param_1 + -0x88) + -8));
    }
    *(undefined8 *)(param_1 + -0x88) = 0;
    if (lVar15 != 0) {
      (*(code *)puVar6)(0x180224000);
      (*extraout_x11_01)(lVar15,1);
    }
    if (bVar5) {
      thunk_FUN_18022370c(DAT_180258900);
    }
    else {
      *(undefined4 *)(DAT_180258900 + 0x2c) = 0;
    }
  }
  if (iVar7 == 0) {
    lVar15 = 0x6838;
    if (lVar14 != 0) {
      lVar15 = lVar14;
    }
    FUN_1801c3098(lVar15);
  }
  return iVar7;
}

