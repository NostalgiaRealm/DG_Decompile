/*
 * FUN_10021b55 at 10021b55
 * undefined __thiscall FUN_10021b55(void * this, int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 10021b55-10021b73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10021b55(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_10020f74(this,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[7] = param_2;
    puVar1[8] = param_3;
  }
  return;
}

