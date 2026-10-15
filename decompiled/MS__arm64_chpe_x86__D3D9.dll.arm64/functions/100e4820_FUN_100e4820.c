/*
 * FUN_100e4820 at 100e4820
 * undefined FUN_100e4820(void)
 * Address ranges: 100e4820-100e494b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100e4820(int param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((*(uint *)(param_1 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar1 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    bVar1 = true;
    iVar2 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar2 == 0) {
      FUN_100071d0(0);
    }
  }
  uVar3 = 0x8876086c;
  if (((param_2 < 8 && param_3 != 0) && param_3 < 0x21) && param_4 != (undefined4 *)0x0) {
    if (*(char *)(*(int *)(param_1 + -0x66ac) + param_3 * 0xc) == '\0') {
      *param_4 = 0;
    }
    else {
      uVar3 = 0;
      *param_4 = *(undefined4 *)(param_3 * 4 + param_2 * 0x84 + param_1 + -0x5f3c);
    }
  }
  if (bVar1) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return uVar3;
}

