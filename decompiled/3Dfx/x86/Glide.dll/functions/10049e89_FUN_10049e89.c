/*
 * FUN_10049e89 at 10049e89
 * undefined __thiscall FUN_10049e89(void * this, uint * param_1)
 * Address ranges: 10049e89-10049ec3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10049e89(void *this,uint *param_1)

{
  *(uint *)((int)this + 0x34) = *(int *)((int)this + 0x34) - param_1[2];
  FUN_100398cb(*(void **)((int)this + 0x24),*param_1,'\x01');
  (**(code **)(*(int *)*param_1 + 8))((int *)*param_1);
  thunk_FUN_1004f9b6((LPVOID)param_1[4]);
  thunk_FUN_1004f9b6((LPVOID)param_1[5]);
  return;
}

