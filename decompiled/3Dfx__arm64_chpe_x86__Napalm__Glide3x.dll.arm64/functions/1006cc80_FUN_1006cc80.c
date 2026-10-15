/*
 * FUN_1006cc80 at 1006cc80
 * undefined FUN_1006cc80(void)
 * Address ranges: 1006cc80-1006cd67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1006cc80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined1 param_7,char param_8)

{
  char cVar1;
  int iVar2;
  code *extraout_w11;
  undefined1 auStack_5c [4];
  int local_58 [6];
  
  cVar1 = '\0';
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar2 = (*extraout_w11)(param_2,local_58,auStack_5c);
  if ((-1 < iVar2) &&
     ((local_58[0] != 4 || param_8 != '\0' ||
      (cVar1 = FUN_1006c948(param_1,param_2,param_4,param_5,param_6,param_7), cVar1 == '\0')))) {
    cVar1 = FUN_1006cc08(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return cVar1;
}

