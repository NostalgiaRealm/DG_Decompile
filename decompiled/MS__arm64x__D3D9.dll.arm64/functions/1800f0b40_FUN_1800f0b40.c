/*
 * FUN_1800f0b40 at 1800f0b40
 * undefined FUN_1800f0b40(void)
 * Address ranges: 1800f0b40-1800f0f03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f0b40(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5,ulonglong param_6)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined8 uVar17;
  
  (*__imp_KERNEL32_dll_EnterCriticalSection)(param_1 + 0x10);
  if ((param_5 == (longlong *)0x0) ||
     (uVar9 = (**(code **)(*param_5 + 0x40))(param_5), param_6 <= uVar9)) {
    FUN_1800efec0(param_1,param_2,param_3,param_4);
    goto LAB_1800f0ed8;
  }
  uVar6 = *(uint *)(param_1 + 0x80);
  if (uVar6 == 0) {
LAB_1800f0c1c:
    plVar16 = (longlong *)FUN_180102f80(0x18);
    if (plVar16 == (longlong *)0x0) goto LAB_1800f0ed8;
    *plVar16 = 0;
    plVar16[1] = 0;
    plVar16[2] = -1;
    uVar6 = *(uint *)(param_1 + 0x80);
    uVar9 = 0;
    if (uVar6 != 0) {
      uVar12 = 0;
      uVar10 = uVar6;
      do {
        uVar7 = uVar10 + uVar12 >> 1;
        uVar9 = (ulonglong)uVar7;
        plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x78) + uVar9 * 0x18);
        if (plVar14 <= param_5) {
          if (param_5 <= plVar14) break;
          uVar12 = uVar7 + 1;
          uVar9 = (ulonglong)(uVar7 + 1);
          uVar7 = uVar10;
        }
        uVar10 = uVar7;
      } while (uVar10 != uVar12);
      if (((uint)uVar9 != uVar6) &&
         (puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x78) + uVar9 * 0x18),
         (longlong *)*puVar1 == param_5)) {
        puVar1[2] = (ulonglong)plVar16;
        goto LAB_1800f0db4;
      }
    }
    uVar12 = *(uint *)(param_1 + 0x84);
    plVar14 = (longlong *)(param_1 + 0x78);
    if (uVar12 == uVar6) {
      uVar6 = 0x10;
      if (uVar12 != 0) {
        uVar6 = uVar12 << 1;
      }
      lVar13 = thunk_FUN_180102f80((ulonglong)uVar6 * 0x18);
      if (lVar13 != 0) {
        uVar11 = 0;
        if (*(int *)(param_1 + 0x80) != 0) {
          do {
            uVar12 = (int)uVar11 + 1;
            puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x78) + uVar11 * 0x18);
            puVar2 = (undefined8 *)(lVar13 + uVar11 * 0x18);
            uVar17 = *puVar3;
            puVar2[1] = puVar3[1];
            *puVar2 = uVar17;
            puVar2[2] = puVar3[2];
            uVar11 = (ulonglong)uVar12;
          } while (uVar12 < *(uint *)(param_1 + 0x80));
        }
        thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x70));
        *(longlong *)(param_1 + 0x70) = lVar13;
        *(longlong *)(param_1 + 0x78) = lVar13;
        *(uint *)(param_1 + 0x84) = uVar6;
      }
    }
    uVar11 = (ulonglong)*(uint *)(param_1 + 0x80);
    if (*(uint *)(param_1 + 0x84) != *(uint *)(param_1 + 0x80)) {
      while ((uint)uVar9 < (uint)uVar11) {
        uVar15 = (ulonglong)((uint)uVar11 - 1);
        puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x78) + uVar11 * 0x18);
        puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x78) + uVar15 * 0x18);
        uVar17 = *puVar2;
        puVar3[1] = puVar2[1];
        *puVar3 = uVar17;
        puVar3[2] = puVar2[2];
        uVar11 = uVar15;
      }
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
      *(longlong **)(*plVar14 + uVar9 * 0x18 + 8) = param_5;
      *(longlong **)(*plVar14 + uVar9 * 0x18 + 0x10) = plVar16;
      *(longlong **)(*plVar14 + uVar9 * 0x18) = param_5;
    }
  }
  else {
    uVar12 = 0;
    uVar10 = uVar6;
    do {
      uVar7 = uVar10 + uVar12 >> 1;
      uVar9 = (ulonglong)uVar7;
      plVar16 = *(longlong **)(*(longlong *)(param_1 + 0x78) + uVar9 * 0x18);
      if (plVar16 <= param_5) {
        if (param_5 <= plVar16) break;
        uVar12 = uVar7 + 1;
        uVar9 = (ulonglong)(uVar7 + 1);
        uVar7 = uVar10;
      }
      uVar10 = uVar7;
    } while (uVar10 != uVar12);
    if ((((uint)uVar9 == uVar6) ||
        (puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x78) + uVar9 * 0x18),
        (longlong *)*puVar1 != param_5)) || (puVar1 = puVar1 + 2, puVar1 == (ulonglong *)0x0))
    goto LAB_1800f0c1c;
    plVar16 = (longlong *)*puVar1;
    if (plVar16 == (longlong *)0x0) goto LAB_1800f0ed8;
  }
LAB_1800f0db4:
  uVar9 = (ulonglong)*(uint *)((longlong)plVar16 + 0x14);
  if (*(uint *)((longlong)plVar16 + 0x14) != 0xffffffff) {
    lVar13 = *plVar16 + uVar9 * 0x20;
    if ((*(int *)(lVar13 + 0x18) == 0) ||
       (uVar6 = *(uint *)(lVar13 + 0x1c), uVar9 = (ulonglong)uVar6, uVar6 != 0xffffffff)) {
      lVar13 = uVar9 * 0x20;
      *(undefined4 *)(lVar13 + *plVar16 + 0x18) = param_2;
      *(undefined8 *)(*plVar16 + lVar13) = param_3;
      *(undefined8 *)(lVar13 + *plVar16 + 8) = param_4;
      *(ulonglong *)(lVar13 + *plVar16 + 0x10) = param_6;
      *(int *)((longlong)plVar16 + 0x14) = (int)uVar9;
      goto LAB_1800f0ed8;
    }
  }
  iVar4 = (int)plVar16[1];
  iVar5 = *(int *)((longlong)plVar16 + 0xc);
  if (iVar4 == iVar5) {
    uVar6 = iVar5 << 1;
    if (iVar5 == 0) {
      uVar6 = 0x10;
    }
    auVar8._8_8_ = 0;
    auVar8._0_8_ = CONCAT44(0,uVar6);
    lVar13 = CONCAT44(0,uVar6) << 5;
    if (SUB168(auVar8 * ZEXT816(0x20),8) != 0) {
      lVar13 = -1;
    }
    lVar13 = thunk_FUN_180102f80(lVar13);
    if (lVar13 == 0) goto LAB_1800f0ed8;
    thunk_FUN_180001218(lVar13,*plVar16,(ulonglong)*(uint *)((longlong)plVar16 + 0xc) << 5);
    thunk_FUN_180102fc0(*plVar16);
    *plVar16 = lVar13;
    *(uint *)((longlong)plVar16 + 0xc) = uVar6;
  }
  puVar3 = (undefined8 *)(*plVar16 + (ulonglong)*(uint *)(plVar16 + 1) * 0x20);
  *puVar3 = param_3;
  puVar3[1] = param_4;
  puVar3[2] = param_6;
  *(undefined4 *)(puVar3 + 3) = param_2;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 0xffffffff;
  *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
  if (*(uint *)((longlong)plVar16 + 0x14) != 0xffffffff) {
    *(int *)(*plVar16 + (ulonglong)*(uint *)((longlong)plVar16 + 0x14) * 0x20 + 0x1c) = iVar4;
  }
  *(int *)((longlong)plVar16 + 0x14) = iVar4;
  if ((int)plVar16[2] == -1) {
    *(int *)(plVar16 + 2) = iVar4;
  }
LAB_1800f0ed8:
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(param_1 + 0x10);
  return;
}

