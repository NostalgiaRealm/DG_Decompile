/*
 * FUN_18013df30 at 18013df30
 * undefined FUN_18013df30(void)
 * Address ranges: 18013df30-18013dfcb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18013df30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong extraout_x8;
  code *extraout_x11;
  undefined8 uVar3;
  undefined8 local_20;
  
  uVar3 = 1;
  if (*(int *)(param_1 + 0x30) == 1) {
    uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)();
    iVar1 = (*extraout_x11)(uVar2,*(undefined8 *)(extraout_x8 + 0x20),0);
    if (iVar1 == -0x7789fde4) {
      uVar3 = 2;
    }
    else if (-1 < iVar1) {
      uVar3 = 0;
      *param_4 = local_20;
    }
  }
  return uVar3;
}

