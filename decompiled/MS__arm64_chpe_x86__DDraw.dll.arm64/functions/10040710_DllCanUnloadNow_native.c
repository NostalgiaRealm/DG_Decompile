/*
 * DllCanUnloadNow_native at 10040710
 * undefined DllCanUnloadNow_native(void)
 * Address ranges: 10040710-10040767
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint DllCanUnloadNow_native(void)

{
  int iVar1;
  uint uVar2;
  code *extraout_w11;
  
  iVar1 = FUN_100375c0(s_DllCanUnloadNow_100b3c80);
  if (iVar1 == 0) {
    uVar2 = (uint)(DAT_100c2940 == 0);
  }
  else {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar2 = (*extraout_w11)();
  }
  return uVar2;
}

