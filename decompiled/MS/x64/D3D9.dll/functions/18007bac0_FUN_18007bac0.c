/*
 * FUN_18007bac0 at 18007bac0
 * undefined __fastcall FUN_18007bac0(undefined8 param_1, longlong param_2, longlong * param_3, uint param_4, undefined4 param_5, undefined1 param_6, uint param_7)
 * Address ranges: 18007bac0-18007bcd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18007bac0(undefined8 param_1,longlong param_2,longlong *param_3,uint param_4,
                  undefined4 param_5,undefined1 param_6,uint param_7)

{
  uint *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint local_e8;
  undefined1 local_e4;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined8 local_b8;
  undefined8 uStack_b0;
  uint local_a8;
  undefined1 local_a4;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  uint local_88;
  undefined1 local_84;
  undefined4 local_78;
  undefined1 local_74;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58 [12];
  
  uVar4 = (ulonglong)param_7;
  lVar3 = param_2;
  FUN_1800850c0(param_1,param_2,*(uint *)(param_2 + 0x1c0 + uVar4 * 4),0xf,local_58);
  if (param_7 == 2) {
    puVar2 = (undefined8 *)&DAT_1800fe8d0;
  }
  else if (param_7 == 3) {
    puVar2 = (undefined8 *)&DAT_1800fe8c0;
  }
  else if (param_7 == 4) {
    puVar2 = (undefined8 *)&DAT_1800fe8b0;
  }
  else {
    puVar2 = (undefined8 *)&DAT_1800fe8a0;
  }
  local_c8 = *(undefined4 *)(lVar3 + 0xbc);
  local_c4 = 0xe4;
  local_b8 = *puVar2;
  uStack_b0 = puVar2[1];
  if (param_4 == 0) {
    FUN_1800edd10((uint *)(lVar3 + 0x20),param_3,0x36,local_58);
  }
  else {
    local_78 = param_5;
    local_74 = param_6;
    local_68 = 0xffffffffffffffff;
    uStack_60 = 0xffffffffffffffff;
    if (((param_4 & 0x3f00) == 0x300) &&
       ((*(uint *)(param_2 + 0x1c0 + uVar4 * 4) & 0x3f00) == 0x300)) {
      puVar1 = (uint *)(param_2 + 0x20);
      local_e8 = FUN_1800ec8c0((longlong)puVar1,4,'\0');
      local_e4 = 0xf;
      local_a4 = 0xe4;
      local_98 = 0xffffffff;
      local_a8 = -(uint)(*(uint *)(param_2 + 0x230) != 0) & 0x40000000 | param_4;
      local_8c = 0xffffffff;
      local_88 = *(uint *)(param_2 + 0x230) | 0x10000000;
      local_90 = 0xffffffff;
      local_94 = 0xffffffff;
      local_84 = *(undefined1 *)(param_2 + 0x234);
      FUN_1800edd10(puVar1,param_3,0x37,&local_e8);
      FUN_1800edd10(puVar1,param_3,0x36,local_58);
    }
    else {
      local_e4 = 0xe4;
      local_d8 = 0xffffffffffffffff;
      uStack_d0 = 0xffffffffffffffff;
      local_e8 = param_4;
      FUN_1800edd10((uint *)(param_2 + 0x20),param_3,0x37,local_58);
    }
  }
  return;
}

