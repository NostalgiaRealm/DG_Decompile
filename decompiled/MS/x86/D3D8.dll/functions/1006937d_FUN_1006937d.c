/*
 * FUN_1006937d at 1006937d
 * undefined __thiscall FUN_1006937d(void * this, int param_1, uint param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, float param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13, undefined4 param_14, undefined4 param_15, undefined4 param_16, undefined4 param_17, undefined4 param_18, undefined4 param_19, undefined4 param_20, undefined4 * param_21, undefined4 * param_22, undefined4 * param_23, undefined4 * param_24, undefined4 * param_25, undefined4 param_26, undefined4 param_27, undefined4 param_28, float * param_29, uint param_30, byte param_31)
 * Address ranges: 1006937d-1006952e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1006937d(void *this,int param_1,uint param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,float param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
            undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,
            undefined4 *param_21,undefined4 *param_22,undefined4 *param_23,undefined4 *param_24,
            undefined4 *param_25,undefined4 param_26,undefined4 param_27,undefined4 param_28,
            float *param_29,uint param_30,byte param_31)

{
  char local_7c;
  float local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_7c = '\0';
  if (param_30 < 0x24) {
    if (param_30 != 0x23) {
      if (((param_30 == 4) || (param_30 == 5)) || ((param_30 == 6 || (param_30 == 7))))
      goto LAB_100693e6;
      local_7c = '\0';
      if (param_30 != 0x22) goto LAB_100693d3;
    }
LAB_100693ce:
    local_7c = '\x01';
  }
  else if ((((param_30 == 0x24) || (param_30 == 0x25)) || (param_30 == 0x26)) ||
          (local_7c = '\0', param_30 == 0x27)) goto LAB_100693ce;
LAB_100693d3:
  FUN_1007766c(this,param_2,0,0,0,0,(char)param_29,(char)param_29,0);
LAB_100693e6:
  local_58 = param_3;
  local_50 = param_4;
  local_4c = param_5;
  local_48 = param_6;
  local_78 = param_8;
  local_44 = param_7;
  local_40 = param_16;
  local_74 = param_9;
  local_3c = param_17;
  local_70 = param_10;
  local_30 = param_18;
  local_6c = param_11;
  local_2c = param_19;
  local_20 = param_20;
  local_68 = param_12;
  local_18 = param_26;
  local_64 = param_13;
  local_14 = param_27;
  local_60 = param_14;
  local_10 = param_28;
  local_5c = param_15;
  local_54 = 0xffffffff;
  if (param_21 == (undefined4 *)0x0) {
    local_38 = 0;
  }
  else {
    local_38 = *param_21;
  }
  if (param_22 == (undefined4 *)0x0) {
    local_34 = 0;
  }
  else {
    local_34 = *param_22;
  }
  if (param_23 == (undefined4 *)0x0) {
    local_28 = 0;
  }
  else {
    local_28 = *param_23;
  }
  if (param_24 == (undefined4 *)0x0) {
    local_24 = 0;
  }
  else {
    local_24 = *param_24;
  }
  if (param_25 == (undefined4 *)0x0) {
    local_1c = 0;
  }
  else {
    local_1c = *param_25;
  }
  FUN_10067073(this,&local_78,param_1,param_2,param_30,local_7c,param_29,(float)(uint)(param_31 ^ 1)
              );
  return;
}

