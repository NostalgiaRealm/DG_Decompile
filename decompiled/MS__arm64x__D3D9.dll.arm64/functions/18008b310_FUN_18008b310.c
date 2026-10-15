/*
 * FUN_18008b310 at 18008b310
 * undefined FUN_18008b310(void)
 * Address ranges: 18008b310-18008b6eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18008b310(longlong param_1,int param_2,int param_3,int param_4,int param_5,
                  longlong *param_6,longlong *param_7,undefined8 *param_8,undefined8 param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  longlong *plVar6;
  char cVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 local_c0;
  undefined8 uStack_b8;
  int local_b0;
  int local_ac;
  int iStack_a8;
  longlong local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [4];
  undefined4 local_6c;
  
  uStack_b8 = *(undefined8 *)((longlong)param_8 + 0x3c);
  local_c0 = *(undefined8 *)((longlong)param_8 + 0x34);
  iVar1 = *(int *)((longlong)param_8 + 0x44);
  iVar2 = *(int *)(param_8 + 9);
  local_a0 = param_1;
  local_98 = param_7;
  cVar7 = (**(code **)(*param_7 + 0xa8))(param_7);
  if (cVar7 != '\0') {
    (**(code **)(*param_7 + 8))(param_7,param_4,param_5,*(char *)((longlong)param_8 + 0x59) == '\0')
    ;
  }
  cVar7 = (**(code **)(*param_6 + 0xa8))(param_6);
  if (cVar7 != '\0') {
    (**(code **)(*param_6 + 8))(param_6,param_2,param_3,0);
  }
  plVar6 = local_98;
  local_b0 = *(int *)((longlong)local_98 + 0x34);
  iVar3 = *(int *)((longlong)local_98 + 0x3c);
  local_ac = *(int *)((longlong)param_6 + 0x34);
  iStack_a8 = *(int *)((longlong)param_6 + 0x3c);
  iVar4 = param_2 + iStack_a8 * param_3;
  uVar8 = (**(code **)(*local_98 + 0x40))(local_98,0);
  uVar8 = FUN_1800a2b50(plVar6,uVar8,param_4);
  uVar9 = (**(code **)(*plVar6 + 0x48))(plVar6,0);
  uVar9 = FUN_1800a2b98(plVar6,uVar9,param_4);
  uVar10 = (**(code **)(*param_6 + 0x40))(param_6,0);
  uVar10 = FUN_1800a2b50(param_6,uVar10,param_2);
  uVar11 = (**(code **)(*param_6 + 0x48))(param_6,0);
  uVar11 = FUN_1800a2b98(param_6,uVar11,param_2);
  (**(code **)(*plVar6 + 8))(plVar6,param_4,param_5,0);
  (**(code **)(*param_6 + 8))(param_6,param_2,param_3,0);
  local_90 = 0;
  local_80 = 0;
  local_88 = uVar10;
  uStack_84 = uVar11;
  local_78 = uVar8;
  uStack_74 = uVar9;
  if ((*(char *)((longlong)param_8 + 0x55) == '\0') && (*(char *)((longlong)param_8 + 0x54) == '\0')
     ) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
    (*__imp_USER32_dll_IntersectRect)(&local_c0,&local_c0,&local_90);
  }
  (*__imp_USER32_dll_OffsetRect)
            (&local_c0,iVar1 - *(int *)((longlong)param_8 + 0x34),iVar2 - *(int *)(param_8 + 7));
  if (bVar5) {
    (*__imp_USER32_dll_IntersectRect)(&local_c0,&local_c0,&local_80);
  }
  (*__imp_USER32_dll_OffsetRect)
            (&local_c0,*(int *)((longlong)param_8 + 0x34) - iVar1,*(int *)(param_8 + 7) - iVar2);
  if (*(uint *)((longlong)param_6 + 0x2c) < 0xe) {
    local_6c = *(undefined4 *)(local_a0 + 0x44);
  }
  else {
    func_0x0001801bad48(auStack_70);
  }
  FUN_18008e1b0(local_a0,*param_8,param_8[1],param_8[2],param_8[3],uVar8,uVar9,
                param_4 + iVar3 * param_5,uVar10,uVar11,iVar4,
                *(undefined4 *)((longlong)param_8 + 0x24),*(undefined4 *)(param_8 + 5),local_6c,
                iVar1,iVar2,&local_c0,*(undefined4 *)((longlong)param_8 + 0x2c),
                *(undefined4 *)(param_8 + 6),*(undefined1 *)((longlong)param_8 + 0x59),
                *(undefined1 *)((longlong)param_8 + 0x5a));
  if ((((*(char *)((longlong)param_8 + 0x59) == '\0') &&
       ((&DAT_180231818)[*(uint *)((longlong)local_98 + 0x2c)] != '\0')) &&
      ((&DAT_180231818)[*(uint *)((longlong)param_6 + 0x2c)] != '\0')) &&
     ((*(int *)((longlong)param_8 + 0x24) - 0x2cU < 2 && (*(int *)(param_8 + 5) - 0x2cU < 2)))) {
    FUN_18008e1b0(local_a0,*param_8,param_8[1],param_8[2],param_8[3],uVar8,uVar9,
                  param_4 + (local_b0 + param_5) * iVar3,uVar10,uVar11,
                  param_2 + (local_ac + param_3) * iStack_a8,*(int *)((longlong)param_8 + 0x24),
                  *(int *)(param_8 + 5),local_6c,iVar1,iVar2,&local_c0,
                  *(undefined4 *)((longlong)param_8 + 0x2c),*(undefined4 *)(param_8 + 6),0,0);
  }
  (**(code **)(*param_6 + 0x18))(param_6,iVar4,param_9);
  return;
}

