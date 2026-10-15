/*
 * FUN_100a14c1 at 100a14c1
 * undefined __thiscall FUN_100a14c1(void * this, undefined4 * param_1, uint param_2)
 * Address ranges: 100a14c1-100a14fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100a14c1(void *this,undefined4 *param_1,uint param_2)

{
  if (*(char *)((int)this + 0xc) != '\0') {
    if (*(uint *)((int)this + 8) < (*(int *)((int)this + 4) - *(int *)this) + param_2) {
      FUN_10001947(this,param_2);
    }
    FUN_100adac0(*(undefined4 **)((int)this + 4),param_1,param_2);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
  }
  return;
}

