/*
 * FUN_100217f0 at 100217f0
 * undefined FUN_100217f0(void)
 * Address ranges: 100217f0-1002193f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_100217f0(int param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0x8876086c;
  if ((*(char *)(param_1 + 0x6c) != '\0') && (param_3 < *(ushort *)(param_1 + 0x30))) {
    puVar1 = (uint *)&DAT_00000dd0;
    if (*(int *)(param_1 + 0x14) != 0) {
      puVar1 = (uint *)(*(int *)(param_1 + 0x14) + -0x58e4);
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
    uVar4 = FUN_1001dbf0(*(undefined4 *)(*(int *)(param_1 + 0x38) + (param_3 + param_2 * 0x10) * 4),
                         param_4,param_5,param_6,*(int *)(param_1 + 0x60) == 0,0);
    if (bVar2) {
      (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
    }
    else {
      *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
    }
  }
  return uVar4;
}

