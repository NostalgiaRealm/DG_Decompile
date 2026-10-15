/*
 * FUN_10038140 at 10038140
 * undefined __thiscall FUN_10038140(void * this, int param_1, int param_2, undefined4 * param_3, uint param_4, undefined4 * param_5, undefined4 param_6)
 * Address ranges: 10038140-100381a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10038140(void *this,int param_1,int param_2,undefined4 *param_3,uint param_4,undefined4 *param_5
            ,undefined4 param_6)

{
  if (*(int **)((int)this + 0xdbe4) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xdbe4) + 4))
              (*(undefined4 *)((int)this + 0xdbf8),*(undefined4 *)((int)this + 0xdc08),0);
  }
  if (*(int **)((int)this + 0xdbf4) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xdbf4) + 4))
              (*(undefined4 *)((int)this + 0xdc18),*(undefined4 *)((int)this + 0xdc1c),0);
  }
  FUN_10045b79(this,param_1,param_2,'\x01',0,param_3,param_4,param_5,'\0',param_6,0);
  return;
}

