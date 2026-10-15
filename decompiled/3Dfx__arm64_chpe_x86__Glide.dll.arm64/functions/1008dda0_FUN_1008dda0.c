/*
 * FUN_1008dda0 at 1008dda0
 * undefined FUN_1008dda0(void)
 * Address ranges: 1008dda0-1008de4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008dda0(void)

{
  int in_w5;
  int *unaff_w26;
  int local_58;
  undefined4 local_54;
  
  local_58 = *unaff_w26;
  local_54 = __hybrid_WowA64ExceptionHandlerFunctionPointer;
  *unaff_w26 = (int)&local_58;
  (*__hybrid_WowA64DispatchCallFunctionPointer)();
  if (-1 < in_w5) {
    (*DAT_10093020)();
  }
  *unaff_w26 = local_58;
  return;
}

