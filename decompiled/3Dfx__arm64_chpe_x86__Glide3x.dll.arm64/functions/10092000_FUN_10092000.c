/*
 * FUN_10092000 at 10092000
 * undefined FUN_10092000(void)
 * Address ranges: 10092000-1009209f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10092000(undefined4 param_1)

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

