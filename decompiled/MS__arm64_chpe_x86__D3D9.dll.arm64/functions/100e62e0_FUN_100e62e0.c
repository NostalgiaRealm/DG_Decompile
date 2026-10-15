/*
 * FUN_100e62e0 at 100e62e0
 * undefined FUN_100e62e0(void)
 * Address ranges: 100e62e0-100e63b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100e62e0(int param_1,undefined4 param_2)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = (uint *)&DAT_00000dd0;
  if (*(int *)(param_1 + -0x20) != 0) {
    puVar1 = (uint *)(*(int *)(param_1 + -0x20) + -0x58e4);
  }
  if (((*puVar1 >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar2 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    bVar2 = true;
    iVar3 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar3 == 0) {
      FUN_100071d0(0);
    }
  }
  uVar4 = FUN_1001c8f0(param_1 + -0x2c,param_2);
  if (bVar2) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return uVar4;
}

