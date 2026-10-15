/*
 * FUN_10009e7a at 10009e7a
 * undefined __thiscall FUN_10009e7a(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 10009e7a-10009ec4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10009e7a(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)((int)this + 0x3368) = param_2;
  *(undefined4 *)((int)this + 0x3340) = param_3;
  *(undefined4 *)((int)this + 0x3344) = param_4;
  *(undefined4 *)((int)this + 0x3370) = *(undefined4 *)(&DAT_100557f4 + param_1 * 4);
  *(undefined1 *)((int)this + 0x33b6) = 1;
  FUN_10040152(*(int *)(*(int *)((int)this + 0x3308) + 0x1304),param_1);
  return;
}

