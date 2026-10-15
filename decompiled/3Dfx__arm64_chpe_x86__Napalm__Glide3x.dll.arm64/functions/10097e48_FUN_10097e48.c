/*
 * FUN_10097e48 at 10097e48
 * undefined FUN_10097e48(void)
 * Address ranges: 10097e48-10097ef3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10097e48(undefined4 param_1)

{
  int in_w5;
  int *unaff_w26;
  undefined4 unaff_w27;
  int local_58;
  undefined4 local_54;
  
  local_58 = *unaff_w26;
  local_54 = __hybrid_WowA64ExceptionHandlerFunctionPointer;
  *unaff_w26 = (int)&local_58;
  (*__hybrid_WowA64DispatchCallFunctionPointer)(param_1);
  if (-1 < in_w5) {
    (*DAT_1009d020)(unaff_w27);
  }
  *unaff_w26 = local_58;
  return;
}

