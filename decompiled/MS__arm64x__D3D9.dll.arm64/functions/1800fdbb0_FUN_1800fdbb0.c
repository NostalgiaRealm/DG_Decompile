/*
 * FUN_1800fdbb0 at 1800fdbb0
 * undefined FUN_1800fdbb0(void)
 * Address ranges: 1800fdbb0-1800fe017
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800fdbb0(longlong *param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 *puVar8;
  bool bVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong *plVar18;
  undefined8 uVar19;
  ulonglong local_70;
  longlong local_68;
  longlong *local_60 [2];
  undefined8 local_50;
  uint uStack_48;
  undefined4 uStack_44;
  
  (*__imp_KERNEL32_dll_EnterCriticalSection)(param_1 + 3);
  uVar17 = *(uint *)((longlong)param_1 + 0x74);
  bVar9 = false;
  if (uVar17 == 0xffffffff) {
LAB_1800fdc20:
    uVar17 = *(uint *)(param_1 + 0xd);
    uVar12 = *(uint *)((longlong)param_1 + 0x6c);
    if (uVar17 == uVar12) {
      uVar11 = uVar12 << 1;
      if (uVar12 == 0) {
        uVar11 = 0x10;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = CONCAT44(0,uVar11);
      lVar14 = CONCAT44(0,uVar11) << 4;
      if (SUB168(auVar5 * ZEXT816(0x10),8) != 0) {
        lVar14 = -1;
      }
      lVar14 = thunk_FUN_180102f80(lVar14);
      if (lVar14 == 0) goto LAB_1800fdfcc;
      thunk_FUN_180001218(lVar14,param_1[0xc],(ulonglong)*(uint *)((longlong)param_1 + 0x6c) << 4);
      thunk_FUN_180102fc0(param_1[0xc]);
      param_1[0xc] = lVar14;
      *(uint *)((longlong)param_1 + 0x6c) = uVar11;
    }
    puVar10 = (undefined8 *)(param_1[0xc] + (ulonglong)*(uint *)(param_1 + 0xd) * 0x10);
    *puVar10 = param_2;
    puVar10[1] = 0xffffffffffffffff;
    *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
    if (*(uint *)((longlong)param_1 + 0x74) != 0xffffffff) {
      *(uint *)(param_1[0xc] + (ulonglong)*(uint *)((longlong)param_1 + 0x74) * 0x10 + 0xc) = uVar17
      ;
      *(undefined4 *)(param_1[0xc] + (ulonglong)uVar17 * 0x10 + 8) =
           *(undefined4 *)((longlong)param_1 + 0x74);
    }
    *(uint *)((longlong)param_1 + 0x74) = uVar17;
    if ((int)param_1[0xe] == -1) {
      *(uint *)(param_1 + 0xe) = uVar17;
    }
    if (uVar17 == 0xffffffff) goto LAB_1800fdfcc;
  }
  else {
    plVar18 = (longlong *)(param_1[0xc] + (ulonglong)uVar17 * 0x10);
    if ((*plVar18 != 0) && (uVar17 = *(uint *)((longlong)plVar18 + 0xc), uVar17 == 0xffffffff))
    goto LAB_1800fdc20;
    *(undefined8 *)(param_1[0xc] + (ulonglong)uVar17 * 0x10) = param_2;
    *(uint *)((longlong)param_1 + 0x74) = uVar17;
  }
  local_70 = 0;
  local_68 = 0;
  (**(code **)*param_1)(param_1,param_2,&local_68,&local_70);
  local_50 = param_2;
  uStack_48 = uVar17;
  puVar10 = (undefined8 *)FUN_1800ef7f0(param_1 + 9,&local_70);
  if (puVar10 == (undefined8 *)0x0) {
    plVar18 = (longlong *)FUN_180102f80(0x10);
    if (plVar18 == (longlong *)0x0) goto LAB_1800fdfcc;
    *plVar18 = 0;
    plVar18[1] = 0;
    iVar2 = *(int *)((longlong)plVar18 + 0xc);
    local_60[0] = plVar18;
    if ((int)plVar18[1] == iVar2) {
      uVar17 = iVar2 << 1;
      if (iVar2 == 0) {
        uVar17 = 0x10;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = CONCAT44(0,uVar17);
      lVar14 = CONCAT44(0,uVar17) << 4;
      if (SUB168(auVar7 * ZEXT816(0x10),8) != 0) {
        lVar14 = -1;
      }
      lVar14 = thunk_FUN_180102f80(lVar14);
      if (lVar14 == 0) {
        thunk_FUN_180102fc0();
        FUN_180102fc0(plVar18,0x10);
        goto LAB_1800fdfcc;
      }
      thunk_FUN_180001218(lVar14,*plVar18,(ulonglong)*(uint *)((longlong)plVar18 + 0xc) << 4);
      thunk_FUN_180102fc0(*plVar18);
      *plVar18 = lVar14;
      *(uint *)((longlong)plVar18 + 0xc) = uVar17;
    }
    uVar13 = 0;
    puVar10 = (undefined8 *)(*plVar18 + (ulonglong)*(uint *)(plVar18 + 1) * 0x10);
    puVar10[1] = CONCAT44(uStack_44,uStack_48);
    *puVar10 = local_50;
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    param_1[2] = param_1[2] + local_68;
    uVar17 = *(uint *)(param_1 + 0xb);
    if (uVar17 != 0) {
      uVar12 = 0;
      uVar11 = uVar17;
      do {
        uVar3 = uVar11 + uVar12 >> 1;
        uVar13 = (ulonglong)uVar3;
        uVar16 = *(ulonglong *)(param_1[10] + uVar13 * 0x18);
        if (uVar16 <= local_70) {
          if (local_70 <= uVar16) break;
          uVar12 = uVar3 + 1;
          uVar13 = (ulonglong)(uVar3 + 1);
          uVar3 = uVar11;
        }
        uVar11 = uVar3;
      } while (uVar11 != uVar12);
      if (((uint)uVar13 != uVar17) &&
         (puVar1 = (ulonglong *)(param_1[10] + uVar13 * 0x18), *puVar1 == local_70)) {
        puVar1[2] = (ulonglong)plVar18;
        goto LAB_1800fded0;
      }
    }
    FUN_1800fe018(param_1 + 9,uVar13,local_70,&local_70,local_60);
  }
  else {
    plVar18 = (longlong *)*puVar10;
    iVar2 = *(int *)((longlong)plVar18 + 0xc);
    if ((int)plVar18[1] == iVar2) {
      uVar17 = iVar2 << 1;
      if (iVar2 == 0) {
        uVar17 = 0x10;
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = CONCAT44(0,uVar17);
      lVar14 = CONCAT44(0,uVar17) << 4;
      if (SUB168(auVar6 * ZEXT816(0x10),8) != 0) {
        lVar14 = -1;
      }
      lVar14 = thunk_FUN_180102f80(lVar14);
      if (lVar14 == 0) goto LAB_1800fdfcc;
      thunk_FUN_180001218(lVar14,*plVar18,(ulonglong)*(uint *)((longlong)plVar18 + 0xc) << 4);
      thunk_FUN_180102fc0(*plVar18);
      *plVar18 = lVar14;
      *(uint *)((longlong)plVar18 + 0xc) = uVar17;
    }
    puVar10 = (undefined8 *)(*plVar18 + (ulonglong)*(uint *)(plVar18 + 1) * 0x10);
    puVar10[1] = CONCAT44(uStack_44,uStack_48);
    *puVar10 = local_50;
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    param_1[2] = param_1[2] + local_68;
  }
LAB_1800fded0:
  bVar9 = true;
LAB_1800fdfcc:
  if (((ulonglong)param_1[2] <= (ulonglong)param_1[1]) ||
     (lVar14 = FUN_1800fd9e0(param_1 + 0xc), lVar14 == 0)) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(param_1 + 3);
    if (!bVar9) {
      (**(code **)(*param_1 + 8))(param_1,param_2);
    }
    return;
  }
  local_70 = 0;
  local_68 = 0;
  (**(code **)*param_1)(param_1,lVar14,&local_70,&local_68);
  plVar18 = (longlong *)FUN_1800ef7f0(param_1 + 9,&local_68);
  if (plVar18 != (longlong *)0x0) {
    plVar15 = (longlong *)*plVar18;
    uVar17 = *(uint *)(plVar15 + 1);
    if (uVar17 != 0) {
      uVar13 = 0;
      do {
        lVar4 = uVar13 * 0x10;
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
        if (*(longlong *)(*plVar15 + lVar4) == lVar14) goto LAB_1800fdf64;
      } while (uVar12 < uVar17);
    }
  }
  goto LAB_1800fdfb8;
LAB_1800fdf64:
  while (uVar12 = (uint)uVar13, uVar12 < uVar17) {
    puVar10 = (undefined8 *)(*plVar15 + uVar13 * 0x10);
    uVar19 = *puVar10;
    puVar8 = (undefined8 *)(*plVar15 + (ulonglong)(uVar12 - 1) * 0x10);
    puVar8[1] = puVar10[1];
    *puVar8 = uVar19;
    uVar17 = *(uint *)(plVar15 + 1);
    uVar13 = (ulonglong)(uVar12 + 1);
  }
  *(int *)(plVar15 + 1) = (int)plVar15[1] + -1;
  puVar10 = (undefined8 *)*plVar18;
  if (*(int *)(puVar10 + 1) == 0) {
    if (puVar10 != (undefined8 *)0x0) {
      thunk_FUN_180102fc0(*puVar10);
      FUN_180102fc0(puVar10,0x10);
    }
    FUN_1800516b8(param_1 + 9,&local_68);
  }
  param_1[2] = param_1[2] - local_70;
LAB_1800fdfb8:
  (**(code **)(*param_1 + 8))(param_1,lVar14);
  goto LAB_1800fdfcc;
}

