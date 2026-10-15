/*
 * FUN_180119970 at 180119970
 * undefined FUN_180119970(void)
 * Address ranges: 180119970-1801199eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180119970(longlong param_1,longlong param_2,undefined8 param_3)

{
  code *extraout_x11;
  longlong lVar1;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x400);
  }
  if ((param_2 != *(longlong *)(param_1 + 0x30)) || (lVar1 != *(longlong *)(param_1 + 0x28))) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(param_1,param_3);
    *(longlong *)(param_1 + 0x28) = lVar1;
    *(longlong *)(param_1 + 0x30) = param_2;
  }
  return;
}

