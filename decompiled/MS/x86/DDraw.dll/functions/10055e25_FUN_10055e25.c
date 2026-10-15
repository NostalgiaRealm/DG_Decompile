/*
 * FUN_10055e25 at 10055e25
 * undefined __thiscall FUN_10055e25(void * this, int param_1, uint * param_2)
 * Address ranges: 10055e25-10055e81
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10055e25(void *this,int param_1,uint *param_2)

{
  uint *puVar1;
  undefined4 extraout_ECX;
  int local_1c [5];
  int local_8;
  
  FUN_1004b5c1((void *)((int)this + 0x520),param_1,local_1c,&local_8);
  puVar1 = FUN_10056144((void *)(param_1 * 0x16c0 + 0x1c40 + (int)this),local_1c,local_8,param_2);
  if (puVar1 == (uint *)0x0) {
    FUN_1004ae72(this,param_1,local_1c,local_8,param_2,extraout_ECX,0);
  }
  return;
}

