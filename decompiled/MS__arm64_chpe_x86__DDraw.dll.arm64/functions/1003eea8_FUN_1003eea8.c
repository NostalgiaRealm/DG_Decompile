/*
 * FUN_1003eea8 at 1003eea8
 * undefined FUN_1003eea8(void)
 * Address ranges: 1003eea8-1003f043
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1003eea8(undefined8 param_1,int param_2,undefined8 param_3,undefined4 *param_4,int param_5)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong extraout_x1;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  ulonglong uVar6;
  int local_40 [4];
  
  iVar2 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar2 == 0) {
    FUN_10001c10(0);
  }
  iVar2 = -0x7ff8ffa9;
  if ((param_4 == (undefined4 *)0x0) || (*param_4 = 0, param_5 != 0)) goto LAB_1003f01c;
  iVar2 = -0x7ff8fff2;
  uVar4 = FUN_10034488(param_2);
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar6 = uVar4 & 0xffffffff;
  if ((int)uVar4 == 0) goto LAB_1003f01c;
  local_40[0] = 0;
  uVar5 = uVar4;
  if (param_2 != 0) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)(uVar4,0);
    uVar5 = (*extraout_w11)(param_2,&DAT_100b1820,local_40);
  }
  (*pcVar1)(uVar5,local_40[0]);
  iVar2 = (*extraout_w11_00)(uVar4 & 0xffffffff,extraout_x1 & 0xffffffff,0);
  if (iVar2 < 0) {
LAB_1003efc8:
    (*pcVar1)();
    (*extraout_w11_02)(uVar6,1);
  }
  else {
    (*pcVar1)();
    iVar2 = (*extraout_w11_01)(uVar6,&DAT_100b18c0,param_4);
    if (iVar2 < 0) {
      FUN_10036320(uVar6);
      goto LAB_1003efc8;
    }
    iVar2 = 0;
  }
  if (local_40[0] != 0) {
    uVar3 = (*pcVar1)();
    (*extraout_w11_03)(uVar3);
  }
LAB_1003f01c:
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return iVar2;
}

