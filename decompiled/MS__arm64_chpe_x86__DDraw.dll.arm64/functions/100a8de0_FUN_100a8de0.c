/*
 * FUN_100a8de0 at 100a8de0
 * undefined FUN_100a8de0(void)
 * Address ranges: 100a8de0-100a8e73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float FUN_100a8de0(undefined4 param_1)

{
  int in_w5;
  int *unaff_w26;
  double extraout_d31;
  double extraout_d31_00;
  double dVar1;
  int local_58;
  undefined4 local_54;
  
  local_58 = *unaff_w26;
  local_54 = __hybrid_WowA64ExceptionHandlerFunctionPointer;
  *unaff_w26 = (int)&local_58;
  (*__hybrid_WowA64DispatchCallFunctionPointer)(param_1);
  dVar1 = extraout_d31;
  if (-1 < in_w5) {
    (*DAT_100b0028)();
    dVar1 = extraout_d31_00;
  }
  *unaff_w26 = local_58;
  return (float)dVar1;
}

