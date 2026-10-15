/*
 * FUN_10027196 at 10027196
 * undefined __thiscall FUN_10027196(void * this, undefined4 param_1)
 * Address ranges: 10027196-100271bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10027196(void *this,undefined4 param_1)

{
  *(bool *)param_1 =
       0xafff < *(int *)(*(int *)((int)this + 0x14c) * 0x1510 + 0x520 + *(int *)((int)this + 0x148))
  ;
  return;
}

