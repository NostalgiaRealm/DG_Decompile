/*
 * FUN_100138f1 at 100138f1
 * undefined __thiscall FUN_100138f1(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 * Address ranges: 100138f1-10013950
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100138f1(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  *(undefined4 *)((int)this + 0xd0) = param_1;
  local_18 = FUN_100131ca((int)this);
  local_20 = param_4;
  local_14 = param_6;
  local_1c = param_5;
  local_10 = param_7;
  local_28 = param_2;
  local_24 = param_3;
  local_c = 0;
  local_8 = 0;
  (**(code **)(**(int **)((int)this + 0xb8) + 0x2c))(&local_28);
  return;
}

