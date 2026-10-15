/*
 * FUN_18018d4f8 at 18018d4f8
 * undefined FUN_18018d4f8(void)
 * Address ranges: 18018d4f8-18018d7eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18018d4f8(undefined8 param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  uint *local_130;
  uint *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  uint local_e0 [4];
  uint local_d0;
  undefined1 local_cc;
  int local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 *local_b0;
  uint local_a0;
  undefined1 local_9c;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_70 [48];
  
  uVar2 = FUN_180213038(*(undefined4 *)(param_2 + 0x20));
  uVar1 = param_4;
  if (((int)uVar2 != 0x51) && (*(char *)(param_2 + 0x75) != '\0')) {
    uVar1 = FUN_180213760(param_2 + 0x20,4,0);
    local_108 = 0;
    uStack_100 = 0;
    local_110 = 0x54;
    local_120._0_4_ = 0xff;
    local_130._0_4_ = 3;
    local_118._0_4_ = *(undefined4 *)(param_2 + 0x2d4);
    local_128._0_4_ = param_4;
    FUN_180214c88(param_2 + 0x20,param_3,0xe,uVar1,&local_130,0x38);
    local_108 = 0;
    local_110 = 0x54;
    local_118 = CONCAT44(local_118._4_4_,uVar1);
    local_120._0_4_ = 0x54;
    local_130._0_4_ = 3;
    local_128._0_4_ = param_4;
    FUN_180214c88(param_2 + 0x20,param_3,0,uVar1,&local_130,0x30);
    local_118 = 0;
    local_120 = CONCAT44(local_120._4_4_,0xea);
    local_130 = (uint *)CONCAT44(local_130._4_4_,0xc);
    local_128 = (uint *)CONCAT44(local_128._4_4_,param_4);
    uVar2 = FUN_180214c88(param_2 + 0x20,param_3,0x36,uVar1,&local_130,0x20);
  }
  auVar8 = FUN_18018b228(uVar2,param_2,*(undefined4 *)(param_2 + 0x1c0),0xf,&local_a0);
  FUN_18018b228(auVar8._0_8_,auVar8._8_8_,*(undefined4 *)(param_2 + 0x1c4));
  local_130 = &local_d0;
  local_cc = 0xe4;
  uStack_b8 = 0xffffffff;
  uStack_b4 = 0xffffffff;
  local_c0 = -1;
  uStack_bc = 0xffffffff;
  local_128 = (uint *)0x0;
  local_d0 = uVar1;
  FUN_180214e10(param_2 + 0x20,param_3,0x36,&local_a0,&local_130,0x10);
  local_130 = &local_d0;
  local_128 = (uint *)0x0;
  FUN_180214e10(param_2 + 0x20,param_3,0x36,auStack_70,&local_130,0x10);
  uVar1 = 0;
  uVar5 = (uint)*(undefined8 *)(param_2 + 8);
  uVar4 = (uVar5 & 0x2a) >> 1 | (uVar5 & 0x15) << 1;
  local_e0[0] = uVar5 & 0x3f;
  uVar4 = (uint)LZCOUNT(((uVar4 & 0x33333333) >> 2 |
                        ((uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x3030303) << 2) << 4) << 0x18);
  if ((1 - (uVar4 >> 5) & 0xff) == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    *(byte *)((longlong)local_e0 + (longlong)((int)uVar4 >> 3)) =
         *(byte *)((longlong)local_e0 + (longlong)((int)uVar4 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
  }
  uVar3 = (ulonglong)local_e0[0];
  if (uVar4 != 0xffffffff) {
    uVar6 = (ulonglong)uVar4;
    uVar7 = uVar3;
    local_b0 = (undefined4 *)(param_2 + 0x1c0);
    do {
      FUN_18018b228(uVar3,param_2,local_b0[(uVar1 >> 2) + 0xd],1 << (ulonglong)(uVar1 & 3),
                    auStack_70);
      local_d0 = *(uint *)(param_2 + 0x2cc);
      local_9c = 0xe4;
      uStack_88 = 0xffffffffffffffff;
      local_90 = 0xffffffffffffffff;
      local_c0 = (uint)uVar6 * 0x10 + 0x20;
      local_cc = 0xe4;
      uStack_bc = 0xffffffff;
      uStack_b8 = 0xffffffff;
      uStack_b4 = 0xffffffff;
      local_128 = &local_d0;
      local_120 = 0;
      local_130 = &local_a0;
      local_a0 = param_4;
      uVar3 = FUN_180214e10(param_2 + 0x20,param_3,0x11,auStack_70,&local_130,0x18);
      uVar1 = uVar1 + 1;
      *(uint *)(param_2 + 0x4c) = *(uint *)(param_2 + 0x4c) | 1 << (ulonglong)((uint)uVar6 & 0x1f);
      uVar4 = ((uint)uVar7 & 0xaaaaaaaa) >> 1 | ((uint)uVar7 & 0x55555555) << 1;
      uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      uVar6 = LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
      uVar4 = (uint)uVar6;
      if ((1 - (uVar4 >> 5) & 0xff) == 0) {
        uVar6 = 0xffffffff;
      }
      else {
        *(byte *)((longlong)local_e0 + (longlong)((int)uVar4 >> 3)) =
             *(byte *)((longlong)local_e0 + (longlong)((int)uVar4 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
        uVar7 = (ulonglong)local_e0[0];
      }
    } while ((int)uVar6 != -1);
  }
  return;
}

