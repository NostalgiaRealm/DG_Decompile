/*
 * FUN_10048e30 at 10048e30
 * undefined FUN_10048e30(void)
 * Address ranges: 10048e30-10048f83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10048e30(int param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  uint extraout_w10;
  uint uVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  FUN_1002b8d0(*(undefined4 *)(param_1 + 0x315c));
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar3 = (*extraout_w11)(param_1);
  uVar5 = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 0x298c) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x2984) = uVar5;
  *(undefined1 *)(param_1 + 0x3151) = 1;
  iVar2 = FUN_1002be40(uVar3,*(undefined4 *)(param_1 + 0x2964));
  uVar4 = extraout_w10;
  if (iVar2 != -1) {
    auVar6 = (*pcVar1)();
    iVar2 = (*extraout_w11_00)(auVar6._0_8_ & 0xffffffff,auVar6._8_8_ & 0xffffffff);
    if ((((*param_2 != 0) || (param_2[1] != 0)) || (param_2[2] != *(int *)(iVar2 + 0x20))) ||
       (uVar4 = 1, param_2[3] != *(int *)(iVar2 + 0x24))) {
      uVar4 = 0;
    }
  }
  if (uVar4 != (*(uint *)(param_1 + 0x2adc) == 0)) {
    *(uint *)(param_1 + 0x2adc) = uVar4 ^ 1;
    *(undefined1 *)(param_1 + 0x2bc2) = 1;
  }
  return;
}

