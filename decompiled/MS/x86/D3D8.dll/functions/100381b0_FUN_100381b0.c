/*
 * FUN_100381b0 at 100381b0
 * undefined __thiscall FUN_100381b0(void * this, int param_1, int param_2, int param_3, uint param_4, undefined4 param_5, uint * param_6, uint param_7, int param_8, char param_9, undefined4 param_10)
 * Address ranges: 100381b0-10038221
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100381b0(void *this,int param_1,int param_2,int param_3,uint param_4,undefined4 param_5,
            uint *param_6,uint param_7,int param_8,char param_9,undefined4 param_10)

{
  if (*(int **)((int)this + 0xdbe4) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xdbe4) + 4))
              (*(undefined4 *)((int)this + 0xdbf8),*(undefined4 *)((int)this + 0xdc08),0);
  }
  if (*(int **)((int)this + 0xdbf4) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xdbf4) + 4))
              (*(undefined4 *)((int)this + 0xdc18),*(undefined4 *)((int)this + 0xdc1c),0);
  }
  FUN_100469e3(this,param_1,param_2,'\x01',0,param_3,param_4,param_5,param_6,param_7,param_8,param_9
               ,'\0',param_10,0);
  return;
}

