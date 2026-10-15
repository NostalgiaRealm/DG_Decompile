/*
 * FUN_10076efb at 10076efb
 * undefined __thiscall FUN_10076efb(void * this, int param_1, uint param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, float param_7, undefined4 param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13, undefined4 param_14, undefined4 param_15, undefined4 param_16, undefined4 param_17, undefined4 param_18, undefined4 param_19, undefined4 param_20, undefined4 param_21, undefined4 param_22, char param_23, uint param_24, byte param_25)
 * Address ranges: 10076efb-10076ff8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10076efb(void *this,int param_1,uint param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,float param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
            undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,
            undefined4 param_21,undefined4 param_22,char param_23,uint param_24,byte param_25)

{
  float local_58;
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
  undefined4 local_c;
  
  FUN_100b8667(*(void **)((int)this + 0x1cf00),this,(int)this);
  FUN_1008d81c(this,param_2,0,0,0,0,param_23,param_23,0);
  local_38 = param_3;
  local_28 = param_15;
  local_24 = param_16;
  local_20 = param_17;
  local_1c = param_18;
  local_18 = param_19;
  local_14 = param_20;
  local_10 = param_21;
  local_58 = param_7;
  local_c = param_22;
  local_54 = param_8;
  local_50 = param_9;
  local_4c = param_10;
  local_48 = param_11;
  local_44 = param_12;
  local_40 = param_13;
  local_34 = param_4;
  local_3c = param_14;
  local_30 = param_5;
  local_2c = param_6;
  FUN_100747e6(this,&local_58,param_1,param_2,param_24,param_23,(float *)(uint)(param_25 ^ 1));
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)((int)this + 0x1cf00) + 0x4a0));
  return;
}

