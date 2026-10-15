/*
 * FUN_180182438 at 180182438
 * undefined FUN_180182438(void)
 * Address ranges: 180182438-1801825ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180182438(undefined8 param_1,longlong param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5,undefined1 param_6,uint param_7)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong extraout_x10;
  undefined4 *local_110;
  uint *local_108;
  uint *local_100;
  undefined8 uStack_f8;
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
  undefined4 local_a0;
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
  uVar1 = FUN_18018b228(param_1,param_2,*(undefined4 *)(param_2 + (ulonglong)param_7 * 4 + 0x1c0),
                        0xf,auStack_50);
  puVar2 = (undefined4 *)FUN_180181450(uVar1,param_7);
  local_e0 = *(undefined4 *)(param_2 + 0xbc);
  local_7c = 0xe4;
  local_c8 = puVar2[2];
  uStack_c4 = puVar2[3];
  local_d0 = *puVar2;
  uStack_cc = puVar2[1];
  local_dc = 0xe4;
  if (param_4 == 0) {
    local_110 = &local_e0;
    local_108 = (uint *)0x0;
    FUN_180214e10(param_2 + 0x20,param_3,0x36,auStack_50,&local_110,0x10);
  }
  else {
    uStack_88 = 0xffffffffffffffff;
    local_90 = 0xffffffffffffffff;
    if (((param_4 & 0x3f00) == 0x300) && ((*(uint *)(extraout_x10 + 0x1c0) & 0x3f00) == 0x300)) {
      local_c0 = FUN_180213760(param_2 + 0x20,4,0);
      local_bc = 0xf;
      uStack_a8 = 0xffffffffffffffff;
      local_b0 = 0xffffffffffffffff;
      local_80 = param_4 | (uint)(*(uint *)(param_2 + 0x230) != 0) << 0x1e;
      local_70 = 0xffffffffffffffff;
      uStack_68 = 0xffffffffffffffff;
      local_60 = *(uint *)(param_2 + 0x230) | 0x10000000;
      local_5c = *(undefined1 *)(param_2 + 0x234);
      local_100 = &local_80;
      uStack_f8 = 0;
      local_108 = &local_e0;
      local_110 = &local_a0;
      FUN_180214e10(param_2 + 0x20,param_3,0x37,&local_c0,&local_110,0x20);
      local_108 = &local_c0;
      local_100 = (uint *)0x0;
      local_110 = (undefined4 *)0x1e4;
      FUN_180214e10(param_2 + 0x20,param_3,0x36,auStack_50,&local_110,0x18);
    }
    else {
      local_100 = &local_c0;
      local_bc = 0xe4;
      uStack_f8 = 0;
      local_108 = &local_e0;
      local_110 = &local_a0;
      uStack_a8 = 0xffffffffffffffff;
      local_b0 = 0xffffffffffffffff;
      local_c0 = param_4;
      FUN_180214e10(param_2 + 0x20,param_3,0x37,auStack_50,&local_110,0x20);
    }
  }
  return;
}

