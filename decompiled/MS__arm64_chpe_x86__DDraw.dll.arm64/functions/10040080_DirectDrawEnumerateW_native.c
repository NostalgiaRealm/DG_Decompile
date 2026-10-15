/*
 * DirectDrawEnumerateW_native at 10040080
 * undefined DirectDrawEnumerateW_native(void)
 * Address ranges: 10040080-100400ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 DirectDrawEnumerateW_native(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  iVar1 = FUN_100375c0(s_DirectDrawEnumerateW_100b3ba8);
  if (iVar1 == 0) {
    uVar2 = 0x80070057;
    if (param_1 != 0) {
      uVar2 = 0x80004001;
    }
  }
  else {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar2 = (*extraout_w11)(param_1,param_2);
  }
  return uVar2;
}

