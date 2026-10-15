/*
 * FUN_100901e0 at 100901e0
 * undefined FUN_100901e0(void)
 * Address ranges: 100901e0-10090283
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100901e0(void)

{
  int in_w5;
  int *unaff_w26;
  undefined4 unaff_w27;
  int local_58;
  undefined4 local_54;
  
  local_58 = *unaff_w26;
  local_54 = __hybrid_WowA64ExceptionHandlerFunctionPointer;
  *unaff_w26 = (int)&local_58;
  (*__hybrid_WowA64DispatchCallFunctionPointer)();
  if (-1 < in_w5) {
    (*DAT_10097020)(unaff_w27);
  }
  *unaff_w26 = local_58;
  return;
}

