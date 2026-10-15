/*
 * FUN_1001a308 at 1001a308
 * undefined FUN_1001a308(void)
 * Address ranges: 1001a308-1001a65f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1001a308(int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  ulonglong uVar7;
  ulonglong uVar8;
  int local_f0 [4];
  longlong local_e0;
  undefined8 uStack_d8;
  longlong local_d0 [2];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 auStack_a0 [8];
  uint local_98;
  uint uStack_94;
  undefined1 auStack_80 [8];
  uint local_78;
  uint uStack_74;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar8 = (ulonglong)*(uint *)(iVar1 + 0xb8);
  uVar7 = (ulonglong)*(uint *)(iVar1 + 0xb4);
  iVar5 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(iVar1 + 0x2b14) + 0x4a0;
  (*(code *)PTR_FUN_100a803c)(iVar1);
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_f0[0] = 0;
  if (iVar5 == 0) {
    uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar5 = (*extraout_w11_01)(uVar4,0,local_f0);
    if (-1 < iVar5) {
      local_b0 = 0x10000001c;
      local_c0 = 0;
      uStack_b8 = 0;
      local_a8 = 0;
      uVar4 = (*pcVar2)();
      iVar5 = (*extraout_w11_02)(uVar4,&local_c0,auStack_a0,0);
      if (-1 < iVar5) {
        uVar7 = (ulonglong)local_98;
        uVar8 = (ulonglong)uStack_94;
      }
    }
  }
  else {
    uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar4,auStack_80);
    uVar7 = (ulonglong)local_78;
    uVar8 = (ulonglong)uStack_74;
    uVar4 = (*pcVar2)();
    (*extraout_w11_00)(uVar4,local_f0);
  }
  if (local_f0[0] == 0) {
    (*(code *)PTR_FUN_100a80b0)(&uStack_d8);
  }
  else {
    uVar4 = (*(code *)PTR_FUN_100a8054)();
    uVar4 = (*(code *)PTR_FUN_100a8080)(uVar4);
    uVar6 = (*(code *)PTR_FUN_100a8054)();
    (*(code *)PTR_FUN_100a80d0)(uVar6,0xf);
    uVar6 = (*pcVar2)();
    (*extraout_w11_03)(uVar6);
    uVar6 = (*pcVar2)();
    (*extraout_w11_04)(uVar6);
    uVar6 = (*pcVar2)();
    (*extraout_w11_05)(uVar6);
    (*(code *)PTR_FUN_100a80b0)(&uStack_d8);
    uVar6 = (*(code *)PTR_FUN_100a8054)();
    (*(code *)PTR_FUN_100a80d0)(uVar6,uVar4);
    uVar4 = (*pcVar2)();
    (*extraout_w11_06)(uVar4);
  }
  (*(code *)PTR_FUN_100a80b4)(local_d0);
  if (uVar7 == 0) {
                    /* WARNING: Does not return */
    uVar3 = SoftwareBreakpoint(0xf004,0x1001a5c4);
    (*(code *)uVar3)();
  }
  local_e0 = 0;
  if (uVar7 != 0) {
    local_e0 = (longlong)(uVar8 * local_d0[0]) / (longlong)uVar7;
  }
  (*(code *)PTR_FUN_100a8090)(iVar1);
  *(undefined8 *)(param_1 + 0x18) = uStack_d8;
  *(longlong *)(param_1 + 0x10) = local_e0;
  *(longlong *)(param_1 + 0x20) = local_d0[0];
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x38) = 0;
  return 1;
}

