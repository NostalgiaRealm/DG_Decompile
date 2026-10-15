/*
 * FUN_100a558a at 100a558a
 * undefined __thiscall FUN_100a558a(void * this, int param_1, uint * param_2)
 * Address ranges: 100a558a-100a55e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100a558a(void *this,int param_1,uint *param_2)

{
  uint *puVar1;
  undefined4 extraout_ECX;
  int local_1c [5];
  int local_8;
  
  FUN_10097e3d((void *)((int)this + 0x520),param_1,local_1c,&local_8);
  puVar1 = FUN_100a58a9((void *)(param_1 * 0x16c0 + 0x1c40 + (int)this),local_1c,local_8,param_2);
  if (puVar1 == (uint *)0x0) {
    FUN_100a5a36(this,param_1,local_1c,local_8,param_2,extraout_ECX,0);
  }
  return;
}

