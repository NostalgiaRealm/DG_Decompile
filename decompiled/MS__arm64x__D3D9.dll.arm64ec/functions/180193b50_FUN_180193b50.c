/*
 * FUN_180193b50 at 180193b50
 * undefined FUN_180193b50(void)
 * Address ranges: 180193b50-180193bd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180193b50(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  code *extraout_x11;
  code *extraout_x11_00;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  if ((*(int *)(param_3 + 0x2c) == 0) && (*(int *)(param_2 + 0x2c) == 0)) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    cVar2 = (*extraout_x11)(param_3);
    if (cVar2 == '\0') {
      (*(code *)puVar1)(0x180224000);
      cVar2 = (*extraout_x11_00)(param_2);
      if (cVar2 == '\0') goto LAB_180193bc8;
    }
    uVar3 = 1;
  }
  else {
LAB_180193bc8:
    uVar3 = 0;
  }
  return uVar3;
}

