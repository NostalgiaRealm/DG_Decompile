/*
 * FUN_180062eb8 at 180062eb8
 * undefined __cdecl FUN_180062eb8(longlong * param_1, undefined8 param_2)
 * Address ranges: 180062eb8-18006331f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180062eb8(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 *puVar7;
  bool bVar8;
  ulonglong *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  SIZE_T SVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong *plVar18;
  undefined8 uVar19;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60 [2];
  undefined8 local_50;
  uint uStack_48;
  undefined4 uStack_44;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  uVar17 = *(uint *)((longlong)param_1 + 0x74);
  bVar8 = false;
  if (uVar17 == 0xffffffff) {
LAB_180062f28:
    uVar17 = *(uint *)(param_1 + 0xd);
    uVar13 = *(uint *)((longlong)param_1 + 0x6c);
    if (uVar17 == uVar13) {
      uVar12 = uVar13 << 1;
      if (uVar13 == 0) {
        uVar12 = 0x10;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = CONCAT44(0,uVar12);
      SVar15 = CONCAT44(0,uVar12) << 4;
      if (SUB168(auVar4 * ZEXT816(0x10),8) != 0) {
        SVar15 = 0xffffffffffffffff;
      }
      puVar10 = (undefined8 *)thunk_FUN_1800636c0(SVar15);
      if (puVar10 == (undefined8 *)0x0) goto LAB_1800632d4;
      thunk_FUN_1800010d8(puVar10,(undefined8 *)param_1[0xc],
                          (ulonglong)*(uint *)((longlong)param_1 + 0x6c) << 4);
      thunk_FUN_180063700((LPVOID)param_1[0xc]);
      param_1[0xc] = (longlong)puVar10;
      *(uint *)((longlong)param_1 + 0x6c) = uVar12;
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
    if (uVar17 == 0xffffffff) goto LAB_1800632d4;
  }
  else {
    plVar18 = (longlong *)(param_1[0xc] + (ulonglong)uVar17 * 0x10);
    if ((*plVar18 != 0) && (uVar17 = *(uint *)((longlong)plVar18 + 0xc), uVar17 == 0xffffffff))
    goto LAB_180062f28;
    *(undefined8 *)(param_1[0xc] + (ulonglong)uVar17 * 0x10) = param_2;
    *(uint *)((longlong)param_1 + 0x74) = uVar17;
  }
  local_70 = 0;
  local_68 = 0;
  (**(code **)*param_1)(param_1,param_2,&local_68,&local_70);
  local_50 = param_2;
  uStack_48 = uVar17;
  puVar9 = FUN_18005f0d8((longlong)(param_1 + 9),&local_70);
  if (puVar9 == (ulonglong *)0x0) {
    plVar18 = (longlong *)FUN_1800636c0(0x10);
    if (plVar18 == (longlong *)0x0) goto LAB_1800632d4;
    *plVar18 = 0;
    plVar18[1] = 0;
    iVar1 = *(int *)((longlong)plVar18 + 0xc);
    local_60[0] = plVar18;
    if ((int)plVar18[1] == iVar1) {
      uVar17 = iVar1 << 1;
      if (iVar1 == 0) {
        uVar17 = 0x10;
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = CONCAT44(0,uVar17);
      SVar15 = CONCAT44(0,uVar17) << 4;
      if (SUB168(auVar6 * ZEXT816(0x10),8) != 0) {
        SVar15 = 0xffffffffffffffff;
      }
      puVar10 = (undefined8 *)thunk_FUN_1800636c0(SVar15);
      if (puVar10 == (undefined8 *)0x0) {
        thunk_FUN_180063700((undefined8 *)*plVar18);
        FUN_180063700(plVar18);
        goto LAB_1800632d4;
      }
      thunk_FUN_1800010d8(puVar10,(undefined8 *)*plVar18,
                          (ulonglong)*(uint *)((longlong)plVar18 + 0xc) << 4);
      thunk_FUN_180063700((LPVOID)*plVar18);
      *plVar18 = (longlong)puVar10;
      *(uint *)((longlong)plVar18 + 0xc) = uVar17;
    }
    uVar14 = 0;
    puVar10 = (undefined8 *)(*plVar18 + (ulonglong)*(uint *)(plVar18 + 1) * 0x10);
    puVar10[1] = CONCAT44(uStack_44,uStack_48);
    *puVar10 = local_50;
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    param_1[2] = param_1[2] + local_68;
    uVar17 = *(uint *)(param_1 + 0xb);
    if (uVar17 != 0) {
      uVar13 = 0;
      uVar12 = uVar17;
      do {
        uVar2 = uVar12 + uVar13 >> 1;
        uVar14 = (ulonglong)uVar2;
        uVar16 = *(ulonglong *)(param_1[10] + uVar14 * 0x18);
        if (uVar16 <= local_70) {
          if (local_70 <= uVar16) break;
          uVar13 = uVar2 + 1;
          uVar14 = (ulonglong)(uVar2 + 1);
          uVar2 = uVar12;
        }
        uVar12 = uVar2;
      } while (uVar12 != uVar13);
      if (((uint)uVar14 != uVar17) &&
         (puVar9 = (ulonglong *)(param_1[10] + uVar14 * 0x18), *puVar9 == local_70)) {
        puVar9[2] = (ulonglong)plVar18;
        goto LAB_1800631d8;
      }
    }
    FUN_180063320(param_1 + 9,(uint)uVar14,local_70,&local_70,local_60);
  }
  else {
    plVar18 = (longlong *)*puVar9;
    iVar1 = *(int *)((longlong)plVar18 + 0xc);
    if ((int)plVar18[1] == iVar1) {
      uVar17 = iVar1 << 1;
      if (iVar1 == 0) {
        uVar17 = 0x10;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = CONCAT44(0,uVar17);
      SVar15 = CONCAT44(0,uVar17) << 4;
      if (SUB168(auVar5 * ZEXT816(0x10),8) != 0) {
        SVar15 = 0xffffffffffffffff;
      }
      puVar10 = (undefined8 *)thunk_FUN_1800636c0(SVar15);
      if (puVar10 == (undefined8 *)0x0) goto LAB_1800632d4;
      thunk_FUN_1800010d8(puVar10,(undefined8 *)*plVar18,
                          (ulonglong)*(uint *)((longlong)plVar18 + 0xc) << 4);
      thunk_FUN_180063700((LPVOID)*plVar18);
      *plVar18 = (longlong)puVar10;
      *(uint *)((longlong)plVar18 + 0xc) = uVar17;
    }
    puVar10 = (undefined8 *)(*plVar18 + (ulonglong)*(uint *)(plVar18 + 1) * 0x10);
    puVar10[1] = CONCAT44(uStack_44,uStack_48);
    *puVar10 = local_50;
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    param_1[2] = param_1[2] + local_68;
  }
LAB_1800631d8:
  bVar8 = true;
LAB_1800632d4:
  if (((ulonglong)param_1[2] <= (ulonglong)param_1[1]) ||
     (lVar11 = FUN_180062dd8(param_1 + 0xc), lVar11 == 0)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    if (!bVar8) {
      (**(code **)(*param_1 + 8))(param_1,param_2);
    }
    return;
  }
  local_70 = 0;
  local_68 = 0;
  (**(code **)*param_1)(param_1,lVar11,&local_70,&local_68);
  puVar9 = FUN_18005f0d8((longlong)(param_1 + 9),&local_68);
  if (puVar9 != (ulonglong *)0x0) {
    plVar18 = (longlong *)*puVar9;
    uVar17 = *(uint *)(plVar18 + 1);
    if (uVar17 != 0) {
      uVar14 = 0;
      do {
        lVar3 = uVar14 * 0x10;
        uVar13 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
        if (*(longlong *)(*plVar18 + lVar3) == lVar11) goto LAB_18006326c;
      } while (uVar13 < uVar17);
    }
  }
  goto LAB_1800632c0;
LAB_18006326c:
  while (uVar13 = (uint)uVar14, uVar13 < uVar17) {
    puVar10 = (undefined8 *)(*plVar18 + uVar14 * 0x10);
    uVar19 = *puVar10;
    puVar7 = (undefined8 *)(*plVar18 + (ulonglong)(uVar13 - 1) * 0x10);
    puVar7[1] = puVar10[1];
    *puVar7 = uVar19;
    uVar17 = *(uint *)(plVar18 + 1);
    uVar14 = (ulonglong)(uVar13 + 1);
  }
  *(int *)(plVar18 + 1) = (int)plVar18[1] + -1;
  puVar10 = (undefined8 *)*puVar9;
  if (*(int *)(puVar10 + 1) == 0) {
    if (puVar10 != (undefined8 *)0x0) {
      thunk_FUN_180063700((LPVOID)*puVar10);
      FUN_180063700(puVar10);
    }
    FUN_18005f158((longlong)(param_1 + 9),&local_68);
  }
  param_1[2] = param_1[2] - local_70;
LAB_1800632c0:
  (**(code **)(*param_1 + 8))(param_1,lVar11);
  goto LAB_1800632d4;
}

