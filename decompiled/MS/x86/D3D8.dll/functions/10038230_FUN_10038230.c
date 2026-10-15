/*
 * FUN_10038230 at 10038230
 * undefined __thiscall FUN_10038230(void * this, int param_1, int param_2, undefined4 * param_3, undefined4 * param_4, undefined4 param_5)
 * Address ranges: 10038230-10038294
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10038230(void *this,int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 param_5)

{
  if (*(int **)((int)this + 0xdbe4) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xdbe4) + 4))
              (*(undefined4 *)((int)this + 0xdbf8),*(undefined4 *)((int)this + 0xdc08),0);
  }
  if (*(int **)((int)this + 0xdbf4) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xdbf4) + 4))
              (*(undefined4 *)((int)this + 0xdc18),*(undefined4 *)((int)this + 0xdc1c),0);
  }
  FUN_10045b79(this,param_1,param_2,'\x01',0,param_3,0,param_4,'\x01',param_5,0);
  return;
}

