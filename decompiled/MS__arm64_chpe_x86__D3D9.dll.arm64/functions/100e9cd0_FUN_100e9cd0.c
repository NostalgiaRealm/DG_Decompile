/*
 * FUN_100e9cd0 at 100e9cd0
 * undefined FUN_100e9cd0(void)
 * Address ranges: 100e9cd0-100ea15b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100e9cd0(int param_1,int param_2,int param_3,code *param_4,int param_5,uint param_6)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  code *pcVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *extraout_w8;
  uint uVar9;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  int iVar10;
  undefined1 auStack_90 [4];
  code *local_8c;
  uint uStack_88;
  int local_84;
  int iStack_80;
  int local_7c;
  undefined4 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44;
  
  uVar9 = 0xfffffffc;
  if (*(char *)(param_1 + 0x124) != '\0') {
    uVar9 = 0xfffffe00;
  }
  if ((uVar9 & param_6) != 0) {
    return 0x8876086c;
  }
  if (param_5 != 0) {
    return 0x8876086c;
  }
  iVar10 = param_1 + 8;
  FUN_1001e9f0(auStack_90);
  piVar1 = (int *)(param_1 + 0x34);
  uVar7 = 0x88760868;
  if (*(char *)(*piVar1 + 0x669d) != '\0') goto switchD_100e9e04_caseD_4;
  local_8c = (code *)(param_1 + 0x90);
  uVar7 = 0x8876086c;
  uVar9 = 1;
  if (*(uint *)local_8c != 0) {
    do {
      if ((*(uint *)(*(int *)(*(int *)(param_1 + 0x38 + uVar9 * 4) + 4) + 0xb8) >> 0xb & 1) != 0)
      goto switchD_100e9e04_caseD_4;
      uVar9 = uVar9 + 1;
    } while (uVar9 <= *(uint *)local_8c);
  }
  FUN_1000dc50(*piVar1,*(int *)(param_1 + 0x3c));
  pcVar4 = local_8c;
  if (((param_6 & 0x104) == 0) || (*(int *)(param_1 + 0x88) == 5)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  bVar2 = true;
  switch(*(int *)(param_1 + 0x88)) {
  case 1:
    if (*(char *)(param_1 + 0xbd) != '\0') goto switchD_100e9e04_caseD_3;
    bVar3 = (bool)((param_2 == 0 && param_3 == 0) & bVar3);
    break;
  case 2:
  case 5:
    bVar3 = (bool)(bVar3 & (param_2 == 0 && param_3 == 0));
    break;
  case 3:
switchD_100e9e04_caseD_3:
    bVar2 = false;
    break;
  default:
    goto switchD_100e9e04_caseD_4;
  }
  if (bVar3) {
    if (bVar2) {
      local_8c = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar7);
      pcVar5 = local_8c;
      uVar9 = 1;
      uVar7 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x38) + 4) + 0x50);
      if (*(uint *)pcVar4 != 0) {
        uVar9 = 1;
        local_8c = param_4;
        uStack_88 = param_6;
        local_84 = iVar10;
        iStack_80 = param_2;
        local_7c = param_3;
        uStack_78 = uVar7;
        do {
          uVar7 = (*pcVar5)();
          (*extraout_w11_00)(uVar7);
          FUN_1001d698(piVar1[uVar9],
                       *(undefined4 *)(*(int *)(((int *)(param_1 + 0x38))[uVar9] + 4) + 0x50));
          FUN_1000d6c0(*piVar1,piVar1[uVar9]);
          uVar9 = uVar9 + 1;
          iVar10 = local_84;
          uVar7 = uStack_78;
        } while (uVar9 <= *(uint *)pcVar4);
      }
      puVar8 = (undefined4 *)(iVar10 + (uVar9 + 0xb) * 4);
      FUN_1001d698(*puVar8,uVar7);
      FUN_1000d6c0(*piVar1,*puVar8);
    }
    else {
      local_50 = 0;
      local_44 = 1;
      local_48 = 0;
      uStack_68 = 0;
      local_70 = 0;
      uStack_58 = 0;
      local_60 = 0;
      (*(code *)PTR_FUN_1016c26c)
                (&local_60,0,0,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (param_2 != 0) {
        (*(code *)PTR_FUN_1016c208)(&local_60,&local_60,param_2);
      }
      if (*(char *)(param_1 + 0xbd) == '\0') {
        (*(code *)PTR_FUN_1016c26c)
                  (&local_70,0,0,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        if (param_3 != 0) {
          (*(code *)PTR_FUN_1016c208)(&local_70,&local_70,param_3);
        }
      }
      else {
        uStack_68 = uStack_58;
        local_70 = local_60;
      }
      pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11_01)(uVar7);
      uVar7 = (*pcVar4)();
      (*extraout_w11_02)(uVar7);
      puVar8 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x3c) + 4) + 0x50);
      uVar7 = (*pcVar4)();
      (*extraout_w11_03)(uVar7,0,0,0,0,*extraout_w8,*puVar8,&local_70);
    }
    *(int *)(iVar10 + 200) = *(int *)(iVar10 + 200) + 1;
    (*(code *)PTR_FUN_1016c0e4)(iVar10 + 0xc0);
    cVar6 = FUN_1001fe48(iVar10,*(undefined4 *)(param_1 + 0x38));
    uVar7 = 0;
    if (cVar6 == '\0') {
      uVar7 = 0x80004005;
    }
  }
switchD_100e9e04_caseD_4:
  FUN_1001eac0(auStack_90);
  return uVar7;
}

