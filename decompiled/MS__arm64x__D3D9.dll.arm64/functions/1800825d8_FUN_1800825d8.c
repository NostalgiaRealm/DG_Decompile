/*
 * FUN_1800825d8 at 1800825d8
 * undefined FUN_1800825d8(void)
 * Address ranges: 1800825d8-18008272b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800825d8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  longlong param_9,ulonglong param_10,undefined4 param_11,undefined4 param_12,
                  undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined1 param_24,
                  undefined4 param_25,byte param_26)

{
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  
  FUN_1800e5470(*(undefined8 *)(param_9 + 0x1cf10),param_10,param_9);
  FUN_1800a0700(param_9,param_11,0,0,0,0,param_24,param_24,0);
  local_e0 = CONCAT44(param_13,param_12);
  uStack_d8 = CONCAT44(param_15,param_14);
  uStack_c8 = param_17;
  local_c0 = param_18;
  uStack_b8 = param_19;
  local_b0 = param_20;
  uStack_a8 = param_21;
  local_a0 = param_22;
  uStack_98 = param_23;
  local_100 = param_1;
  uStack_fc = param_2;
  local_f8 = param_3;
  uStack_f4 = param_4;
  local_f0 = param_5;
  uStack_ec = param_6;
  local_e8 = param_7;
  uStack_e4 = param_8;
  local_d0 = param_16;
  FUN_18007c448(param_9,&local_100,param_10 & 0xffffffff,param_11,param_25,param_24,param_26 ^ 1);
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(*(longlong *)(param_9 + 0x1cf10) + 0x620);
  return;
}

