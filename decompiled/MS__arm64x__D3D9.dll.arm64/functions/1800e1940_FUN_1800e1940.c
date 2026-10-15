/*
 * FUN_1800e1940 at 1800e1940
 * undefined FUN_1800e1940(void)
 * Address ranges: 1800e1940-1800e1fe7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e1940(longlong param_1,ulonglong param_2,int *param_3,int *param_4,int param_5,
                  ulonglong param_6)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 local_60 [2];
  
  iVar5 = *param_3;
  iVar1 = param_3[1];
  param_1 = param_1 + (param_2 & 0xffffffff) * 0x18c0;
  if ((param_6 & 1) == 0) {
    uVar13 = 0;
    uVar15 = (ulonglong)
             (param_3[3] & 0x1fU |
             (param_3[4] & 0x1fU |
             (param_3[5] & 7U | (param_3[6] & 0x1fU | (param_3[7] & 0x1fU) << 5) << 3) << 5) << 5)
             << 6 | ((ulonglong)(uint)param_3[8] & 7 |
                    ((ulonglong)*(byte *)(param_3 + 9) & 0xffffffffffff000f |
                    ((ulonglong)*(byte *)(param_3 + 0x11) & 0xfffffffffffff00f |
                    ((ulonglong)*(byte *)(param_3 + 0x19) & 0xffffffffffffff0f |
                    ((ulonglong)*(byte *)(param_3 + 0x21) & 0xf) << 4) << 4) << 4) << 5) << 0x1d |
             (ulonglong)(param_3[0x1a] != 0) << 5 | (ulonglong)(param_3[0x12] != 0) << 4 |
             (ulonglong)(param_3[10] != 0) << 3 | (ulonglong)(param_3[2] != 0) << 2 |
             (ulonglong)(iVar5 != 0) | (ulonglong)(iVar1 != 0) << 1;
    uVar6 = *(uint *)(param_1 + 0xc24);
    if (uVar6 == 0) {
LAB_1800e1e04:
      if (uVar6 == *(uint *)(param_1 + 0xc20)) {
        uVar12 = CONCAT44(0,*(uint *)(param_1 + 0xc20) << 1);
        lVar14 = uVar12 * 0x118;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar12;
        if (SUB168(auVar3 * ZEXT816(0x118),8) != 0) {
          lVar14 = -1;
        }
        lVar14 = thunk_FUN_180102f80(lVar14);
        if (lVar14 != 0) {
          if (*(int *)(param_1 + 0xc20) != 0) {
            uVar12 = 0;
            do {
              thunk_FUN_180001218(lVar14 + uVar12 * 0x118,
                                  *(longlong *)(param_1 + 0xc18) + uVar12 * 0x118,0x118);
              uVar6 = (int)uVar12 + 1;
              uVar12 = (ulonglong)uVar6;
            } while (uVar6 < *(uint *)(param_1 + 0xc20));
          }
          thunk_FUN_180102fc0(*(longlong *)(param_1 + 0xc18));
          *(longlong *)(param_1 + 0xc18) = lVar14;
          *(int *)(param_1 + 0xc20) = *(int *)(param_1 + 0xc20) << 1;
        }
      }
      uVar6 = *(uint *)(param_1 + 0xc24);
      while (lVar9 = *(longlong *)(param_1 + 0xc18), uVar13 < uVar6) {
        thunk_FUN_180001218(lVar9 + (ulonglong)uVar6 * 0x118,lVar9 + (ulonglong)(uVar6 - 1) * 0x118,
                            0x118);
        uVar6 = uVar6 - 1;
      }
      lVar14 = (ulonglong)uVar13 * 0x118;
      *(ulonglong *)(lVar9 + lVar14) = uVar15;
      thunk_FUN_180001218(lVar14 + *(longlong *)(param_1 + 0xc18) + 8,param_3,0x108);
      local_60[0] = 0;
      plVar7 = *(longlong **)
                (*(longlong *)(param_1 + 0xc28) + (ulonglong)*(uint *)(param_1 + 0xc30) * 0x18c0 +
                0x6b0);
      (**(code **)(*plVar7 + 0xa0))(plVar7,param_3,local_60);
      *(undefined8 *)(lVar14 + *(longlong *)(param_1 + 0xc18) + 0x110) = local_60[0];
      *(int *)(param_1 + 0xc24) = *(int *)(param_1 + 0xc24) + 1;
    }
    else {
      uVar11 = 0;
      uVar10 = uVar6;
      do {
        uVar13 = uVar10 + uVar11 >> 1;
        uVar12 = *(ulonglong *)(*(longlong *)(param_1 + 0xc18) + (ulonglong)uVar13 * 0x118);
        uVar4 = uVar13;
        if (uVar12 <= uVar15) {
          if (uVar15 <= uVar12) break;
          uVar11 = uVar13 + 1;
          uVar13 = uVar13 + 1;
          uVar4 = uVar10;
        }
        uVar10 = uVar4;
      } while (uVar10 != uVar11);
      if ((uVar13 == uVar6) ||
         (lVar14 = (ulonglong)uVar13 * 0x118,
         *(ulonglong *)(*(longlong *)(param_1 + 0xc18) + lVar14) != uVar15)) goto LAB_1800e1e04;
    }
    lVar14 = lVar14 + *(longlong *)(param_1 + 0xc18);
    goto LAB_1800e1f24;
  }
  uVar13 = 0;
  uVar15 = 0x20;
  if (param_3[0x1a] == 0) {
    uVar15 = 0;
  }
  uVar6 = *(uint *)(param_1 + 0xc44);
  uVar15 = ((ulonglong)
            (param_3[0x14] & 0x1fU |
            (param_3[0x15] & 7U |
            (param_3[0x16] & 0x1fU | (param_3[0x17] & 0x1fU | (param_3[0x18] & 7U) << 5) << 5) << 3)
            << 5) << 5 |
            ((ulonglong)(uint)param_3[0x1b] & 0x1f |
            ((ulonglong)(uint)param_3[0x1c] & 0x1f |
            ((ulonglong)(uint)param_3[0x1d] & 7 |
            ((ulonglong)(uint)param_3[0x1e] & 0x1f |
            ((ulonglong)(uint)param_3[0x1f] & 0x1f | ((ulonglong)(uint)param_3[0x20] & 7) << 5) << 5
            ) << 3) << 5) << 5) << 0x20 | (ulonglong)(uint)param_3[0x13] & 0x1f) +
           ((ulonglong)
            (param_3[4] & 0x1fU |
            (param_3[5] & 7U |
            (param_3[6] & 0x1fU | (param_3[7] & 0x1fU | (param_3[8] & 7U) << 5) << 5) << 3) << 5) <<
            5 | ((ulonglong)(uint)param_3[0xb] & 0x1f |
                ((ulonglong)(uint)param_3[0xc] & 0x1f |
                ((ulonglong)(uint)param_3[0xd] & 7 |
                ((ulonglong)(uint)param_3[0xe] & 0x1f |
                ((ulonglong)(uint)param_3[0xf] & 0x1f | ((ulonglong)(uint)param_3[0x10] & 7) << 5)
                << 5) << 3) << 5) << 5) << 0x20 | (ulonglong)(uint)param_3[3] & 0x1f) +
           (uVar15 | ((ulonglong)*(byte *)(param_3 + 9) & 0xf |
                     ((ulonglong)*(byte *)(param_3 + 0x11) & 0xfffffffffffff00f |
                     ((ulonglong)*(byte *)(param_3 + 0x19) & 0xffffffffffffff0f |
                     ((ulonglong)*(byte *)(param_3 + 0x21) & 0xf) << 4) << 4) << 4) << 0x22 |
            (ulonglong)(param_3[0x12] != 0) << 4 | (ulonglong)(param_3[10] != 0) << 3 |
            (ulonglong)(param_3[2] != 0) << 2 | (ulonglong)(iVar5 != 0) |
           (ulonglong)(iVar1 != 0) << 1);
  if (uVar6 == 0) {
LAB_1800e1bd8:
    plVar7 = (longlong *)(param_1 + 0xc38);
    if (uVar6 == *(uint *)(param_1 + 0xc40)) {
      uVar12 = CONCAT44(0,*(uint *)(param_1 + 0xc40) << 1);
      lVar14 = uVar12 * 0x118;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar12;
      if (SUB168(auVar2 * ZEXT816(0x118),8) != 0) {
        lVar14 = -1;
      }
      lVar14 = thunk_FUN_180102f80(lVar14);
      if (lVar14 != 0) {
        if (*(int *)(param_1 + 0xc40) != 0) {
          uVar12 = 0;
          do {
            thunk_FUN_180001218(lVar14 + uVar12 * 0x118,
                                *(longlong *)(param_1 + 0xc38) + uVar12 * 0x118,0x118);
            uVar6 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar6;
          } while (uVar6 < *(uint *)(param_1 + 0xc40));
        }
        thunk_FUN_180102fc0(*plVar7);
        *plVar7 = lVar14;
        *(int *)(param_1 + 0xc40) = *(int *)(param_1 + 0xc40) << 1;
      }
    }
    uVar6 = *(uint *)(param_1 + 0xc44);
    while (lVar9 = *plVar7, uVar13 < uVar6) {
      thunk_FUN_180001218(lVar9 + (ulonglong)uVar6 * 0x118,lVar9 + (ulonglong)(uVar6 - 1) * 0x118,
                          0x118);
      uVar6 = uVar6 - 1;
    }
    lVar14 = (ulonglong)uVar13 * 0x118;
    *(ulonglong *)(lVar9 + lVar14) = uVar15;
    thunk_FUN_180001218(lVar14 + *plVar7 + 8,param_3,0x108);
    local_60[0] = 0;
    plVar8 = *(longlong **)
              (*(longlong *)(param_1 + 0xc48) + (ulonglong)*(uint *)(param_1 + 0xc50) * 0x18c0 +
              0x6b0);
    (**(code **)(*plVar8 + 0xa0))(plVar8,param_3,local_60);
    *(undefined8 *)(lVar14 + *plVar7 + 0x110) = local_60[0];
    *(int *)(param_1 + 0xc44) = *(int *)(param_1 + 0xc44) + 1;
  }
  else {
    uVar11 = 0;
    uVar10 = uVar6;
    do {
      uVar13 = uVar10 + uVar11 >> 1;
      uVar12 = *(ulonglong *)(*(longlong *)(param_1 + 0xc38) + (ulonglong)uVar13 * 0x118);
      uVar4 = uVar13;
      if (uVar12 <= uVar15) {
        if (uVar15 <= uVar12) break;
        uVar11 = uVar13 + 1;
        uVar13 = uVar13 + 1;
        uVar4 = uVar10;
      }
      uVar10 = uVar4;
    } while (uVar10 != uVar11);
    if (uVar13 == uVar6) goto LAB_1800e1bd8;
    lVar14 = (ulonglong)uVar13 * 0x118;
    lVar9 = *(longlong *)(param_1 + 0xc38) + lVar14;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0xc38) + lVar14) != uVar15) goto LAB_1800e1bd8;
    if ((((iVar5 != *(int *)(lVar9 + 8)) || (iVar1 != *(int *)(lVar9 + 0xc))) ||
        (iVar5 = func_0x000180222c00(param_3 + 2,lVar9 + 0x10,0x20), iVar5 != 0)) ||
       (((iVar5 = func_0x000180222c00(param_3 + 10,lVar9 + 0x30,0x20), iVar5 != 0 ||
         (iVar5 = func_0x000180222c00(param_3 + 0x12,lVar9 + 0x50,0x20), iVar5 != 0)) ||
        (iVar5 = func_0x000180222c00(param_3 + 0x1a,lVar9 + 0x70,0x20), iVar5 != 0)))) {
      (**(code **)(**(longlong **)(lVar9 + 0x110) + 0x10))();
      *(ulonglong *)(*(longlong *)(param_1 + 0xc38) + lVar14) = uVar15;
      thunk_FUN_180001218(lVar14 + *(longlong *)(param_1 + 0xc38) + 8,param_3,0x108);
      local_60[0] = 0;
      plVar7 = *(longlong **)
                (*(longlong *)(param_1 + 0xc48) + (ulonglong)*(uint *)(param_1 + 0xc50) * 0x18c0 +
                0x6b0);
      (**(code **)(*plVar7 + 0xa0))(plVar7,param_3,local_60);
      *(undefined8 *)(lVar14 + *(longlong *)(param_1 + 0xc38) + 0x110) = local_60[0];
    }
  }
  lVar14 = lVar14 + *(longlong *)(param_1 + 0xc38);
LAB_1800e1f24:
  lVar14 = *(longlong *)(lVar14 + 0x110);
  if (((lVar14 != *(longlong *)(param_1 + 0x6e0)) || (param_5 != *(int *)(param_1 + 0x6f4))) ||
     ((param_4 != (int *)0x0 &&
      ((((*param_4 != *(int *)(param_1 + 0x6f8) || (param_4[1] != *(int *)(param_1 + 0x6fc))) ||
        (param_4[2] != *(int *)(param_1 + 0x700))) || (param_4[3] != *(int *)(param_1 + 0x704)))))))
  {
    (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x118))
              (*(longlong **)(param_1 + 0x6b8),lVar14,param_4,param_5);
    *(longlong *)(param_1 + 0x6e0) = lVar14;
    *(int *)(param_1 + 0x6f4) = param_5;
    if (param_4 != (int *)0x0) {
      *(int *)(param_1 + 0x6f8) = *param_4;
      *(int *)(param_1 + 0x6fc) = param_4[4];
      *(int *)(param_1 + 0x700) = param_4[8];
      *(int *)(param_1 + 0x704) = param_4[0xc];
    }
  }
  return;
}

