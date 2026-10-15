/*
 * FUN_101560c8 at 101560c8
 * undefined FUN_101560c8(void)
 * Address ranges: 101560c8-10156167
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_101560c8(void)

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
    (*DAT_1015c028)();
  }
  *unaff_w26 = local_58;
  return;
}

