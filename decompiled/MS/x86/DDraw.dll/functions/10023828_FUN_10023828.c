/*
 * FUN_10023828 at 10023828
 * undefined __thiscall FUN_10023828(void * this, int * param_1)
 * Address ranges: 10023828-10023884
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10023828(void *this,int *param_1)

{
  FUN_10060d45(param_1,0,0x17c);
  FUN_10023796(this,param_1);
  *param_1 = 0x17c;
  param_1[0x5b] = *(int *)((int)this + 0x158);
  param_1[0x5c] = *(int *)((int)this + 0x15c);
  param_1[0x5d] = *(int *)((int)this + 0x160);
  param_1[0x5e] = *(int *)((int)this + 0x164);
  return;
}

