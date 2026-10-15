/*
 * FUN_18020c1a0 at 18020c1a0
 * undefined FUN_18020c1a0(void)
 * Address ranges: 18020c1a0-18020c31b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18020c1a0(longlong param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_14;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  local_1c = 0;
  local_20 = *(undefined4 *)(param_1 + 0x30);
  local_14 = 0;
  uVar3 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  iVar2 = (*extraout_x11)(uVar3,&local_20,&DAT_180238f98,param_1 + 0x10);
  if (-1 < iVar2) {
    (*(code *)puVar1)(0x180224000);
    (*extraout_x11_00)();
    (*(code *)puVar1)(0x180224000);
    (*extraout_x11_01)();
    uVar3 = (*(code *)puVar1)(0x180224000);
    (*extraout_x11_02)(uVar3,*(undefined8 *)(param_1 + 0x38));
    uVar3 = (*(code *)puVar1)(0x180224000);
    iVar2 = (*extraout_x11_03)(uVar3,0,0,&DAT_180238f88,param_1 + 0x18);
    if (-1 < iVar2) {
      lVar4 = thunk_FUN_1802239c8(0,0,0,0);
      *(longlong *)(param_1 + 0x20) = lVar4;
      if (lVar4 != 0) {
        return 1;
      }
      (*(code *)puVar1)(0x180224000);
      (*extraout_x11_04)();
    }
    (*(code *)puVar1)(0x180224000);
    (*extraout_x11_05)();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return 0;
}

