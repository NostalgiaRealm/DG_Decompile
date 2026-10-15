/*
 * FUN_10023110 at 10023110
 * undefined FUN_10023110(void)
 * Address ranges: 10023110-100233a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10023110(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  uint uVar5;
  
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(char *)(param_1 + 0x2bcb) != '\0') {
    uVar5 = 0;
    do {
      uVar4 = (*pcVar3)();
      (*extraout_w11)(uVar4);
      uVar4 = (*pcVar3)();
      (*extraout_w11_00)(uVar4);
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x20);
    uVar4 = (*pcVar3)();
    (*extraout_w11_01)(uVar4);
  }
  puVar1 = (undefined4 *)(param_1 + 0x3184);
  puVar2 = (undefined4 *)(param_1 + 0x3180);
  FUN_10066ee0(*puVar2,*puVar1,*(undefined4 *)(param_1 + 0x31a4));
  FUN_10066ee0(*puVar2,*puVar1,*(undefined4 *)(param_1 + 0x31a0));
  uVar4 = (*pcVar3)();
  (*extraout_w11_02)(uVar4);
  uVar4 = (*pcVar3)();
  (*extraout_w11_03)(uVar4);
  FUN_10066ee0(*puVar2,*puVar1,*(undefined4 *)(param_1 + 0x31a8));
  uVar4 = (*pcVar3)();
  (*extraout_w11_04)(uVar4);
  FUN_10066ee0(*puVar2,*puVar1,*(undefined4 *)(param_1 + 0x31b0));
  uVar4 = (*pcVar3)();
  (*extraout_w11_05)(uVar4);
  uVar4 = (*pcVar3)();
  (*extraout_w11_06)(uVar4);
  uVar4 = (*pcVar3)();
  (*extraout_w11_07)(uVar4);
  return;
}

