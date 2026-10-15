/*
 * FUN_1801772e8 at 1801772e8
 * undefined FUN_1801772e8(void)
 * Address ranges: 1801772e8-180177453
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801772e8(undefined8 param_1,longlong param_2,undefined8 param_3,int *param_4,int param_5,
                  ulonglong param_6,uint param_7,ulonglong param_8)

{
  undefined8 extraout_x1;
  undefined4 uVar1;
  ulonglong uVar2;
  float fVar3;
  undefined4 local_70 [2];
  int local_68;
  uint local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  float local_38;
  float local_30;
  undefined8 local_28;
  
  if ((param_7 != 0) || ((param_8 & 1) != 0)) {
    uVar2 = (ulonglong)*(byte *)(param_4 + 1);
    local_60 = FUN_180213268(0xe4,uVar2);
    uVar1 = (undefined4)uVar2;
    fVar3 = *(float *)(&DAT_18022c350 + (ulonglong)param_7 * 4);
    local_70[0] = uVar1;
    local_68 = param_5;
    if (fVar3 == 1.0) {
      if (*param_4 != param_5) {
        local_58 = 0;
        local_60 = local_60 & 0xff;
        FUN_180214c88(param_2,param_3,(uint)param_6 | 0x36,*param_4,local_70,0x20);
      }
    }
    else if (param_7 == 1) {
      local_58 = CONCAT44(local_58._4_4_,param_5);
      local_48 = 0;
      local_50 = 0xe4;
      local_60 = local_60 & 0xff;
      FUN_180214c88(param_2,param_3,param_6 & 0xffffffff,*param_4,local_70,0x30);
    }
    else {
      uVar2 = FUN_1802132c8(uVar2 & 0xffffffff,extraout_x1,(uint)param_6 | 0x38);
      local_70[0] = uVar1;
      local_68 = param_5;
      if ((uVar2 & 1) == 0) {
        local_50 = 0xe4;
        local_28 = 0;
        local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)(param_2 + 0xac));
        local_40 = CONCAT44(local_40._4_4_,fVar3);
        local_48 = CONCAT44(local_48._4_4_,fVar3);
        local_38 = fVar3;
        local_30 = fVar3;
        FUN_180214c88(param_2,param_3);
      }
      else {
        local_50 = 0xe4;
        local_40 = 0;
        local_48 = CONCAT44(local_48._4_4_,fVar3);
        local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)(param_2 + 0xa8));
        FUN_180214c88(param_2,param_3);
      }
    }
  }
  return;
}

