/*
 * FUN_18005cdf8 at 18005cdf8
 * undefined FUN_18005cdf8(void)
 * Address ranges: 18005cdf8-18005d047
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005cdf8(undefined8 param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  ulonglong uVar6;
  uint local_50 [4];
  
  if ((param_4 >> 0x38 & 1) != 0) {
    auVar4 = FUN_1800f42d0(param_2,4,1);
    local_50[0] = auVar4._0_4_;
    uVar2 = FUN_1800f42d0(param_2,auVar4._8_8_,0);
    uVar3 = 0;
    local_50[1] = uVar2;
    do {
      uVar5 = (uVar3 & 0x3fffffff) * 0x10 + 0x10;
      uVar6 = 0;
      FUN_1800f5730(param_2,param_3,0x11,
                    *(undefined4 *)((longlong)local_50 + (uVar3 & 0xfffffffffffffffc)),
                    1 << (ulonglong)((uint)uVar3 & 3),0x410101,0xe4,*(undefined4 *)(param_2 + 0x68),
                    0xe4,uVar5,0);
      uVar1 = (uint)uVar3 + 1;
      uVar3 = (ulonglong)uVar1;
    } while (uVar1 < 6);
    uVar6 = uVar6 & 0xffffffff00000000;
    uVar5 = uVar5 & 0xffffffff00000000;
    FUN_1800f5730(param_2,param_3,0x31,auVar4._0_8_ & 0xffffffff,0xf,auVar4._0_8_ & 0xffffffff,0xe4,
                  *(undefined4 *)(param_2 + 0xac),0xe4,uVar5,uVar6,0,0,0);
    FUN_1800f5730(param_2,param_3,0x31,uVar2,3,uVar2,0x54,*(undefined4 *)(param_2 + 0xac),0xe4,
                  uVar5 & 0xffffffff00000000,uVar6 & 0xffffffff00000000,0,0,0);
    FUN_1800f5730(param_2,param_3,1,0x410000,0xf,0x410000,0xe4,*(undefined4 *)(param_2 + 0x68),0xe4,
                  0x70,0);
    FUN_1800f5730(param_2,param_3,1,0x410001,3,0x410001,0x54,*(undefined4 *)(param_2 + 0x68),0xe4,
                  0x80,0);
    FUN_1800f5730(param_2,param_3,0x3c,0x410000,3,0x410000,0xe4,0x410000,0xfe,0);
    FUN_1800f5730(param_2,param_3,0x3c,0x410000,3,0x410000,0xe4,0x410001,0x54,0);
    FUN_1800f5730(param_2,param_3,0x3c,0x410000,1,0x410000,0xe4,0x410000,0x55,0);
    FUN_1800f5730(param_2,param_3,0x4000d,0xffffffff,0x10410000,0,0);
  }
  return;
}

