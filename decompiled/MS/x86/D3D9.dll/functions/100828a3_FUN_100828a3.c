/*
 * FUN_100828a3 at 100828a3
 * undefined4 __thiscall FUN_100828a3(void * this, int param_1, int param_2)
 * Address ranges: 100828a3-100828c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100828a3(void *this,int param_1,int param_2)

{
  return *(undefined4 *)
          ((*(int *)((int)this + -0x94) * param_2 + param_1) * 0x20 + 8 +
          *(int *)((int)this + -0x28));
}

