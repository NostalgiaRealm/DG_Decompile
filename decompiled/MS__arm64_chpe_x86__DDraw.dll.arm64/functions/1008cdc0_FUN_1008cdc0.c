/*
 * FUN_1008cdc0 at 1008cdc0
 * undefined FUN_1008cdc0(void)
 * Address ranges: 1008cdc0-1008cf57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008cdc0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  undefined4 uVar7;
  code *extraout_w11;
  uint uVar8;
  
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar8 = 0;
  piVar2 = (int *)(param_1 + 4);
  if (*(uint *)(param_1 + 8) != 0) {
    do {
      (*pcVar5)();
      (*extraout_w11)();
      (*(code *)PTR_FUN_100ba0a8)(*(undefined4 *)(*piVar2 + uVar8 * 0xc));
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 8));
  }
  FUN_100914d0(*piVar2);
  piVar2[0] = 0;
  piVar2[1] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar6 = DAT_100bb038;
  iVar3 = DAT_100bb034;
  uVar8 = 0;
  if (*(uint *)(param_1 + 0xe0) != 0) {
    do {
      iVar1 = uVar8 * 0x10;
      iVar4 = iVar3 * uVar8;
      uVar8 = uVar8 + 1;
      *(undefined4 *)(*(int *)(param_1 + 0xbc) + iVar4 + iVar6) =
           *(undefined4 *)(*(int *)(param_1 + 0xdc) + iVar1 + 4);
    } while (uVar8 < *(uint *)(param_1 + 0xe0));
  }
  if (*(short *)(param_1 + 0x4c) != 0) {
    uVar7 = (*(code *)PTR_FUN_100ba0cc)(0);
    (*(code *)PTR_FUN_100ba2e8)(*(short *)(param_1 + 0x4c),uVar7);
    iVar3 = *(int *)(param_1 + 0x50);
    if (iVar3 != 0) {
      (*(code *)PTR_FUN_100ba0a8)(iVar3);
      *(int *)(param_1 + 0x50) = 0;
    }
  }
  (*(code *)PTR_FUN_100ba15c)(*(undefined4 *)(param_1 + 0x78),0,0x8000);
  return;
}

