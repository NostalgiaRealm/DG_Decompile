/*
 * FUN_10069c1e at 10069c1e
 * undefined __stdcall FUN_10069c1e(int param_1, int * param_2, uint param_3, undefined4 param_4, undefined1 param_5, int param_6)
 * Address ranges: 10069c1e-10069de4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10069c1e(int param_1,int *param_2,uint param_3,undefined4 param_4,undefined1 param_5,
                 int param_6)

{
  int *piVar1;
  undefined4 *puVar2;
  uint local_d0 [12];
  uint local_a0;
  undefined1 local_9c;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  uint local_80;
  undefined1 local_7c;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined1 local_2c;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_10070652(param_1,*(uint *)(param_1 + 0x1ac + param_6 * 4),0xf,local_d0);
  puVar2 = FUN_10068cb2(param_6);
  local_40 = *puVar2;
  local_34 = puVar2[3];
  local_38 = puVar2[2];
  local_3c = puVar2[1];
  local_4c = 0xe4;
  local_50 = *(undefined4 *)(param_1 + 0xac);
  if (param_3 == 0) {
    FUN_100c3cfd((int *)(param_1 + 0x18),param_2,0x36);
  }
  else {
    local_70 = param_4;
    local_6c = param_5;
    local_60 = 0xffffffff;
    local_5c = 0xffffffff;
    local_58 = 0xffffffff;
    local_54 = 0xffffffff;
    if (((param_3 & 0x3f00) == 0x300) &&
       ((*(uint *)(param_1 + 0x1ac + param_6 * 4) & 0x3f00) == 0x300)) {
      piVar1 = (int *)(param_1 + 0x18);
      local_30 = FUN_100c2e34((int)piVar1,4,'\0');
      local_2c = 0xf;
      local_20 = 0xffffffff;
      local_1c = 0xffffffff;
      local_a0 = -(uint)(*(uint *)(param_1 + 0x21c) != 0) & 0x40000000 | param_3;
      local_80 = *(uint *)(param_1 + 0x21c) | 0x10000000;
      local_7c = *(undefined1 *)(param_1 + 0x220);
      local_18 = 0xffffffff;
      local_14 = 0xffffffff;
      local_9c = 0xe4;
      local_90 = 0xffffffff;
      local_84 = 0xffffffff;
      local_88 = 0xffffffff;
      local_8c = 0xffffffff;
      FUN_100c3cfd(piVar1,param_2,0x37);
      FUN_100c3cfd(piVar1,param_2,0x36);
    }
    else {
      local_30 = param_3;
      local_2c = 0xe4;
      local_20 = 0xffffffff;
      local_1c = 0xffffffff;
      local_18 = 0xffffffff;
      local_14 = 0xffffffff;
      FUN_100c3cfd((int *)(param_1 + 0x18),param_2,0x37);
    }
  }
  return;
}

