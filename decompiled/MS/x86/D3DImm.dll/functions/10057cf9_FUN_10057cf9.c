/*
 * FUN_10057cf9 at 10057cf9
 * undefined __thiscall FUN_10057cf9(void * this, undefined4 * param_1, uint param_2)
 * Address ranges: 10057cf9-10057d32
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10057cf9(void *this,undefined4 *param_1,uint param_2)

{
  if (*(char *)((int)this + 0xc) != '\0') {
    if (*(uint *)((int)this + 8) < (*(int *)((int)this + 4) - *(int *)this) + param_2) {
      FUN_10057ca3(this,param_2);
    }
    FUN_1005ca00(*(undefined4 **)((int)this + 4),param_1,param_2);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
  }
  return;
}

