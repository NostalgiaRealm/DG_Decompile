/*
 * FUN_100ccac8 at 100ccac8
 * undefined FUN_100ccac8(void)
 * Address ranges: 100ccac8-100ccb1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_100ccac8(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (*(uint *)(param_1 + 0x1009c) != 0) {
    uVar2 = 0;
    do {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x10098) + uVar2 * 0x28);
      if (param_2 == *(int *)*puVar1) {
        return puVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x1009c));
  }
  return (undefined4 *)0x0;
}

