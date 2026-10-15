/*
 * FUN_100bf870 at 100bf870
 * undefined FUN_100bf870(void)
 * Address ranges: 100bf870-100bfc63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100bf870(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *extraout_w8;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  int iVar9;
  undefined1 auStack_90 [4];
  undefined4 *local_8c;
  undefined4 uStack_88;
  int local_84;
  int iStack_80;
  int local_7c;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44;
  
  if (param_5 != 0) {
    return 0x8876086c;
  }
  iVar9 = param_1 + 8;
  FUN_10019690(auStack_90);
  piVar1 = (int *)(param_1 + 0x34);
  uVar6 = 0x88760868;
  if (*(char *)(*piVar1 + 0x58bd) != '\0') goto switchD_100bf948_default;
  puVar2 = (uint *)(param_1 + 0x90);
  uVar6 = 0x8876086c;
  uVar8 = 1;
  if (*puVar2 != 0) {
    do {
      if ((*(uint *)(*(int *)(*(int *)(param_1 + 0x38 + uVar8 * 4) + 4) + 0xb8) >> 0xb & 1) != 0)
      goto switchD_100bf948_default;
      uVar8 = uVar8 + 1;
    } while (uVar8 <= *puVar2);
  }
  local_8c = (undefined4 *)(param_1 + 0x3c);
  FUN_1000c990(*piVar1,*local_8c);
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  switch(*(undefined4 *)(param_1 + 0x88)) {
  case 1:
    if (*(char *)(param_1 + 0xbd) != '\0') goto LAB_100bfa7c;
switchD_100bf948_caseD_2:
    if (param_2 == 0 && param_3 == 0) {
      uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar6);
      uVar8 = 1;
      puVar7 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x38) + 4) + 0x50);
      if (*puVar2 != 0) {
        uVar8 = 1;
        local_8c = puVar7;
        uStack_88 = param_4;
        local_84 = iVar9;
        iStack_80 = param_2;
        local_7c = param_3;
        do {
          uVar6 = (*pcVar4)();
          (*extraout_w11_00)(uVar6);
          FUN_10018320(piVar1[uVar8],
                       *(undefined4 *)(*(int *)(((int *)(param_1 + 0x38))[uVar8] + 4) + 0x50));
          FUN_1000c640(*piVar1,piVar1[uVar8]);
          uVar8 = uVar8 + 1;
          iVar9 = local_84;
          puVar7 = local_8c;
        } while (uVar8 <= *puVar2);
      }
      puVar3 = (undefined4 *)(iVar9 + (uVar8 + 0xb) * 4);
      FUN_10018320(*puVar3,puVar7);
      FUN_1000c640(*piVar1,*puVar3);
LAB_100bfbec:
      *(int *)(iVar9 + 200) = *(int *)(iVar9 + 200) + 1;
      (*(code *)PTR_FUN_101340e4)(iVar9 + 0xc0);
      cVar5 = FUN_1001aae8(iVar9,*(undefined4 *)(param_1 + 0x38));
      uVar6 = 0;
      if (cVar5 == '\0') {
        uVar6 = 0x80004005;
      }
    }
switchD_100bf948_default:
    FUN_10019760(auStack_90);
    return uVar6;
  case 2:
    goto switchD_100bf948_caseD_2;
  case 3:
  case 4:
LAB_100bfa7c:
    local_50 = 0;
    local_44 = 1;
    local_48 = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    local_60 = 0;
    (*(code *)PTR_FUN_1013426c)
              (&local_60,0,0,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (param_2 != 0) {
      (*(code *)PTR_FUN_10134208)(&local_60,&local_60,param_2);
    }
    if (*(char *)(param_1 + 0xbd) == '\0') {
      (*(code *)PTR_FUN_1013426c)
                (&local_70,0,0,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if (param_3 != 0) {
        (*(code *)PTR_FUN_10134208)(&local_70,&local_70,param_3);
      }
    }
    else {
      uStack_68 = uStack_58;
      local_70 = local_60;
    }
    pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11_01)(uVar6);
    uVar6 = (*pcVar4)();
    (*extraout_w11_02)(uVar6);
    puVar7 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0x38) + 4) + 0x50);
    uVar6 = (*pcVar4)();
    (*extraout_w11_03)(uVar6,0,0,0,0,*puVar7,*extraout_w8,&local_70);
    goto LAB_100bfbec;
  default:
    goto switchD_100bf948_default;
  }
}

