/*
 * FUN_1002c901 at 1002c901
 * undefined __thiscall FUN_1002c901(void * this, int param_1, int param_2, int param_3, uint param_4, undefined4 param_5, uint * param_6, uint param_7, int param_8, char param_9, undefined4 param_10)
 * Address ranges: 1002c901-1002c979
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1002c901(void *this,int param_1,int param_2,int param_3,uint param_4,undefined4 param_5,
            uint *param_6,uint param_7,int param_8,char param_9,undefined4 param_10)

{
  if (*(int **)((int)this + 0xdacc) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xdacc) + 4))
              (*(undefined4 *)((int)this + 0xdae0),*(undefined4 *)((int)this + 0xdaf0),0);
  }
  if (*(int **)((int)this + 0xdadc) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xdadc) + 4))
              (*(undefined4 *)((int)this + 0xdb00),*(undefined4 *)((int)this + 0xdb04),0);
  }
  FUN_100469e3(this,param_1,param_2,'\x01',0,param_3,param_4,param_5,param_6,param_7,param_8,
               param_9 != '\0','\0',param_10,0);
  return;
}

