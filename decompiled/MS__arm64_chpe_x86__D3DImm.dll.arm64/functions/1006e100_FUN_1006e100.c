/*
 * FUN_1006e100 at 1006e100
 * undefined FUN_1006e100(void)
 * Address ranges: 1006e100-1006e1e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006e100(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  code *extraout_w11;
  
  (*(code *)PTR_FUN_100a1014)(param_1 + 0x4a0);
  iVar1 = param_1 + param_2 * 0x1510;
  uVar2 = 0;
  do {
    if (param_3 == *(int *)(iVar1 + 0x604 + uVar2 * 4)) {
      *(undefined4 *)(iVar1 + 0x510 + uVar2 * 4 + 0xf4) = 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x40);
  uVar2 = 0;
  do {
    if (param_3 == *(int *)(iVar1 + 0x5d4 + uVar2 * 4)) {
      *(undefined4 *)(iVar1 + 0x510 + uVar2 * 4 + 0xc4) = 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xc);
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_3);
  (*(code *)PTR_FUN_100a1044)(param_1 + 0x4a0);
  return;
}

