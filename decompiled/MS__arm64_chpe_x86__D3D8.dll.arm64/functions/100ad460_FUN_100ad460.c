/*
 * FUN_100ad460 at 100ad460
 * undefined FUN_100ad460(void)
 * Address ranges: 100ad460-100ad667
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ad460(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 ulonglong param_5)

{
  code *pcVar1;
  char cVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  if ((param_5 & 1) == 0) {
    cVar2 = (*extraout_w11)(param_1,param_2,param_3,param_4,0);
    while (cVar2 == '\0') {
      (*pcVar1)();
      cVar2 = (*extraout_w11_03)(param_1,param_2,param_3,param_4,0);
    }
    (*pcVar1)();
    cVar2 = (*extraout_w11_04)(param_1,param_2,param_3,param_4,0);
    while (cVar2 != '\0') {
      (*pcVar1)();
      cVar2 = (*extraout_w11_05)(param_1,param_2,param_3,param_4,0);
    }
  }
  else {
    cVar2 = (*extraout_w11)();
    while (cVar2 != '\0') {
      (*pcVar1)();
      cVar2 = (*extraout_w11_00)(param_1,param_2,param_3,param_4,0);
    }
    (*pcVar1)();
    cVar2 = (*extraout_w11_01)(param_1,param_2,param_3,param_4,0);
    while (cVar2 == '\0') {
      (*pcVar1)();
      cVar2 = (*extraout_w11_02)(param_1,param_2,param_3,param_4,0);
    }
  }
  return;
}

