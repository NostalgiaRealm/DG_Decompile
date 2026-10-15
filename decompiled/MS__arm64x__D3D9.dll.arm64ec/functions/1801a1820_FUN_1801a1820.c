/*
 * FUN_1801a1820 at 1801a1820
 * undefined FUN_1801a1820(void)
 * Address ranges: 1801a1820-1801a1c8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801a1820(longlong param_1,int param_2,int param_3,int param_4,int param_5,longlong param_6
                  ,longlong param_7,undefined8 *param_8,undefined8 param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined *puVar6;
  longlong lVar7;
  char cVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  code *extraout_x11_07;
  code *extraout_x11_08;
  code *extraout_x11_09;
  undefined8 local_b0;
  undefined8 uStack_a8;
  int local_a0;
  int local_9c;
  int iStack_98;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [4];
  undefined4 local_5c;
  
  puVar6 = __hybrid_os_arm64x_dispatch_icall;
  iVar1 = *(int *)((longlong)param_8 + 0x44);
  iVar2 = *(int *)(param_8 + 9);
  uStack_a8 = *(undefined8 *)((longlong)param_8 + 0x3c);
  local_b0 = *(undefined8 *)((longlong)param_8 + 0x34);
  local_90 = param_7;
  local_88 = param_1;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  cVar8 = (*extraout_x11)(param_7);
  if (cVar8 != '\0') {
    (*(code *)puVar6)(0x180224000);
    (*extraout_x11_00)(param_7,param_4,param_5);
  }
  (*(code *)puVar6)(0x180224000);
  cVar8 = (*extraout_x11_01)(param_6);
  if (cVar8 != '\0') {
    (*(code *)puVar6)(0x180224000);
    (*extraout_x11_02)(param_6,param_2,param_3,0);
  }
  lVar7 = local_90;
  iVar3 = *(int *)(local_90 + 0x3c);
  local_a0 = *(int *)(local_90 + 0x34);
  iStack_98 = *(int *)(param_6 + 0x3c);
  local_9c = *(int *)(param_6 + 0x34);
  iVar4 = param_2 + iStack_98 * param_3;
  (*(code *)puVar6)(0x180224000);
  uVar9 = (*extraout_x11_03)(lVar7,0);
  uVar9 = FUN_1801bb148(lVar7,uVar9,param_4);
  (*(code *)puVar6)(0x180224000);
  uVar10 = (*extraout_x11_04)(lVar7,0);
  uVar10 = FUN_1801bb190(lVar7,uVar10,param_4);
  (*(code *)puVar6)(0x180224000);
  uVar11 = (*extraout_x11_05)(param_6,0);
  uVar11 = FUN_1801bb148(param_6,uVar11,param_2);
  (*(code *)puVar6)(0x180224000);
  uVar12 = (*extraout_x11_06)(param_6,0);
  uVar12 = FUN_1801bb190(param_6,uVar12,param_2);
  (*(code *)puVar6)(0x180224000);
  (*extraout_x11_07)(lVar7,param_4,param_5,0);
  (*(code *)puVar6)(0x180224000);
  (*extraout_x11_08)(param_6,param_2,param_3,0);
  local_80 = 0;
  local_70 = 0;
  local_78 = uVar11;
  uStack_74 = uVar12;
  local_68 = uVar9;
  uStack_64 = uVar10;
  if ((*(char *)((longlong)param_8 + 0x55) == '\0') && (*(char *)((longlong)param_8 + 0x54) == '\0')
     ) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
    thunk_FUN_180223c34(&local_b0,&local_b0,&local_80);
  }
  thunk_FUN_180223c5c(&local_b0,iVar1 - *(int *)((longlong)param_8 + 0x34),
                      iVar2 - *(int *)(param_8 + 7));
  if (bVar5) {
    thunk_FUN_180223c34(&local_b0,&local_b0,&local_70);
  }
  thunk_FUN_180223c5c(&local_b0,*(int *)((longlong)param_8 + 0x34) - iVar1,
                      *(int *)(param_8 + 7) - iVar2);
  if (*(uint *)(param_6 + 0x2c) < 0xe) {
    local_5c = *(undefined4 *)(local_88 + 0x44);
  }
  else {
    FUN_1801bad48(auStack_60);
  }
  FUN_1801a49f8(local_88,*param_8,param_8[1],param_8[2],param_8[3],uVar9,uVar10,
                param_4 + iVar3 * param_5,uVar11,uVar12,iVar4,
                *(undefined4 *)((longlong)param_8 + 0x24),*(undefined4 *)(param_8 + 5),local_5c,
                iVar1,iVar2,&local_b0,*(undefined4 *)((longlong)param_8 + 0x2c),
                *(undefined4 *)(param_8 + 6),*(undefined1 *)((longlong)param_8 + 0x59),
                *(undefined1 *)((longlong)param_8 + 0x5a));
  if ((((*(char *)((longlong)param_8 + 0x59) == '\0') &&
       ((&DAT_18022dd48)[*(uint *)(local_90 + 0x2c)] != '\0')) &&
      ((&DAT_18022dd48)[*(uint *)(param_6 + 0x2c)] != '\0')) &&
     ((*(int *)((longlong)param_8 + 0x24) - 0x2cU < 2 && (*(int *)(param_8 + 5) - 0x2cU < 2)))) {
    FUN_1801a49f8(local_88,*param_8,param_8[1],param_8[2],param_8[3],uVar9,uVar10,
                  param_4 + (local_a0 + param_5) * iVar3,uVar11,uVar12,
                  param_2 + (local_9c + param_3) * iStack_98,*(int *)((longlong)param_8 + 0x24),
                  *(int *)(param_8 + 5),local_5c,iVar1,iVar2,&local_b0,
                  *(undefined4 *)((longlong)param_8 + 0x2c),*(undefined4 *)(param_8 + 6),0,0);
  }
  (*(code *)puVar6)(0x180224000);
  (*extraout_x11_09)(param_6,iVar4,param_9);
  return;
}

