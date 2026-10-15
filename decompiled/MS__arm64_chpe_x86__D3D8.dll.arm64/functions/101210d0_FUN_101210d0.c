/*
 * FUN_101210d0 at 101210d0
 * undefined FUN_101210d0(void)
 * Address ranges: 101210d0-10121167
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_101210d0(void)

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

