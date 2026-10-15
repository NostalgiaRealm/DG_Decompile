/*
 * FUN_100982b0 at 100982b0
 * undefined FUN_100982b0(void)
 * Address ranges: 100982b0-1009834f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100982b0(undefined4 param_1)

{
  int in_w5;
  int *unaff_w26;
  int local_58;
  undefined4 local_54;
  
  local_58 = *unaff_w26;
  local_54 = __hybrid_WowA64ExceptionHandlerFunctionPointer;
  *unaff_w26 = (int)&local_58;
  (*__hybrid_WowA64DispatchCallFunctionPointer)(param_1);
  if (-1 < in_w5) {
    (*DAT_1009d020)();
  }
  *unaff_w26 = local_58;
  return;
}

