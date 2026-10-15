/*
 * FUN_10084967 at 10084967
 * undefined __thiscall FUN_10084967(void * this, int param_1, int param_2, undefined4 param_3, undefined4 param_4, int * param_5, uint * param_6)
 * Address ranges: 10084967-10084998
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10084967(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5,
            uint *param_6)

{
  undefined4 extraout_ECX;
  
  FUN_100cef50(*(int *)((int)this + -0x7c) + 0x11c0);
  FUN_10083ef0((void *)((int)this + -0xc0),param_1,param_2,extraout_ECX,extraout_ECX,param_5,param_6
              );
  return;
}

