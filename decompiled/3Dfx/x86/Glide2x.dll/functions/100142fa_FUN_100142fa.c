/*
 * FUN_100142fa at 100142fa
 * undefined __thiscall FUN_100142fa(void * this, int param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, undefined4 * param_8)
 * Address ranges: 100142fa-10014335
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100142fa(void *this,int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6
            ,uint param_7,undefined4 *param_8)

{
  uint uVar1;
  
  uVar1 = FUN_10014a85(param_3,param_5);
  FUN_10014336(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
               (uVar1 & 0xffff) - 1);
  return;
}

