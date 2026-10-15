/*
 * FUN_100087c0 at 100087c0
 * undefined FUN_100087c0(void)
 * Address ranges: 100087c0-1000893b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100087c0(int param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar5;
  
  iVar2 = *(int *)(param_1 + 0xcc) + -1;
  *(int *)(param_1 + 0xcc) = iVar2;
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (iVar2 == 0) {
    uVar5 = 0;
    if (*(uint *)(param_1 + 0x58) != 0) {
      do {
        uVar4 = (*pcVar3)();
        (*extraout_w11)(uVar4);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0x58));
    }
    FUN_100914d0(*(undefined4 *)(param_1 + 0x54));
    *(undefined8 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    if ((*(uint *)(param_1 + 0x34) >> 3 & 1) == 0) {
      FUN_10008e78(param_1);
    }
    FUN_10008fd0(param_1);
    if (((*(int *)(param_1 + 0x6c) == 0) && (*(int *)(param_1 + 0x70) == 0)) &&
       (*(int *)(param_1 + 0x50) != 0)) {
      uVar4 = (*pcVar3)();
      (*extraout_w11_00)(uVar4);
    }
    iVar1 = *(int *)(param_1 + 0xc4);
    if (iVar1 - 1U < 0xfffffffe) {
      (*(code *)PTR_FUN_100ba06c)(iVar1);
    }
    *(int *)(param_1 + 0xc4) = -1;
    FUN_10008770(param_1);
    FUN_10091460(param_1,0xd0);
  }
  return iVar2;
}

