/*
 * FUN_1800f3970 at 1800f3970
 * undefined FUN_1800f3970(void)
 * Address ranges: 1800f3970-1800f3be7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800f3970(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  longlong *local_b0;
  longlong *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  ulonglong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  local_b8 = 0;
  local_c0 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_bc = (undefined4)param_1[5];
  plStack_a8 = (longlong *)0x0;
  local_b0 = (longlong *)0x0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  plVar7 = *(longlong **)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x20);
  iVar6 = (**(code **)(*plVar7 + 0x138))(plVar7,&local_c0,&DAT_18023c040,&local_b0);
  if (iVar6 < 0) {
    return 0;
  }
  local_80 = 3;
  uStack_78 = 0;
  local_58[0] = 1;
  local_70 = 0;
  local_50 = 0;
  puVar1 = (undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x20);
  if ((*(uint *)((longlong)puVar1 + 0x14) & 1) == 0) {
    uVar4 = (int)param_1[5] << 3;
  }
  else {
    uVar4 = (int)param_1[5] * 0xc;
  }
  local_48 = (ulonglong)uVar4;
  local_28 = 0;
  uStack_40 = 0x1000100000001;
  local_38 = 0x100000000;
  uStack_30 = 0x100000000;
  plVar7 = (longlong *)*puVar1;
  iVar6 = (**(code **)(*plVar7 + 0xd8))
                    (plVar7,&local_80,0,local_58,0x400,0,&DAT_180235458,&plStack_a8);
  if (iVar6 < 0) goto LAB_1800f3bc4;
  local_68 = 0;
  uStack_60 = 0;
  (**(code **)(*plStack_a8 + 0x40))(plStack_a8,0,&local_68,&uStack_a0);
  iVar6 = *(int *)((longlong)param_1 + 0x1c);
  if ((int)param_1[3] == 0) {
    if (iVar6 == 0) {
      lVar9 = thunk_FUN_180102f80(0x300);
      if (lVar9 == 0) goto LAB_1800f3bb4;
      thunk_FUN_180001218(lVar9,param_1[2],(ulonglong)*(uint *)((longlong)param_1 + 0x1c) * 0x30);
      thunk_FUN_180102fc0(param_1[2]);
      param_1[2] = lVar9;
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0x10;
    }
    uVar4 = *(uint *)(param_1 + 3);
    lVar9 = param_1[2];
  }
  else {
    lVar9 = param_1[4];
    if ((int)param_1[3] == iVar6) {
      uVar4 = iVar6 << 1;
      if (iVar6 == 0) {
        uVar4 = 0x10;
      }
      lVar10 = CONCAT44(0,uVar4) * 0x30;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = CONCAT44(0,uVar4);
      if (SUB168(auVar5 * ZEXT816(0x30),8) != 0) {
        lVar10 = -1;
      }
      lVar10 = thunk_FUN_180102f80(lVar10);
      if (lVar10 == 0) {
LAB_1800f3bb4:
        (**(code **)(*plStack_a8 + 0x10))();
LAB_1800f3bc4:
        (**(code **)(*local_b0 + 0x10))();
        return 0;
      }
      thunk_FUN_180001218(lVar10,param_1[2],(ulonglong)*(uint *)((longlong)param_1 + 0x1c) * 0x30);
      thunk_FUN_180102fc0(param_1[2]);
      param_1[2] = lVar10;
      *(uint *)((longlong)param_1 + 0x1c) = uVar4;
    }
    uVar3 = *(uint *)(param_1 + 3);
    uVar4 = (int)lVar9 + 1;
    while (uVar8 = (ulonglong)uVar3, uVar4 < uVar3) {
      uVar3 = uVar3 - 1;
      puVar1 = (undefined8 *)(param_1[2] + uVar8 * 0x30);
      puVar2 = (undefined8 *)(param_1[2] + (ulonglong)uVar3 * 0x30);
      uVar13 = *puVar2;
      uVar12 = puVar2[3];
      uVar11 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar13;
      puVar1[3] = uVar12;
      puVar1[2] = uVar11;
      uVar11 = puVar2[4];
      puVar1[5] = puVar2[5];
      puVar1[4] = uVar11;
    }
    lVar9 = param_1[2];
  }
  puVar1 = (undefined8 *)(lVar9 + (ulonglong)uVar4 * 0x30);
  puVar1[1] = plStack_a8;
  *puVar1 = local_b0;
  puVar1[3] = uStack_98;
  puVar1[2] = uStack_a0;
  puVar1[5] = uStack_88;
  puVar1[4] = local_90;
  *(int *)(param_1 + 3) = (int)param_1[3] + 1;
  return 1;
}

