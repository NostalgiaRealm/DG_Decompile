/*
 * FUN_18006f5a0 at 18006f5a0
 * undefined FUN_18006f5a0(void)
 * Address ranges: 18006f5a0-18006f72b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18006f5a0(undefined8 param_1,longlong param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5,undefined1 param_6,ulonglong param_7)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong extraout_x13;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  uint local_c0;
  undefined1 local_bc;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0 [4];
  undefined1 local_9c;
  undefined8 local_90;
  undefined8 uStack_88;
  uint local_80;
  undefined1 local_7c;
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_60;
  undefined1 local_5c;
  undefined1 auStack_50 [48];
  
  local_9c = param_6;
  uVar1 = func_0x00018018b228(param_1,param_2,
                              *(undefined4 *)(param_2 + (param_7 & 0xffffffff) * 4 + 0x1c0),0xf,
                              auStack_50);
  puVar2 = (undefined4 *)FUN_18006e680(uVar1,param_7 & 0xffffffff);
  local_e0 = *(undefined4 *)(param_2 + 0xbc);
  local_7c = 0xe4;
  local_c8 = puVar2[2];
  uStack_c4 = puVar2[3];
  local_d0 = *puVar2;
  uStack_cc = puVar2[1];
  local_dc = 0xe4;
  if (param_4 == 0) {
    FUN_1800f58b8(param_2 + 0x20,param_3,0x36,auStack_50,&local_e0,0);
  }
  else {
    uStack_88 = 0xffffffffffffffff;
    local_90 = 0xffffffffffffffff;
    if (((param_4 & 0x3f00) == 0x300) && ((*(uint *)(extraout_x13 + 0x1c0) & 0x3f00) == 0x300)) {
      local_c0 = FUN_1800f42d0(param_2 + 0x20,4,0);
      local_bc = 0xf;
      uStack_a8 = 0xffffffffffffffff;
      local_b0 = 0xffffffffffffffff;
      local_80 = param_4 | (uint)(*(uint *)(param_2 + 0x230) != 0) << 0x1e;
      local_70 = 0xffffffffffffffff;
      uStack_68 = 0xffffffffffffffff;
      local_60 = *(uint *)(param_2 + 0x230) | 0x10000000;
      local_5c = *(undefined1 *)(param_2 + 0x234);
      FUN_1800f58b8(param_2 + 0x20,param_3,0x37,&local_c0,local_a0,&local_e0,&local_80,0);
      FUN_1800f58b8(param_2 + 0x20,param_3,0x36,auStack_50,0x1e4,&local_c0,0);
    }
    else {
      local_bc = 0xe4;
      uStack_a8 = 0xffffffffffffffff;
      local_b0 = 0xffffffffffffffff;
      local_c0 = param_4;
      FUN_1800f58b8(param_2 + 0x20,param_3,0x37,auStack_50,local_a0,&local_e0,&local_c0,0);
    }
  }
  return;
}

