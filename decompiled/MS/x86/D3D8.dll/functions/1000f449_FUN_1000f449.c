/*
 * FUN_1000f449 at 1000f449
 * undefined __thiscall FUN_1000f449(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, LONG * param_6, LONG * param_7, undefined1 param_8, int param_9, int param_10, RECT * param_11)
 * Address ranges: 1000f449-1000f4c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1000f449(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,LONG *param_6,LONG *param_7,undefined1 param_8,int param_9,
            int param_10,RECT *param_11)

{
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (param_10 == 0) {
    param_10 = *(int *)((int)this + 0x48);
  }
  local_34 = param_4;
  local_30 = param_5;
  local_2c = *(undefined4 *)((int)this + 0x7c);
  local_28 = *(undefined4 *)((int)this + 0x10);
  local_24 = *(undefined4 *)((int)this + 0xc);
  local_20 = *(undefined4 *)((int)this + 0x6c);
  local_1c = *(undefined4 *)((int)this + 0x70);
  local_18 = *(int *)((int)this + 100);
  local_14 = *(undefined4 *)((int)this + 0x4c);
  local_10 = *(undefined4 *)((int)this + 0x68);
  local_c = *(undefined4 *)((int)this + 0x50);
  local_38 = param_10;
  FUN_100252d3(&local_38,*(int **)((int)this + 0x44),param_1,this,this,param_6,param_7,param_11,
               param_9,this,param_8,&local_18);
  return;
}

