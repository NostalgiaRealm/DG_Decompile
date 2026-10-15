/*
 * FUN_10020bb2 at 10020bb2
 * undefined __thiscall FUN_10020bb2(void * this, int param_1, byte param_2)
 * Address ranges: 10020bb2-10020bd9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10020bb2(void *this,int param_1,byte param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)this + (uint)param_2 * 0x20 + param_1 * 0x120 + 0x224);
  (**(code **)(*piVar1 + 0x24))(piVar1,0,0);
  return;
}

