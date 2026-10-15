/*
 * FUN_1000f740 at 1000f740
 * undefined FUN_1000f740(void)
 * Address ranges: 1000f740-1000fcef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1000f740(undefined4 param_1,int param_2,uint param_3,int param_4,uint param_5,undefined4 param_6
            ,undefined4 param_7)

{
  uint uVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *extraout_w8;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  code *extraout_w11_08;
  code *extraout_w11_09;
  code *extraout_w11_10;
  code *extraout_w11_11;
  code *extraout_w11_12;
  uint uVar8;
  int iVar9;
  int local_16c;
  undefined1 auStack_154 [4];
  int local_150;
  int iStack_14c;
  int local_148;
  int iStack_144;
  undefined1 auStack_140 [256];
  
  if ((param_4 != 0) && (param_3 == 0)) {
    return 0x8876086c;
  }
  if (((param_5 >> 1 & 1) != 0) && (*(int *)(param_2 + 0x28) == 0)) {
    return 0x8876086c;
  }
  if (((param_5 >> 2 & 1) != 0) && (*(char *)(param_2 + 0xfc) == '\0')) {
    return 0x8876086c;
  }
  if (*(char *)(param_2 + 0x58bd) != '\0') {
    return 0;
  }
  if (*(int *)(param_2 + 0x18) == 0) {
    return 0;
  }
  FUN_10121020(auStack_154);
  local_150 = *(int *)(param_2 + 0x2c);
  iStack_14c = *(int *)(param_2 + 0x30);
  local_148 = *(int *)(param_2 + 0x34) + local_150;
  iStack_144 = *(int *)(param_2 + 0x38) + iStack_14c;
  if (param_4 != 0) {
    FUN_10020560(param_2);
    pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    local_16c = param_4;
    for (; param_3 != 0; param_3 = param_3 - uVar1) {
      uVar1 = 0x10;
      if (param_3 < 0x11) {
        uVar1 = param_3;
      }
      iVar9 = 0;
      uVar8 = 0;
      if (uVar1 != 0) {
        do {
          iVar4 = (*(code *)PTR_FUN_10134208)(auStack_140 + iVar9 * 0x10,local_16c,&local_150);
          uVar8 = uVar8 + 1;
          local_16c = local_16c + 0x10;
          if (iVar4 != 0) {
            iVar9 = iVar9 + 1;
          }
        } while (uVar8 < uVar1);
        if (iVar9 != 0) {
          uVar5 = (*pcVar3)();
          (*extraout_w11)(param_1,uVar5,iVar9,auStack_140,param_5,param_6,param_7,0);
          if ((*(char *)(param_2 + 0xac9) == '\0') &&
             (*(char *)(*(int *)(param_2 + 0xc) + 0x75e) == '\0')) {
            if (*(char *)(param_2 + 0xfd) != '\0') {
              bVar2 = false;
              goto LAB_1000f910;
            }
          }
          else {
            bVar2 = true;
LAB_1000f910:
            uVar5 = (*pcVar3)();
            (*extraout_w11_00)(uVar5);
            uVar5 = (*pcVar3)();
            (*extraout_w11_01)(uVar5,*(undefined4 *)(param_2 + 0xf4),*extraout_w8);
            if (bVar2) {
              uVar5 = (*pcVar3)();
              (*extraout_w11_02)(uVar5,*(undefined4 *)(param_2 + 0xf4),
                                 *(undefined4 *)(param_2 + 0xf8));
              if (*(char *)(*(int *)(param_2 + 0xc) + 0x75f) != '\0') {
                (*(code *)PTR_FUN_10134064)();
              }
            }
          }
          if (*(char *)(param_2 + 0xfe) == '\0') {
            uVar5 = (*pcVar3)();
            (*extraout_w11_03)(uVar5);
            if (*(int *)(param_2 + 0x28) != 0) {
              uVar5 = (*pcVar3)();
              (*extraout_w11_04)(uVar5);
            }
            *(char *)(param_2 + 0xfe) = '\x01';
          }
          if (*(char *)(param_2 + 0xff) != '\0') {
            if (*(int *)(param_2 + 0x2f4) != 0) {
              puVar6 = (undefined4 *)(param_2 + 0xf8);
              puVar7 = (undefined4 *)(param_2 + 0xf4);
              uVar5 = (*pcVar3)();
              (*extraout_w11_05)(uVar5,*puVar7,*puVar6,1);
            }
            *(char *)(param_2 + 0xff) = '\0';
          }
        }
      }
    }
    goto LAB_1000fcc0;
  }
  FUN_10020560(param_2);
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11_06)(param_1,uVar5,1,&local_150,param_5,param_6,param_7,0);
  if ((*(char *)(param_2 + 0xac9) == '\0') && (*(char *)(*(int *)(param_2 + 0xc) + 0x75e) == '\0'))
  {
    if (*(char *)(param_2 + 0xfd) != '\0') {
      bVar2 = false;
      goto LAB_1000fb38;
    }
  }
  else {
    bVar2 = true;
LAB_1000fb38:
    uVar5 = (*pcVar3)();
    (*extraout_w11_07)(uVar5);
    uVar5 = (*pcVar3)();
    (*extraout_w11_08)(uVar5,*(undefined4 *)(param_2 + 0xf4),*(undefined4 *)(param_2 + 0xf8));
    if (bVar2) {
      uVar5 = (*pcVar3)();
      (*extraout_w11_09)(uVar5,*(undefined4 *)(param_2 + 0xf4),*(undefined4 *)(param_2 + 0xf8));
      if (*(char *)(*(int *)(param_2 + 0xc) + 0x75f) != '\0') {
        (*(code *)PTR_FUN_10134064)();
      }
    }
  }
  if (*(char *)(param_2 + 0xfe) == '\0') {
    uVar5 = (*pcVar3)();
    (*extraout_w11_10)(uVar5);
    if (*(int *)(param_2 + 0x28) != 0) {
      uVar5 = (*pcVar3)();
      (*extraout_w11_11)(uVar5);
    }
    *(char *)(param_2 + 0xfe) = '\x01';
  }
  if (*(char *)(param_2 + 0xff) != '\0') {
    if (*(int *)(param_2 + 0x2f4) != 0) {
      puVar6 = (undefined4 *)(param_2 + 0xf8);
      puVar7 = (undefined4 *)(param_2 + 0xf4);
      uVar5 = (*pcVar3)();
      (*extraout_w11_12)(uVar5,*puVar7,*puVar6,1);
    }
    *(char *)(param_2 + 0xff) = '\0';
  }
LAB_1000fcc0:
  FUN_10120f70(auStack_154);
  return 0;
}

