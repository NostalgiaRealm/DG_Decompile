/*
 * FUN_10118bd8 at 10118bd8
 * undefined FUN_10118bd8(void)
 * Address ranges: 10118bd8-10118ca7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10118bd8(undefined8 param_1,undefined8 param_2,int *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  code *extraout_w11;
  int extraout_w11_00;
  uint uVar5;
  ulonglong extraout_x11;
  int extraout_w12;
  undefined1 auStack_50 [32];
  undefined4 local_30;
  
  uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar3,auStack_50);
  FUN_10112838(local_30);
  iVar4 = FUN_101128f0(extraout_x11 & 0xffffffff);
  if (extraout_w11_00 - 0x44U < 2) {
    uVar5 = 2;
  }
  else if (extraout_w11_00 - 0x46U < 0xf) {
    uVar5 = 4;
  }
  else {
    uVar5 = 1;
  }
  if (iVar4 == 0) {
    iVar4 = extraout_w12;
  }
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    uVar2 = SoftwareBreakpoint(0xf004,0x10118c80);
    (*(code *)uVar2)();
  }
  uVar1 = 0;
  if (uVar5 != 0) {
    uVar1 = (uint)(iVar4 * (param_3[3] - *param_3)) / uVar5;
  }
  uVar5 = uVar1 + 0xff & 0xffffff00;
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    uVar2 = SoftwareBreakpoint(0xf004,0x10118c98);
    (*(code *)uVar2)();
  }
  uVar1 = 0;
  if (uVar5 != 0) {
    uVar1 = 0x1000000 / uVar5;
  }
  return uVar1;
}

