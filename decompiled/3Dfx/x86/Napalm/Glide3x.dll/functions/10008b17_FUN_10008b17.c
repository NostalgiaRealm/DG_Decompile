/*
 * FUN_10008b17 at 10008b17
 * undefined __thiscall FUN_10008b17(void * this, int param_1)
 * Address ranges: 10008b17-10008b73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10008b17(void *this,int param_1)

{
  int *this_00;
  
  this_00 = *(int **)((int)this + 0x3660);
  (**(code **)(*this_00 + 4))(0,0);
  FUN_10007c22(this_00,this_00 + 1,param_1);
  *(uint *)(this_00[0x6c] + 0x3620) = *(uint *)(this_00[0x6c] + 0x3620) & 0xffffc001 | this_00[0x39]
  ;
  *(undefined1 *)(this_00[0x6c] + 0x3650) = 1;
  *(undefined1 *)((int)this + 0x3650) = 1;
  return;
}

