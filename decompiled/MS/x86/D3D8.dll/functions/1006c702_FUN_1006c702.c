/*
 * FUN_1006c702 at 1006c702
 * undefined4 __thiscall FUN_1006c702(void * this, int param_1, int param_2)
 * Address ranges: 1006c702-1006c71f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1006c702(void *this,int param_1,int param_2)

{
  return *(undefined4 *)
          ((*(int *)((int)this + -0x94) * param_2 + param_1) * 0x20 + 8 +
          *(int *)((int)this + -0x28));
}

