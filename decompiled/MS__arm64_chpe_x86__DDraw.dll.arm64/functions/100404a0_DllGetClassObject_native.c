/*
 * DllGetClassObject_native at 100404a0
 * undefined DllGetClassObject_native(void)
 * Address ranges: 100404a0-100406f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 DllGetClassObject_native(undefined8 *param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  
  iVar1 = FUN_100375c0(s_DllGetClassObject_100b3c68);
  if (iVar1 != 0) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar2 = (*extraout_w11)(param_1,param_2,param_3);
    return uVar2;
  }
  FUN_10002d00();
  if (param_3 == (undefined4 *)0x0) {
    return 0x80070057;
  }
  *param_3 = 0;
  iVar1 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar1 == 0) {
    FUN_10001c10(0);
  }
  iVar1 = FUN_10091750(param_1,&DAT_100b17f0,0x10);
  if (iVar1 == 0) {
    iVar1 = DAT_100c2964;
    if (DAT_100c2964 == 0) {
      iVar1 = FUN_100913c0(0x58);
      if (iVar1 == 0) {
        iVar1 = 0;
        DAT_100c2964 = iVar1;
      }
      else {
        iVar1 = FUN_10040b48(iVar1,*param_1,param_1[1]);
        DAT_100c2964 = iVar1;
      }
LAB_10040588:
      uVar2 = 0x8007000e;
      if (iVar1 == 0) goto LAB_100406c4;
    }
  }
  else {
    iVar1 = FUN_10091750(param_1,0x100b1800,0x10);
    if (iVar1 == 0) {
      iVar1 = DAT_100c2960;
      if (DAT_100c2960 == 0) {
        iVar1 = FUN_100913c0(0x58);
        if (iVar1 == 0) {
          iVar1 = 0;
          DAT_100c2960 = iVar1;
        }
        else {
          iVar1 = FUN_10040b48(iVar1,*param_1,param_1[1]);
          DAT_100c2960 = iVar1;
        }
        goto LAB_10040588;
      }
    }
    else {
      iVar1 = FUN_10091750(param_1,&DAT_100b1810,0x10);
      if (iVar1 != 0) {
        uVar2 = 0x80040111;
        goto LAB_100406c4;
      }
      iVar1 = DAT_100c295c;
      if (DAT_100c295c == 0) {
        iVar1 = FUN_100913c0(0x58);
        if (iVar1 == 0) {
          iVar1 = 0;
          DAT_100c295c = iVar1;
        }
        else {
          iVar1 = FUN_10040b48(iVar1,*param_1,param_1[1]);
          DAT_100c295c = iVar1;
        }
        goto LAB_10040588;
      }
    }
  }
  iVar3 = FUN_10091750(param_2,&DAT_100b1a40,0x10);
  if (iVar3 == 0) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar2 = (*extraout_w11_00)(iVar1,param_2,param_3);
  }
  else {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar2 = (*extraout_w11_01)(iVar1,0,param_2,param_3);
  }
LAB_100406c4:
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar2;
}

