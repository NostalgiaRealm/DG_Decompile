/*
 * FUN_1001e33c at 1001e33c
 * undefined __thiscall FUN_1001e33c(void * this, undefined4 param_1, uint param_2, int param_3)
 * Address ranges: 1001e33c-1001e393
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001e33c(void *this,undefined4 param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  FUN_1001ee7e((void *)((int)this + 0x4090),0,0);
  FUN_1000cf4c((int)this);
  FUN_1001e2d9(this,param_1,param_2,param_3);
  uVar1 = 3;
  do {
    FUN_1001fc37(this,uVar1,param_2,param_3 + param_2);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 7);
  FUN_1000d002((int)this);
  return;
}

