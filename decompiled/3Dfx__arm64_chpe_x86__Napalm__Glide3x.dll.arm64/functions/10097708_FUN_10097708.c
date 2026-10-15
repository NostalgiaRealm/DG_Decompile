/*
 * FUN_10097708 at 10097708
 * undefined FUN_10097708(void)
 * Address ranges: 10097708-100977a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10097708(void)

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
    (*DAT_1009d020)();
  }
  *unaff_w26 = local_58;
  return;
}

