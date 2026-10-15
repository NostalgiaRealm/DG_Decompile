/*
 * FUN_10020839 at 10020839
 * undefined __thiscall FUN_10020839(void * this, char param_1, char param_2, char param_3, char param_4)
 * Address ranges: 10020839-10020894
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10020839(void *this,char param_1,char param_2,char param_3,char param_4)

{
  FUN_10010137(this,*(int *)((int)this + 0x2b2c) != 0,*(int *)((int)this + 0x2b30) != 0,param_1,
               param_2,param_3,param_4);
  *(char *)((int)this + 0x2b89) = param_2;
  *(char *)((int)this + 0x2b8a) = param_3;
  *(char *)((int)this + 0x2b88) = param_1;
  *(char *)((int)this + 0x2b8b) = param_4;
  return;
}

