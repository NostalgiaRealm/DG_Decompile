/*
 * FUN_1007a7c0 at 1007a7c0
 * undefined FUN_1007a7c0(void)
 * Address ranges: 1007a7c0-1007a8a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007a7c0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  FUN_1007ab98(param_1,0xffffffff,0,0);
  iVar1 = param_1 + 0xc;
  (*(code *)PTR_FUN_100a803c)(iVar1);
  FUN_1007ae10(param_1);
  uVar2 = *(uint *)(param_1 + 0x44);
  uVar4 = 0;
  if (uVar2 != 0) {
    if (uVar2 == 0) {
      iVar3 = 8;
      goto LAB_1007a840;
    }
    do {
      iVar3 = *(int *)(param_1 + 0x40) + uVar4 * 0x38 + 0x10;
LAB_1007a840:
      FUN_1007a8a8(param_1,iVar3);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x44));
  }
  FUN_10083420(*(undefined4 *)(param_1 + 0x3c));
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  (*(code *)PTR_FUN_100a8090)(iVar1);
  (*(code *)PTR_FUN_100a8034)(iVar1);
  return;
}

