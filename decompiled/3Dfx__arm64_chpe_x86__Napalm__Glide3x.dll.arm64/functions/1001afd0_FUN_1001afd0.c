/*
 * FUN_1001afd0 at 1001afd0
 * undefined FUN_1001afd0(void)
 * Address ranges: 1001afd0-1001b337
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1001afd0(int param_1)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  code *extraout_w11;
  undefined4 local_a0;
  undefined4 uStack_9c;
  int iStack_98;
  uint uStack_94;
  undefined4 local_90;
  uint local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
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
  iVar8 = *(int *)(*(int *)(*piVar1 + 4) + 0x3f);
  if (iVar8 == 0) {
    iVar8 = FUN_100244d0(*piVar1 + 0xc);
  }
  *(int *)(param_1 + 0x28) = iVar8;
  uVar10 = FUN_1001a160(param_1,param_1);
  if ((uVar10 & 1) == 0) {
    return 0;
  }
  iVar8 = *piVar1;
  local_a0 = *(undefined4 *)(iVar8 + 0xa0);
  uStack_9c = *(undefined4 *)(iVar8 + 0xa4);
  local_70 = *(undefined8 *)(iVar8 + 0xa0);
  iStack_98 = *(int *)(param_1 + 0x28);
  puVar2 = (uint *)(iVar8 + 0x98);
  uStack_94 = *puVar2;
  local_90 = *(undefined4 *)(iVar8 + 0x9c);
  if ((*(char *)(iVar8 + 0xe0) == '\0') || (local_8c = 0x400, 0x3ff < *puVar2)) {
    local_8c = *puVar2;
  }
  uStack_88 = 0;
  puVar2 = (uint *)(iVar8 + 0xd4);
  switch(*puVar2) {
  default:
    local_84 = 0;
    break;
  case 4:
  case 7:
  case 10:
  case 0xd:
    local_84 = 2;
    break;
  case 5:
  case 8:
  case 0xb:
  case 0xe:
    local_84 = 6;
  }
  local_80 = 6;
  uStack_68 = CONCAT44(uStack_94,iStack_98);
  uStack_60 = CONCAT44(local_8c,local_90);
  uStack_7c = *(undefined4 *)(&DAT_100a0290 + *puVar2 * 4);
  uStack_58 = 0;
  local_78 = CONCAT31(local_78._1_3_,*(undefined1 *)(*(int *)(iVar8 + 4) + 0x54));
  local_48 = local_78;
  uStack_54 = 7;
  local_50 = 8;
  if ((*puVar2 < 0xf) && ((0x4920U >> (ulonglong)(*puVar2 & 0x1f) & 1) != 0)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  uStack_4c = 8;
  if (!bVar5) {
    uStack_4c = 0xf;
  }
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  cVar6 = (*extraout_w11)(param_1,&local_a0,&local_70);
  iVar8 = *piVar1;
  if (cVar6 == '\0') {
    FUN_100748c8(*(undefined4 *)(iVar8 + 0x2b14),*(undefined4 *)(iVar8 + 0x94),param_1);
    *(undefined4 *)(param_1 + 8) = 0;
    return 0;
  }
  FUN_1001c430(param_1,iVar8 + 0x1310,1);
  uVar7 = FUN_1001b580(param_1);
  *(undefined1 *)(param_1 + 0x126) = uVar7;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x124) = 0;
  DAT_100aaaf0 = param_1;
  uVar9 = (*(code *)PTR_FUN_100a8008)(1,FUN_1001ac20);
  *(undefined4 *)(param_1 + 0x130) = uVar9;
  iVar8 = *(int *)(*piVar1 + 0x2b14);
  (*(code *)PTR_FUN_100a803c)(iVar8 + 0x4a0);
  piVar1 = (int *)(iVar8 + 0x4c4);
  puVar2 = (uint *)(iVar8 + 0x4c8);
  uVar4 = *puVar2;
  if (uVar4 != 0) {
    uVar11 = 0;
    do {
      if (*(int *)(*piVar1 + uVar11 * 4) == param_1) {
        if (uVar11 != 0xffffffff) goto LAB_1001b2e0;
        break;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar4);
  }
  puVar3 = (uint *)(iVar8 + 0x4cc);
  uVar11 = *puVar3;
  if (uVar4 == uVar11) {
    uVar4 = uVar11 << 1;
    if (uVar11 == 0) {
      uVar4 = 0x10;
    }
    iVar12 = uVar4 * 4;
    if (uVar4 >> 0x1e != 0) {
      iVar12 = -1;
    }
    iVar12 = FUN_10083400(iVar12);
    if (iVar12 == 0) goto LAB_1001b2e0;
    FUN_10083b40(iVar12,*piVar1,((ulonglong)*puVar3 & 0x3fffffff) << 2);
    FUN_10083420(*piVar1);
    *piVar1 = iVar12;
    *puVar3 = uVar4;
  }
  *(int *)(*piVar1 + *puVar2 * 4) = param_1;
  *puVar2 = *puVar2 + 1;
LAB_1001b2e0:
  (*(code *)PTR_FUN_100a8090)(iVar8 + 0x4a0);
  return 1;
}

