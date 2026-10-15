/*
 * FUN_10073b40 at 10073b40
 * undefined FUN_10073b40(void)
 * Address ranges: 10073b40-10073c87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10073b40(undefined8 param_1,undefined8 param_2,undefined4 param_3,int *param_4,int param_5,
                 uint param_6,int param_7,uint param_8)

{
  ulonglong uVar1;
  int extraout_w14;
  undefined4 extraout_w15;
  undefined1 local_50 [4];
  undefined4 uStack_4c;
  uint local_48;
  int iStack_44;
  int iStack_3c;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_1c;
  
  if ((param_7 != 0) || ((param_8 & 1) != 0)) {
    local_38 = FUN_100efc98(0xe4,(char)param_4[1]);
    local_38 = local_38 & 0xff;
    uStack_4c = param_3;
    iStack_3c = param_5;
    if (*(float *)(&DAT_1012c840 + param_7 * 4) == 1.0) {
      iStack_44 = *param_4;
      if (iStack_44 != param_5) {
        iStack_34 = 0;
        local_48 = param_6 | 0x36;
        FUN_100ef510(local_50,0x20);
      }
    }
    else if (param_7 == 1) {
      local_30 = 0xe4;
      local_2c = 0;
      iStack_44 = *param_4;
      local_48 = param_6;
      iStack_34 = param_5;
      FUN_100ef510(local_50,0x28);
    }
    else {
      uVar1 = FUN_100efd00(extraout_w15);
      uStack_4c = param_3;
      iStack_3c = param_5;
      if ((uVar1 & 1) == 0) {
        local_30 = 0xe4;
        iStack_34 = *(undefined4 *)(extraout_w14 + 0x94);
        local_1c = 0;
        iStack_44 = *param_4;
        FUN_100ef510(local_50,0x38);
      }
      else {
        local_30 = 0xe4;
        iStack_34 = *(undefined4 *)(extraout_w14 + 0x90);
        local_28 = 0;
        iStack_44 = *param_4;
        FUN_100ef510(local_50,0x2c);
      }
    }
  }
  return;
}

