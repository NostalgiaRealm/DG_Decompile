/*
 * FUN_1006e781 at 1006e781
 * undefined __thiscall FUN_1006e781(void * this, int param_1, int param_2, undefined4 param_3, undefined4 param_4, int * param_5, uint * param_6)
 * Address ranges: 1006e781-1006e7b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1006e781(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5,
            uint *param_6)

{
  undefined4 extraout_ECX;
  
  FUN_100ac680(*(int *)((int)this + -0x7c) + 0x11c0);
  FUN_1006dda3((void *)((int)this + -0xc0),param_1,param_2,extraout_ECX,extraout_ECX,param_5,param_6
              );
  return;
}

