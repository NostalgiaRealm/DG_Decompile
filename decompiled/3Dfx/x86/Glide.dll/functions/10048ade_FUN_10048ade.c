/*
 * FUN_10048ade at 10048ade
 * undefined __thiscall FUN_10048ade(void * this, undefined4 * param_1, uint param_2)
 * Address ranges: 10048ade-10048b17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10048ade(void *this,undefined4 *param_1,uint param_2)

{
  if (*(char *)((int)this + 0xc) != '\0') {
    if (*(uint *)((int)this + 8) < (*(int *)((int)this + 4) - *(int *)this) + param_2) {
      FUN_10048a88(this,param_2);
    }
    FUN_100500b0(*(undefined4 **)((int)this + 4),param_1,param_2);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
  }
  return;
}

