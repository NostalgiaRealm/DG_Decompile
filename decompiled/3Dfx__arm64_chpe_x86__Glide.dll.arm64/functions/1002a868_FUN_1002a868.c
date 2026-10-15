/*
 * FUN_1002a868 at 1002a868
 * undefined FUN_1002a868(void)
 * Address ranges: 1002a868-1002ab3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1002a868(int param_1)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  code *extraout_w11;
  undefined4 local_a0;
  undefined4 uStack_9c;
  int iStack_98;
  uint uStack_94;
  undefined4 local_90;
  uint local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  
  piVar1 = (int *)(param_1 + 4);
  iVar4 = *(int *)(*(int *)(*piVar1 + 4) + 0x3f);
  if (iVar4 == 0) {
    iVar4 = 1;
  }
  *(int *)(param_1 + 0x28) = iVar4;
  uVar9 = FUN_10029a58(param_1,param_1);
  if ((uVar9 & 1) == 0) {
    return 0;
  }
  iVar4 = *piVar1;
  local_a0 = *(undefined4 *)(iVar4 + 0xa0);
  uStack_9c = *(undefined4 *)(iVar4 + 0xa4);
  local_70 = *(undefined8 *)(iVar4 + 0xa0);
  iStack_98 = *(int *)(param_1 + 0x28);
  puVar2 = (uint *)(iVar4 + 0x98);
  uStack_94 = *puVar2;
  local_90 = *(undefined4 *)(iVar4 + 0x9c);
  if ((*(char *)(iVar4 + 0xdc) == '\0') || (local_8c = 0x400, 0x3ff < *puVar2)) {
    local_8c = *puVar2;
  }
  local_88 = 0;
  local_80 = 6;
  uStack_68 = CONCAT44(uStack_94,iStack_98);
  uStack_60 = CONCAT44(local_8c,local_90);
  uStack_58 = 0;
  local_78 = CONCAT31(local_78._1_3_,*(undefined1 *)(*(int *)(iVar4 + 4) + 0x54));
  local_48 = local_78;
  uStack_54 = 7;
  local_50 = 9;
  uStack_4c = 7;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  cVar6 = (*extraout_w11)(param_1,&local_a0,&local_70);
  iVar4 = *piVar1;
  if (cVar6 == '\0') {
    FUN_1006ba08(*(undefined4 *)(iVar4 + 0x295c),*(undefined4 *)(iVar4 + 0x94),param_1);
    *(undefined4 *)(param_1 + 8) = 0;
    return 0;
  }
  FUN_1002bc00(param_1,iVar4 + 0x1158,1);
  uVar7 = FUN_1002ad50(param_1);
  *(undefined1 *)(param_1 + 0x126) = uVar7;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x124) = 0;
  DAT_1009f7f8 = param_1;
  uVar8 = (*(code *)PTR_FUN_1009d008)(1,FUN_1002a490);
  *(undefined4 *)(param_1 + 0x130) = uVar8;
  iVar4 = *(int *)(*piVar1 + 0x295c);
  (*(code *)PTR_FUN_1009d03c)(iVar4 + 0x4a0);
  piVar1 = (int *)(iVar4 + 0x4c4);
  puVar2 = (uint *)(iVar4 + 0x4c8);
  uVar5 = *puVar2;
  if (uVar5 != 0) {
    uVar10 = 0;
    do {
      if (*(int *)(*piVar1 + uVar10 * 4) == param_1) {
        if (uVar10 != 0xffffffff) goto LAB_1002aae8;
        break;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar5);
  }
  puVar3 = (uint *)(iVar4 + 0x4cc);
  uVar10 = *puVar3;
  if (uVar5 == uVar10) {
    uVar5 = uVar10 << 1;
    if (uVar10 == 0) {
      uVar5 = 0x10;
    }
    iVar11 = uVar5 * 4;
    if (uVar5 >> 0x1e != 0) {
      iVar11 = -1;
    }
    iVar11 = FUN_1007a4c0(iVar11);
    if (iVar11 == 0) goto LAB_1002aae8;
    FUN_1007ac00(iVar11,*piVar1,((ulonglong)*puVar3 & 0x3fffffff) << 2);
    FUN_1007a4e0(*piVar1);
    *piVar1 = iVar11;
    *puVar3 = uVar5;
  }
  *(int *)(*piVar1 + *puVar2 * 4) = param_1;
  *puVar2 = *puVar2 + 1;
LAB_1002aae8:
  (*(code *)PTR_FUN_1009d090)(iVar4 + 0x4a0);
  return 1;
}

