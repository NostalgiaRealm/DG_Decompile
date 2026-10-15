/*
 * FUN_180097a94 at 180097a94
 * undefined __fastcall FUN_180097a94(longlong param_1, uint param_2, uint param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, float param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13, undefined4 param_14, undefined4 param_15, undefined4 param_16, undefined8 param_17, undefined8 param_18, undefined8 param_19, undefined8 param_20, undefined8 param_21, undefined8 * param_22, undefined8 * param_23, undefined8 * param_24, undefined8 * param_25, undefined8 * param_26, undefined4 param_27, undefined4 param_28, undefined4 param_29, char param_30, uint param_31, undefined1 param_32)
 * Address ranges: 180097a94-180097cd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180097a94(longlong param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                  undefined4 param_6,undefined4 param_7,undefined4 param_8,float param_9,
                  undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
                  undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined8 param_17,
                  undefined8 param_18,undefined8 param_19,undefined8 param_20,undefined8 param_21,
                  undefined8 *param_22,undefined8 *param_23,undefined8 *param_24,
                  undefined8 *param_25,undefined8 *param_26,undefined4 param_27,undefined4 param_28,
                  undefined4 param_29,char param_30,uint param_31,undefined1 param_32)

{
  char cVar1;
  undefined4 in_stack_ffffffffffffff00;
  float local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  
  cVar1 = '\0';
  if (param_31 < 0x24) {
    if (param_31 != 0x23) {
      if (((param_31 == 4) || (param_31 == 5)) || ((param_31 == 6 || (param_31 == 7))))
      goto LAB_180097b31;
      cVar1 = '\0';
      if (param_31 != 0x22) goto LAB_180097b08;
    }
LAB_180097b05:
    cVar1 = '\x01';
  }
  else if ((((param_31 == 0x24) || (param_31 == 0x25)) || (param_31 == 0x26)) ||
          (cVar1 = '\0', param_31 == 0x27)) goto LAB_180097b05;
LAB_180097b08:
  in_stack_ffffffffffffff00 = CONCAT31((int3)((uint)in_stack_ffffffffffffff00 >> 8),param_30);
  FUN_1800aa2e0(param_1,param_3,0,0,0,0,param_30,param_30,0);
LAB_180097b31:
  local_c0 = param_5;
  local_bc = param_6;
  local_b8 = param_7;
  local_b4 = param_8;
  local_b0 = param_17;
  local_a8 = param_18;
  local_90 = param_19;
  local_88 = param_20;
  local_70 = param_21;
  local_e4 = param_10;
  local_60 = param_27;
  local_5c = param_28;
  local_e0 = param_11;
  local_dc = param_12;
  local_58 = param_29;
  local_d8 = param_13;
  local_d4 = param_14;
  local_e8 = param_9;
  local_d0 = param_15;
  local_cc = param_16;
  local_c4 = 0xffffffff;
  if (param_22 == (undefined8 *)0x0) {
    local_a0 = 0;
  }
  else {
    local_a0 = *param_22;
  }
  if (param_23 == (undefined8 *)0x0) {
    local_98 = 0;
  }
  else {
    local_98 = *param_23;
  }
  if (param_24 == (undefined8 *)0x0) {
    local_80 = 0;
  }
  else {
    local_80 = *param_24;
  }
  if (param_25 == (undefined8 *)0x0) {
    local_78 = 0;
  }
  else {
    local_78 = *param_25;
  }
  if (param_26 == (undefined8 *)0x0) {
    local_68 = 0;
  }
  else {
    local_68 = *param_26;
  }
  local_c8 = param_4;
  FUN_180094c50(param_1,&local_e8,param_2,param_3,param_31,cVar1,param_30,
                CONCAT31((int3)((uint)in_stack_ffffffffffffff00 >> 8),param_32) ^ 1);
  return;
}

