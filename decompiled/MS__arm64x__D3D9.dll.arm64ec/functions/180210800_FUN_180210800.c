/*
 * FUN_180210800 at 180210800
 * undefined FUN_180210800(void)
 * Address ranges: 180210800-18021098b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_180210800(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  longlong lVar7;
  longlong local_50 [4];
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  if (param_3 != 1) {
    if (*(longlong *)(param_1 + -0x28) != 0) {
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      uVar3 = (*extraout_x11)();
      if (*(ulonglong *)(param_1 + -0x20) <= uVar3) goto LAB_180210908;
    }
    lVar7 = *(longlong *)(param_1 + 0x10);
    local_50[0] = param_1 + -0x40;
    thunk_FUN_1802236f8(lVar7 + 0x28);
    plVar4 = (longlong *)FUN_18020ebb0(lVar7 + 0x10,local_50);
    if (plVar4 != (longlong *)0x0) {
      (*(code *)puVar1)(0x180224000);
      uVar3 = (*extraout_x11_00)();
      if ((uVar3 < (ulonglong)plVar4[2]) &&
         ((plVar4[1] == -1 || (uVar3 = FUN_180207560(plVar4[1] + 8,0), (uVar3 & 1) != 0)))) {
        lVar6 = *plVar4;
        uVar5 = (*(code *)puVar1)(0x180224000);
        (*extraout_x11_01)(uVar5,plVar4[2],*(undefined8 *)(lVar6 + 0x20));
        thunk_FUN_1802238ec(*(undefined8 *)(*plVar4 + 0x20),0xffffffff);
      }
    }
    thunk_FUN_18022370c(lVar7 + 0x28);
  }
LAB_180210908:
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_50[1] = 0;
  local_50[2] = 0;
  uVar5 = (*(code *)puVar1)(0x180224000);
  iVar2 = (*extraout_x11_02)(uVar5,0,local_50 + 1,param_2 + 1);
  if (-1 < iVar2) {
    (*(code *)puVar1)(0x180224000);
    uVar5 = (*extraout_x11_03)();
    *param_2 = uVar5;
    param_2[2] = *(undefined8 *)(param_1 + 8);
    *(int *)(param_1 + -0xc) = *(int *)(param_1 + -0xc) + 1;
  }
  return param_2;
}

