/*
 * FUN_100addf0 at 100addf0
 * undefined FUN_100addf0(void)
 * Address ranges: 100addf0-100ade9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_100addf0(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  uVar1 = 0;
  puVar2 = (undefined4 *)FUN_100ac2d8(param_1,param_2);
  if (puVar2 != (undefined4 *)0x0) {
    iVar3 = FUN_100dde80(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)*puVar2);
    if (iVar3 == 0 || iVar3 == param_1) {
      uVar1 = FUN_100ddf98(*(undefined4 *)(param_1 + 0x10),*puVar2,0,0);
      FUN_100ac418(param_1,puVar2[5],0);
      FUN_100ff660(param_1 + puVar2[5] * 0xc18 + 0x100a8,param_1 + 0x1c228,0xc00);
    }
  }
  return uVar1;
}

