/*
 * FUN_18020c7c8 at 18020c7c8
 * undefined FUN_18020c7c8(void)
 * Address ranges: 18020c7c8-18020cb5b;18020cb74-18020cc67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18020c7c8(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  byte *pbVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  longlong lVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  
  if (*(uint *)(param_1 + 0x18) < param_2) {
    return 0xffffffff;
  }
  thunk_FUN_1802236f8(param_1 + 0x28);
  puVar5 = __hybrid_os_arm64x_dispatch_icall;
  uVar19 = 0xffffffff;
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar18 = 0;
    local_70 = CONCAT44(local_70._4_4_,0xffffffff);
    if (*(int *)(param_1 + 0x70) == 0) {
      plVar10 = (longlong *)&DAT_00000008;
      goto LAB_18020c848;
    }
    do {
      plVar10 = (longlong *)(*(longlong *)(param_1 + 0x68) + uVar18 * 0x18 + 0x10);
LAB_18020c848:
      (*(code *)puVar5)(0x180224000);
      uVar7 = (*extraout_x11)();
      plVar10 = (longlong *)*plVar10;
      uVar12 = 0xffffffff;
      uVar19 = *(uint *)(plVar10 + 2);
      while (uVar19 != 0xffffffff) {
        piVar2 = (int *)(*plVar10 + (ulonglong)uVar19 * 0x18);
        if (*piVar2 == -1) break;
        if (uVar7 < *(ulonglong *)(piVar2 + 2)) {
          uVar12 = (ulonglong)uVar19;
          uVar19 = piVar2[4];
        }
        else {
          param_1 = FUN_18020c678(param_1,*piVar2,piVar2[1]);
          uVar17 = piVar2[4];
          *piVar2 = -1;
          iVar6 = (int)uVar12;
          if ((uVar17 == 0xffffffff) || (*(int *)(*plVar10 + (ulonglong)uVar17 * 0x18) == -1)) {
            uVar19 = uVar17;
            if (iVar6 != -1) {
              *(int *)((longlong)plVar10 + 0x14) = iVar6;
            }
          }
          else {
            if (iVar6 == -1) {
              *(uint *)(plVar10 + 2) = uVar17;
            }
            else {
              *(uint *)(*plVar10 + uVar12 * 0x18 + 0x10) = uVar17;
            }
            piVar2[4] = *(int *)(*plVar10 + (ulonglong)*(uint *)((longlong)plVar10 + 0x14) * 0x18 +
                                0x10);
            *(uint *)(*plVar10 + (ulonglong)*(uint *)((longlong)plVar10 + 0x14) * 0x18 + 0x10) =
                 uVar19;
            uVar19 = uVar17;
          }
        }
      }
      uVar19 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar19;
    } while (uVar19 < *(uint *)(param_1 + 0x70));
    uVar19 = (uint)local_70;
  }
  uVar17 = 0xffffffff;
  uVar18 = 0;
  if (*(int *)(param_1 + 0x58) < 1) {
LAB_18020caa4:
    uStack_54 = *(undefined4 *)(param_1 + 0x18);
    local_50 = *(undefined4 *)(param_1 + 0x1c);
    local_70 = 0;
    local_58 = *(undefined4 *)(param_1 + 0x14);
    uStack_4c = 0;
    uVar8 = (*(code *)puVar5)(0x180224000);
    iVar6 = (*extraout_x11_00)(uVar8,&local_58,&DAT_180238fa8,&local_70);
    if (iVar6 < 0) goto LAB_18020cc44;
    lVar16 = FUN_1802229a8(*(uint *)(param_1 + 0x18) >> 3);
    if (lVar16 != 0) {
      iVar6 = *(int *)(param_1 + 0x5c);
      if (*(int *)(param_1 + 0x58) != iVar6) {
        puVar1 = (undefined8 *)
                 (*(longlong *)(param_1 + 0x50) + (ulonglong)*(uint *)(param_1 + 0x58) * 0x10);
        *puVar1 = local_70;
        puVar1[1] = lVar16;
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
        FUN_180222c50(lVar16,0,*(uint *)(param_1 + 0x18) >> 3);
        uVar14 = *(uint *)(param_1 + 0x58);
        if (uVar14 == 0) goto LAB_18020cc44;
        uVar17 = 0;
        goto LAB_18020cbb8;
      }
      local_60 = iVar6 << 1;
      if (iVar6 == 0) {
        local_60 = 0x10;
      }
      lVar15 = CONCAT44(0,local_60) << 4;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = CONCAT44(0,local_60);
      if (SUB168(auVar4 * ZEXT816(0x10),8) != 0) {
        lVar15 = -1;
      }
      local_68 = FUN_1802229a8(lVar15);
      if (local_68 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(local_68,*(undefined8 *)(param_1 + 0x50),
                            (ulonglong)*(uint *)(param_1 + 0x5c) << 4);
      }
      FUN_1802229d8(lVar16);
    }
    (*(code *)puVar5)(0x180224000);
    (*extraout_x11_01)();
  }
  else {
    do {
      uVar14 = (uint)uVar18;
      if (uVar17 != 0xffffffff) goto LAB_18020cbb8;
      uVar3 = *(uint *)(param_1 + 0x18);
      uVar12 = 0;
      pbVar11 = *(byte **)(*(longlong *)(param_1 + 0x50) + uVar18 * 0x10 + 8);
      uVar18 = (ulonglong)-(uint)((*pbVar11 & 1) != 0);
      uVar17 = 0xffffffff;
      if (uVar3 != 0) {
        do {
          uVar17 = (uint)uVar18;
          if (uVar17 == 0xffffffff) {
            uVar7 = -1L << (uVar12 & 0x3f);
            uVar17 = (uint)uVar12 & 0xffffffc0;
            puVar9 = (ulonglong *)(pbVar11 + (uVar12 >> 6) * 8);
            while (uVar18 = (ulonglong)uVar17, puVar9 < pbVar11 + (uVar3 >> 3)) {
              uVar7 = uVar7 & (*puVar9 ^ 0xffffffffffffffff);
              uVar18 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
              uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
              uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
              uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
              uVar13 = (uint)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20);
              if ((1 - (uVar13 >> 6) & 0xff) != 0) {
                uVar18 = (ulonglong)(uVar13 + uVar17);
                break;
              }
              uVar17 = uVar17 + 0x40;
              uVar7 = 0xffffffffffffffff;
              puVar9 = puVar9 + 1;
            }
          }
          else {
            uVar7 = -1L << (uVar18 & 0x3f);
            uVar12 = (ulonglong)(uVar17 & 0xffffffc0);
            puVar9 = (ulonglong *)(pbVar11 + (uVar18 >> 6) * 8);
            while (puVar9 < pbVar11 + (uVar3 >> 3)) {
              uVar18 = (uVar7 & *puVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                       (uVar7 & *puVar9 & 0x5555555555555555) << 1;
              uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
              uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
              uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
              uVar13 = (uint)LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20);
              if ((1 - (uVar13 >> 6) & 0xff) != 0) {
                uVar12 = (ulonglong)(uVar13 + (int)uVar12);
                break;
              }
              uVar13 = (int)uVar12 + 0x40;
              uVar12 = (ulonglong)uVar13;
              if (uVar3 < uVar13 - uVar17) break;
              uVar7 = 0xffffffffffffffff;
              puVar9 = puVar9 + 1;
            }
            if (param_2 <= (int)uVar12 - uVar17) break;
            uVar18 = 0xffffffff;
          }
          uVar17 = 0xffffffff;
        } while ((uint)uVar12 < uVar3);
      }
      uVar14 = uVar14 + 1;
      uVar18 = (ulonglong)uVar14;
    } while ((int)uVar14 < *(int *)(param_1 + 0x58));
    if (uVar17 == 0xffffffff) goto LAB_18020caa4;
LAB_18020cbb8:
    param_2 = uVar17 + param_2;
    if (uVar17 < param_2) {
      lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x50) + (ulonglong)(uVar14 - 1) * 0x10 + 8);
      uVar19 = uVar17;
      do {
        uVar18 = -1L << ((ulonglong)uVar19 & 0x3f);
        uVar3 = (uVar19 & 0xffffffc0) + 0x40;
        if (param_2 < uVar3) {
          uVar18 = 0xffffffffffffffffU >> (0x40 - (ulonglong)param_2 & 0x3f) & uVar18;
        }
        *(ulonglong *)(lVar16 + (ulonglong)(uVar19 >> 6) * 8) =
             *(ulonglong *)(lVar16 + (ulonglong)(uVar19 >> 6) * 8) | uVar18;
        uVar19 = uVar3;
      } while (uVar3 < param_2);
    }
    uVar19 = uVar17 | (uVar14 - 1) * 0x10000;
  }
LAB_18020cc44:
  thunk_FUN_18022370c(param_1 + 0x28);
  return uVar19;
}

