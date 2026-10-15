/*
 * FUN_1000f2e0 at 1000f2e0
 * undefined FUN_1000f2e0(void)
 * Address ranges: 1000f2e0-1000f3ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000f2e0(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_2 < 8 && param_3 != 0) && param_3 < 0x21) {
    if (*(char *)(*(int *)(param_1 + 8) + param_3 * 0xc) == '\0') {
      uVar3 = 0x8876086c;
    }
    else {
      if (((*(uint *)(param_1 + 0xdd0) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
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
      FUN_10025960(param_1,param_2,param_3,param_4);
      if (bVar1) {
        (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
      }
      else {
        *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
      }
    }
  }
  return uVar3;
}

