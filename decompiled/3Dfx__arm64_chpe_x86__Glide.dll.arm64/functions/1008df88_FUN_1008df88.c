/*
 * FUN_1008df88 at 1008df88
 * undefined FUN_1008df88(void)
 * Address ranges: 1008df88-1008e023
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008df88(undefined4 param_1)

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
    (*DAT_10093020)(unaff_w27);
  }
  *unaff_w26 = local_58;
  return;
}

