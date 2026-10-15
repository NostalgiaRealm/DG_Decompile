/*
 * FUN_10094b40 at 10094b40
 * undefined FUN_10094b40(void)
 * Address ranges: 10094b40-10094bcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10094b40(void)

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
    (*DAT_1009b028)();
  }
  *unaff_w26 = local_58;
  return;
}

