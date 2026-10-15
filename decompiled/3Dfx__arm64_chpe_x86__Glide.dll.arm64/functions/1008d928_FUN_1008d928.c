/*
 * FUN_1008d928 at 1008d928
 * undefined FUN_1008d928(void)
 * Address ranges: 1008d928-1008d9cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008d928(void)

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
    (*DAT_10093020)();
  }
  *unaff_w26 = local_58;
  return;
}

