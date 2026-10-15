/*
 * FUN_1011e480 at 1011e480
 * undefined FUN_1011e480(void)
 * Address ranges: 1011e480-1011e517
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1011e480(void)

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
    (*DAT_10127028)();
  }
  *unaff_w26 = local_58;
  return;
}

