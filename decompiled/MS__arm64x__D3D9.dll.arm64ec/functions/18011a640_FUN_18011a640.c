/*
 * FUN_18011a640 at 18011a640
 * undefined FUN_18011a640(void)
 * Address ranges: 18011a640-18011a6c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18011a640(longlong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *extraout_x11;
  code *extraout_x11_00;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar2,1);
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    uVar2 = (*(code *)puVar1)(0x180224000);
    (*extraout_x11_00)(uVar2,1);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_180222b28(*(undefined8 *)(*(longlong *)(param_1 + 8) + -8));
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}

