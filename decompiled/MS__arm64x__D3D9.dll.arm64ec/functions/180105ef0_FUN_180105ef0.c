/*
 * FUN_180105ef0 at 180105ef0
 * undefined FUN_180105ef0(void)
 * Address ranges: 180105ef0-180105f57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180105ef0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined *puVar1;
  code *extraout_x11;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  param_1 = param_1 + param_2 * param_3;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    param_1 = param_1 - param_2;
    (*(code *)puVar1)();
    (*extraout_x11)(param_1);
  }
  return;
}

