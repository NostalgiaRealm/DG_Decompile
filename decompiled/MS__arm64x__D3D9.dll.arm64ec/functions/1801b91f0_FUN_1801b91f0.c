/*
 * FUN_1801b91f0 at 1801b91f0
 * undefined FUN_1801b91f0(void)
 * Address ranges: 1801b91f0-1801b940f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801b91f0(longlong param_1,ulonglong param_2,longlong param_3)

{
  undefined *puVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  code *extraout_x11_05;
  code *extraout_x11_06;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong local_100 [2];
  longlong local_f0;
  undefined8 uStack_e8;
  longlong local_e0 [2];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 auStack_b0 [8];
  uint local_a8;
  uint uStack_a4;
  undefined1 auStack_90 [8];
  uint local_88;
  uint uStack_84;
  
  lVar8 = *(longlong *)(param_1 + 0x20);
  thunk_FUN_1802236f8(lVar8 + 0x620);
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  local_100[0] = 0;
  if (param_3 == 0) {
    uVar7 = 0x3c;
    uVar6 = 1;
    uVar5 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    iVar3 = (*extraout_x11_01)(uVar5,param_2 & 0xffffffff,local_100);
    if (-1 < iVar3) {
      local_c0 = 0x10000001c;
      local_d0 = 0;
      uStack_c8 = 0;
      local_b8 = 0;
      uVar5 = (*(code *)puVar1)(0x180224000);
      iVar3 = (*extraout_x11_02)(uVar5,&local_d0,auStack_b0,0);
      if (-1 < iVar3) {
        uVar7 = (ulonglong)local_a8;
        uVar6 = (ulonglong)uStack_a4;
      }
    }
  }
  else {
    uVar5 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar5,auStack_90);
    uVar7 = (ulonglong)local_88;
    uVar6 = (ulonglong)uStack_84;
    uVar5 = (*(code *)puVar1)(0x180224000);
    (*extraout_x11_00)(uVar5,local_100);
  }
  if (local_100[0] == 0) {
    thunk_FUN_18022375c(&uStack_e8);
  }
  else {
    thunk_FUN_1802238d8();
    uVar4 = thunk_FUN_1802239a0();
    uVar5 = thunk_FUN_1802238d8();
    thunk_FUN_1802238c4(uVar5,0xf);
    (*(code *)puVar1)(0x180224000);
    (*extraout_x11_03)();
    (*(code *)puVar1)(0x180224000);
    (*extraout_x11_04)();
    (*(code *)puVar1)(0x180224000);
    (*extraout_x11_05)();
    thunk_FUN_18022375c(&uStack_e8);
    uVar5 = thunk_FUN_1802238d8();
    thunk_FUN_1802238c4(uVar5,uVar4);
    (*(code *)puVar1)(0x180224000);
    (*extraout_x11_06)();
  }
  thunk_FUN_180223900(local_e0);
  if (uVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(0xf004,0x1801b93cc);
    (*pcVar2)();
  }
  local_f0 = 0;
  if (uVar7 != 0) {
    local_f0 = (longlong)(uVar6 * local_e0[0]) / (longlong)uVar7;
  }
  thunk_FUN_18022370c(lVar8 + 0x620);
  param_1 = param_1 + (param_2 & 0xffffffff) * 0xc18;
  *(undefined8 *)(param_1 + 0x10cc8) = uStack_e8;
  *(longlong *)(param_1 + 0x10cc0) = local_f0;
  *(longlong *)(param_1 + 0x10cd0) = local_e0[0];
  return;
}

