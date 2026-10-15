/*
 * FUN_18013dcd0 at 18013dcd0
 * undefined FUN_18013dcd0(void)
 * Address ranges: 18013dcd0-18013dd8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18013dcd0(undefined8 param_1,longlong param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *pcVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  FUN_180137af0(param_1,0,0,0);
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  if (param_3 == 0xc) {
    uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar2,uVar4);
    uVar2 = (*(code *)puVar1)(0x180224000);
    pcVar3 = extraout_x11_00;
  }
  else {
    uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    pcVar3 = extraout_x11_01;
  }
  (*pcVar3)(uVar2,uVar4);
  return 0;
}

