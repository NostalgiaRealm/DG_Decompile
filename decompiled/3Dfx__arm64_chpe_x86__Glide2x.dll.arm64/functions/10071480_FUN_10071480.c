/*
 * FUN_10071480 at 10071480
 * undefined FUN_10071480(void)
 * Address ranges: 10071480-10071567
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10071480(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  FUN_10071858(param_1,0xffffffff,0,0);
  iVar1 = param_1 + 0xc;
  (*(code *)PTR_FUN_1009d03c)(iVar1);
  FUN_10071ad0(param_1);
  uVar2 = *(uint *)(param_1 + 0x44);
  uVar4 = 0;
  if (uVar2 != 0) {
    if (uVar2 == 0) {
      iVar3 = 8;
      goto LAB_10071500;
    }
    do {
      iVar3 = *(int *)(param_1 + 0x40) + uVar4 * 0x38 + 0x10;
LAB_10071500:
      FUN_10071568(param_1,iVar3);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x44));
  }
  FUN_1007a060(*(undefined4 *)(param_1 + 0x3c));
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  (*(code *)PTR_FUN_1009d090)(iVar1);
  (*(code *)PTR_FUN_1009d034)(iVar1);
  return;
}

