/*
 * FUN_10031ee0 at 10031ee0
 * undefined FUN_10031ee0(void)
 * Address ranges: 10031ee0-10031f2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10031ee0(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (*(uint *)(param_1 + 0x9c) != 0) {
    uVar2 = 0;
    do {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x98) + uVar2 * 0x28);
      if (param_2 == *(int *)*puVar1) {
        return puVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x9c));
  }
  return (undefined4 *)0x0;
}

