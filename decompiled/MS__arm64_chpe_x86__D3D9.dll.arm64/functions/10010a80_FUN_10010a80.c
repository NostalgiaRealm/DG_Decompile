/*
 * FUN_10010a80 at 10010a80
 * undefined FUN_10010a80(void)
 * Address ranges: 10010a80-1001105b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10010a80(undefined4 param_1,int param_2,uint param_3,int param_4,uint param_5,undefined4 param_6
            ,undefined4 param_7,undefined4 param_8)

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
  int iVar8;
  uint uVar9;
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
  if (((param_5 >> 2 & 1) != 0) && (*(char *)(param_2 + 0x2a0) == '\0')) {
    return 0x8876086c;
  }
  if (*(char *)(param_2 + 0x669d) != '\0') {
    return 0;
  }
  if (*(int *)(param_2 + 0x18) == 0) {
    return 0;
  }
  FUN_10157b40(auStack_154);
  local_150 = *(int *)(param_2 + 0x2c);
  iStack_14c = *(int *)(param_2 + 0x30);
  local_148 = *(int *)(param_2 + 0x34) + local_150;
  iStack_144 = *(int *)(param_2 + 0x38) + iStack_14c;
  if (*(int *)(param_2 + 0x6e8) != 0) {
    (*(code *)PTR_FUN_1016c208)(&local_150,&local_150,param_8);
  }
  if (param_4 != 0) {
    FUN_10025fc8(param_2);
    pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    local_16c = param_4;
    for (; param_3 != 0; param_3 = param_3 - uVar1) {
      uVar1 = 0x10;
      if (param_3 < 0x11) {
        uVar1 = param_3;
      }
      iVar8 = 0;
      uVar9 = 0;
      if (uVar1 != 0) {
        do {
          iVar4 = (*(code *)PTR_FUN_1016c208)(auStack_140 + iVar8 * 0x10,local_16c,&local_150);
          uVar9 = uVar9 + 1;
          local_16c = local_16c + 0x10;
          if (iVar4 != 0) {
            iVar8 = iVar8 + 1;
          }
        } while (uVar9 < uVar1);
        if (iVar8 != 0) {
          uVar5 = (*pcVar3)();
          (*extraout_w11)(param_1,uVar5,iVar8,auStack_140,param_5,param_6,param_7,0);
          if ((*(char *)(param_2 + 0xd8d) == '\0') &&
             (*(char *)(*(int *)(param_2 + 0xc) + 0x75e) == '\0')) {
            if (*(char *)(param_2 + 0x2a1) != '\0') {
              bVar2 = false;
              goto LAB_10010c7c;
            }
          }
          else {
            bVar2 = true;
LAB_10010c7c:
            uVar5 = (*pcVar3)();
            (*extraout_w11_00)(uVar5);
            uVar5 = (*pcVar3)();
            (*extraout_w11_01)(uVar5,*(undefined4 *)(param_2 + 0x298),*extraout_w8);
            if (bVar2) {
              uVar5 = (*pcVar3)();
              (*extraout_w11_02)(uVar5,*(undefined4 *)(param_2 + 0x298),
                                 *(undefined4 *)(param_2 + 0x29c));
              if (*(char *)(*(int *)(param_2 + 0xc) + 0x75f) != '\0') {
                (*(code *)PTR_FUN_1016c068)();
              }
            }
          }
          if (*(char *)(param_2 + 0x2a2) == '\0') {
            uVar5 = (*pcVar3)();
            (*extraout_w11_03)(uVar5);
            if (*(int *)(param_2 + 0x28) != 0) {
              uVar5 = (*pcVar3)();
              (*extraout_w11_04)(uVar5);
            }
            *(char *)(param_2 + 0x2a2) = '\x01';
          }
          if (*(char *)(param_2 + 0x2a3) != '\0') {
            if (*(int *)(param_2 + 0x498) != 0) {
              puVar6 = (undefined4 *)(param_2 + 0x29c);
              puVar7 = (undefined4 *)(param_2 + 0x298);
              uVar5 = (*pcVar3)();
              (*extraout_w11_05)(uVar5,*puVar7,*puVar6,1);
            }
            *(char *)(param_2 + 0x2a3) = '\0';
          }
        }
      }
    }
    goto LAB_1001102c;
  }
  FUN_10025fc8(param_2);
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11_06)(param_1,uVar5,1,&local_150,param_5,param_6,param_7,0);
  if ((*(char *)(param_2 + 0xd8d) == '\0') && (*(char *)(*(int *)(param_2 + 0xc) + 0x75e) == '\0'))
  {
    if (*(char *)(param_2 + 0x2a1) != '\0') {
      bVar2 = false;
      goto LAB_10010ea4;
    }
  }
  else {
    bVar2 = true;
LAB_10010ea4:
    uVar5 = (*pcVar3)();
    (*extraout_w11_07)(uVar5);
    uVar5 = (*pcVar3)();
    (*extraout_w11_08)(uVar5,*(undefined4 *)(param_2 + 0x298),*(undefined4 *)(param_2 + 0x29c));
    if (bVar2) {
      uVar5 = (*pcVar3)();
      (*extraout_w11_09)(uVar5,*(undefined4 *)(param_2 + 0x298),*(undefined4 *)(param_2 + 0x29c));
      if (*(char *)(*(int *)(param_2 + 0xc) + 0x75f) != '\0') {
        (*(code *)PTR_FUN_1016c068)();
      }
    }
  }
  if (*(char *)(param_2 + 0x2a2) == '\0') {
    uVar5 = (*pcVar3)();
    (*extraout_w11_10)(uVar5);
    if (*(int *)(param_2 + 0x28) != 0) {
      uVar5 = (*pcVar3)();
      (*extraout_w11_11)(uVar5);
    }
    *(char *)(param_2 + 0x2a2) = '\x01';
  }
  if (*(char *)(param_2 + 0x2a3) != '\0') {
    if (*(int *)(param_2 + 0x498) != 0) {
      puVar6 = (undefined4 *)(param_2 + 0x29c);
      puVar7 = (undefined4 *)(param_2 + 0x298);
      uVar5 = (*pcVar3)();
      (*extraout_w11_12)(uVar5,*puVar7,*puVar6,1);
    }
    *(char *)(param_2 + 0x2a3) = '\0';
  }
LAB_1001102c:
  FUN_10157a90(auStack_154);
  return 0;
}

