/*
 * FUN_18014c730 at 18014c730
 * undefined FUN_18014c730(void)
 * Address ranges: 18014c730-18014c83b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18014c730(longlong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  if (*(longlong *)(param_1 + 0xfcc0) != 0) {
    uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar2,*(undefined4 *)(param_1 + 0xfce8),*(undefined4 *)(param_1 + 0xfcf8),0);
  }
  if (*(longlong *)(param_1 + 0xfcc8) != 0) {
    uVar2 = (*(code *)puVar1)(0x180224000);
    (*extraout_x11_00)(uVar2,*(undefined4 *)(param_1 + 0xfcec),*(undefined4 *)(param_1 + 0xfcfc),0);
  }
  if (*(longlong *)(param_1 + 0xfcd0) != 0) {
    uVar2 = (*(code *)puVar1)(0x180224000);
    (*extraout_x11_01)(uVar2,*(undefined4 *)(param_1 + 0xfcf0),*(undefined4 *)(param_1 + 0xfd00),0);
  }
  if (*(longlong *)(param_1 + 0xfcd8) != 0) {
    uVar2 = (*(code *)puVar1)(0x180224000);
    (*extraout_x11_02)(uVar2,*(undefined4 *)(param_1 + 0xfcf4),*(undefined4 *)(param_1 + 0xfd04),0);
  }
  if (*(longlong *)(param_1 + 0xfce0) != 0) {
    uVar2 = (*(code *)puVar1)(0x180224000);
    (*extraout_x11_03)(uVar2,*(undefined4 *)(param_1 + 0xfd08),*(undefined4 *)(param_1 + 0xfd0c),0);
  }
  return;
}

