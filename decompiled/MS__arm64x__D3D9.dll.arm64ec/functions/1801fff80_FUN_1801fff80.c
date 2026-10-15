/*
 * FUN_1801fff80 at 1801fff80
 * undefined FUN_1801fff80(void)
 * Address ranges: 1801fff80-1802000db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801fff80(longlong param_1,ulonglong param_2,int param_3,longlong param_4,longlong param_5,
                  longlong param_6,longlong param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  param_1 = param_1 + (param_2 & 0xffffffff) * 0x18c0;
  if (param_3 != *(int *)(param_1 + 0xb98)) {
    uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar2,param_3);
    *(int *)(param_1 + 0xb98) = param_3;
  }
  if (param_4 != *(longlong *)(param_1 + 0xba0)) {
    uVar2 = (*(code *)puVar1)(0x180224000);
    (*extraout_x11_00)(uVar2,param_4);
    *(longlong *)(param_1 + 0xba0) = param_4;
  }
  if (param_5 != *(longlong *)(param_1 + 0xba8)) {
    uVar2 = (*(code *)puVar1)(0x180224000);
    (*extraout_x11_01)(uVar2,param_5,0,0);
    *(longlong *)(param_1 + 0xba8) = param_5;
  }
  if (param_6 != *(longlong *)(param_1 + 0xbb0)) {
    uVar2 = (*(code *)puVar1)(0x180224000);
    (*extraout_x11_02)(uVar2,param_6,0,0);
    *(longlong *)(param_1 + 0xbb0) = param_6;
  }
  if (param_7 != *(longlong *)(param_1 + 3000)) {
    uVar2 = (*(code *)puVar1)(0x180224000);
    (*extraout_x11_03)(uVar2,param_7,0,0);
    *(longlong *)(param_1 + 3000) = param_7;
  }
  return;
}

