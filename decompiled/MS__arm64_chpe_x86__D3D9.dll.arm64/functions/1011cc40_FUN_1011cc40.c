/*
 * FUN_1011cc40 at 1011cc40
 * undefined FUN_1011cc40(void)
 * Address ranges: 1011cc40-1011cd27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1011cc40(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  FUN_1011d018(param_1,0xffffffff,0,0);
  iVar1 = param_1 + 0xc;
  (*(code *)PTR_FUN_1016c074)(iVar1);
  FUN_1011d290(param_1);
  uVar2 = *(uint *)(param_1 + 0x44);
  uVar4 = 0;
  if (uVar2 != 0) {
    if (uVar2 == 0) {
      iVar3 = 8;
      goto LAB_1011ccc0;
    }
    do {
      iVar3 = *(int *)(param_1 + 0x40) + uVar4 * 0x38 + 0x10;
LAB_1011ccc0:
      FUN_1011cd28(param_1,iVar3);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x44));
  }
  FUN_101322d0(*(undefined4 *)(param_1 + 0x3c));
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  (*(code *)PTR_FUN_1016c0c0)(iVar1);
  (*(code *)PTR_FUN_1016c06c)(iVar1);
  return;
}

