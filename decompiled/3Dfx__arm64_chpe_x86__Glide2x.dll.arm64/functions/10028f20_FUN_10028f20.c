/*
 * FUN_10028f20 at 10028f20
 * undefined FUN_10028f20(void)
 * Address ranges: 10028f20-10029103
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10028f20(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  int iVar5;
  
  FUN_1002b880(*(undefined4 *)(param_1 + 0x315c),0,2);
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  piVar1 = (int *)(param_1 + 0x3160);
  if (*(int *)(*piVar1 + 0x30) != 4) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1);
    *(undefined4 *)(*piVar1 + 0x30) = 4;
  }
  FUN_100483d0(*piVar1,param_2,param_2 * 3 + -6);
  iVar5 = 0;
  if (0 < param_2) {
    do {
      FUN_10027750(*piVar1,param_4 + *(int *)(param_3 + iVar5 * 4) * 0x3c,1,0);
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_2);
  }
  iVar5 = 1;
  if (1 < param_2 + -1) {
    do {
      **(int **)(*piVar1 + 0x28) = *(int *)(*piVar1 + 0x2c) - param_2;
      *(int *)(*(int *)(*piVar1 + 0x28) + 4) = (*(int *)(*piVar1 + 0x2c) - param_2) + iVar5;
      iVar2 = (*(int *)(*piVar1 + 0x2c) - param_2) + iVar5;
      iVar5 = iVar5 + 1;
      *(int *)(*(int *)(*piVar1 + 0x28) + 8) = iVar2 + 1;
      *(int *)(*piVar1 + 0x28) = *(int *)(*piVar1 + 0x28) + 0xc;
    } while (iVar5 < param_2 + -1);
  }
  FUN_1002e7c0(param_1);
  uVar4 = (*pcVar3)();
  (*extraout_w11_00)(uVar4);
  return;
}

