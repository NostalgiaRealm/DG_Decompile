/*
 * FUN_1007804f at 1007804f
 * undefined __thiscall FUN_1007804f(void * this, int param_1, int param_2)
 * Address ranges: 1007804f-10078086
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1007804f(void *this,int param_1,int param_2)

{
  if (*(int *)((int)this + 0x74) != 0) {
    FUN_10077e7e(this,*(int **)((int)this + 0x74),*(int **)((int)this + 0x54),param_1,param_2,
                 (RECT *)(*(int *)((int)this + 0x60) + 0xc +
                         (*(int *)((int)this + 0x2c) * param_2 + param_1) * 0x1c));
  }
  return;
}

