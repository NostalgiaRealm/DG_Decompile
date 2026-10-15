/*
 * FUN_10090340 at 10090340
 * undefined FUN_10090340(void)
 * Address ranges: 10090340-100903e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10090340(void)

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

