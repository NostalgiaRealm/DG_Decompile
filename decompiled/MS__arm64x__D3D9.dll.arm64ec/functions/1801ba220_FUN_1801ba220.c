/*
 * FUN_1801ba220 at 1801ba220
 * undefined FUN_1801ba220(void)
 * Address ranges: 1801ba220-1801ba3d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801ba220(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  ulonglong param_5)

{
  undefined *puVar1;
  char cVar2;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  if ((param_5 & 1) == 0) {
    cVar2 = (*extraout_x11)();
    while (cVar2 == '\0') {
      (*(code *)puVar1)();
      cVar2 = (*extraout_x11_03)(param_1,param_2,param_3,param_4,0);
    }
    (*(code *)puVar1)(0x180224000);
    cVar2 = (*extraout_x11_04)(param_1,param_2,param_3,param_4,0);
    while (cVar2 != '\0') {
      (*(code *)puVar1)();
      cVar2 = (*extraout_x11_05)(param_1,param_2,param_3,param_4,0);
    }
  }
  else {
    cVar2 = (*extraout_x11)();
    while (cVar2 != '\0') {
      (*(code *)puVar1)();
      cVar2 = (*extraout_x11_00)(param_1,param_2,param_3,param_4,0);
    }
    (*(code *)puVar1)(0x180224000);
    cVar2 = (*extraout_x11_01)(param_1,param_2,param_3,param_4,0);
    while (cVar2 == '\0') {
      (*(code *)puVar1)();
      cVar2 = (*extraout_x11_02)(param_1,param_2,param_3,param_4,0);
    }
  }
  return;
}

