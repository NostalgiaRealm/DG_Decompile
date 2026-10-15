/*
 * FUN_100c7e5f at 100c7e5f
 * undefined __thiscall FUN_100c7e5f(void * this, int param_1, uint * param_2)
 * Address ranges: 100c7e5f-100c7ebb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100c7e5f(void *this,int param_1,uint *param_2)

{
  uint *puVar1;
  undefined4 extraout_ECX;
  int local_1c [5];
  int local_8;
  
  FUN_100ba419((void *)((int)this + 0x520),param_1,local_1c,&local_8);
  puVar1 = FUN_100c817e((void *)(param_1 * 0x16c0 + 0x1c40 + (int)this),local_1c,local_8,param_2);
  if (puVar1 == (uint *)0x0) {
    FUN_100c830b(this,param_1,local_1c,local_8,param_2,extraout_ECX,0);
  }
  return;
}

