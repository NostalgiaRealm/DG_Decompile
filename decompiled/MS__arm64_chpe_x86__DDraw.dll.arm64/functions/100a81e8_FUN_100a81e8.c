/*
 * FUN_100a81e8 at 100a81e8
 * undefined FUN_100a81e8(void)
 * Address ranges: 100a81e8-100a8287
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a81e8(void)

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
    (*DAT_100b0028)();
  }
  *unaff_w26 = local_58;
  return;
}

