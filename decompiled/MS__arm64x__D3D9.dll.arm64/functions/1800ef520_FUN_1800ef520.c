/*
 * FUN_1800ef520 at 1800ef520
 * undefined FUN_1800ef520(void)
 * Address ranges: 1800ef520-1800ef777
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800ef520(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  int iVar7;
  longlong *plVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_88;
  longlong *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60 [2];
  undefined8 local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  
  local_30 = 0;
  local_60[0] = 1;
  uStack_88 = 0;
  uStack_78 = 0;
  local_80 = (longlong *)0x0;
  uStack_68 = 0;
  local_70 = 0;
  lStack_50 = ((ulonglong)(*(int *)(param_1 + 0x30) + 0xffU & 0xffffff00) & 0x3fffff) << 10;
  local_58 = 0x10000;
  local_38 = 0x100000000;
  local_48 = 0x1000100000001;
  uStack_40 = 0x100000000;
  plVar8 = *(longlong **)(*(longlong *)(param_1 + 8) + (ulonglong)*(uint *)(param_1 + 0x10) * 0x20);
  iVar7 = (**(code **)(*plVar8 + 0xd8))
                    (plVar8,&DAT_18023bf50,0,local_60,0xac3,0,&DAT_180235458,&local_80);
  if (iVar7 < 0) {
    return 0;
  }
  uVar9 = (**(code **)(*local_80 + 0x58))();
  iVar7 = (**(code **)(*local_80 + 0x40))(local_80,0,0,&uStack_88);
  if (iVar7 < 0) goto LAB_1800ef6e0;
  iVar7 = *(int *)(param_1 + 100);
  if (*(int *)(param_1 + 0x60) == 0) {
    if (iVar7 == 0) {
      lVar11 = thunk_FUN_180102f80(0x300);
      if (lVar11 == 0) goto LAB_1800ef6e0;
      thunk_FUN_180001218(lVar11,*(undefined8 *)(param_1 + 0x58),
                          (ulonglong)*(uint *)(param_1 + 100) * 0x30);
      thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x58));
      *(longlong *)(param_1 + 0x58) = lVar11;
      *(undefined4 *)(param_1 + 100) = 0x10;
    }
    puVar1 = (undefined8 *)
             (*(longlong *)(param_1 + 0x58) + (ulonglong)*(uint *)(param_1 + 0x60) * 0x30);
    puVar1[1] = uStack_88;
    *puVar1 = uVar9;
    puVar1[3] = uStack_78;
    puVar1[2] = local_80;
    puVar1[5] = uStack_68;
    puVar1[4] = local_70;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    return 1;
  }
  iVar3 = *(int *)(param_1 + 0x68);
  if (*(int *)(param_1 + 0x60) == iVar7) {
    uVar5 = iVar7 << 1;
    if (iVar7 == 0) {
      uVar5 = 0x10;
    }
    lVar11 = CONCAT44(0,uVar5) * 0x30;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = CONCAT44(0,uVar5);
    if (SUB168(auVar6 * ZEXT816(0x30),8) != 0) {
      lVar11 = -1;
    }
    lVar11 = thunk_FUN_180102f80(lVar11);
    if (lVar11 != 0) {
      thunk_FUN_180001218(lVar11,*(undefined8 *)(param_1 + 0x58),
                          (ulonglong)*(uint *)(param_1 + 100) * 0x30);
      thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x58));
      *(longlong *)(param_1 + 0x58) = lVar11;
      *(uint *)(param_1 + 100) = uVar5;
      goto LAB_1800ef660;
    }
    iVar7 = 0;
  }
  else {
LAB_1800ef660:
    uVar4 = *(uint *)(param_1 + 0x60);
    uVar5 = iVar3 + 1;
    while (uVar10 = (ulonglong)uVar4, uVar5 < uVar4) {
      uVar4 = uVar4 - 1;
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x58) + uVar10 * 0x30);
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x58) + (ulonglong)uVar4 * 0x30);
      uVar14 = *puVar2;
      uVar13 = puVar2[3];
      uVar12 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar14;
      puVar1[3] = uVar13;
      puVar1[2] = uVar12;
      uVar12 = puVar2[4];
      puVar1[5] = puVar2[5];
      puVar1[4] = uVar12;
    }
    iVar7 = 1;
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x58) + (ulonglong)uVar5 * 0x30);
    puVar1[1] = uStack_88;
    *puVar1 = uVar9;
    puVar1[3] = uStack_78;
    puVar1[2] = local_80;
    puVar1[5] = uStack_68;
    puVar1[4] = local_70;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  }
  if (iVar7 != 0) {
    return iVar7;
  }
LAB_1800ef6e0:
  (**(code **)(*local_80 + 0x10))();
  return 0;
}

