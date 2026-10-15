/*
 * FUN_10078e36 at 10078e36
 * undefined4 __thiscall FUN_10078e36(void * this, int param_1, int param_2)
 * Address ranges: 10078e36-10078ec8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10078e36(void *this,int param_1,int param_2)

{
  int *this_00;
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  void *local_8;
  
  this_00 = (int *)((int)this + -0x88);
  local_8 = this;
  FUN_100b8667(*(void **)((int)this + -0x48),this,(int)this_00);
  uVar1 = FUN_1007887b(this_00,param_1,param_2);
  local_18 = 0;
  local_14 = 0;
  local_10 = FUN_1008f54a(this_00,*(uint *)((int)local_8 + -0x74),(byte)param_1);
  local_c = FUN_1008f57f(this_00,*(uint *)((int)local_8 + -0x70),(byte)param_1);
  (**(code **)(*this_00 + 8))(*(int *)((int)local_8 + -0x5c) * param_2 + param_1,&local_18);
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)local_8 + -0x48) + 0x4a0));
  return uVar1;
}

