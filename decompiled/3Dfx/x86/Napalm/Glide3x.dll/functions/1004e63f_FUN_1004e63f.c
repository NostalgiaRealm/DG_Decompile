/*
 * FUN_1004e63f at 1004e63f
 * undefined __thiscall FUN_1004e63f(void * this, undefined4 * param_1, uint param_2)
 * Address ranges: 1004e63f-1004e678
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004e63f(void *this,undefined4 *param_1,uint param_2)

{
  if (*(char *)((int)this + 0xc) != '\0') {
    if (*(uint *)((int)this + 8) < (*(int *)((int)this + 4) - *(int *)this) + param_2) {
      FUN_1004e5e9(this,param_2);
    }
    FUN_10055d40(*(undefined4 **)((int)this + 4),param_1,param_2);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
  }
  return;
}

