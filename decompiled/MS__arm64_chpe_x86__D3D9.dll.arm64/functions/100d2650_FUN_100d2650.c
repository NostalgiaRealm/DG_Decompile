/*
 * FUN_100d2650 at 100d2650
 * undefined FUN_100d2650(void)
 * Address ranges: 100d2650-100d2787
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100d2650(int param_1,uint param_2,uint param_3,int param_4)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  puVar1 = (uint *)&DAT_00000dd0;
  if (*(int *)(param_1 + -100) != 0) {
    puVar1 = (uint *)(*(int *)(param_1 + -100) + -0x58e4);
  }
  uVar4 = 0x8876086c;
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
  if (param_2 < 6) {
    if ((*(uint *)(param_1 + -0x24) >> 10 & 1) == 0) {
      uVar5 = (uint)*(ushort *)(param_1 + -0x48);
    }
    else {
      uVar5 = 1;
    }
    if (param_3 < uVar5 && param_4 != 0) {
      uVar4 = FUN_100e8700(*(int *)(param_1 + (param_3 + param_2 * 0x10) * 4 + 0x10) + 0x5c,
                           &DAT_1015e4b0,param_4);
    }
  }
  if (bVar2) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return uVar4;
}

