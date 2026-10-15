/*
 * FUN_1000850f at 1000850f
 * undefined __thiscall FUN_1000850f(void * this, int param_1, undefined4 param_2, int param_3)
 * Address ranges: 1000850f-1000856c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000850f(void *this,int param_1,undefined4 param_2,int param_3)

{
  int *this_00;
  
  this_00 = *(int **)((int)this + 0x32e0);
  (**(code **)(*this_00 + 4))(0,0);
  FUN_100075fe(this_00,this_00 + 1,param_1,param_2,param_3 != 0);
  *(uint *)(this_00[0x6c] + 0x32a0) = *(uint *)(this_00[0x6c] + 0x32a0) & 0xffffc001 | this_00[0x39]
  ;
  *(undefined1 *)((int)this + 0x32d0) = 1;
  return;
}

