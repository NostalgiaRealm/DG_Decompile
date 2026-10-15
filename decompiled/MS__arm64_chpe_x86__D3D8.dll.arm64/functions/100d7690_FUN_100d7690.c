/*
 * FUN_100d7690 at 100d7690
 * undefined FUN_100d7690(void)
 * Address ranges: 100d7690-100d7773
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100d7690(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  code *extraout_w11;
  
  (*(code *)PTR_FUN_10134070)(param_1 + 0x4a0);
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
  (*(code *)PTR_FUN_101340bc)(param_1 + 0x4a0);
  return;
}

