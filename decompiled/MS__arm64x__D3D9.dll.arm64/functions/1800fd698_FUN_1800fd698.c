/*
 * FUN_1800fd698 at 1800fd698
 * undefined FUN_1800fd698(void)
 * Address ranges: 1800fd698-1800fd9df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800fd698(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  uVar15 = 0;
  uVar1 = ((ulonglong)*(uint *)(param_2 + 2) |
          param_2[1] + (longlong)*(int *)((longlong)param_2 + 0x14) << 0x20) + *param_2;
  uVar6 = *(uint *)((longlong)param_1 + 0xc);
  if (uVar6 != 0) {
    uVar11 = 0;
    uVar10 = uVar6;
    do {
      uVar7 = uVar10 + uVar11 >> 1;
      uVar15 = (ulonglong)uVar7;
      uVar14 = *(ulonglong *)(*param_1 + uVar15 * 0x28);
      if (uVar14 <= uVar1) {
        if (uVar1 <= uVar14) break;
        uVar11 = uVar7 + 1;
        uVar15 = (ulonglong)(uVar7 + 1);
        uVar7 = uVar10;
      }
      uVar10 = uVar7;
    } while (uVar10 != uVar11);
    if ((uint)uVar15 != uVar6) {
      lVar12 = uVar15 * 5;
      puVar2 = (ulonglong *)(*param_1 + uVar15 * 0x28);
      if (*puVar2 == uVar1) {
        iVar9 = func_0x000180222c00(param_2,puVar2 + 1,0x18);
        if (iVar9 != 0) {
          plVar16 = (longlong *)puVar2[4];
          FUN_1800f1380(param_1[2],plVar16,0,1);
          (**(code **)(*plVar16 + 0x10))(plVar16);
          *(ulonglong *)(*param_1 + uVar15 * 0x28) = uVar1;
          lVar17 = *param_2;
          lVar3 = *param_1 + uVar15 * 0x28;
          *(longlong *)(lVar3 + 0x10) = param_2[1];
          *(longlong *)(lVar3 + 8) = lVar17;
          *(longlong *)(lVar3 + 0x18) = param_2[2];
          local_68 = *param_2;
          if ((longlong *)param_2[1] == (longlong *)0x0) {
            local_60 = 0;
          }
          else {
            local_60 = (**(code **)(*(longlong *)param_2[1] + 0x18))();
          }
          if ((longlong *)param_2[1] == (longlong *)0x0) {
            local_58 = 0;
          }
          else {
            local_58 = (**(code **)(*(longlong *)param_2[1] + 0x20))();
          }
          local_50 = (undefined4)param_2[2];
          local_38 = *(undefined4 *)((longlong)param_2 + 0x14);
          local_48 = 0;
          uStack_40 = 0;
          local_70 = 0;
          plVar16 = *(longlong **)(param_1[3] + (ulonglong)*(uint *)(param_1 + 4) * 0x20);
          (**(code **)(*plVar16 + 0x58))(plVar16,&local_68,&DAT_18023bed0,&local_70);
          *(undefined8 *)(*param_1 + uVar15 * 0x28 + 0x20) = local_70;
        }
        goto LAB_1800fd9bc;
      }
    }
  }
  if (uVar6 == *(uint *)(param_1 + 1)) {
    uVar14 = CONCAT44(0,*(uint *)(param_1 + 1) << 1);
    lVar12 = uVar14 * 0x28;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar14;
    if (SUB168(auVar8 * ZEXT816(0x28),8) != 0) {
      lVar12 = -1;
    }
    lVar12 = thunk_FUN_180102f80(lVar12);
    if (lVar12 != 0) {
      uVar14 = 0;
      if ((int)param_1[1] != 0) {
        do {
          uVar6 = (int)uVar14 + 1;
          puVar4 = (undefined8 *)(*param_1 + uVar14 * 0x28);
          puVar5 = (undefined8 *)(lVar12 + uVar14 * 0x28);
          uVar20 = *puVar4;
          uVar19 = puVar4[3];
          uVar18 = puVar4[2];
          puVar5[1] = puVar4[1];
          *puVar5 = uVar20;
          puVar5[3] = uVar19;
          puVar5[2] = uVar18;
          puVar5[4] = puVar4[4];
          uVar14 = (ulonglong)uVar6;
        } while (uVar6 < *(uint *)(param_1 + 1));
      }
      thunk_FUN_180102fc0(*param_1);
      *param_1 = lVar12;
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
    }
  }
  uVar14 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
  while ((uint)uVar15 < (uint)uVar14) {
    uVar13 = (ulonglong)((uint)uVar14 - 1);
    puVar4 = (undefined8 *)(*param_1 + uVar14 * 0x28);
    puVar5 = (undefined8 *)(*param_1 + uVar13 * 0x28);
    uVar20 = *puVar5;
    uVar19 = puVar5[3];
    uVar18 = puVar5[2];
    puVar4[1] = puVar5[1];
    *puVar4 = uVar20;
    puVar4[3] = uVar19;
    puVar4[2] = uVar18;
    puVar4[4] = puVar5[4];
    uVar14 = uVar13;
  }
  lVar12 = uVar15 * 5;
  *(ulonglong *)(*param_1 + uVar15 * 0x28) = uVar1;
  lVar17 = *param_2;
  lVar3 = *param_1 + uVar15 * 0x28;
  *(longlong *)(lVar3 + 0x10) = param_2[1];
  *(longlong *)(lVar3 + 8) = lVar17;
  *(longlong *)(lVar3 + 0x18) = param_2[2];
  local_68 = *param_2;
  if ((longlong *)param_2[1] == (longlong *)0x0) {
    local_60 = 0;
  }
  else {
    local_60 = (**(code **)(*(longlong *)param_2[1] + 0x18))();
  }
  if ((longlong *)param_2[1] == (longlong *)0x0) {
    local_58 = 0;
  }
  else {
    local_58 = (**(code **)(*(longlong *)param_2[1] + 0x20))();
  }
  local_50 = (undefined4)param_2[2];
  local_38 = *(undefined4 *)((longlong)param_2 + 0x14);
  local_48 = 0;
  uStack_40 = 0;
  local_70 = 0;
  plVar16 = *(longlong **)(param_1[3] + (ulonglong)*(uint *)(param_1 + 4) * 0x20);
  (**(code **)(*plVar16 + 0x58))(plVar16,&local_68,&DAT_18023bed0,&local_70);
  *(undefined8 *)(*param_1 + uVar15 * 0x28 + 0x20) = local_70;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
LAB_1800fd9bc:
  return *(undefined8 *)(lVar12 * 8 + *param_1 + 0x20);
}

