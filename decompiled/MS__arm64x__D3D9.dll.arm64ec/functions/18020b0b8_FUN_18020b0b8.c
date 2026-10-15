/*
 * FUN_18020b0b8 at 18020b0b8
 * undefined FUN_18020b0b8(void)
 * Address ranges: 18020b0b8-18020b253;18020b258-18020b30f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_18020b0b8(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,uint param_5,
                  undefined8 param_6,uint param_7,undefined4 param_8)

{
  ulonglong uVar1;
  undefined *puVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *extraout_x11_03;
  undefined8 local_b0;
  uint local_a8;
  ulonglong local_a0;
  ulonglong uStack_98;
  undefined8 local_90;
  longlong lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  int local_58 [6];
  
  puVar2 = __hybrid_os_arm64x_dispatch_icall;
  local_a8 = param_7 & 0xff;
  local_b0 = CONCAT44(local_b0._4_4_,param_8) & 0xffffffff000000ff;
  uVar1 = (ulonglong)param_4;
  bVar4 = 0;
  (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
  iVar5 = (*extraout_x11)(param_2,local_58,auStack_60);
  if (-1 < iVar5) {
    if (local_58[0] == 4 && (int)local_b0 == 0) {
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      (*(code *)puVar2)(0x180224000);
      iVar5 = (*extraout_x11_00)(param_2,0,&local_a0,&local_b0);
      if (-1 < iVar5) {
        bVar4 = FUN_18020e768(*(undefined8 *)(param_1 + 0xb18),param_2,0);
        if ((bVar4 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_180104c48(uVar1 + local_b0,param_6,param_5 - param_4);
        }
        local_a0 = uVar1;
        uStack_98 = (ulonglong)param_5;
        (*(code *)puVar2)(0x180224000);
        (*extraout_x11_01)(param_2,0,&local_a0);
        if ((local_a8 & 1) != 0) {
          (*(code *)puVar2)(0x180224000);
          (*extraout_x11_02)(param_2,0,0);
        }
        FUN_180207cd0(param_1,param_2,0,1,0);
        if ((bVar4 & 1) != 0) {
          return bVar4;
        }
      }
    }
    lStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    local_70 = 0;
    if (*(longlong *)(param_1 + 0xb10) != 0) {
      uVar6 = FUN_18020fa48(param_3,param_5 - param_4,&local_90);
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(local_90,param_6,param_5 - param_4);
      }
    }
    lVar3 = lStack_88;
    if (lStack_88 == 0) {
      bVar4 = 0;
    }
    else {
      FUN_180210140(param_3,local_70 & 0xffffffff,local_80,uStack_78,
                    *(undefined8 *)(*(longlong *)(param_1 + 0xb10) + 0x18),
                    *(undefined8 *)(param_1 + 0xb78));
      FUN_180207cd0(param_1,param_2,0,1,0x400);
      FUN_180206f40(param_1);
      FUN_180206ff8(param_1);
      uVar7 = (*(code *)puVar2)(0x180225000);
      (*extraout_x11_03)(uVar7,param_2,uVar1,lVar3);
      FUN_180206fa8(param_1);
      bVar4 = 1;
    }
  }
  return bVar4;
}

