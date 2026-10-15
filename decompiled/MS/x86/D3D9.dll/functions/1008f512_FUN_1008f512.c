/*
 * FUN_1008f512 at 1008f512
 * undefined __thiscall FUN_1008f512(void * this, undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 1008f512-1008f53a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1008f512(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = &DAT_100d2ab0 + *(int *)((int)this + 0x1c) * 0x10;
  *param_2 = &DAT_100ddc70 + *(int *)((int)this + 0x1c) * 0x10;
  return;
}

