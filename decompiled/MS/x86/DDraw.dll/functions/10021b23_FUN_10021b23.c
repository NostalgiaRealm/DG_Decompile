/*
 * FUN_10021b23 at 10021b23
 * undefined __thiscall FUN_10021b23(void * this, int param_1, undefined4 param_2)
 * Address ranges: 10021b23-10021b3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10021b23(void *this,int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_10020f74(this,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[6] = param_2;
  }
  return;
}

