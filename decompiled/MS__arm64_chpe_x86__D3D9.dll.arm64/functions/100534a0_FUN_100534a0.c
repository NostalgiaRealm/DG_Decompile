/*
 * FUN_100534a0 at 100534a0
 * undefined FUN_100534a0(void)
 * Address ranges: 100534a0-100535eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100534a0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  code *extraout_w11;
  ulonglong uVar7;
  int local_40 [4];
  
  iVar4 = *(int *)(param_1 + 8) + *(int *)(param_1 + 0x10) * 0x16c0;
  FUN_10130fb8(iVar4 + 0x1880);
  piVar1 = (int *)(*(int *)(param_1 + 8) + 0x172c0);
  if (*(char *)(param_2 + 0x34) == '\0') {
    FUN_1011f1d8(*piVar1,param_2);
    iVar4 = *(int *)(*(int *)(iVar4 + 0x19c4) + 0x910);
    *(char *)(param_2 + 0x34) = iVar4 != -1;
    if (*(int *)(param_1 + 0xc) != 0 && iVar4 != -1) {
      uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar5,param_1);
    }
  }
  else {
    iVar3 = *piVar1;
    iVar2 = iVar3 + 0x1c;
    local_40[0] = param_2;
    (*(code *)PTR_FUN_1016c074)(iVar2);
    uVar6 = FUN_1011f4f8(iVar3 + 0xc,local_40);
    if ((int)uVar6 != 0) {
      FUN_1011e2a0(uVar6,uVar6 & 0xffffffff,0);
    }
    (*(code *)PTR_FUN_1016c0c0)(iVar2);
    while (uVar7 = *(ulonglong *)(param_2 + 0x20),
          uVar6 = FUN_10114528(*(undefined4 *)(iVar4 + 0x19c4)), uVar6 < uVar7) {
      DataMemoryBarrier(2,2);
      Yield();
    }
  }
  return;
}

