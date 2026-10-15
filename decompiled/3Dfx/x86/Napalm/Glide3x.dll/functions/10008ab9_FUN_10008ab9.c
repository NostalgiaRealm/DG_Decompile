/*
 * FUN_10008ab9 at 10008ab9
 * undefined __thiscall FUN_10008ab9(void * this, int param_1, undefined4 param_2, int param_3)
 * Address ranges: 10008ab9-10008b16
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10008ab9(void *this,int param_1,undefined4 param_2,int param_3)

{
  int *this_00;
  
  this_00 = *(int **)((int)this + 0x3660);
  (**(code **)(*this_00 + 4))(0,0);
  FUN_10007ba8(this_00,this_00 + 1,param_1,param_2,param_3 != 0);
  *(uint *)(this_00[0x6c] + 0x3620) = *(uint *)(this_00[0x6c] + 0x3620) & 0xffffc001 | this_00[0x39]
  ;
  *(undefined1 *)((int)this + 0x3650) = 1;
  return;
}

