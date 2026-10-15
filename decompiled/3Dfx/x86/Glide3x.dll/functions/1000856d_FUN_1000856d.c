/*
 * FUN_1000856d at 1000856d
 * undefined __thiscall FUN_1000856d(void * this, int param_1)
 * Address ranges: 1000856d-100085c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000856d(void *this,int param_1)

{
  int *this_00;
  
  this_00 = *(int **)((int)this + 0x32e0);
  (**(code **)(*this_00 + 4))(0,0);
  FUN_10007678(this_00,this_00 + 1,param_1);
  *(uint *)(this_00[0x6c] + 0x32a0) = *(uint *)(this_00[0x6c] + 0x32a0) & 0xffffc001 | this_00[0x39]
  ;
  *(undefined1 *)(this_00[0x6c] + 0x32d0) = 1;
  *(undefined1 *)((int)this + 0x32d0) = 1;
  return;
}

