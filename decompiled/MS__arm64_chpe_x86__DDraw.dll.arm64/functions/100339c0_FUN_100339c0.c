/*
 * FUN_100339c0 at 100339c0
 * undefined FUN_100339c0(void)
 * Address ranges: 100339c0-10033a6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_100339c0(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  uVar1 = 0;
  puVar2 = (undefined4 *)FUN_10031ee0(param_1,param_2);
  if (puVar2 != (undefined4 *)0x0) {
    iVar3 = FUN_1006f7d0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)*puVar2);
    if (iVar3 == 0 || iVar3 == param_1) {
      uVar1 = FUN_1006f8e8(*(undefined4 *)(param_1 + 0x10),*puVar2,0,0);
      FUN_10032010(param_1,puVar2[5],0);
      FUN_100917a0(param_1 + puVar2[5] * 0xc18 + 0xa8,param_1 + 0xc228,0xc00);
    }
  }
  return uVar1;
}

