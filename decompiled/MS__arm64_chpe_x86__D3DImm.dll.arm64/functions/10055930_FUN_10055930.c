/*
 * FUN_10055930 at 10055930
 * undefined FUN_10055930(void)
 * Address ranges: 10055930-10055b5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10055930(int param_1,int param_2,int param_3,int param_4,undefined1 param_5)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  undefined1 auStack_50 [16];
  
  iVar2 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar2 == 0) {
    FUN_1004bc70(0);
  }
  FUN_10096840(auStack_50);
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar2 = -0x7ff8ffa9;
  if ((((param_2 != 0) && (param_3 != 0)) && (param_4 == 0)) &&
     (iVar2 = -0x7789fd3d, *(int *)(param_1 + 0xa74) == 0)) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar3 = (*extraout_w11)(param_2);
    (*pcVar1)();
    iVar4 = (*extraout_w11_00)(param_2);
    iVar2 = FUN_100513a0(param_1,param_2,uVar3);
    if (-1 < iVar2) {
      uVar5 = FUN_100051f0(param_1,param_2,uVar3,1,param_5);
      if ((uVar5 & 1) == 0) {
        iVar2 = -0x7fffbffb;
      }
      else {
        (*pcVar1)();
        (*extraout_w11_01)(param_3);
        if (iVar4 != 0) {
          (*pcVar1)();
          (*extraout_w11_02)(iVar4);
        }
        if (*(int *)(param_1 + 0xa7c) != 0) {
          uVar3 = (*pcVar1)();
          (*extraout_w11_03)(uVar3);
        }
        if (*(int *)(param_1 + 0xa78) != 0) {
          uVar3 = (*pcVar1)();
          (*extraout_w11_04)(uVar3);
        }
        *(int *)(param_1 + 0xa78) = param_3;
        *(int *)(param_1 + 0xa7c) = iVar4;
        (*pcVar1)();
        iVar4 = (*extraout_w11_05)(param_2);
        *(byte *)(param_1 + 0x930) = (byte)(*(uint *)(iVar4 + 0x68) >> 0xc) & 1;
      }
    }
  }
  FUN_10096790(auStack_50);
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return iVar2;
}

