/*
 * FUN_180168210 at 180168210
 * undefined FUN_180168210(void)
 * Address ranges: 180168210-1801682eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180168210(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  code *extraout_x11;
  undefined4 uVar2;
  
  uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar1,0);
  *(undefined4 *)(param_1 + 0x6f70) = *param_2;
  *(undefined4 *)(param_1 + 0x6f74) = param_2[1];
  *(undefined4 *)(param_1 + 0x6f78) = param_2[2];
  *(undefined4 *)(param_1 + 0x6f7c) = param_2[3];
  *(undefined4 *)(param_1 + 0x6f90) = param_2[8];
  *(undefined4 *)(param_1 + 0x6f94) = param_2[9];
  *(undefined4 *)(param_1 + 0x6f98) = param_2[10];
  *(undefined4 *)(param_1 + 0x6f9c) = param_2[0xb];
  *(undefined4 *)(param_1 + 0x6f80) = param_2[4];
  *(undefined4 *)(param_1 + 0x6f84) = param_2[5];
  *(undefined4 *)(param_1 + 0x6f88) = param_2[6];
  *(undefined4 *)(param_1 + 0x6f8c) = param_2[7];
  *(undefined4 *)(param_1 + 0x6fa0) = param_2[0xc];
  *(undefined4 *)(param_1 + 0x6fa4) = param_2[0xd];
  *(undefined4 *)(param_1 + 0x6fa8) = param_2[0xe];
  uVar2 = param_2[0x10];
  *(undefined1 *)(param_1 + 0xf691) = 1;
  *(undefined4 *)(param_1 + 0x6fac) = uVar2;
  return;
}

