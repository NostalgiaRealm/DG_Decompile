/*
 * FUN_180216c30 at 180216c30
 * undefined FUN_180216c30(void)
 * Address ranges: 180216c30-180216cc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180216c30(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  code *extraout_x11;
  
  iVar1 = FUN_180222c00(param_2,&DAT_180229438,0x10);
  if ((iVar1 == 0) || (iVar1 = FUN_180222c00(param_2,&DAT_180229348,0x10), iVar1 == 0)) {
    *param_3 = param_1;
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(param_1);
    uVar2 = 0;
  }
  else {
    *param_3 = 0;
    uVar2 = 0x80004002;
  }
  return uVar2;
}

