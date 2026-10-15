/*
 * FUN_18000f388 at 18000f388
 * undefined FUN_18000f388(void)
 * Address ranges: 18000f388-18000f48b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18000f388(longlong param_1,int param_2,int *param_3,undefined8 param_4,
                       undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  int local_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [32];
  
  uVar9 = 0;
  if (param_2 != 0) goto LAB_18000f470;
  uStack_6c = *(undefined4 *)(param_1 + 0xe8);
  local_68 = *(undefined4 *)(param_1 + 0xec);
  local_78 = 0;
  local_70 = 0;
  uStack_64 = *(undefined4 *)(param_1 + 0xf0);
  if (param_3 == (int *)0x0) {
    puVar8 = (undefined8 *)FUN_18000f2e0(param_1 + 0xc0,auStack_60,&local_78);
    uVar9 = 1;
  }
  else {
    iVar1 = param_3[2];
    iVar4 = param_3[3];
    iVar2 = param_3[4];
    iVar5 = param_3[5];
    iVar3 = *param_3;
    iVar6 = param_3[1];
    local_90 = iVar3;
    iStack_8c = iVar6;
    local_88 = iVar2;
    iStack_84 = iVar1;
    local_80 = iVar4;
    iStack_7c = iVar5;
    piVar7 = (int *)FUN_18000f1f8(&local_78,auStack_60,&local_90);
    if ((((iVar3 == *piVar7) && (iVar6 == piVar7[1])) && (iVar2 == piVar7[2])) &&
       ((iVar1 == piVar7[3] && (iVar4 == piVar7[4])))) {
      uVar9 = 1;
      if (iVar5 != piVar7[5]) goto LAB_18000f438;
    }
    else {
LAB_18000f438:
      uVar9 = 0;
    }
    puVar8 = (undefined8 *)FUN_18000f2e0(param_1 + 0xc0,auStack_60,&local_90,param_4,param_5,uVar9);
  }
  uVar10 = *puVar8;
  *(undefined8 *)(param_1 + 200) = puVar8[1];
  *(undefined8 *)(param_1 + 0xc0) = uVar10;
  *(undefined8 *)(param_1 + 0xd0) = puVar8[2];
LAB_18000f470:
  return uVar9 & 0xffffffff;
}

