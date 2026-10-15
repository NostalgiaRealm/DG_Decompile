/*
 * FUN_1001e800 at 1001e800
 * undefined FUN_1001e800(void)
 * Address ranges: 1001e800-1001e8ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1001e800(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5
            )

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((*(uint *)(*(int *)(param_1 + 0x18) + 0xdd0) >> 2 & 1) == 0) &&
     (*(int *)(DAT_10175b54 + 0x20) == 0)) {
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
  uVar3 = FUN_1001dbf0(param_1,param_2,param_3,param_4,1,param_5);
  if (bVar1) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return uVar3;
}

