/*
 * FUN_180185050 at 180185050
 * undefined FUN_180185050(void)
 * Address ranges: 180185050-1801852b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180185050(undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4,
                  ulonglong param_5)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  code *pcVar4;
  undefined4 local_b0 [2];
  uint local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  uint local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  
  uVar2 = param_4;
  if ((param_5 & 1) != 0) {
    if ((*(uint *)(param_3 + 0x1ac) & 0x20004) != 0) {
      uVar2 = FUN_180213760(param_3 + 0x20,4,1);
    }
    puVar1 = __hybrid_os_arm64x_dispatch_icall;
    uVar3 = *(uint *)(param_3 + 0x1ac) & 0x20000;
    if ((*(uint *)(param_3 + 0x1ac) >> 2 & 1) == 0) {
      if (uVar3 == 0) {
        return uVar2;
      }
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      uVar3 = (*extraout_x11_01)(param_1,param_2,param_3,0x10,0xf);
      local_80 = 0;
      local_98 = 0x5f8;
      local_a8 = *(undefined4 *)(param_3 + 0xdc);
      local_88 = CONCAT44(local_88._4_4_,0xe4);
      local_a0 = 0xe4;
      local_b0[0] = 0xf;
      local_90 = uVar3;
      FUN_180214c88(param_3 + 0x20,param_2,0x38,uVar2,local_b0,0x38);
      (*(code *)puVar1)(0x180224000);
      pcVar4 = extraout_x11_02;
    }
    else {
      if (uVar3 == 0) {
        local_70 = 0;
        local_98 = 0x5f8;
        local_a8 = *(undefined4 *)(param_3 + 0xdc);
        local_78 = 0xe4;
        local_80 = CONCAT44(local_80._4_4_,param_4);
        local_88 = CONCAT44(local_88._4_4_,0xe4);
        local_b0[0] = 0xf;
        local_a0 = 0xe4;
        local_90 = param_4 | 0x80000000;
        FUN_180214c88(param_3 + 0x20,param_2,0x32,uVar2,local_b0,0x48);
        return uVar2;
      }
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      uVar3 = (*extraout_x11)(param_1,param_2,param_3,0x10,0xf);
      local_88 = 0;
      local_98 = CONCAT44(local_98._4_4_,uVar3);
      local_90 = 0xe4;
      local_a0 = 0xe4;
      local_b0[0] = 0xf;
      local_a8 = param_4 | 0x80000000;
      FUN_180214c88(param_3 + 0x20,param_2,0,uVar2,local_b0,0x30);
      local_70 = 0;
      local_98 = 0x5f8;
      local_a8 = *(undefined4 *)(param_3 + 0xdc);
      local_78 = 0xe4;
      local_80 = CONCAT44(local_80._4_4_,param_4);
      local_88 = CONCAT44(local_88._4_4_,0xe4);
      local_a0 = 0xe4;
      local_b0[0] = 0xf;
      local_90 = uVar2;
      FUN_180214c88(param_3 + 0x20,param_2,0x32,uVar2,local_b0,0x48);
      (*(code *)puVar1)(0x180224000);
      pcVar4 = extraout_x11_00;
    }
    (*pcVar4)(param_1,param_3,uVar3);
  }
  return uVar2;
}

