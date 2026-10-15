/*
 * FUN_100a96c8 at 100a96c8
 * undefined FUN_100a96c8(void)
 * Address ranges: 100a96c8-100a9767
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a96c8(undefined4 param_1)

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
    (*DAT_100b0028)();
  }
  *unaff_w26 = local_58;
  return;
}

