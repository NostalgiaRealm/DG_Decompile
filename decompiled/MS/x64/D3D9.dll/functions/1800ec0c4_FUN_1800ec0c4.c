/*
 * FUN_1800ec0c4 at 1800ec0c4
 * undefined8 __fastcall FUN_1800ec0c4(longlong * param_1)
 * Address ranges: 1800ec0c4-1800ec35d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800ec0c4(longlong *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar13;
  undefined8 in_stack_ffffffffffffff10;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  longlong *local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80 [2];
  undefined8 local_78;
  ulonglong local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong uVar12;
  
  local_d8 = *(undefined4 *)((longlong)param_1 + 0x24);
  local_d4 = (undefined4)param_1[5];
  local_d0 = 0;
  local_c8 = (longlong *)0x0;
  plStack_c0 = (longlong *)0x0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  plVar2 = *(longlong **)((ulonglong)*(uint *)(param_1 + 1) * 0x20 + *param_1);
  iVar5 = (**(code **)(*plVar2 + 0x138))(plVar2,&local_d8,&DAT_180106fc0);
  uVar10 = 0;
  if (iVar5 < 0) goto LAB_1800ec34a;
  local_98 = 3;
  local_90 = 0;
  local_88 = 0;
  local_80[0] = 1;
  local_78 = 0;
  if ((*(byte *)((ulonglong)*(uint *)(param_1 + 1) * 0x20 + 0x14 + *param_1) & 1) == 0) {
    uVar6 = (int)param_1[5] * 8;
  }
  else {
    uVar6 = (int)param_1[5] * 0xc;
  }
  local_70 = (ulonglong)uVar6;
  local_68 = 1;
  local_64 = 0x10001;
  local_5c = 1;
  local_54 = 1;
  bVar4 = FUN_1800e1fc8(*param_1,(ulonglong)*(uint *)(param_1 + 1),&local_98,0,local_80,0x400,0,
                        in_stack_ffffffffffffff10,&plStack_c0);
  if (bVar4 == 0) {
LAB_1800ec340:
    uVar10 = (**(code **)(*local_c8 + 0x10))();
LAB_1800ec34a:
    return uVar10 & 0xffffffffffffff00;
  }
  local_48 = 0;
  local_40 = 0;
  lVar7 = (**(code **)(*plStack_c0 + 0x40))(plStack_c0,0,&local_48,&local_b8);
  if ((int)param_1[3] == 0) {
    if (*(int *)((longlong)param_1 + 0x1c) == 0) {
      puVar9 = (undefined8 *)thunk_FUN_1800fbccc(0x300);
      if (puVar9 == (undefined8 *)0x0) goto LAB_1800ec336;
      FUN_1800fbec0(puVar9,(undefined8 *)param_1[2],
                    (ulonglong)*(uint *)((longlong)param_1 + 0x1c) * 0x30);
      lVar7 = FUN_1800fbcf0((LPVOID)param_1[2]);
      param_1[2] = (longlong)puVar9;
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0x10;
    }
    uVar10 = (ulonglong)*(uint *)(param_1 + 3);
    lVar3 = param_1[2];
    puVar9 = (undefined8 *)(lVar3 + uVar10 * 0x30);
    *puVar9 = local_c8;
    puVar9[1] = plStack_c0;
    puVar9 = (undefined8 *)(lVar3 + 0x10 + uVar10 * 0x30);
    *puVar9 = local_b8;
    puVar9[1] = uStack_b0;
    puVar9 = (undefined8 *)(lVar3 + 0x20 + uVar10 * 0x30);
    *puVar9 = local_a8;
    puVar9[1] = uStack_a0;
    goto LAB_1800ec32d;
  }
  iVar5 = *(int *)((longlong)param_1 + 0x1c);
  lVar7 = param_1[4];
  if ((int)param_1[3] == iVar5) {
    if (iVar5 == 0) {
      uVar6 = 0x10;
    }
    else {
      uVar6 = iVar5 * 2;
    }
    uVar8 = SUB168(ZEXT816(0x30) * ZEXT416(uVar6),0);
    if (SUB168(ZEXT816(0x30) * ZEXT416(uVar6),8) != 0) {
      uVar8 = 0xffffffffffffffff;
    }
    puVar9 = (undefined8 *)thunk_FUN_1800fbccc(uVar8);
    if (puVar9 == (undefined8 *)0x0) {
LAB_1800ec336:
      (**(code **)(*plStack_c0 + 0x10))();
      goto LAB_1800ec340;
    }
    FUN_1800fbec0(puVar9,(undefined8 *)param_1[2],
                  (ulonglong)*(uint *)((longlong)param_1 + 0x1c) * 0x30);
    FUN_1800fbcf0((LPVOID)param_1[2]);
    param_1[2] = (longlong)puVar9;
    *(uint *)((longlong)param_1 + 0x1c) = uVar6;
  }
  uVar11 = *(uint *)(param_1 + 3);
  uVar6 = (int)lVar7 + 1;
  uVar13 = (ulonglong)uVar6;
  uVar10 = (ulonglong)uVar11;
  while (uVar6 < uVar11) {
    lVar7 = param_1[2];
    uVar11 = (int)uVar10 - 1;
    uVar12 = (ulonglong)uVar11;
    puVar9 = (undefined8 *)(lVar7 + uVar12 * 0x30);
    uVar8 = puVar9[1];
    puVar1 = (undefined8 *)(lVar7 + uVar10 * 0x30);
    *puVar1 = *puVar9;
    puVar1[1] = uVar8;
    puVar9 = (undefined8 *)(lVar7 + 0x10 + uVar12 * 0x30);
    uVar8 = puVar9[1];
    puVar1 = (undefined8 *)(lVar7 + 0x10 + uVar10 * 0x30);
    *puVar1 = *puVar9;
    puVar1[1] = uVar8;
    puVar9 = (undefined8 *)(lVar7 + 0x20 + uVar12 * 0x30);
    uVar8 = puVar9[1];
    puVar1 = (undefined8 *)(lVar7 + 0x20 + uVar10 * 0x30);
    *puVar1 = *puVar9;
    puVar1[1] = uVar8;
    uVar10 = uVar12;
  }
  lVar7 = param_1[2];
  puVar9 = (undefined8 *)(lVar7 + uVar13 * 0x30);
  *puVar9 = local_c8;
  puVar9[1] = plStack_c0;
  puVar9 = (undefined8 *)(lVar7 + 0x10 + uVar13 * 0x30);
  *puVar9 = local_b8;
  puVar9[1] = uStack_b0;
  puVar9 = (undefined8 *)(lVar7 + 0x20 + uVar13 * 0x30);
  *puVar9 = local_a8;
  puVar9[1] = uStack_a0;
LAB_1800ec32d:
  *(int *)(param_1 + 3) = (int)param_1[3] + 1;
  return CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
}

