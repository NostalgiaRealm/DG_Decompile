/*
 * FUN_18010a318 at 18010a318
 * undefined FUN_18010a318(void)
 * Address ranges: 18010a318-18010a377
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18010a318(undefined8 param_1,longlong param_2)

{
  undefined *puVar1;
  undefined8 extraout_x1;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong lVar2;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  lVar2 = *(longlong *)(param_2 + 0x30);
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(extraout_x1);
  if (lVar2 != 0) {
    (*(code *)puVar1)(0x180224000);
    (*extraout_x11_00)(lVar2);
  }
  return;
}

