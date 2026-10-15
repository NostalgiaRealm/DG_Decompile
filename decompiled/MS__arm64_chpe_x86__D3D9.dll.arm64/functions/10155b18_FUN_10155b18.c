/*
 * FUN_10155b18 at 10155b18
 * undefined FUN_10155b18(void)
 * Address ranges: 10155b18-10155baf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10155b18(void)

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

