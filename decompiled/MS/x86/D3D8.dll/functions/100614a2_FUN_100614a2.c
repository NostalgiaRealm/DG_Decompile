/*
 * FUN_100614a2 at 100614a2
 * undefined __thiscall FUN_100614a2(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4)
 * Address ranges: 100614a2-10061527
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_100614a2(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar2 = param_1;
  local_14 = 3;
  local_c = 0x10000;
  iVar1 = *(int *)this;
  *(undefined4 *)(iVar1 + param_1 * 0x10) = param_2;
  *(undefined4 *)(iVar1 + 4 + param_1 * 0x10) = param_3;
  *(undefined4 *)(*(int *)this + 8 + param_1 * 0x10) = *param_4;
  local_30 = 0x400;
  local_2c = 0x400;
  local_20 = *param_4;
  local_28 = 1;
  local_24 = 1;
  local_1c = 1;
  local_18 = 0;
  local_10 = 0;
  local_8 = 0;
  param_1 = 0;
  (**(code **)(*(int *)**(undefined4 **)((int)this + 0xc) + 0x14))
            ((int *)**(undefined4 **)((int)this + 0xc),&local_30,0,&param_1);
  *(int *)(*(int *)this + 0xc + iVar2 * 0x10) = param_1;
  return;
}

