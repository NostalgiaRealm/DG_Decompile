/*
 * FUN_1004f930 at 1004f930
 * undefined FUN_1004f930(void)
 * Address ranges: 1004f930-1004fc8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1004f930(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  code *extraout_w11;
  undefined1 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  int local_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int *local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  int local_98;
  int *local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  int local_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  piVar1 = (int *)(param_1 + 0xfc);
  local_a4 = param_4;
  uStack_a0 = param_3;
  local_9c = param_2;
  if (((*(uint *)(param_1 + 0x1b8) >> 4 & 1) == 0) &&
     ((&DAT_100be33a)[*(int *)(*piVar1 + 0x11c) * 0x228] == '\0')) {
    iVar3 = FUN_10038010(*piVar1,1);
    bVar2 = false;
  }
  else {
    bVar2 = true;
    iVar3 = *(int *)(*piVar1 + 0xfc);
  }
  if (iVar3 == 0) {
    uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar4 = (*extraout_w11)(uVar4);
    iVar3 = FUN_10039370(uVar4);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = FUN_10038010(iVar3,0);
    if (iVar3 == 0) {
      return 0;
    }
  }
  puVar7 = (undefined1 *)0x0;
  if (bVar2) {
    iVar10 = -1;
    puVar9 = (undefined1 *)0x0;
    iVar8 = -1;
  }
  else {
    (*(code *)PTR_FUN_100ba1ec)(iVar3,&local_b8);
    (*(code *)PTR_FUN_100ba1ac)(iVar3,&local_b8);
    (*(code *)PTR_FUN_100ba1ac)(iVar3,&local_b0);
    iVar8 = iStack_ac - iStack_b4;
    iVar10 = local_b0 - local_b8;
    (*(code *)PTR_FUN_100ba2b8)(auStack_60,0,0,iVar10,iVar8);
    puVar9 = auStack_60;
    if ((*(uint *)(param_1 + 0x1b8) >> 9 & 1) != 0) {
      iVar5 = *(int *)(*piVar1 + 0x11c) * 0x228;
      uStack_88 = *(undefined8 *)(iVar5 + 0x100be318);
      local_90 = *(undefined8 *)(&DAT_100be310 + iVar5);
      uVar6 = FUN_10005fb0(*piVar1 + 0x10);
      if ((uVar6 & 1) == 0) {
        local_70 = (int)local_90 - local_b8;
        if (local_70 == 0 || (int)local_90 < local_b8) {
          local_70 = 0;
        }
        iStack_6c = local_90._4_4_ - iStack_b4;
        if (iStack_6c == 0 || local_90._4_4_ < iStack_b4) {
          iStack_6c = 0;
        }
        iStack_64 = iStack_6c + iVar8;
        local_68 = local_70 + iVar10;
        (*(code *)PTR_FUN_100ba244)(auStack_60,auStack_60,&local_70);
      }
      (*(code *)PTR_FUN_100ba244)(auStack_50,&local_90,&local_b8);
      (*(code *)PTR_FUN_100ba26c)(auStack_50,-(int)local_90,-local_90._4_4_);
      puVar7 = auStack_50;
      iVar5 = (*(code *)PTR_FUN_100ba248)(auStack_50);
      if (iVar5 != 0) {
        return 0;
      }
    }
  }
  FUN_10050030(param_1);
  local_94 = (int *)(param_1 + 4);
  local_90 = CONCAT44(iVar10,iVar3);
  iVar3 = *local_94;
  uStack_88 = CONCAT44(uStack_88._4_4_,iVar8);
  local_a8 = (int *)(iVar3 + 0x4c);
  local_98 = *local_a8;
  uVar4 = FUN_1008e100(local_98 + 4);
  iVar8 = *piVar1;
  uStack_80 = *(undefined4 *)(iVar8 + 0x20);
  uStack_88 = CONCAT44(uVar4,(undefined4)uStack_88);
  local_7c = *(undefined4 *)(iVar8 + 0x1c);
  iVar10 = *(int *)(iVar8 + 0x11c);
  iVar5 = iVar10 * 0x228;
  uStack_78 = *(undefined4 *)(&DAT_100be2f0 + iVar5);
  local_74 = *(undefined4 *)(&DAT_100be2f4 + iVar5);
  FUN_100395c8(iVar8,&local_70);
  piVar1 = (int *)0x0;
  if (iVar3 != 0) {
    piVar1 = local_a8;
  }
  uVar6 = FUN_10006d50(iVar8 + 0x10,&local_90,local_98,piVar1,local_9c,uStack_a0,puVar7,puVar9,
                       &DAT_100be300 + iVar10 * 0x228);
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  (*(code *)PTR_FUN_100ba114)(param_1 + 0x18);
  *(uint *)(*local_94 + 200) = *(uint *)(*local_94 + 200) & 0xffffffdf;
  *(uint *)(*local_94 + 200) = *(uint *)(*local_94 + 200) & 0xffffffbf;
  return 1;
}

