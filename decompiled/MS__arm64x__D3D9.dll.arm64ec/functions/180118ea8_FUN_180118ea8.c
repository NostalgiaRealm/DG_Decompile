/*
 * FUN_180118ea8 at 180118ea8
 * undefined FUN_180118ea8(void)
 * Address ranges: 180118ea8-180118f33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180118ea8(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  code *extraout_x11;
  undefined4 uVar3;
  undefined8 local_40 [2];
  
  thunk_FUN_180223cd4(local_40);
  lVar1 = thunk_FUN_180223f2c(local_40[0]);
  uVar3 = 0;
  if (lVar1 != 0) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    lVar2 = (*extraout_x11)(param_1 + -0x48);
    if (lVar1 == lVar2) {
      *(undefined8 *)(param_1 + -0x20) = param_2;
      uVar3 = 1;
    }
  }
  *param_3 = uVar3;
  return 0;
}

