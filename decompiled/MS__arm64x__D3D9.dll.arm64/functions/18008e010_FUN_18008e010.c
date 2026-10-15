/*
 * FUN_18008e010 at 18008e010
 * undefined FUN_18008e010(void)
 * Address ranges: 18008e010-18008e1ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18008e010(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined8 param_9,undefined4 param_10,ulonglong param_11,undefined4 param_12,
                  undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 *param_22,undefined8 *param_23,undefined8 *param_24
                  ,undefined8 *param_25,undefined8 *param_26,undefined4 param_27,undefined4 param_28
                  ,undefined4 param_29,undefined1 param_30,int param_31,byte param_32)

{
  ulonglong extraout_x1;
  undefined8 uVar1;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  
  param_11 = param_11 & 0xffffffff;
  if (param_31 - 0x22U < 6) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    if (param_31 - 4U < 4) goto LAB_18008e0a0;
  }
  param_1 = FUN_1800a0700(param_9,param_11,0,0,0,0,param_30,param_30,0);
  param_11 = extraout_x1;
LAB_18008e0a0:
  uStack_cc = 0xffffffff;
  local_b8 = param_17;
  uStack_b0 = param_18;
  local_98 = param_19;
  uStack_90 = param_20;
  local_78 = param_21;
  local_68 = param_27;
  uStack_64 = param_28;
  local_60 = param_29;
  if (param_22 == (undefined8 *)0x0) {
    local_a8 = 0;
  }
  else {
    local_a8 = *param_22;
  }
  if (param_23 == (undefined8 *)0x0) {
    local_a0 = 0;
  }
  else {
    local_a0 = *param_23;
  }
  if (param_24 == (undefined8 *)0x0) {
    local_88 = 0;
  }
  else {
    local_88 = *param_24;
  }
  if (param_25 == (undefined8 *)0x0) {
    local_80 = 0;
  }
  else {
    local_80 = *param_25;
  }
  if (param_26 == (undefined8 *)0x0) {
    local_70 = 0;
  }
  else {
    local_70 = *param_26;
  }
  local_f0 = param_1;
  uStack_ec = param_2;
  local_e8 = param_3;
  uStack_e4 = param_4;
  local_e0 = param_5;
  uStack_dc = param_6;
  local_d8 = param_7;
  uStack_d4 = param_8;
  local_d0 = param_12;
  local_c8 = param_13;
  uStack_c4 = param_14;
  local_c0 = param_15;
  uStack_bc = param_16;
  FUN_18008a4a0(param_9,&local_f0,param_10,param_11 & 0xffffffff,param_31,uVar1,param_30,
                param_32 ^ 1);
  return;
}

