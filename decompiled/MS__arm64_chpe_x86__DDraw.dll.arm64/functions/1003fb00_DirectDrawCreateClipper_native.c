/*
 * DirectDrawCreateClipper_native at 1003fb00
 * undefined DirectDrawCreateClipper_native(void)
 * Address ranges: 1003fb00-1003fc87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int DirectDrawCreateClipper_native(int param_1,undefined4 *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  
  iVar2 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar2 == 0) {
    FUN_10001c10(0);
  }
  iVar2 = FUN_100375c0(s_DirectDrawCreateClipper_100b3b40);
  if (iVar2 != 0) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar2 = (*extraout_w11)(param_1,param_2,param_3);
    (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
    return iVar2;
  }
  iVar2 = -0x7ff8ffa9;
  if (((param_1 == 0) && (param_2 != (undefined4 *)0x0)) && (*param_2 = 0, param_3 == 0)) {
    iVar2 = -0x7ff8fff2;
    iVar3 = FUN_10034488(0);
    pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    if (iVar3 != 0) {
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      iVar2 = (*extraout_w11_00)(iVar3,0,0);
      if (iVar2 == 0) {
        (*pcVar1)();
        iVar2 = (*extraout_w11_01)(iVar3,&DAT_100b18c0,param_2);
        if (-1 < iVar2) goto LAB_1003fc5c;
        FUN_10036320(iVar3);
      }
      else if (-1 < iVar2) goto LAB_1003fc5c;
      (*pcVar1)();
      (*extraout_w11_02)(iVar3,1);
    }
  }
LAB_1003fc5c:
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return iVar2;
}

