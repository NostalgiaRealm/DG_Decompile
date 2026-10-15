/*
 * FUN_18006ad48 at 18006ad48
 * undefined FUN_18006ad48(void)
 * Address ranges: 18006ad48-18006b42b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18006ad48(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *extraout_x14;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined8 in_stack_ffffffffffffff28;
  undefined4 uVar10;
  undefined8 uVar9;
  undefined4 uVar11;
  undefined8 in_stack_ffffffffffffff38;
  ulonglong uVar12;
  undefined4 uVar13;
  byte local_70;
  byte local_6f [7];
  uint local_68;
  uint uStack_64;
  undefined8 local_60;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  local_60 = param_3;
  uVar1 = FUN_1800f42d0(param_4 + 0x20,1,1);
  uVar2 = uStack_64;
  if (*(char *)(param_4 + 0x540) == '\0') {
    uStack_64 = uStack_64 & 0xffffff00;
    *(ulonglong *)(param_4 + 0x230) = CONCAT44(uVar2,uVar1) & 0xffffff00ffffffff;
    local_68 = uVar1;
  }
  else {
    *(uint *)(param_4 + 0xe4) = uVar1 | 0x10000000;
  }
  uVar11 = 0;
  uVar5 = CONCAT44(uVar3,1);
  FUN_1800f5730(param_4 + 0x20,param_2,0x2a,uVar1,1,param_7,0,
                *(uint *)(param_4 + 0x498) | 0x10000000,0,uVar5,0);
  uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),*(undefined4 *)(param_4 + 0x498));
  FUN_1800f5730(param_4 + 0x20,param_2,0x26,*(undefined4 *)(param_4 + 0x4a0),0,uVar1,1,uVar1,0,uVar5
                ,CONCAT44(uVar11,0xe4),CONCAT44(uVar4,*(undefined4 *)(param_4 + 0x52c)),0);
  uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
  auVar8 = FUN_1800f42d0(param_4 + 0x20,1,1);
  uVar6 = auVar8._0_8_ & 0xffffffff;
  uVar2 = FUN_1800f42d0(param_4 + 0x20,auVar8._8_8_,0);
  FUN_1800f5730(param_4 + 0x20,param_2,1,uVar6,1,param_7,0,*(undefined4 *)(param_4 + 0x498),0,
                CONCAT44(uVar3,1),0);
  FUN_1800f5730(param_4 + 0x20,param_2,1,uVar2,1,param_9,0,param_8,0,0);
  FUN_1800f5730(param_4 + 0x20,param_2,0x57,uVar2,1,uVar2,0,param_8,0,0);
  uVar3 = 0;
  FUN_1800f5730(param_4 + 0x20,param_2,0x3c,uVar2,1,uVar2,0,uVar6,0,0);
  FUN_1800f5730(param_4 + 0x20,param_2,0x4001f,0xffffffff,uVar2 | 0x10000000,0,0);
  uVar12 = 0;
  FUN_1800f5730(param_4 + 0x20,param_2,0x37,uVar2,1,uVar6,0,param_8,0,
                CONCAT44(uVar3,*(undefined4 *)(param_4 + 0x498)),0,0,0);
  FUN_1800f5730(param_4 + 0x20,param_2,0x3c,param_9,1,param_9,0,uVar2,0,0);
  FUN_1800f5730(param_4 + 0x20,param_2,0x29,param_8,1,param_8,0,auVar8._0_4_ | 0x10000000,0,0);
  uVar3 = FUN_1800f42d0(param_4 + 0x20,3,1);
  uVar11 = 0;
  FUN_1800f5730(param_4 + 0x20,param_2,0x1e,uVar3,1,param_6,0,auVar8._0_4_ | 0x80000000,0,0);
  uVar4 = 0;
  FUN_1800f5730(param_4 + 0x20,param_2,0x2a,uVar3,2,param_7,0,
                *(uint *)(param_4 + 0x498) | 0x10000000,0,CONCAT44(uVar11,1),0);
  FUN_1800f5730(param_4 + 0x20,param_2,0x56,uVar3,6,uVar3,0x150,0);
  uVar10 = 0;
  uVar5 = CONCAT44(uVar4,0x55);
  FUN_1800f5730(param_4 + 0x20,param_2,0xe,uVar3,2,uVar3,0xaa,uVar3,uVar5,0);
  uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
  FUN_1800f4370(param_4 + 0x20,uVar3);
  uVar4 = FUN_1800f42d0(param_4 + 0x20,4,1);
  *(undefined4 *)(param_4 + 0x4b0) = uVar4;
  uVar13 = 0;
  uVar9 = CONCAT44(uVar10,*(undefined4 *)(param_4 + 0x498));
  uVar5 = CONCAT44(uVar11,0x55);
  FUN_1800f5730(param_4 + 0x20,param_2,0x37,uVar4,2,uVar3,0,uVar3,uVar5,uVar9,0,
                uVar12 & 0xffffffff00000000,0);
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = CONCAT44((int)((ulonglong)uVar9 >> 0x20),param_5);
  uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),0x55);
  FUN_1800f5730(param_4 + 0x20,param_2,0x37,*(undefined4 *)(param_4 + 0x4b0),1,uVar6,0,param_5,uVar5
                ,uVar9,0,0);
  uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
  uVar4 = (undefined4)((ulonglong)uVar9 >> 0x20);
  FUN_1800f4370(param_4 + 0x20,auVar8._0_8_ & 0xffffffff);
  uVar5 = CONCAT44(uVar3,0xe4);
  FUN_1800f5730(param_4 + 0x20,param_2,0x32,*(undefined4 *)(param_4 + 0x4b0),0xf,
                *(undefined4 *)(param_4 + 0x4b0),0x50,*(undefined4 *)(param_4 + 0x49c),uVar5,
                CONCAT44(uVar4,0x3f800000),CONCAT44(uVar11,0xbf800000),CONCAT44(uVar10,0x3f800000),
                CONCAT44(uVar13,0xbf800000),*(undefined4 *)(param_4 + 0x49c),0xe4,0,0x3f800000,0,
                0x3f800000,0);
  uVar3 = *(undefined4 *)(param_4 + 0x4b0);
  uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),0x11);
  FUN_1800f5730(param_4 + 0x20,param_2,0x38,uVar3,0xf,uVar3,0xaf,uVar3,uVar5,0);
  uVar3 = *(undefined4 *)(param_4 + 0x4b0);
  uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),0x55);
  FUN_1800f5730(param_4 + 0x20,param_2,0,uVar3,2,uVar3,0xff,uVar3,uVar5,0);
  uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if ((*(char *)(param_4 + 0x53e) != '\0') || (*(char *)(param_4 + 0x53f) != '\0')) {
    uVar4 = FUN_1800f42d0(param_4 + 0x20,3,1);
    *(undefined4 *)(param_4 + 0x4b4) = uVar4;
    uVar5 = CONCAT44(uVar3,0xa4);
    FUN_1800f5730(param_4 + 0x20,param_2,0x38,uVar4,7,*(undefined4 *)(param_4 + 0x4b0),0xa4,
                  *(undefined4 *)(param_4 + 0x4b0),uVar5,0);
    uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  if (*(char *)(param_4 + 0x53e) != '\0') {
    uVar4 = FUN_1800f42d0(param_4 + 0x20,3,1);
    *(undefined4 *)(param_4 + 0x4b8) = uVar4;
    FUN_1800f5730(param_4 + 0x20,param_2,0x38,uVar4,7,*(undefined4 *)(param_4 + 0x4b4),0xa4,
                  *(undefined4 *)(param_4 + 0x4b0),CONCAT44(uVar3,0xa4),0);
  }
  uVar2 = *(uint *)(param_4 + 0x70);
  *(uint *)(param_4 + 0x70) = uVar2 + 1;
  *(uint *)(param_4 + (ulonglong)uVar2 * 4 + 0x60) =
       *(int *)(param_4 + 0x52c) +
       ((uint)*(undefined8 *)(param_4 + 0x520) >> 0xc & 0xf) * *(int *)(param_4 + 0x52c);
  if (*(char *)(param_4 + 0x540) == '\0') {
    FUN_18006d710(param_1,param_2,local_60,param_4,uVar2);
  }
  else {
    *(uint *)(param_4 + 0xe8) = uVar2;
    FUN_180076788(param_1,param_2,param_4,*(undefined1 *)(param_4 + 0x541));
  }
  if (*(int *)(param_4 + 0x4b8) != 0) {
    FUN_1800f4370(param_4 + 0x20);
    *(undefined4 *)(param_4 + 0x4b8) = 0;
  }
  if (*(int *)(param_4 + 0x4b4) != 0) {
    FUN_1800f4370(param_4 + 0x20);
    *extraout_x14 = 0;
  }
  FUN_1800f4370(param_4 + 0x20,*(undefined4 *)(param_4 + 0x4b0));
  *(undefined4 *)(param_4 + 0x4b0) = 0;
  FUN_1800f5730(param_4 + 0x20,param_2,0x15,0);
  uVar7 = 0;
  do {
    uVar5 = FUN_1800f5730(param_4 + 0x20,param_2,0x36,uVar7 | 0x410200,0xf,
                          uVar7 | uVar2 << 0xe | 0x40420300,0xe4,uVar1,0,0);
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0xd);
  local_70 = 0;
  local_6f[0] = 0;
  func_0x000180181498(uVar5,param_4,&local_70,local_6f);
  if (local_70 != 0) {
    FUN_1800f5730(param_4 + 0x20,param_2,0x36,0x41020d,local_70,uVar2 << 0xe | 0x4042030d,
                  (&DAT_18022c458)[(uint)local_70],uVar1,0,0);
  }
  if (local_6f[0] != 0) {
    FUN_1800f5730(param_4 + 0x20,param_2,0x36,0x41020e,local_6f[0],uVar2 << 0xe | 0x4042030e,
                  (&DAT_18022c458)[(uint)local_6f[0]],uVar1,0,0);
  }
  FUN_1800f4370(param_4 + 0x20,uVar1);
  FUN_1800f5730(param_4 + 0x20,param_2,0x75,0xffffffff,0x20011000,0,0);
  return;
}

