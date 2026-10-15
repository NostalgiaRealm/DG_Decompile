/*
 * FUN_10065778 at 10065778
 * undefined FUN_10065778(void)
 * Address ranges: 10065778-100658b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10065778(undefined4 param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar5;
  
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  puVar1 = (uint *)(param_2 + 0x20);
  uVar5 = 0;
  if (*puVar1 != 0) {
    do {
      iVar2 = *(int *)(param_2 + 0xd78 + uVar5 * 4);
      if (iVar2 == 0) {
        iVar2 = param_2 + uVar5 * 4;
      }
      else {
        FUN_100669b0(param_1,*(undefined4 *)(param_2 + 8),iVar2);
        iVar2 = param_2 + uVar5 * 4;
        *(undefined4 *)(iVar2 + 0xd78) = 0;
      }
      if (*(int *)(param_2 + 0xd80 + uVar5 * 4) != 0) {
        uVar4 = (*pcVar3)();
        (*extraout_w11)(uVar4);
        iVar2 = param_2 + uVar5 * 4;
        *(undefined4 *)(iVar2 + 0xd80) = 0;
      }
      if (*(int *)(param_2 + 0xd70 + uVar5 * 4) != 0) {
        uVar4 = (*pcVar3)();
        (*extraout_w11_00)(uVar4);
        *(undefined4 *)(iVar2 + 0xd70) = 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *puVar1);
  }
  *puVar1 = 0;
  return;
}

