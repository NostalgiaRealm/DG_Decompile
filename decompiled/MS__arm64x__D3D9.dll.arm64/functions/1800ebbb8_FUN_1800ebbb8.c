/*
 * FUN_1800ebbb8 at 1800ebbb8
 * undefined FUN_1800ebbb8(void)
 * Address ranges: 1800ebbb8-1800ebed3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_1800ebbb8(longlong param_1,longlong *param_2,ulonglong param_3,undefined8 param_4,
                  int *param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 local_130;
  longlong local_128;
  int local_120;
  int iStack_11c;
  undefined1 local_110 [8];
  undefined4 local_108;
  longlong local_100;
  undefined4 uStack_f8;
  uint uStack_f4;
  int local_f0;
  int iStack_ec;
  ulonglong local_e8;
  undefined1 auStack_e0 [8];
  longlong local_d8;
  longlong local_d0;
  longlong lStack_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 uStack_b8;
  undefined1 auStack_b0 [8];
  longlong *local_a8;
  undefined4 local_a0;
  ulonglong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  int local_70 [8];
  
  param_3 = param_3 & 0xffffffff;
  iVar2 = (**(code **)(*param_2 + 0x70))(param_2,local_70,auStack_b0);
  if (iVar2 < 0) {
    return 0;
  }
  lVar4 = (**(code **)(*param_2 + 0x50))(param_2,&local_a8);
  iVar2 = *(int *)(lVar4 + 0x20);
  if ((local_70[0] == 4) && (1 < iVar2 - 0x2cU)) {
    local_130 = 0;
    local_128 = 0;
    iVar3 = (**(code **)(*param_2 + 0x40))(param_2,param_3,&local_130,0);
    if (-1 < iVar3) {
      bVar1 = FUN_1800f2030(*(undefined8 *)(param_1 + 0xb18),param_2,0);
      if ((bVar1 & 1) != 0) {
        (**(code **)(*param_2 + 0x60))(param_2,param_3,param_5,param_6,param_7,param_8);
      }
      (**(code **)(*param_2 + 0x48))(param_2,param_3,0);
      if ((bVar1 & 1) != 0) {
        return bVar1;
      }
    }
    FUN_1800eb8a0(param_1,auStack_e0,param_2,param_4,param_5,param_6,param_7,param_8,0,iVar2);
    if (local_d8 == 0) {
      return 0;
    }
    FUN_1800f1b78(*(undefined8 *)(param_1 + 0xb18),local_d8,0,1,*(undefined8 *)(param_1 + 0xb10),
                  param_1,0x800,*(undefined8 *)(param_1 + 0xb78));
    FUN_1800e8bb8(param_1,param_2,param_3,0,0x400);
    FUN_1800f0b40(param_4,local_c0,local_d0,lStack_c8,
                  *(undefined8 *)(*(longlong *)(param_1 + 0xb10) + 0x18),
                  *(undefined8 *)(param_1 + 0xb78));
  }
  else {
    FUN_1800eb8a0(param_1,auStack_e0,param_2,param_4,param_5,param_6,param_7,param_8,0,iVar2);
    if (local_d8 == 0) {
      return 0;
    }
    FUN_1800f1b78(*(undefined8 *)(param_1 + 0xb18),local_d8,0,1,*(undefined8 *)(param_1 + 0xb10),
                  param_1,0x800,*(undefined8 *)(param_1 + 0xb78));
    FUN_1800e8bb8(param_1,param_2,param_3,0,0x400);
    FUN_1800f0b40(param_4,local_c0,local_d0,lStack_c8,
                  *(undefined8 *)(*(longlong *)(param_1 + 0xb10) + 0x18),
                  *(undefined8 *)(param_1 + 0xb78));
  }
  local_108 = 1;
  local_100 = local_d0 - lStack_c8;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_80 = 0;
  local_130 = 0;
  _uStack_f8 = CONCAT44(param_5[3] - *param_5,uStack_b8);
  local_e8 = (ulonglong)local_bc;
  local_128 = (ulonglong)(uint)(param_5[3] - *param_5) << 0x20;
  local_120 = param_5[4] - param_5[1];
  iStack_11c = param_5[5] - param_5[2];
  _local_f0 = CONCAT44(iStack_11c,local_120);
  local_a8 = param_2;
  local_98 = param_3;
  FUN_1800e8038(param_1);
  FUN_1800e80d8(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x80))
            (*(longlong **)(param_1 + 0x688),&local_a8,*param_5,param_5[1],param_5[2],local_110,
             &local_130);
  FUN_1800e8088(param_1);
  return 1;
}

