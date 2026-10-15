/*
 * FUN_100ea3f0 at 100ea3f0
 * undefined FUN_100ea3f0(void)
 * Address ranges: 100ea3f0-100ea4d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ea3f0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  FUN_100ea7c8(param_1,0xffffffff,0,0);
  iVar1 = param_1 + 0xc;
  (*(code *)PTR_FUN_10134070)(iVar1);
  FUN_100eaa40(param_1);
  uVar2 = *(uint *)(param_1 + 0x44);
  uVar4 = 0;
  if (uVar2 != 0) {
    if (uVar2 == 0) {
      iVar3 = 8;
      goto LAB_100ea470;
    }
    do {
      iVar3 = *(int *)(param_1 + 0x40) + uVar4 * 0x38 + 0x10;
LAB_100ea470:
      FUN_100ea4d8(param_1,iVar3);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x44));
  }
  FUN_100fed00(*(undefined4 *)(param_1 + 0x3c));
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  (*(code *)PTR_FUN_101340bc)(iVar1);
  (*(code *)PTR_FUN_10134068)(iVar1);
  return;
}

