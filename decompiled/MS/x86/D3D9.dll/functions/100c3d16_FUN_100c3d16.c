/*
 * FUN_100c3d16 at 100c3d16
 * undefined __thiscall FUN_100c3d16(void * this, undefined4 * param_1, uint param_2)
 * Address ranges: 100c3d16-100c3d4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100c3d16(void *this,undefined4 *param_1,uint param_2)

{
  if (*(char *)((int)this + 0xc) != '\0') {
    if (*(uint *)((int)this + 8) < (*(int *)((int)this + 4) - *(int *)this) + param_2) {
      FUN_100017d3(this,param_2);
    }
    FUN_100cff00(*(undefined4 **)((int)this + 4),param_1,param_2);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
  }
  return;
}

