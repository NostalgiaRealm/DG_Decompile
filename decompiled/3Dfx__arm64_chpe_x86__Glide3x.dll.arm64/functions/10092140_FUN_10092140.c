/*
 * FUN_10092140 at 10092140
 * undefined FUN_10092140(void)
 * Address ranges: 10092140-100921e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10092140(undefined4 param_1)

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
    (*DAT_10097020)();
  }
  *unaff_w26 = local_58;
  return;
}

