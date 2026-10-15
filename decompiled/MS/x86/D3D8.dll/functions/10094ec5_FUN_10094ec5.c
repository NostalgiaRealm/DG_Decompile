/*
 * FUN_10094ec5 at 10094ec5
 * undefined __thiscall FUN_10094ec5(void * this, uint * param_1, uint param_2, undefined4 param_3)
 * Address ranges: 10094ec5-1009510f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10094ec5(void *this,uint *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
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
  uint local_1c;
  uint local_18;
  uint local_14;
  int *local_10;
  uint local_c;
  char local_5;
  
  local_c = (param_1[6] - param_1[4]) / *(uint *)(param_2 + 0x18);
  uVar4 = (param_1[10] - param_1[8]) * 2;
  local_14 = (param_1[7] - param_1[5]) / *(uint *)(param_2 + 0x1c);
  bVar5 = local_c < uVar4;
  uVar1 = (param_1[0xb] - param_1[9]) * 2;
  local_5 = '\x01' - (local_14 < uVar1);
  if ((uVar4 <= local_c) || (uVar1 <= local_14)) {
    local_10 = this;
    FUN_100965ee(this,param_2,2);
    piVar2 = local_10;
    if ((1 < *(uint *)(param_2 + 0x20)) && ((uVar4 <= local_c || (uVar1 <= local_14)))) {
      cVar3 = (**(code **)(*local_10 + 0x2c))(param_3);
      if (cVar3 != '\0') {
        param_2 = param_1[2];
        local_1c = param_1[3];
        uVar4 = local_14;
        cVar3 = local_5;
        local_18 = param_2;
        local_10 = (int *)local_1c;
        while ((!bVar5 || (cVar3 != '\0'))) {
          local_5c = 0xbf800000;
          local_58 = 0x3f800000;
          local_4c = 0x3f800000;
          local_48 = 0x3f800000;
          local_3c = 0xbf800000;
          local_38 = 0xbf800000;
          local_2c = 0x3f800000;
          local_28 = 0xbf800000;
          local_54 = 0.0 / (float)((double)(int)local_18 +
                                  (double)(&DAT_100b5ce0)[-((int)local_18 >> 0x1f)]);
          local_50 = 0.0 / (float)((double)(int)local_1c +
                                  (double)(&DAT_100b5ce0)[-((int)local_1c >> 0x1f)]);
          local_44 = (((float)((double)(int)param_2 +
                              (double)(&DAT_100b5ce0)[-((int)param_2 >> 0x1f)]) - 0.5) + 0.5) /
                     (float)((double)(int)local_18 +
                            (double)(&DAT_100b5ce0)[-((int)local_18 >> 0x1f)]);
          local_30 = (((float)((double)(int)local_10 +
                              (double)(&DAT_100b5ce0)[-((int)local_10 >> 0x1f)]) - 0.5) + 0.5) /
                     (float)((double)(int)local_1c +
                            (double)(&DAT_100b5ce0)[-((int)local_1c >> 0x1f)]);
          local_40 = local_50;
          local_34 = local_54;
          local_24 = local_44;
          local_20 = local_30;
          (**(code **)(*piVar2 + 0x30))(&local_5c,param_2,local_10,param_3);
          param_1[2] = (int)param_1[2] >> 1;
          param_2 = param_1[2];
          param_1[3] = (int)param_1[3] >> 1;
          local_10 = (int *)param_1[3];
          local_c = local_c >> 1;
          uVar4 = uVar4 >> 1;
          bVar5 = local_c < (param_1[10] - param_1[8]) * 2;
          param_1[4] = (int)param_1[4] >> 1;
          param_1[5] = (int)param_1[5] >> 1;
          param_1[6] = (int)param_1[6] >> 1;
          param_1[7] = (int)param_1[7] >> 1;
          cVar3 = '\x01' - (uVar4 < (param_1[0xb] - param_1[9]) * 2);
        }
        if ((param_1[10] - param_1[8] == param_1[6] - param_1[4]) ||
           (param_1[0xb] - param_1[9] == param_1[7] - param_1[5])) {
          *param_1 = *param_1 & 0xffffffc7;
        }
      }
    }
  }
  return;
}

