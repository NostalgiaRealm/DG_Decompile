/*
 * FUN_10021b3c at 10021b3c
 * undefined __thiscall FUN_10021b3c(void * this, int param_1, undefined1 param_2)
 * Address ranges: 10021b3c-10021b54
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10021b3c(void *this,int param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_10020f74(this,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar1 + 9) = param_2;
  }
  return;
}

