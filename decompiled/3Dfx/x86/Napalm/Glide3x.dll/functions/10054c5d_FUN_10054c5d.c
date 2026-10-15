/*
 * FUN_10054c5d at 10054c5d
 * bool __thiscall FUN_10054c5d(void * this, int param_1, undefined4 param_2)
 * Address ranges: 10054c5d-10054ce6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_10054c5d(void *this,int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined2 local_32;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_18 [5];
  
  local_40 = *(undefined4 *)((int)this + 0x28);
  local_18[0] = param_1;
  local_50[0] = 1;
  local_48 = 0x10000;
  local_44 = 0;
  uVar1 = 0;
  local_3c = 0;
  local_38 = 1;
  local_34 = 1;
  local_32 = 1;
  local_30 = 0;
  local_2c = 1;
  local_28 = 0;
  local_24 = 1;
  local_20 = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  local_18[4] = 0;
  if (param_1 == 2) {
    uVar1 = 0xac3;
  }
  else if (param_1 == 3) {
    uVar1 = 0x400;
  }
  FUN_1004180a(*(void **)((int)this + 8),*(int *)((int)this + 0xc),local_18,param_2,local_50,uVar1,
               this,this,(int *)((int)this + 0x40));
  return *(int *)((int)this + 0x40) != 0;
}

