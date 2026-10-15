/*
 * FUN_100123d0 at 100123d0
 * undefined FUN_100123d0(void)
 * Address ranges: 100123d0-10012667
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100123d0(int param_1)

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
  if (*(char *)(param_1 + 0x2c6b) != '\0') {
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
  puVar1 = (undefined4 *)(param_1 + 0x3304);
  puVar2 = (undefined4 *)(param_1 + 0x3300);
  FUN_1006a700(*puVar2,*puVar1,*(undefined4 *)(param_1 + 0x3324));
  FUN_1006a700(*puVar2,*puVar1,*(undefined4 *)(param_1 + 0x3320));
  uVar4 = (*pcVar3)();
  (*extraout_w11_02)(uVar4);
  uVar4 = (*pcVar3)();
  (*extraout_w11_03)(uVar4);
  FUN_1006a700(*puVar2,*puVar1,*(undefined4 *)(param_1 + 0x3328));
  uVar4 = (*pcVar3)();
  (*extraout_w11_04)(uVar4);
  FUN_1006a700(*puVar2,*puVar1,*(undefined4 *)(param_1 + 0x3330));
  uVar4 = (*pcVar3)();
  (*extraout_w11_05)(uVar4);
  uVar4 = (*pcVar3)();
  (*extraout_w11_06)(uVar4);
  uVar4 = (*pcVar3)();
  (*extraout_w11_07)(uVar4);
  return;
}

