/*
 * FUN_10053fe0 at 10053fe0
 * undefined FUN_10053fe0(void)
 * Address ranges: 10053fe0-10054193
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10053fe0(int param_1,int param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *extraout_w8;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  uint uVar6;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar6 = 0;
  do {
    if (param_2 == *(int *)(param_1 + 0x14d4 + uVar6 * 4)) {
      uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar3,uVar6,0,0,0,0,0,0);
      uVar3 = (*pcVar2)();
      (*extraout_w11_00)(uVar3);
      uVar3 = (*pcVar2)();
      iVar4 = (*extraout_w11_01)(uVar3);
      uVar3 = *(undefined4 *)(iVar4 + 0x40);
      uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_1 + uVar6 * 4 + 0x14d4) + 4) + 0x50);
      uVar5 = (*pcVar2)();
      (*extraout_w11_02)(uVar5);
      (*pcVar2)();
      (*extraout_w11_03)(*(undefined4 *)(param_1 + 0x14),uVar6,*extraout_w8,uVar1,uVar3);
      return;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 8);
  return;
}

