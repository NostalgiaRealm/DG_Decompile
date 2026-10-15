/*
 * FUN_180212df8 at 180212df8
 * undefined FUN_180212df8(void)
 * Address ranges: 180212df8-180212e8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180212df8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  undefined1 auVar3 [16];
  undefined8 local_20 [2];
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  if (*(longlong *)(param_1 + 0x2d0) != 0) {
    local_20[0] = 0;
    auVar3 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000,param_2,param_3);
    iVar2 = (*extraout_x11)(auVar3._0_8_,auVar3._8_8_,2,0,local_20);
    if (-1 < iVar2) {
      (*(code *)puVar1)(0x180224000);
      (*extraout_x11_00)();
      thunk_FUN_18022393c();
      (*(code *)puVar1)(0x180224000);
      (*extraout_x11_01)();
    }
  }
  return;
}

