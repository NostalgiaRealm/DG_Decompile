/*
 * FUN_1002c89c at 1002c89c
 * undefined __thiscall FUN_1002c89c(void * this, int param_1, int param_2, undefined4 * param_3, uint param_4, undefined4 * param_5, undefined4 param_6)
 * Address ranges: 1002c89c-1002c900
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1002c89c(void *this,int param_1,int param_2,undefined4 *param_3,uint param_4,undefined4 *param_5
            ,undefined4 param_6)

{
  if (*(int **)((int)this + 0xdacc) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xdacc) + 4))
              (*(undefined4 *)((int)this + 0xdae0),*(undefined4 *)((int)this + 0xdaf0),0);
  }
  if (*(int **)((int)this + 0xdadc) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xdadc) + 4))
              (*(undefined4 *)((int)this + 0xdb00),*(undefined4 *)((int)this + 0xdb04),0);
  }
  FUN_10045b79(this,param_1,param_2,'\x01',0,param_3,param_4,param_5,'\0',param_6,0);
  return;
}

