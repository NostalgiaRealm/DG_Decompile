/*
 * FUN_10090a50 at 10090a50
 * undefined FUN_10090a50(void)
 * Address ranges: 10090a50-10090aef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10090a50(void)

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
    (*DAT_10097020)();
  }
  *unaff_w26 = local_58;
  return;
}

