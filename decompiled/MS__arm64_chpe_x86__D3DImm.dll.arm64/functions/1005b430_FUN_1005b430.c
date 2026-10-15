/*
 * FUN_1005b430 at 1005b430
 * undefined FUN_1005b430(void)
 * Address ranges: 1005b430-1005b6b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1005b430(undefined4 param_1,int param_2,int param_3,int param_4,uint param_5,undefined4 param_6,
            undefined4 param_7,int param_8,int param_9,int param_10)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  undefined4 uVar5;
  undefined1 auStack_54 [4];
  int local_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  
  if ((param_4 == 0) || (uVar5 = 0x80070057, param_3 != 0)) {
    uVar5 = 0;
    if ((param_5 & 1) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_2 + 0x18);
    }
    if ((param_5 & 6) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_2 + 0x28);
    }
    if (((((iVar2 == 0) || (*(char *)(iVar2 + 9) == '\0')) &&
         ((iVar4 == 0 || (*(char *)(iVar4 + 9) == '\0')))) &&
        ((iVar2 == 0 || (*(char *)(iVar2 + 8) == '\0')))) &&
       ((iVar4 == 0 || (*(char *)(iVar4 + 8) == '\0')))) {
      if (((param_5 >> 1 & 1) == 0) || (*(int *)(param_2 + 0x28) != 0)) {
        if (((param_5 >> 2 & 1) == 0) || (*(char *)(param_2 + 0xfc) != '\0')) {
          iVar2 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
          if (iVar2 == 0) {
            FUN_1004bc70(0);
          }
          FUN_10096840(auStack_54);
          pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
          if (param_8 != 0) {
            (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
            (*extraout_w11)(param_8);
            (*pcVar1)();
            (*extraout_w11_00)(param_9);
          }
          local_50 = *(int *)(param_2 + 0x2c);
          iStack_4c = *(int *)(param_2 + 0x30);
          local_48 = *(int *)(param_2 + 0x34) + local_50;
          iStack_44 = *(int *)(param_2 + 0x38) + iStack_4c;
          if (param_10 != 0) {
            local_50 = *(int *)(param_10 + 4);
            iStack_4c = *(int *)(param_10 + 8);
            local_48 = *(int *)(param_10 + 0xc) + local_50;
            iStack_44 = *(int *)(param_10 + 0x10) + iStack_4c;
          }
          if (param_9 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)(*(int *)(param_9 + 4) + 0x50);
          }
          FUN_10006690(param_1,param_2,param_3,param_4,param_5,param_6,param_7,&local_50,uVar3);
          if (*(int *)(param_2 + 0x1514) != 0) {
            uVar3 = (*pcVar1)();
            (*extraout_w11_01)(uVar3);
          }
          *(int *)(param_2 + 0x1514) = param_8;
          FUN_10096790(auStack_54);
          (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
        }
        else {
          uVar5 = 0x88760817;
        }
      }
      else {
        uVar5 = 0x88760816;
      }
    }
  }
  return uVar5;
}

