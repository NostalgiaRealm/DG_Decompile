/*
 * FUN_10006690 at 10006690
 * undefined FUN_10006690(void)
 * Address ranges: 10006690-10006bcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10006690(undefined4 param_1,int param_2,uint param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  uint uVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *extraout_w8;
  undefined4 *extraout_w8_00;
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
  undefined1 auStack_140 [256];
  
  FUN_100025b0(param_2);
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (param_4 != 0) {
    do {
      if (param_3 == 0) {
        return;
      }
      uVar1 = 0x10;
      if (param_3 < 0x11) {
        uVar1 = param_3;
      }
      iVar9 = 0;
      uVar8 = 0;
      if (uVar1 != 0) {
        do {
          iVar4 = (*(code *)PTR_FUN_100a1088)(auStack_140 + iVar9 * 0x10,param_4,param_8);
          uVar8 = uVar8 + 1;
          param_4 = param_4 + 0x10;
          if (iVar4 != 0) {
            iVar9 = iVar9 + 1;
          }
        } while (uVar8 < uVar1);
        if (iVar9 != 0) {
          uVar5 = (*pcVar3)();
          (*extraout_w11)(param_1,uVar5,iVar9,auStack_140,param_5,param_6,param_7,param_9);
          if ((*(char *)(param_2 + 0x9d9) == '\0') &&
             (*(char *)(*(int *)(param_2 + 0xc) + 0x75e) == '\0')) {
            if (*(char *)(param_2 + 0xfd) != '\0') {
              bVar2 = false;
              goto LAB_100067dc;
            }
          }
          else {
            bVar2 = true;
LAB_100067dc:
            uVar5 = (*pcVar3)();
            (*extraout_w11_00)(uVar5);
            puVar6 = (undefined4 *)(param_2 + 0xf8);
            uVar5 = (*pcVar3)();
            (*extraout_w11_01)(uVar5,*extraout_w8,*puVar6);
            if (bVar2) {
              uVar5 = (*pcVar3)();
              (*extraout_w11_02)(uVar5,*(undefined4 *)(param_2 + 0xf4),
                                 *(undefined4 *)(param_2 + 0xf8));
              if (*(char *)(*(int *)(param_2 + 0xc) + 0x75f) != '\0') {
                (*(code *)PTR_FUN_100a100c)();
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
            if (*(int *)(param_2 + 0x2f8) != 0) {
              puVar6 = (undefined4 *)(param_2 + 0xf8);
              uVar5 = (*pcVar3)();
              (*extraout_w11_05)(uVar5,*extraout_w8_00,*puVar6,1);
            }
            *(char *)(param_2 + 0xff) = '\0';
          }
        }
      }
      param_3 = param_3 - uVar1;
    } while( true );
  }
  uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11_06)(param_1,uVar5,1,param_8,param_5,param_6,param_7,param_9);
  if ((*(char *)(param_2 + 0x9d9) == '\0') && (*(char *)(*(int *)(param_2 + 0xc) + 0x75e) == '\0'))
  {
    if (*(char *)(param_2 + 0xfd) == '\0') goto LAB_10006ad0;
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  uVar5 = (*pcVar3)();
  (*extraout_w11_07)(uVar5);
  uVar5 = (*pcVar3)();
  (*extraout_w11_08)(uVar5,*(undefined4 *)(param_2 + 0xf4),*(undefined4 *)(param_2 + 0xf8));
  if (bVar2) {
    uVar5 = (*pcVar3)();
    (*extraout_w11_09)(uVar5,*(undefined4 *)(param_2 + 0xf4),*(undefined4 *)(param_2 + 0xf8));
    if (*(char *)(*(int *)(param_2 + 0xc) + 0x75f) != '\0') {
      (*(code *)PTR_FUN_100a100c)();
    }
  }
LAB_10006ad0:
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
    if (*(int *)(param_2 + 0x2f8) != 0) {
      puVar6 = (undefined4 *)(param_2 + 0xf8);
      puVar7 = (undefined4 *)(param_2 + 0xf4);
      uVar5 = (*pcVar3)();
      (*extraout_w11_12)(uVar5,*puVar7,*puVar6,1);
    }
    *(char *)(param_2 + 0xff) = '\0';
  }
  return;
}

