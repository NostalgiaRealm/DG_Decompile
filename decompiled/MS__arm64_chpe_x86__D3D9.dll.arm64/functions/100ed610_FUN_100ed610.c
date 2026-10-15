/*
 * FUN_100ed610 at 100ed610
 * undefined FUN_100ed610(void)
 * Address ranges: 100ed610-100ed703
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100ed610(int param_1,uint param_2)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0x8876086c;
  if (param_2 < *(ushort *)(param_1 + -0x98)) {
    puVar1 = (uint *)&DAT_00000dd0;
    if (*(int *)(param_1 + -0xb4) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + -0xb4) + -0x58e4);
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
    uVar4 = FUN_100229c0(*(undefined4 *)(param_1 + param_2 * 4 + -0x90));
    if (bVar2) {
      (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
    }
    else {
      *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
    }
  }
  return uVar4;
}

