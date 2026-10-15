/*
 * FUN_1004874e at 1004874e
 * undefined __thiscall FUN_1004874e(void * this, undefined4 * param_1, uint param_2)
 * Address ranges: 1004874e-10048787
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004874e(void *this,undefined4 *param_1,uint param_2)

{
  if (*(char *)((int)this + 0xc) != '\0') {
    if (*(uint *)((int)this + 8) < (*(int *)((int)this + 4) - *(int *)this) + param_2) {
      FUN_100486f8(this,param_2);
    }
    FUN_1004fd20(*(undefined4 **)((int)this + 4),param_1,param_2);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
  }
  return;
}

