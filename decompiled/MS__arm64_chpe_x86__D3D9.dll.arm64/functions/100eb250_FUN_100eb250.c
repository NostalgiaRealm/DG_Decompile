/*
 * FUN_100eb250 at 100eb250
 * undefined FUN_100eb250(void)
 * Address ranges: 100eb250-100eb33b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100eb250(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = (uint *)&DAT_00000dd0;
  if (*(int *)(param_1 + -0x3c) != 0) {
    puVar1 = (uint *)(*(int *)(param_1 + -0x3c) + -0x58e4);
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
  uVar4 = FUN_1001c7b8(param_1 + -0x48,param_2,param_3,param_4);
  if (bVar2) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return uVar4;
}

