/*
 * FUN_18016c3e0 at 18016c3e0
 * undefined FUN_18016c3e0(void)
 * Address ranges: 18016c3e0-18016c473
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18016c3e0(float param_1,longlong param_2,undefined1 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  code *extraout_x11;
  
  uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  (*extraout_x11)(uVar2,0);
  iVar3 = (int)param_1;
  *(float *)(param_2 + 0xea8) = param_1;
  *(undefined1 *)(param_2 + 0xeac) = param_3;
  iVar1 = iVar3;
  if (8 < iVar3) {
    iVar1 = 8;
  }
  if (iVar3 < 1) {
    iVar1 = 1;
  }
  *(int *)(param_2 + 0x6968) = iVar1;
  *(undefined1 *)(param_2 + 0xf691) = 1;
  *(undefined1 *)(param_2 + 0xf6b4) = 1;
  *(int *)(param_2 + 0x51b8) = iVar1;
  return;
}

