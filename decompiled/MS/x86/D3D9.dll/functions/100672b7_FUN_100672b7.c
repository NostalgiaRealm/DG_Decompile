/*
 * FUN_100672b7 at 100672b7
 * undefined1 __stdcall FUN_100672b7(int param_1, undefined4 param_2, undefined4 param_3, undefined1 param_4, undefined1 param_5, int param_6, int * param_7, undefined4 * param_8, int param_9, int * param_10, undefined4 * param_11)
 * Address ranges: 100672b7-1006743e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_100672b7(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,undefined1 param_5
            ,int param_6,int *param_7,undefined4 *param_8,int param_9,int *param_10,
            undefined4 *param_11)

{
  char cVar1;
  int local_880 [2];
  undefined4 local_878;
  undefined4 local_874;
  int local_868 [12];
  undefined1 *local_838;
  undefined2 local_834;
  undefined1 local_81c;
  undefined1 local_81a [190];
  undefined4 local_75c;
  undefined4 uStack_758;
  undefined4 uStack_754;
  undefined4 uStack_750;
  undefined2 uStack_74c;
  undefined4 local_74a;
  undefined4 uStack_746;
  undefined4 uStack_742;
  undefined4 uStack_73e;
  undefined2 uStack_73a;
  uint local_738;
  uint local_6e4;
  int local_6e0;
  int *local_6dc;
  undefined1 local_6cd;
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
  
  FUN_100cfed0(local_880,0,0x840);
  local_878 = param_2;
  local_874 = param_3;
  FUN_100cfed0(local_868,0,0x38);
  local_868[0] = param_9;
  local_838 = local_81a;
  local_834 = 0x40;
  local_81c = param_5;
  local_6e0 = param_1;
  local_6cd = 0;
  local_370 = param_2;
  local_6e4 = *(uint *)(param_1 + 0x44) & 0x77fff;
  local_36c = param_3;
  local_34f = param_4;
  local_6dc = local_880;
  local_352 = 0;
  local_350 = 1;
  FUN_1006ba6c((int)local_6dc);
  FUN_10066a80((int)local_880);
  local_11 = 0;
  cVar1 = FUN_10067060((uint)local_880,param_10,param_11);
  if (cVar1 != '\0') {
    FUN_100cfed0(local_868,0,0x38);
    local_868[0] = param_6;
    local_834 = 0x40;
    local_838 = local_81a;
    local_81c = 0;
    local_2c = local_75c;
    uStack_28 = uStack_758;
    uStack_24 = uStack_754;
    uStack_20 = uStack_750;
    uStack_1c = uStack_74c;
    local_40 = local_74a;
    uStack_3c = uStack_746;
    uStack_38 = uStack_742;
    uStack_34 = uStack_73e;
    uStack_30 = uStack_73a;
    local_11 = FUN_1006717c((uint)local_880,param_7,(int)&local_40,(int)&local_2c,local_738,param_8)
    ;
  }
  return local_11;
}

