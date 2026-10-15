/*
 * FUN_180222ac8 at 180222ac8
 * undefined FUN_180222ac8(void)
 * Address ranges: 180222ac8-180222b1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180222ac8(longlong *param_1,longlong *param_2)

{
  undefined *puVar1;
  longlong lVar2;
  code *extraout_x11;
  longlong *plVar3;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  while (param_1 < param_2) {
    plVar3 = param_1 + 1;
    lVar2 = *param_1;
    param_1 = plVar3;
    if (lVar2 != 0) {
      (*(code *)puVar1)();
      (*extraout_x11)();
    }
  }
  return;
}

