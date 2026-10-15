/*
 * FUN_10051de0 at 10051de0
 * undefined FUN_10051de0(void)
 * Address ranges: 10051de0-10051f2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10051de0(int param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  piVar1 = (int *)(param_1 + 0x31c);
  if (*(char *)(param_1 + 0xa86) != '\0') {
    iVar5 = 0x14c4;
    if (*piVar1 != 0) {
      iVar5 = 800;
    }
    puVar4 = (undefined4 *)(iVar5 + param_1);
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar3,0x24,*puVar4);
    *(char *)(param_1 + 0xa86) = '\0';
  }
  if (*(char *)(param_1 + 0xa87) != '\0') {
    iVar5 = 0x14c8;
    if (*piVar1 != 0) {
      iVar5 = 0x324;
    }
    puVar4 = (undefined4 *)(iVar5 + param_1);
    uVar3 = (*pcVar2)();
    (*extraout_w11_00)(uVar3,0x25,*puVar4);
    *(char *)(param_1 + 0xa87) = '\0';
  }
  if (*(char *)(param_1 + 0xa88) != '\0') {
    iVar5 = 0x14cc;
    if (*piVar1 != 0) {
      iVar5 = 0x328;
    }
    puVar4 = (undefined4 *)(iVar5 + param_1);
    uVar3 = (*pcVar2)();
    (*extraout_w11_01)(uVar3,0x26,*puVar4);
    *(char *)(param_1 + 0xa88) = '\0';
  }
  return;
}

