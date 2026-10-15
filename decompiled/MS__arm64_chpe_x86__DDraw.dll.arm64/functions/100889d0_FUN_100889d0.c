/*
 * FUN_100889d0 at 100889d0
 * undefined FUN_100889d0(void)
 * Address ranges: 100889d0-10088ab7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100889d0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  FUN_10088da8(param_1,0xffffffff,0,0);
  iVar1 = param_1 + 0xc;
  (*(code *)PTR_FUN_100ba0a0)(iVar1);
  FUN_10089020(param_1);
  uVar2 = *(uint *)(param_1 + 0x44);
  uVar4 = 0;
  if (uVar2 != 0) {
    if (uVar2 == 0) {
      iVar3 = 8;
      goto LAB_10088a50;
    }
    do {
      iVar3 = *(int *)(param_1 + 0x40) + uVar4 * 0x38 + 0x10;
LAB_10088a50:
      FUN_10088ab8(param_1,iVar3);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x44));
  }
  FUN_100914d0(*(undefined4 *)(param_1 + 0x3c));
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  (*(code *)PTR_FUN_100ba0f0)(iVar1);
  (*(code *)PTR_FUN_100ba094)(iVar1);
  return;
}

