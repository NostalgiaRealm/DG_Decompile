/*
 * FUN_18020b680 at 18020b680
 * undefined FUN_18020b680(void)
 * Address ranges: 18020b680-18020b9c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_18020b680(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  int *param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  longlong local_128;
  longlong lStack_120;
  undefined8 local_118;
  longlong local_110;
  int local_108;
  int iStack_104;
  undefined1 local_100 [8];
  undefined4 local_f8;
  longlong local_f0;
  undefined4 uStack_e8;
  uint uStack_e4;
  int local_e0;
  int iStack_dc;
  ulonglong local_d8;
  undefined1 auStack_d0 [8];
  longlong local_c8;
  longlong local_c0;
  longlong lStack_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined4 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined4 local_90;
  ulonglong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  int local_60 [8];
  
  puVar1 = __hybrid_os_arm64x_dispatch_icall;
  param_3 = param_3 & 0xffffffff;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  iVar3 = (*extraout_x11)(param_2,local_60,auStack_a0);
  if (iVar3 < 0) {
    return 0;
  }
  (*(code *)puVar1)(0x180224000);
  lVar5 = (*extraout_x11_00)(param_2,&local_98);
  iVar3 = *(int *)(lVar5 + 0x20);
  if ((local_60[0] == 4) && (1 < iVar3 - 0x2cU)) {
    local_118 = 0;
    local_110 = 0;
    (*(code *)puVar1)(0x180224000);
    iVar4 = (*extraout_x11_01)(param_2,param_3,&local_118,0);
    if (-1 < iVar4) {
      bVar2 = FUN_18020e768(*(undefined8 *)(param_1 + 0xb18),param_2,0);
      if ((bVar2 & 1) != 0) {
        (*(code *)puVar1)(0x180224000);
        (*extraout_x11_02)(param_2,param_3,param_5,param_6,param_7,param_8);
      }
      (*(code *)puVar1)(0x180224000);
      (*extraout_x11_03)(param_2,param_3,0);
      if ((bVar2 & 1) != 0) {
        return bVar2;
      }
    }
    FUN_18020b310(param_1,auStack_d0,param_2,param_4,param_5,param_6,param_7,param_8,0,iVar3);
    if (local_c8 == 0) {
      return 0;
    }
    FUN_18020e268(*(undefined8 *)(param_1 + 0xb18),local_c8,0,1,*(undefined8 *)(param_1 + 0xb10),
                  param_1,0x800,*(undefined8 *)(param_1 + 0xb78));
    FUN_180207cd0(param_1,param_2,param_3,0,0x400);
    local_128 = lStack_b8;
    lStack_120 = local_c0;
    FUN_180210140(param_4,local_b0,local_c0,lStack_b8,
                  *(undefined8 *)(*(longlong *)(param_1 + 0xb10) + 0x18),
                  *(undefined8 *)(param_1 + 0xb78));
  }
  else {
    FUN_18020b310(param_1,auStack_d0,param_2,param_4,param_5,param_6,param_7,param_8,0,iVar3);
    if (local_c8 == 0) {
      return 0;
    }
    FUN_18020e268(*(undefined8 *)(param_1 + 0xb18),local_c8,0,1,*(undefined8 *)(param_1 + 0xb10),
                  param_1,0x800,*(undefined8 *)(param_1 + 0xb78));
    FUN_180207cd0(param_1,param_2,param_3,0,0x400);
    local_128 = lStack_b8;
    lStack_120 = local_c0;
    FUN_180210140(param_4,local_b0,local_c0,lStack_b8,
                  *(undefined8 *)(*(longlong *)(param_1 + 0xb10) + 0x18),
                  *(undefined8 *)(param_1 + 0xb78));
  }
  local_f8 = 1;
  local_90 = 0;
  local_f0 = lStack_120 - local_128;
  uStack_78 = 0;
  local_80 = 0;
  local_70 = 0;
  local_118 = 0;
  local_110 = (ulonglong)(uint)(param_5[3] - *param_5) << 0x20;
  _uStack_e8 = CONCAT44(param_5[3] - *param_5,uStack_a8);
  local_d8 = (ulonglong)local_ac;
  local_108 = param_5[4] - param_5[1];
  iStack_104 = param_5[5] - param_5[2];
  _local_e0 = CONCAT44(iStack_104,local_108);
  local_98 = param_2;
  local_88 = param_3;
  FUN_180206f40(param_1);
  FUN_180206ff8(param_1);
  uVar6 = (*(code *)puVar1)(0x180225000);
  (*extraout_x11_04)(uVar6,&local_98,*param_5,param_5[1],param_5[2],local_100,&local_118);
  FUN_180206fa8(param_1);
  return 1;
}

