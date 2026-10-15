/*
 * FUN_10048a55 at 10048a55
 * undefined __stdcall FUN_10048a55(float * param_1, int param_2, int param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float param_9)
 * Address ranges: 10048a55-10048c3e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10048a55(float *param_1,int param_2,int param_3,float param_4,float param_5,float param_6,
                 float param_7,float param_8,float param_9)

{
  int iVar1;
  float *pfVar2;
  float local_a4 [5];
  float local_90;
  undefined4 local_8c;
  undefined4 local_88;
  float local_84;
  float local_80;
  undefined4 local_7c;
  undefined4 local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_64;
  float local_60;
  undefined4 local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_a4[2] = 0.0;
  local_a4[3] = 0.0;
  local_8c = 0;
  local_88 = 0;
  local_7c = 0;
  local_78 = 0;
  local_a4[4] = (float)((double)param_2 + (double)(&DAT_10066fd0)[-(param_2 >> 0x1f)]);
  local_6c = 0;
  local_68 = 0;
  local_5c = 0;
  local_58 = 0;
  local_4c = 0;
  local_48 = 0;
  local_3c = 0;
  local_38 = 0;
  local_2c = 0;
  local_28 = 0;
  local_84 = (param_8 + param_8) / local_a4[4];
  local_50 = (float)((double)param_3 + (double)(&DAT_10066fd0)[-(param_3 >> 0x1f)]);
  local_74 = ((param_6 + param_6) - local_a4[4]) / local_a4[4];
  local_60 = (param_9 + param_9) / local_50;
  local_a4[4] = ((param_4 + param_4) - local_a4[4]) / local_a4[4];
  local_54 = local_74;
  local_a4[0] = local_84 + local_a4[4];
  local_44 = local_a4[0];
  local_24 = local_a4[0];
  local_90 = (local_50 - (param_5 + param_5)) / local_50;
  local_84 = local_74 - local_84;
  local_70 = local_90;
  local_50 = (local_50 - (param_7 + param_7)) / local_50;
  local_a4[1] = local_90 - local_60;
  local_64 = local_84;
  local_60 = local_60 + local_50;
  local_34 = local_a4[4];
  local_30 = local_50;
  local_80 = local_a4[1];
  local_40 = local_60;
  local_20 = local_a4[1];
  local_1c = 0;
  local_18 = 0;
  local_14 = local_a4[4];
  local_10 = local_90;
  local_c = 0;
  local_8 = 0;
  pfVar2 = local_a4;
  for (iVar1 = 0x28; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

