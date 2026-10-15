/*
 * FUN_10097480 at 10097480
 * undefined FUN_10097480(void)
 * Address ranges: 10097480-1009751f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10097480(void)

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
    (*DAT_1009d020)();
  }
  *unaff_w26 = local_58;
  return;
}

