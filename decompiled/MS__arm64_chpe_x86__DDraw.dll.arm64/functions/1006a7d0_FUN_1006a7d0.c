/*
 * FUN_1006a7d0 at 1006a7d0
 * undefined FUN_1006a7d0(void)
 * Address ranges: 1006a7d0-1006a8ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006a7d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  code *extraout_w11;
  
  iVar1 = param_1 + param_2 * 0x1510;
  (*(code *)PTR_FUN_100ba0a0)(param_1 + 0x4a0);
  uVar2 = 0;
  do {
    if (param_3 == *(int *)(iVar1 + 0x554 + uVar2 * 4)) {
      *(undefined4 *)(iVar1 + 0x510 + uVar2 * 4 + 0x44) = 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  uVar2 = 0;
  do {
    if (param_3 == *(int *)(iVar1 + 0x594 + uVar2 * 4)) {
      *(undefined4 *)(iVar1 + 0x510 + uVar2 * 4 + 0x84) = 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_3);
  (*(code *)PTR_FUN_100ba0f0)(param_1 + 0x4a0);
  return;
}

