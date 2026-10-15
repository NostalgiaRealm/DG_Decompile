/*
 * FUN_10096da8 at 10096da8
 * undefined FUN_10096da8(void)
 * Address ranges: 10096da8-10096e47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10096da8(void)

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

