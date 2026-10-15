/*
 * FUN_18016fd28 at 18016fd28
 * undefined FUN_18016fd28(void)
 * Address ranges: 18016fd28-18016ff9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18016fd28(undefined8 param_1,longlong param_2,int param_3,int param_4,int param_5,
                  undefined4 param_6,undefined8 param_7,ulonglong param_8,char param_9,char param_10
                  )

{
  uint uVar1;
  bool bVar2;
  ulonglong uVar3;
  int iVar4;
  int local_c0 [2];
  int local_b8;
  undefined4 local_b0;
  int local_a8;
  int local_a0;
  undefined8 local_98;
  int local_90;
  undefined4 local_88;
  ulonglong local_80;
  int local_78;
  undefined4 local_70;
  undefined8 local_68;
  
  uVar3 = (param_8 & 0xffffffffffff) >> ((ulonglong)(uint)(param_3 * 3) & 0x3f);
  uVar1 = (uint)uVar3 & 7;
  iVar4 = 0;
  local_c0[0] = iVar4;
  if ((uVar3 & 7) != 0) {
    bVar2 = (param_8 >> 0x33 & 1) == 0;
    if ((param_8 >> 0x3e & 1) == 0 && (bVar2 || uVar1 != 1)) {
      local_c0[0] = param_4;
      if (param_9 != '\0') {
        local_a8 = *(int *)(param_2 + 0xac);
        local_68 = 0;
        local_70 = 0xe4;
        local_b0 = 0x54;
        local_b8 = *(int *)(param_2 + 0x220);
        local_80 = local_80 & 0xffffffff00000000;
        local_88 = 0;
        local_90 = 0x3f800000;
        local_c0[0] = 0xf;
        local_98 = CONCAT44(local_98._4_4_,0x3f800000);
        local_a0 = 0xe4;
        local_78 = param_4;
        param_1 = FUN_180214c88(param_2,param_7,0x32,param_5,local_c0,0x60);
        local_c0[0] = iVar4;
      }
    }
    else {
      local_98 = 0;
      local_a0 = 0xff;
      local_c0[0] = 0xf;
      local_b0 = 0xe4;
      local_b8 = param_4;
      local_a8 = param_4;
      param_1 = FUN_180214c88(param_2,param_7,0xe,param_5,local_c0,0x30);
      if (bVar2 || uVar1 != 1) {
        local_80 = 0;
        local_a8 = param_3 * 0x40 + 0xfc;
        local_b0 = 0xff;
        local_b8 = *(int *)(param_2 + 0x74);
        local_88 = 0xe4;
        local_98 = CONCAT44(local_98._4_4_,0xe4);
        local_c0[0] = 0xf;
        local_a0 = param_5;
        local_90 = param_4;
        param_1 = FUN_180214c88(param_2,param_7,0x37,param_5,local_c0,0x48);
      }
      local_c0[0] = iVar4;
      if (param_9 != '\0') {
        local_a8 = *(int *)(param_2 + 0x220);
        local_98 = 0;
        local_a0 = 0x54;
        local_b0 = 0x54;
        local_c0[0] = 3;
        local_b8 = param_5;
        param_1 = FUN_180214c88(param_2,param_7,0,param_5,local_c0,0x30);
        local_c0[0] = iVar4;
      }
    }
  }
  local_b8 = CONCAT31(local_b8._1_3_,0xe4);
  FUN_18016e760(param_1,param_2,uVar1,param_3,param_5,param_6,param_8,param_7);
  if (((uVar3 & 7) != 0) && (param_10 != '\0')) {
    local_98 = 0;
    local_a0 = 0xaa;
    local_a8 = *(undefined4 *)(param_2 + 0x220);
    local_b0 = 0xa4;
    local_c0[0] = 7;
    local_b8 = param_5;
    FUN_180214c88(param_2,param_7,0x38,param_5,local_c0,0x30);
  }
  return;
}

