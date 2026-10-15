/*
 * FUN_1002a06c at 1002a06c
 * undefined __thiscall FUN_1002a06c(void * this, int param_1, int param_2, int param_3, int param_4, int param_5, uint param_6, uint param_7, int param_8, int param_9, byte param_10)
 * Address ranges: 1002a06c-1002a0b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1002a06c(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
            uint param_7,int param_8,int param_9,byte param_10)

{
  int iVar1;
  
  iVar1 = param_1 * 0x104 + 0x13c + (int)this;
  FUN_10029327(this,iVar1,param_2,param_3,param_4,param_5);
  FUN_10029b5b(iVar1,param_6,param_7,param_8,param_9,param_10);
  return;
}

