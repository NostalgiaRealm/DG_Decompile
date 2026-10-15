/*
 * FUN_1801991f8 at 1801991f8
 * undefined FUN_1801991f8(void)
 * Address ranges: 1801991f8-18019966b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1801991f8(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  code *extraout_x11;
  code *extraout_x11_00;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong in_stack_ffffffffffffff48;
  ulonglong in_stack_ffffffffffffff50;
  ulonglong in_stack_ffffffffffffff60;
  
  puVar5 = __hybrid_os_arm64x_dispatch_icall;
  uVar15 = *(uint *)(param_1 + 0x2c);
  if (10 < uVar15 - 0x15) {
    uVar9 = 7;
    if (*(int *)(param_1 + 0x44) != 0) {
      uVar9 = 5;
    }
    if (((uVar9 < *(uint *)(&DAT_18022e050 + (ulonglong)uVar15 * 4)) ||
        (*(int *)(param_1 + 0x38) != 0)) && (2 < *(int *)(param_1 + 0x44) - 3U)) {
      if (*(longlong *)(param_1 + 0x130) == 0) {
        iVar7 = *(int *)(param_1 + 0x34);
        uVar10 = 4;
        if (iVar7 == 1) {
          uVar10 = 0;
        }
        uVar11 = 0x1f;
        if ((&DAT_18022dc68)[uVar15] == '\0') {
          uVar11 = 0x1c;
        }
        lVar18 = 0x30;
        if (*(int *)(param_1 + 0x38) != 0) {
          lVar18 = 0x38;
        }
        FUN_180198608(param_1 + 0x118,*(undefined4 *)(param_1 + 0x24),
                      *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + lVar18),iVar7,1,0x1b
                      ,uVar11,0x1c,in_stack_ffffffffffffff48 & 0xffffffff00000000,
                      in_stack_ffffffffffffff50 & 0xffffffff00000000,0x28,
                      in_stack_ffffffffffffff60 & 0xffffffff00000000,uVar10,0,iVar7 != 1,0);
        FUN_180199b58(param_1);
      }
      if (((param_2 & 1) != 0) || (*(char *)(param_1 + 0x4d) == '\x01')) {
        FUN_180198d98(param_1 + 0x118,0);
      }
      puVar5 = __hybrid_os_arm64x_dispatch_icall;
      lVar18 = *(longlong *)(param_1 + (param_2 & 0xff) * 0x10 + 0x140);
      if (*(longlong *)(param_1 + 0x130) == 0) {
        return lVar18;
      }
      uVar9 = 0;
      uVar15 = 0;
      if (*(int *)(param_1 + 0x34) != 0) {
        do {
          if (*(int *)(param_1 + 0x30) != 0) {
            uVar2 = 1 << (ulonglong)(uVar15 & 0x1f);
            uVar16 = 0;
            do {
              (*(code *)puVar5)();
              cVar6 = (*extraout_x11)(param_1,uVar16,uVar15,1);
              uVar19 = 0;
              if (cVar6 != '\0') {
                uVar19 = uVar2;
              }
              lVar17 = 0x38;
              if (*(int *)(param_1 + 0x38) == 0) {
                lVar17 = 0x30;
              }
              iVar7 = *(int *)(param_1 + lVar17);
              if (*(char *)(param_1 + 0x169) != '\0') {
                uVar3 = *(uint *)(param_1 + 0x28) >> (ulonglong)(uVar16 & 0x1f);
                uVar4 = *(uint *)(param_1 + 0x24) >> (ulonglong)(uVar16 & 0x1f);
                if (uVar3 == 0) {
                  uVar3 = 1;
                }
                if (uVar4 == 0) {
                  uVar4 = 1;
                }
                thunk_FUN_180223c20(*(longlong *)(param_1 + 0x148) +
                                    (ulonglong)(uVar16 + iVar7 * uVar15) * 0x28 + 0x18,0,0,uVar4,
                                    uVar3);
              }
              uVar12 = (ulonglong)(uVar16 + iVar7 * uVar15);
              iVar7 = thunk_FUN_180223d24(*(longlong *)(param_1 + 0x148) + uVar12 * 0x28 + 0x18);
              if (iVar7 == 0) {
                puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x148) + uVar12 * 0x28);
                FUN_180197a20(*(undefined8 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x2c),
                              uVar16,uVar15,*(undefined8 *)(param_1 + 0x10),
                              *(undefined4 *)(puVar1 + 3),*(undefined4 *)((longlong)puVar1 + 0x1c),
                              *(undefined4 *)(puVar1 + 4),*(undefined4 *)((longlong)puVar1 + 0x24),
                              *(undefined8 *)(param_1 + 0x130),*puVar1,
                              *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x88));
                thunk_FUN_180223bf8(*(longlong *)(param_1 + 0x148) + uVar12 * 0x28 + 0x18);
                lVar14 = *(longlong *)(param_1 + 0x140);
                lVar17 = *(longlong *)(param_1 + 0x50) +
                         (ulonglong)*(uint *)(param_1 + 0x20) * 0x18c0 + 0x870;
                lVar13 = 0;
                do {
                  if (lVar14 == *(longlong *)(lVar17 + lVar13 * 8)) {
                    *(undefined8 *)(lVar17 + lVar13 * 8) = 0;
                  }
                  lVar13 = lVar13 + 1;
                  uVar19 = uVar2;
                } while (lVar13 != 0x40);
              }
              uVar16 = uVar16 + 1;
              uVar9 = uVar19 | uVar9;
            } while (uVar16 < *(uint *)(param_1 + 0x30));
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < *(uint *)(param_1 + 0x34));
      }
      *(undefined1 *)(param_1 + 0x169) = 0;
      if (*(char *)(param_1 + 0x4d) == '\x01') {
        FUN_180198b40(param_1 + 0x60,*(undefined4 *)(param_1 + 0x30));
        *(undefined1 *)(param_1 + 0x4d) = 2;
      }
      if (uVar9 == 0) {
        return lVar18;
      }
      lVar17 = 0x60;
      if (*(longlong *)(param_1 + 0x140) != 0) {
        lVar17 = 0x118;
      }
      lVar13 = 0x30;
      if (*(int *)(param_1 + 0x38) != 0) {
        lVar13 = 0x38;
      }
      FUN_18019a6b0(param_1,lVar17 + param_1,0,uVar9,*(undefined4 *)(param_1 + lVar13));
      return lVar18;
    }
  }
  uVar9 = 0;
  uVar15 = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    do {
      lVar18 = *(longlong *)(param_1 + 0x148);
      if (((lVar18 != 0) || (lVar18 = *(longlong *)(param_1 + 0x90), lVar18 != 0)) &&
         (iVar7 = thunk_FUN_180223d24(lVar18 + (ulonglong)(*(int *)(param_1 + 0x3c) * uVar15) * 0x28
                                      + 0x18), iVar7 == 0)) {
        uVar9 = 1 << (ulonglong)(uVar15 & 0x1f) | uVar9;
      }
      if (*(int *)(param_1 + 0x30) != 0) {
        uVar16 = 0;
        do {
          (*(code *)puVar5)();
          cVar6 = (*extraout_x11_00)(param_1,uVar16,uVar15,1);
          uVar16 = uVar16 + 1;
          uVar2 = 0;
          if (cVar6 != '\0') {
            uVar2 = 1 << (ulonglong)(uVar15 & 0x1f);
          }
          uVar9 = uVar9 | uVar2;
        } while (uVar16 < *(uint *)(param_1 + 0x30));
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < *(uint *)(param_1 + 0x34));
    param_2 = param_2 & 0xffffffff;
  }
  lVar18 = *(longlong *)(param_1 + 0x140);
  if ((param_2 & 1) == 0) {
    if (lVar18 == 0) {
      lVar18 = *(longlong *)(param_1 + 0x88);
    }
  }
  else {
    if (lVar18 == 0) {
      uVar8 = 0;
      lVar17 = 0x98;
      lVar18 = 0x60;
    }
    else {
      uVar8 = *(undefined8 *)(param_1 + 0x78);
      lVar17 = 0x150;
      lVar18 = 0x118;
    }
    FUN_180198d98(lVar18 + param_1,uVar8);
    lVar18 = *(longlong *)(lVar17 + param_1);
  }
  if (uVar9 != 0) {
    FUN_18019a6b0(param_1,param_1 + 0x60,0,uVar9,*(undefined4 *)(param_1 + 0x3c));
  }
  return lVar18;
}

