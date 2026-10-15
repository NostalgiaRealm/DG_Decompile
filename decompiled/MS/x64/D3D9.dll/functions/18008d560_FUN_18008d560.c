/*
 * FUN_18008d560 at 18008d560
 * undefined __fastcall FUN_18008d560(longlong param_1, undefined8 param_2, uint param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, float param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13, undefined4 param_14, undefined4 param_15, undefined8 param_16, undefined8 param_17, undefined8 param_18, undefined8 param_19, undefined8 param_20, undefined8 param_21, undefined8 param_22, undefined8 param_23, char param_24, uint param_25, undefined1 param_26)
 * Address ranges: 18008d560-18008d6de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18008d560(longlong param_1,undefined8 param_2,uint param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,float param_8,
                  undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                  undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,char param_24,
                  uint param_25,undefined1 param_26)

{
  undefined4 in_stack_ffffffffffffff38;
  undefined3 uVar1;
  float local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  FUN_1800dfe48(*(longlong *)(param_1 + 0x1cf10),param_2,param_1);
  uVar1 = (undefined3)((uint)in_stack_ffffffffffffff38 >> 8);
  FUN_1800aa2e0(param_1,param_3,0,0,0,0,param_24,param_24,0);
  local_84 = param_5;
  local_80 = param_6;
  local_7c = param_7;
  local_78 = param_16;
  local_70 = param_17;
  local_68 = param_18;
  local_60 = param_19;
  local_58 = param_20;
  local_50 = param_21;
  local_48 = param_22;
  local_40 = param_23;
  local_a0 = param_10;
  local_9c = param_11;
  local_98 = param_12;
  local_94 = param_13;
  local_a8 = param_8;
  local_a4 = param_9;
  local_90 = param_14;
  local_8c = param_15;
  local_88 = param_4;
  FUN_18008a494(param_1,&local_a8,(uint)param_2,param_3,param_25,param_24,
                CONCAT31(uVar1,param_26) ^ 1);
                    /* WARNING: Could not recover jumptable at 0x00018008d6d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x1cf10) + 0x620));
  return;
}

