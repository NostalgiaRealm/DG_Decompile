/*
 * CompleteCreateSysmemSurface_native at 10040390
 * undefined CompleteCreateSysmemSurface_native(void)
 * Address ranges: 10040390-100403ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 CompleteCreateSysmemSurface_native(undefined4 param_1)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if ((DAT_100c2924 != 0) ||
     (DAT_100c2924 = FUN_100375c0(s_CompleteCreateSysmemSurface_100b3c30), uVar1 = 0,
     DAT_100c2924 != 0)) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar1 = (*extraout_w11)(param_1);
  }
  return uVar1;
}

