/*
 * FUN_100ac000 at 100ac000
 * undefined FUN_100ac000(void)
 * Address ranges: 100ac000-100ac08f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ac000(void)

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

