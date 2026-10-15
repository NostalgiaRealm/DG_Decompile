/*
 * FUN_180168090 at 180168090
 * undefined FUN_180168090(void)
 * Address ranges: 180168090-180168103
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180168090(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  code *extraout_x11;
  
  uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar1,0);
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x6be8) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x6be0) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x6bf8) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x6bf0) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x6c08) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x6c00) = uVar1;
  }
  *(uint *)(param_1 + 4000) = *(uint *)(param_1 + 4000) & 0x7fffffff | (uint)(param_2 != 0) << 0x1f;
  return;
}

