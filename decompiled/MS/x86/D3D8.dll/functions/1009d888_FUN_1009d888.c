/*
 * FUN_1009d888 at 1009d888
 * bool __thiscall FUN_1009d888(void * this, int param_1, undefined4 param_2)
 * Address ranges: 1009d888-1009d911
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_1009d888(void *this,int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_54 [2];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined2 local_38;
  undefined2 local_36;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_18 [5];
  
  local_44 = *(undefined4 *)((int)this + 0x28);
  local_18[0] = param_1;
  local_54[0] = 1;
  local_4c = 0x10000;
  local_48 = 0;
  uVar1 = 0;
  local_40 = 0;
  local_3c = 1;
  local_38 = 1;
  local_36 = 1;
  local_34 = 0;
  local_30 = 1;
  local_2c = 0;
  local_28 = 1;
  local_24 = 0;
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
  FUN_10097def(*(void **)((int)this + 8),*(int *)((int)this + 0xc),local_18,param_2,local_54,uVar1,0
               ,this,(int *)((int)this + 0x40));
  return *(int *)((int)this + 0x40) != 0;
}

