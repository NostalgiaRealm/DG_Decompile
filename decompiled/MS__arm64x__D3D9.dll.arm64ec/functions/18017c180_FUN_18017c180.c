/*
 * FUN_18017c180 at 18017c180
 * undefined FUN_18017c180(void)
 * Address ranges: 18017c180-18017c4a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18017c180(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 local_a0 [2];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  
  if (*(char *)(param_3 + 0x53e) != '\0') {
    local_98 = *(undefined4 *)(param_3 + 0x4d4);
    local_a0[0] = *(undefined4 *)(param_3 + 0x4dc);
    uVar2 = FUN_18017c4b0();
    local_98 = *(undefined4 *)(param_3 + 0x4d8);
    local_a0[0] = *(undefined4 *)(param_3 + 0x4dc);
    uVar2 = FUN_18017c4b0(uVar2,param_2,param_3,*(undefined4 *)(param_3 + 0x518),
                          *(undefined4 *)(param_3 + 0x4f4),*(undefined4 *)(param_3 + 0x4f8),
                          *(undefined4 *)(param_3 + 0x4c4),*(undefined4 *)(param_3 + 0x4c0));
    local_a0[0] = *(undefined4 *)(param_3 + 0x4d4);
    local_98 = *(undefined4 *)(param_3 + 0x4d8);
    FUN_18017c4b0(uVar2,param_2,param_3,*(undefined4 *)(param_3 + 0x51c),
                  *(undefined4 *)(param_3 + 0x4fc),*(undefined4 *)(param_3 + 0x500),
                  *(undefined4 *)(param_3 + 0x4bc),*(undefined4 *)(param_3 + 0x4c0));
    uVar1 = FUN_180213760(param_3 + 0x20,3,1);
    local_98 = *(undefined4 *)(param_3 + 0x4ec);
    local_88 = *(undefined4 *)(param_3 + 0x4f0);
    local_78 = 0;
    local_80 = 0x1a4;
    local_90 = 0x1a4;
    local_a0[0] = 7;
    FUN_180214c88(param_3 + 0x20,param_2,0,*(undefined4 *)(param_3 + 0x504),local_a0,0x30);
    local_98 = *(undefined4 *)(param_3 + 0x504);
    local_88 = *(undefined4 *)(param_3 + 0x4f4);
    local_78 = 0;
    local_80 = 0x1a4;
    local_90 = 0x1a4;
    local_a0[0] = 7;
    FUN_180214c88(param_3 + 0x20,param_2,0,local_98,local_a0,0x30);
    local_98 = *(undefined4 *)(param_3 + 0x504);
    local_88 = *(undefined4 *)(param_3 + 0x4f8);
    local_78 = 0;
    local_80 = 0x1a4;
    local_90 = 0x1a4;
    local_a0[0] = 7;
    FUN_180214c88(param_3 + 0x20,param_2,0,local_98,local_a0,0x30);
    local_98 = *(undefined4 *)(param_3 + 0x504);
    local_88 = *(undefined4 *)(param_3 + 0x4fc);
    local_78 = 0;
    local_80 = 0x1a4;
    local_90 = 0x1a4;
    local_a0[0] = 7;
    FUN_180214c88(param_3 + 0x20,param_2,0,local_98,local_a0,0x30);
    local_88 = *(undefined4 *)(param_3 + 0x500);
    local_98 = *(undefined4 *)(param_3 + 0x504);
    local_78 = 0;
    local_80 = 0x1a4;
    local_90 = 0x1a4;
    local_a0[0] = 7;
    FUN_180214c88(param_3 + 0x20,param_2,0,local_98,local_a0,0x30);
    local_98 = *(undefined4 *)(param_3 + 0x4bc);
    local_88 = *(undefined4 *)(param_3 + 0x4c0);
    local_78 = 0;
    local_80 = 0x1a4;
    local_90 = 0x1a4;
    local_a0[0] = 7;
    FUN_180214c88(param_3 + 0x20,param_2,0,uVar1,local_a0,0x30);
    local_88 = *(undefined4 *)(param_3 + 0x4c4);
    local_78 = 0;
    local_80 = 0x1a4;
    local_90 = 0x1a4;
    local_a0[0] = 7;
    local_98 = uVar1;
    FUN_180214c88(param_3 + 0x20,param_2,0,uVar1,local_a0,0x30);
    local_88 = *(undefined4 *)(param_3 + 0x49c);
    local_58 = 0;
    local_80 = 0xe4;
    local_90 = 0x1a4;
    local_60 = 0x3e2aaaab;
    local_68 = 0x3e2aaaab;
    local_70 = 0x3e2aaaab;
    local_78._0_4_ = 0x3e2aaaab;
    local_a0[0] = 7;
    local_98 = uVar1;
    FUN_180214c88(param_3 + 0x20,param_2,0x38,uVar1,local_a0,0x50);
    local_98 = *(undefined4 *)(param_3 + 0x504);
    local_48 = 0;
    local_50 = 0x1a4;
    local_60 = 0x3e800000;
    local_68 = 0x3e800000;
    local_70 = 0x3e800000;
    local_78 = CONCAT44(local_78._4_4_,0x3e800000);
    local_58 = CONCAT44(local_58._4_4_,uVar1) | 0x80000000;
    local_88 = *(undefined4 *)(param_3 + 0x49c);
    local_80 = 0xe4;
    local_90 = 0x1a4;
    local_a0[0] = 7;
    FUN_180214c88(param_3 + 0x20,param_2,0x32,local_98,local_a0,0x60);
    FUN_180213800(param_3 + 0x20,uVar1);
  }
  return;
}

