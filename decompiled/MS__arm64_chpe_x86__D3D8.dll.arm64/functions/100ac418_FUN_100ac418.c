/*
 * FUN_100ac418 at 100ac418
 * undefined FUN_100ac418(void)
 * Address ranges: 100ac418-100ac70b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ac418(int param_1,int param_2,int param_3)

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
  
  iVar1 = *(int *)(param_1 + 0x10) + 0x4a0;
  (*(code *)PTR_FUN_10134070)(iVar1);
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_f0[0] = 0;
  if (param_3 == 0) {
    uVar8 = 0x3c;
    uVar7 = 1;
    uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar5 = (*extraout_w11_01)(uVar4,param_2,local_f0);
    if (-1 < iVar5) {
      local_b0 = 0x10000001c;
      local_c0 = 0;
      uStack_b8 = 0;
      local_a8 = 0;
      uVar4 = (*pcVar2)();
      iVar5 = (*extraout_w11_02)(uVar4,&local_c0,auStack_a0,0);
      if (-1 < iVar5) {
        uVar8 = (ulonglong)local_98;
        uVar7 = (ulonglong)uStack_94;
      }
    }
  }
  else {
    uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar4,auStack_80);
    uVar8 = (ulonglong)local_78;
    uVar7 = (ulonglong)uStack_74;
    uVar4 = (*pcVar2)();
    (*extraout_w11_00)(uVar4,local_f0);
  }
  if (local_f0[0] == 0) {
    (*(code *)PTR_FUN_101340e4)(&uStack_d8);
  }
  else {
    uVar4 = (*(code *)PTR_FUN_10134080)();
    uVar4 = (*(code *)PTR_FUN_101340ac)(uVar4);
    uVar6 = (*(code *)PTR_FUN_10134080)();
    (*(code *)PTR_FUN_10134108)(uVar6,0xf);
    uVar6 = (*pcVar2)();
    (*extraout_w11_03)(uVar6);
    uVar6 = (*pcVar2)();
    (*extraout_w11_04)(uVar6);
    uVar6 = (*pcVar2)();
    (*extraout_w11_05)(uVar6);
    (*(code *)PTR_FUN_101340e4)(&uStack_d8);
    uVar6 = (*(code *)PTR_FUN_10134080)();
    (*(code *)PTR_FUN_10134108)(uVar6,uVar4);
    uVar4 = (*pcVar2)();
    (*extraout_w11_06)(uVar4);
  }
  (*(code *)PTR_FUN_101340e8)(local_d0);
  if (uVar8 == 0) {
                    /* WARNING: Does not return */
    uVar3 = SoftwareBreakpoint(0xf004,0x100ac6bc);
    (*(code *)uVar3)();
  }
  local_e0 = 0;
  if (uVar8 != 0) {
    local_e0 = (longlong)(uVar7 * local_d0[0]) / (longlong)uVar8;
  }
  (*(code *)PTR_FUN_101340bc)(iVar1);
  param_1 = param_1 + param_2 * 0xc18;
  *(undefined8 *)(param_1 + 0x10cb0) = uStack_d8;
  *(longlong *)(param_1 + 0x10ca8) = local_e0;
  *(longlong *)(param_1 + 0x10cb8) = local_d0[0];
  return;
}

