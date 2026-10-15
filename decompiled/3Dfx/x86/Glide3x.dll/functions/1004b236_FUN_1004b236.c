/*
 * FUN_1004b236 at 1004b236
 * undefined __thiscall FUN_1004b236(void * this, undefined4 * param_1, uint param_2)
 * Address ranges: 1004b236-1004b26f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004b236(void *this,undefined4 *param_1,uint param_2)

{
  if (*(char *)((int)this + 0xc) != '\0') {
    if (*(uint *)((int)this + 8) < (*(int *)((int)this + 4) - *(int *)this) + param_2) {
      FUN_1004b1e0(this,param_2);
    }
    FUN_10052930(*(undefined4 **)((int)this + 4),param_1,param_2);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
  }
  return;
}

