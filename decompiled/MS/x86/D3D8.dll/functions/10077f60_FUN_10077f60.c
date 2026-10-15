/*
 * FUN_10077f60 at 10077f60
 * undefined4 * __thiscall FUN_10077f60(void * this, int param_1)
 * Address ranges: 10077f60-10077f97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10077f60(void *this,int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(uint *)((int)this + 0x1009c) != 0) {
    do {
      puVar1 = (undefined4 *)(uVar2 * 0x28 + *(int *)((int)this + 0x10098));
      if (param_1 == *(int *)*puVar1) {
        return puVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((int)this + 0x1009c));
  }
  return (undefined4 *)0x0;
}

