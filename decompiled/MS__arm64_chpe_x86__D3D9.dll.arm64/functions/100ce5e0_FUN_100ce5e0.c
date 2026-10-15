/*
 * FUN_100ce5e0 at 100ce5e0
 * undefined FUN_100ce5e0(void)
 * Address ranges: 100ce5e0-100ce68f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_100ce5e0(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  uVar1 = 0;
  puVar2 = (undefined4 *)FUN_100ccac8(param_1,param_2);
  if (puVar2 != (undefined4 *)0x0) {
    iVar3 = FUN_101105c0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)*puVar2);
    if (iVar3 == 0 || iVar3 == param_1) {
      uVar1 = FUN_101106d8(*(undefined4 *)(param_1 + 0x10),*puVar2,0,0);
      FUN_100ccc08(param_1,puVar2[5],0);
      FUN_101325a0(param_1 + puVar2[5] * 0xc18 + 0x100a8,param_1 + 0x1c228,0xc00);
    }
  }
  return uVar1;
}

