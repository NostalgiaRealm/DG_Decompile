/*
 * FUN_10017ecb at 10017ecb
 * undefined __thiscall FUN_10017ecb(void * this, int param_1, int param_2, undefined4 param_3, undefined4 param_4, int * param_5, uint * param_6)
 * Address ranges: 10017ecb-10017efc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10017ecb(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5,
            uint *param_6)

{
  undefined4 extraout_ECX;
  
  FUN_100600a0(*(int *)((int)this + -0x7c) + 0x11c0);
  FUN_100174ed((void *)((int)this + -0xc0),param_1,param_2,extraout_ECX,extraout_ECX,param_5,param_6
              );
  return;
}

