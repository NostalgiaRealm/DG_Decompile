/*
 * FUN_1800e7220 at 1800e7220
 * undefined FUN_1800e7220(void)
 * Address ranges: 1800e7220-1800e768f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800e7220(longlong param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  byte *pbVar9;
  uint uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  
  uVar18 = 0xffffffff;
  if (*(uint *)(param_1 + 0x18) < param_2) {
    return 0xffffffff;
  }
  (*__imp_KERNEL32_dll_EnterCriticalSection)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar17 = 0;
    if (*(int *)(param_1 + 0x70) == 0) {
      puVar11 = (undefined8 *)0x0;
      plVar6 = (longlong *)&DAT_00000008;
      goto LAB_1800e729c;
    }
    do {
      lVar13 = *(longlong *)(param_1 + 0x68) + uVar17 * 0x18;
      puVar11 = (undefined8 *)(lVar13 + 8);
      plVar6 = (longlong *)(lVar13 + 0x10);
LAB_1800e729c:
      uVar5 = (**(code **)(*(longlong *)*puVar11 + 0x40))();
      plVar6 = (longlong *)*plVar6;
      uVar14 = *(uint *)(plVar6 + 2);
      uVar16 = 0xffffffff;
      while (uVar14 != 0xffffffff) {
        uVar7 = (ulonglong)uVar14;
        piVar1 = (int *)(*plVar6 + uVar7 * 0x18);
        if (*piVar1 == -1) break;
        if (uVar5 < *(ulonglong *)(piVar1 + 2)) {
          uVar14 = piVar1[4];
          uVar16 = uVar7;
        }
        else {
          param_1 = FUN_1800e70e0(param_1,*piVar1,piVar1[1]);
          uVar14 = piVar1[4];
          *piVar1 = -1;
          iVar4 = (int)uVar16;
          if ((uVar14 == 0xffffffff) || (*(int *)(*plVar6 + (ulonglong)uVar14 * 0x18) == -1)) {
            if (iVar4 != -1) {
              *(int *)((longlong)plVar6 + 0x14) = iVar4;
            }
          }
          else {
            if (iVar4 == -1) {
              *(uint *)(plVar6 + 2) = uVar14;
            }
            else {
              *(uint *)(*plVar6 + (uVar16 & 0xffffffff) * 0x18 + 0x10) = uVar14;
            }
            piVar1[4] = *(int *)(*plVar6 + (ulonglong)*(uint *)((longlong)plVar6 + 0x14) * 0x18 +
                                0x10);
            *(int *)(*plVar6 + (ulonglong)*(uint *)((longlong)plVar6 + 0x14) * 0x18 + 0x10) =
                 (int)uVar7;
          }
        }
      }
      uVar14 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar14;
    } while (uVar14 < *(uint *)(param_1 + 0x70));
  }
  uVar14 = 0xffffffff;
  uVar17 = 0;
  if (*(int *)(param_1 + 0x58) < 1) {
LAB_1800e74e8:
    uStack_54 = *(undefined4 *)(param_1 + 0x18);
    local_50 = *(undefined4 *)(param_1 + 0x1c);
    local_60 = (longlong *)0x0;
    local_58 = *(undefined4 *)(param_1 + 0x14);
    uStack_4c = 0;
    plVar6 = *(longlong **)
              (*(longlong *)(param_1 + 8) + (ulonglong)*(uint *)(param_1 + 0x10) * 0x20);
    iVar4 = (**(code **)(*plVar6 + 0x70))(plVar6,&local_58,&DAT_18023b8f0,&local_60);
    if (iVar4 < 0) goto LAB_1800e7664;
    lVar13 = thunk_FUN_180102f80(*(uint *)(param_1 + 0x18) >> 3);
    plVar6 = local_60;
    if (lVar13 == 0) {
LAB_1800e7654:
      (**(code **)(*local_60 + 0x10))();
      goto LAB_1800e7664;
    }
    iVar4 = *(int *)(param_1 + 0x5c);
    if (*(int *)(param_1 + 0x58) == iVar4) {
      uVar14 = iVar4 << 1;
      if (iVar4 == 0) {
        uVar14 = 0x10;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = CONCAT44(0,uVar14);
      lVar12 = CONCAT44(0,uVar14) << 4;
      if (SUB168(auVar3 * ZEXT816(0x10),8) != 0) {
        lVar12 = -1;
      }
      lVar12 = thunk_FUN_180102f80(lVar12);
      if (lVar12 == 0) {
        thunk_FUN_180102fc0(lVar13);
        goto LAB_1800e7654;
      }
      thunk_FUN_180001218(lVar12,*(undefined8 *)(param_1 + 0x50),
                          (ulonglong)*(uint *)(param_1 + 0x5c) << 4);
      thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x50));
      *(longlong *)(param_1 + 0x50) = lVar12;
      *(uint *)(param_1 + 0x5c) = uVar14;
    }
    puVar11 = (undefined8 *)
              (*(longlong *)(param_1 + 0x50) + (ulonglong)*(uint *)(param_1 + 0x58) * 0x10);
    *puVar11 = plVar6;
    puVar11[1] = lVar13;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
    func_0x000180222c50(lVar13,0,*(uint *)(param_1 + 0x18) >> 3);
    uVar10 = *(uint *)(param_1 + 0x58);
    if (uVar10 == 0) goto LAB_1800e7664;
    uVar14 = 0;
  }
  else {
    do {
      uVar10 = (uint)uVar17;
      if (uVar14 != 0xffffffff) goto LAB_1800e75e4;
      uVar2 = *(uint *)(param_1 + 0x18);
      uVar16 = 0;
      pbVar9 = *(byte **)(*(longlong *)(param_1 + 0x50) + uVar17 * 0x10 + 8);
      uVar17 = (ulonglong)-(uint)((*pbVar9 & 1) != 0);
      uVar14 = 0xffffffff;
      if (uVar2 != 0) {
        do {
          uVar14 = (uint)uVar17;
          if (uVar14 == 0xffffffff) {
            uVar5 = -1L << (uVar16 & 0x3f);
            uVar14 = (uint)uVar16 & 0xffffffc0;
            puVar8 = (ulonglong *)(pbVar9 + (uVar16 >> 6) * 8);
            while (uVar17 = (ulonglong)uVar14, puVar8 < pbVar9 + (uVar2 >> 3)) {
              uVar5 = uVar5 & (*puVar8 ^ 0xffffffffffffffff);
              uVar17 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
              uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
              uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
              uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
              uVar15 = (uint)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20);
              if ((1 - (uVar15 >> 6) & 0xff) != 0) {
                uVar17 = (ulonglong)(uVar15 + uVar14);
                break;
              }
              uVar14 = uVar14 + 0x40;
              uVar5 = 0xffffffffffffffff;
              puVar8 = puVar8 + 1;
            }
          }
          else {
            uVar5 = -1L << (uVar17 & 0x3f);
            uVar16 = (ulonglong)(uVar14 & 0xffffffc0);
            puVar8 = (ulonglong *)(pbVar9 + (uVar17 >> 6) * 8);
            while (puVar8 < pbVar9 + (uVar2 >> 3)) {
              uVar17 = (uVar5 & *puVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                       (uVar5 & *puVar8 & 0x5555555555555555) << 1;
              uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
              uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
              uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
              uVar15 = (uint)LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20);
              if ((1 - (uVar15 >> 6) & 0xff) != 0) {
                uVar16 = (ulonglong)(uVar15 + (int)uVar16);
                break;
              }
              uVar15 = (int)uVar16 + 0x40;
              uVar16 = (ulonglong)uVar15;
              if (uVar2 < uVar15 - uVar14) break;
              uVar5 = 0xffffffffffffffff;
              puVar8 = puVar8 + 1;
            }
            if (param_2 <= (int)uVar16 - uVar14) break;
            uVar17 = 0xffffffff;
          }
          uVar14 = 0xffffffff;
        } while ((uint)uVar16 < uVar2);
      }
      uVar10 = uVar10 + 1;
      uVar17 = (ulonglong)uVar10;
    } while ((int)uVar10 < *(int *)(param_1 + 0x58));
    if (uVar14 == 0xffffffff) goto LAB_1800e74e8;
  }
LAB_1800e75e4:
  param_2 = uVar14 + param_2;
  if (uVar14 < param_2) {
    lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x50) + (ulonglong)(uVar10 - 1) * 0x10 + 8);
    uVar18 = uVar14;
    do {
      uVar17 = -1L << ((ulonglong)uVar18 & 0x3f);
      uVar2 = (uVar18 & 0xffffffc0) + 0x40;
      if (param_2 < uVar2) {
        uVar17 = 0xffffffffffffffffU >> (0x40 - (ulonglong)param_2 & 0x3f) & uVar17;
      }
      *(ulonglong *)(lVar13 + (ulonglong)(uVar18 >> 6) * 8) =
           *(ulonglong *)(lVar13 + (ulonglong)(uVar18 >> 6) * 8) | uVar17;
      uVar18 = uVar2;
    } while (uVar2 < param_2);
  }
  uVar18 = uVar14 | (uVar10 - 1) * 0x10000;
LAB_1800e7664:
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(param_1 + 0x28);
  return uVar18;
}

