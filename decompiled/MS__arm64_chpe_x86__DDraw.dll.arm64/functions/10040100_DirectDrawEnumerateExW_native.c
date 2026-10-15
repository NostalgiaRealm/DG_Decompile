/*
 * DirectDrawEnumerateExW_native at 10040100
 * undefined DirectDrawEnumerateExW_native(void)
 * Address ranges: 10040100-10040183
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 DirectDrawEnumerateExW_native(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  iVar1 = FUN_100375c0(s_DirectDrawEnumerateExW_100b3bc0);
  if (iVar1 == 0) {
    uVar2 = 0x80070057;
    if ((param_1 != 0) && (uVar2 = 0x80070057, (param_3 & 0xfffffff8) == 0)) {
      uVar2 = 0x80004001;
    }
  }
  else {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar2 = (*extraout_w11)(param_1,param_2,param_3);
  }
  return uVar2;
}

