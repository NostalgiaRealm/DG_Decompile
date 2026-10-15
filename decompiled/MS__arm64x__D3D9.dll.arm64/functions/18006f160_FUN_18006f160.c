/*
 * FUN_18006f160 at 18006f160
 * undefined FUN_18006f160(void)
 * Address ranges: 18006f160-18006f59b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18006f160(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  uint *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong extraout_x14;
  ulonglong uVar5;
  
  puVar1 = (uint *)(param_2 + 0x280);
  FUN_180078f18();
  if ((*puVar1 & 0x3f00) == 0) {
    FUN_1800f4370(param_2 + 0x20);
    *puVar1 = 0;
  }
  uVar2 = FUN_1800f42d0(param_2 + 0x20,4,1);
  uVar5 = uVar2 & 0xffffffff;
  if ((*(int *)(param_2 + 0x288) != 0 || *(int *)(param_2 + 0x28c) != 0) ||
      *(int *)(param_2 + 0x290) != 0) {
    uVar2 = FUN_1800f5730(param_2 + 0x20,param_3,1,uVar5,
                          *(int *)(param_2 + 0x288) != 0 | (*(int *)(param_2 + 0x28c) != 0) << 1 |
                          (*(int *)(param_2 + 0x290) != 0) << 2,*(undefined4 *)(param_2 + 0x2d8),0,
                          0x260,*(undefined4 *)(param_2 + 0xbc),0xe4,1,2,4,0,0);
  }
  uVar3 = FUN_18006f5a0(uVar2,param_2,param_3,*(undefined4 *)(param_2 + 0x288),uVar5,0,2);
  uVar3 = FUN_18006f5a0(uVar3,param_2,param_3,*(undefined4 *)(param_2 + 0x28c),uVar5,0x55,3);
  uVar3 = FUN_18006f5a0(uVar3,param_2,param_3,*(undefined4 *)(param_2 + 0x290),uVar5,0xaa,4);
  if (((*(int *)(param_2 + 0x294) != 0 || *(int *)(param_2 + 0x298) != 0) ||
      *(int *)(param_2 + 0x29c) != 0) || *(int *)(param_2 + 0x2a0) != 0) {
    uVar3 = FUN_1800f5730(param_2 + 0x20,param_3,1,uVar5,
                          *(int *)(param_2 + 0x294) != 0 | (*(int *)(param_2 + 0x298) != 0) << 1 |
                          (*(int *)(param_2 + 0x29c) != 0) << 2 |
                          (*(int *)(param_2 + 0x2a0) != 0) << 3,*(undefined4 *)(param_2 + 0x2d8),0,
                          0x260,*(undefined4 *)(param_2 + 0xbc),0xe4,8,0x10,0x20,0x40,0);
  }
  uVar3 = FUN_18006f5a0(uVar3,param_2,param_3,*(undefined4 *)(param_2 + 0x294),uVar5,0,5);
  uVar3 = FUN_18006f5a0(uVar3,param_2,param_3,*(undefined4 *)(param_2 + 0x298),uVar5,0x55,6);
  uVar3 = FUN_18006f5a0(uVar3,param_2,param_3,*(undefined4 *)(param_2 + 0x29c),uVar5,0xaa,7);
  uVar3 = FUN_18006f5a0(uVar3,param_2,param_3,*(undefined4 *)(param_2 + 0x2a0),uVar5,0xff,8);
  if (((*(int *)(param_2 + 0x2a4) != 0 || *(int *)(param_2 + 0x2a8) != 0) ||
      *(int *)(param_2 + 0x2ac) != 0) || *(int *)(param_2 + 0x2b0) != 0) {
    uVar3 = FUN_1800f5730(param_2 + 0x20,param_3,1,uVar5,
                          *(int *)(param_2 + 0x2a4) != 0 | (*(int *)(param_2 + 0x2a8) != 0) << 1 |
                          (*(int *)(param_2 + 0x2ac) != 0) << 2 |
                          (*(int *)(param_2 + 0x2b0) != 0) << 3,*(undefined4 *)(param_2 + 0x2d8),0,
                          0x260,*(undefined4 *)(param_2 + 0xbc),0xe4,0x80,0x100,0x200,0x400,0);
  }
  uVar3 = FUN_18006f5a0(uVar3,param_2,param_3,*(undefined4 *)(param_2 + 0x2a4),uVar5,0,9);
  uVar3 = FUN_18006f5a0(uVar3,param_2,param_3,*(undefined4 *)(param_2 + 0x2a8),uVar5,0x55,10);
  uVar3 = FUN_18006f5a0(uVar3,param_2,param_3,*(undefined4 *)(param_2 + 0x2ac),uVar5,0xaa,0xb);
  FUN_18006f5a0(uVar3,param_2,param_3,*(undefined4 *)(param_2 + 0x2b0),uVar5,0xff,0xc);
  FUN_1800f4370(param_2 + 0x20,uVar5);
  if ((*(uint *)(param_2 + 0x290) & 0x3f00) == 0) {
    FUN_1800f4370(param_2 + 0x20);
    *(undefined4 *)(param_2 + 0x290) = 0;
  }
  if ((*(uint *)(param_2 + 0x288) & 0x3f00) == 0) {
    FUN_1800f4370(param_2 + 0x20);
    *(undefined4 *)(param_2 + 0x288) = 0;
  }
  if ((*(uint *)(param_2 + 0x28c) & 0x3f00) == 0) {
    FUN_1800f4370(param_2 + 0x20);
    *(undefined4 *)(param_2 + 0x28c) = 0;
  }
  uVar4 = 0;
  do {
    if ((puVar1[uVar4 + 5] & 0x3f00) == 0) {
      FUN_1800f4370(param_2 + 0x20);
      puVar1[extraout_x14 & 0xffffffff] = 0;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 8);
  return;
}

