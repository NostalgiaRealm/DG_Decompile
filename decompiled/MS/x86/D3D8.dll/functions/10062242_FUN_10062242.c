/*
 * FUN_10062242 at 10062242
 * undefined __thiscall FUN_10062242(void * this, int param_1, int param_2)
 * Address ranges: 10062242-10062279
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10062242(void *this,int param_1,int param_2)

{
  if (*(int *)((int)this + 0x74) != 0) {
    FUN_10062071(this,*(int **)((int)this + 0x74),*(int **)((int)this + 0x54),param_1,param_2,
                 (RECT *)(*(int *)((int)this + 0x60) + 0xc +
                         (*(int *)((int)this + 0x2c) * param_2 + param_1) * 0x1c));
  }
  return;
}

