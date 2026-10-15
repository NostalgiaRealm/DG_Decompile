/*
 * FUN_10015e4e at 10015e4e
 * undefined4 __thiscall FUN_10015e4e(void * this, int param_1, int param_2)
 * Address ranges: 10015e4e-10015e6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10015e4e(void *this,int param_1,int param_2)

{
  return *(undefined4 *)
          ((*(int *)((int)this + -0x94) * param_2 + param_1) * 0x20 + 8 +
          *(int *)((int)this + -0x28));
}

