/*
 * FUN_10007f29 at 10007f29
 * undefined __thiscall FUN_10007f29(void * this, undefined4 * param_1, int param_2, int param_3)
 * Address ranges: 10007f29-10007f5a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10007f29(void *this,undefined4 *param_1,int param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_10007eb7(this,param_1,0);
    param_1 = (undefined4 *)((int)param_1 + param_2);
    *(int *)((int)this + 0x1d0) = *(int *)((int)this + 0x1d0) + 0x50;
  }
  return;
}

