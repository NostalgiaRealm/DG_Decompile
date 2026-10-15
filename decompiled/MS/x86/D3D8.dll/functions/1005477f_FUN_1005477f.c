/*
 * FUN_1005477f at 1005477f
 * undefined1 __stdcall FUN_1005477f(int param_1, undefined4 param_2, undefined4 param_3, undefined1 param_4, undefined1 param_5, int param_6, int * param_7, undefined4 * param_8, int param_9, int * param_10, undefined4 * param_11)
 * Address ranges: 1005477f-10054903
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_1005477f(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,undefined1 param_5
            ,int param_6,int *param_7,undefined4 *param_8,int param_9,int *param_10,
            undefined4 *param_11)

{
  char cVar1;
  int local_7f0 [2];
  undefined4 local_7e8;
  undefined4 local_7e4;
  int local_7d8 [12];
  undefined1 *local_7a8;
  undefined2 local_7a4;
  undefined1 local_78c;
  undefined1 local_78a [190];
  undefined4 local_6cc;
  undefined4 uStack_6c8;
  undefined4 uStack_6c4;
  undefined4 uStack_6c0;
  undefined2 uStack_6bc;
  undefined4 local_6ba;
  undefined4 uStack_6b6;
  undefined4 uStack_6b2;
  undefined4 uStack_6ae;
  undefined2 uStack_6aa;
  uint local_6a8;
  uint local_658;
  int local_654;
  int *local_650;
  undefined1 local_641;
  undefined4 local_370;
  undefined4 local_36c;
  undefined2 local_352;
  undefined1 local_350;
  undefined1 local_34f;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined2 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined2 uStack_1c;
  undefined1 local_11;
  
  FUN_100ada8e(local_7f0,0,0x7b0);
  local_7e8 = param_2;
  local_7e4 = param_3;
  FUN_100ada8e(local_7d8,0,0x38);
  local_7d8[0] = param_9;
  local_7a8 = local_78a;
  local_7a4 = 0x40;
  local_78c = param_5;
  local_654 = param_1;
  local_641 = 0;
  local_370 = param_2;
  local_658 = *(uint *)(param_1 + 0x44) & 0x77fff;
  local_36c = param_3;
  local_34f = param_4;
  local_650 = local_7f0;
  local_352 = 0;
  local_350 = 1;
  FUN_100562fd((int)local_650);
  FUN_10053f60((int)local_7f0);
  local_11 = 0;
  cVar1 = FUN_10054530((uint)local_7f0,param_10,param_11);
  if (cVar1 != '\0') {
    FUN_100ada8e(local_7d8,0,0x38);
    local_7d8[0] = param_6;
    local_7a4 = 0x40;
    local_7a8 = local_78a;
    local_78c = 0;
    local_2c = local_6cc;
    uStack_28 = uStack_6c8;
    uStack_24 = uStack_6c4;
    uStack_20 = uStack_6c0;
    uStack_1c = uStack_6bc;
    local_40 = local_6ba;
    uStack_3c = uStack_6b6;
    uStack_38 = uStack_6b2;
    uStack_34 = uStack_6ae;
    uStack_30 = uStack_6aa;
    local_11 = FUN_1005464b((uint)local_7f0,param_7,(int)&local_40,(int)&local_2c,local_6a8,param_8)
    ;
  }
  return local_11;
}

