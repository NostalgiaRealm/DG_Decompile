/*
 * FUN_18005ae70 at 18005ae70
 * undefined8 __cdecl FUN_18005ae70(longlong * param_1, byte * param_2)
 * Address ranges: 18005ae70-18005b1b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18005ae70(longlong *param_1,byte *param_2)

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
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  SIZE_T SVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  uVar16 = 0;
  uVar1 = ((ulonglong)*(uint *)(param_2 + 0x10) |
          *(longlong *)(param_2 + 8) + (longlong)*(int *)(param_2 + 0x14) << 0x20) +
          *(longlong *)param_2;
  uVar6 = *(uint *)((longlong)param_1 + 0xc);
  if (uVar6 != 0) {
    uVar12 = 0;
    uVar11 = uVar6;
    do {
      uVar7 = uVar11 + uVar12 >> 1;
      uVar16 = (ulonglong)uVar7;
      uVar15 = *(ulonglong *)(*param_1 + uVar16 * 0x28);
      if (uVar15 <= uVar1) {
        if (uVar1 <= uVar15) break;
        uVar12 = uVar7 + 1;
        uVar16 = (ulonglong)(uVar7 + 1);
        uVar7 = uVar11;
      }
      uVar11 = uVar7;
    } while (uVar11 != uVar12);
    if ((uint)uVar16 != uVar6) {
      lVar10 = uVar16 * 5;
      puVar2 = (ulonglong *)(*param_1 + uVar16 * 0x28);
      if (*puVar2 == uVar1) {
        iVar9 = FUN_180060310(param_2,(byte *)(puVar2 + 1),0x18);
        if (iVar9 != 0) {
          plVar17 = (longlong *)puVar2[4];
          FUN_180045c28(param_1[2],(ulonglong)plVar17,(undefined *)0x0,1);
          (**(code **)(*plVar17 + 0x10))(plVar17);
          *(ulonglong *)(*param_1 + uVar16 * 0x28) = uVar1;
          uVar18 = *(undefined8 *)param_2;
          lVar3 = *param_1 + uVar16 * 0x28;
          *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(param_2 + 8);
          *(undefined8 *)(lVar3 + 8) = uVar18;
          *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(param_2 + 0x10);
          local_68 = *(undefined8 *)param_2;
          if (*(longlong **)(param_2 + 8) == (longlong *)0x0) {
            local_60 = 0;
          }
          else {
            local_60 = (**(code **)(**(longlong **)(param_2 + 8) + 0x18))();
          }
          if (*(longlong **)(param_2 + 8) == (longlong *)0x0) {
            local_58 = 0;
          }
          else {
            local_58 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))();
          }
          local_50 = *(undefined4 *)(param_2 + 0x10);
          local_38 = *(undefined4 *)(param_2 + 0x14);
          local_48 = 0;
          uStack_40 = 0;
          local_70 = 0;
          plVar17 = *(longlong **)(param_1[3] + (ulonglong)*(uint *)(param_1 + 4) * 0x20);
          (**(code **)(*plVar17 + 0x58))(plVar17,&local_68,&DAT_180064e20,&local_70);
          *(undefined8 *)(*param_1 + uVar16 * 0x28 + 0x20) = local_70;
        }
        goto LAB_18005b194;
      }
    }
  }
  if (uVar6 == *(uint *)(param_1 + 1)) {
    uVar15 = CONCAT44(0,*(uint *)(param_1 + 1) << 1);
    SVar13 = uVar15 * 0x28;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar15;
    if (SUB168(auVar8 * ZEXT816(0x28),8) != 0) {
      SVar13 = 0xffffffffffffffff;
    }
    lVar10 = thunk_FUN_18005fb88(SVar13);
    if (lVar10 != 0) {
      uVar15 = 0;
      if ((int)param_1[1] != 0) {
        do {
          uVar6 = (int)uVar15 + 1;
          puVar4 = (undefined8 *)(*param_1 + uVar15 * 0x28);
          puVar5 = (undefined8 *)(lVar10 + uVar15 * 0x28);
          uVar20 = *puVar4;
          uVar19 = puVar4[3];
          uVar18 = puVar4[2];
          puVar5[1] = puVar4[1];
          *puVar5 = uVar20;
          puVar5[3] = uVar19;
          puVar5[2] = uVar18;
          puVar5[4] = puVar4[4];
          uVar15 = (ulonglong)uVar6;
        } while (uVar6 < *(uint *)(param_1 + 1));
      }
      thunk_FUN_18005fbc8((LPVOID)*param_1);
      *param_1 = lVar10;
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
    }
  }
  uVar15 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
  while ((uint)uVar16 < (uint)uVar15) {
    uVar14 = (ulonglong)((uint)uVar15 - 1);
    puVar4 = (undefined8 *)(*param_1 + uVar15 * 0x28);
    puVar5 = (undefined8 *)(*param_1 + uVar14 * 0x28);
    uVar20 = *puVar5;
    uVar19 = puVar5[3];
    uVar18 = puVar5[2];
    puVar4[1] = puVar5[1];
    *puVar4 = uVar20;
    puVar4[3] = uVar19;
    puVar4[2] = uVar18;
    puVar4[4] = puVar5[4];
    uVar15 = uVar14;
  }
  lVar10 = uVar16 * 5;
  *(ulonglong *)(*param_1 + uVar16 * 0x28) = uVar1;
  uVar18 = *(undefined8 *)param_2;
  lVar3 = *param_1 + uVar16 * 0x28;
  *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(lVar3 + 8) = uVar18;
  *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(param_2 + 0x10);
  local_68 = *(undefined8 *)param_2;
  if (*(longlong **)(param_2 + 8) == (longlong *)0x0) {
    local_60 = 0;
  }
  else {
    local_60 = (**(code **)(**(longlong **)(param_2 + 8) + 0x18))();
  }
  if (*(longlong **)(param_2 + 8) == (longlong *)0x0) {
    local_58 = 0;
  }
  else {
    local_58 = (**(code **)(**(longlong **)(param_2 + 8) + 0x20))();
  }
  local_50 = *(undefined4 *)(param_2 + 0x10);
  local_38 = *(undefined4 *)(param_2 + 0x14);
  local_48 = 0;
  uStack_40 = 0;
  local_70 = 0;
  plVar17 = *(longlong **)(param_1[3] + (ulonglong)*(uint *)(param_1 + 4) * 0x20);
  (**(code **)(*plVar17 + 0x58))(plVar17,&local_68,&DAT_180064e20,&local_70);
  *(undefined8 *)(*param_1 + uVar16 * 0x28 + 0x20) = local_70;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
LAB_18005b194:
  return *(undefined8 *)(lVar10 * 8 + *param_1 + 0x20);
}

