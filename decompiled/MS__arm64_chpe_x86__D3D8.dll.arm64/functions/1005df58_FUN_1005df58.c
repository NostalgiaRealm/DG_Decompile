/*
 * FUN_1005df58 at 1005df58
 * undefined FUN_1005df58(void)
 * Address ranges: 1005df58-1005e08f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005df58(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 != 0) {
    param_2 = param_2 + param_3 * 0x16c0;
    uVar5 = 0;
    if (uVar1 == 0) {
      piVar7 = (int *)&DAT_00000008;
      piVar6 = (int *)&DAT_00000034;
      goto LAB_1005dff8;
    }
    do {
      iVar2 = *(int *)(param_1 + 4) + uVar5 * 0x68;
      piVar7 = (int *)(iVar2 + 0x10);
      piVar6 = (int *)(iVar2 + 0x3c);
LAB_1005dff8:
      if (*piVar7 != 0) {
        FUN_100e8578(param_2 + 0x1d00,*piVar7);
        uVar4 = (*pcVar3)();
        (*extraout_w11)(uVar4);
      }
      if (*piVar6 != 0) {
        FUN_100e8578(param_2 + 0x1d00,*piVar6);
        uVar4 = (*pcVar3)();
        (*extraout_w11_00)(uVar4);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 8));
  }
  return;
}

