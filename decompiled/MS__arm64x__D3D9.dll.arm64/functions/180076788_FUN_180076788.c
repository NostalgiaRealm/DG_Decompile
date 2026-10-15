/*
 * FUN_180076788 at 180076788
 * undefined FUN_180076788(void)
 * Address ranges: 180076788-180076c27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180076788(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong in_stack_ffffffffffffff80;
  uint local_50 [4];
  
  uVar4 = FUN_1800764b0(param_1,param_3);
  FUN_1800722c8(uVar4,param_2);
  FUN_180071c08(param_1,param_3,param_2,0x36,1,0xf,*(undefined4 *)(param_3 + 0x15c),0xe4,0x12345678)
  ;
  uVar5 = (uint)*(undefined8 *)(param_3 + 8);
  local_50[0] = uVar5 & 0x3f;
  uVar5 = (uVar5 & 0x2a) >> 1 | (uVar5 & 0x15) << 1;
  lVar7 = LZCOUNT(((uVar5 & 0x33333333) >> 2 |
                  ((uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x3030303) << 2) << 4) << 0x18);
  if ((1 - ((uint)lVar7 >> 5) & 0xff) != 0) {
    uVar5 = 0;
    while( true ) {
      uVar6 = (uint)lVar7;
      uVar2 = *(undefined4 *)(param_3 + 0x15c);
      *(byte *)((longlong)local_50 + (longlong)((int)uVar6 >> 3)) =
           *(byte *)((longlong)local_50 + (longlong)((int)uVar6 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
      in_stack_ffffffffffffff80 = lVar7 * 0x10 + 0x4f0;
      FUN_180071c08(param_1,param_3,param_2,0x11,(uVar5 >> 2) + 0xd,1 << (ulonglong)(uVar5 & 3),
                    uVar2,0xe4,*(undefined4 *)(param_3 + 0xd0),0xe4,in_stack_ffffffffffffff80,
                    0x12345678);
      *(uint *)(param_3 + 0x4c) = *(uint *)(param_3 + 0x4c) | 1 << (ulonglong)(uVar6 & 0x1f);
      uVar6 = (local_50[0] & 0xaaaaaaaa) >> 1 | (local_50[0] & 0x55555555) << 1;
      uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
      lVar7 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
      if ((1 - ((uint)lVar7 >> 5) & 0xff) == 0) break;
      uVar5 = uVar5 + 1;
    }
  }
  uVar5 = *(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44);
  if ((((uVar5 >> 0x1a & 1) == 0) || ((uVar5 & 0x3000000) == 0)) || ((uVar5 >> 0x1b & 1) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1800f42d0(param_3 + 0x20,1,1);
  }
  FUN_1800732c0(param_1,param_2,param_3,uVar2);
  uVar4 = FUN_1800737a0(param_1,param_2,param_3,uVar2);
  FUN_180071d10(uVar4,param_3,2);
  if ((*(uint *)(param_3 + 0x1ac) >> 0x13 & 1) != 0) {
    uVar2 = (**(code **)*param_1)(param_1,param_2,param_3,4,1);
    FUN_180071c08(param_1,param_3,param_2,0x36,4,0xe,uVar2,0,0x12345678);
    *(byte *)(param_3 + 0x1c7) = *(byte *)(param_3 + 0x1c7) | 0xe;
  }
  if (*(byte *)(param_3 + 0x1c7) != 0xf) {
    in_stack_ffffffffffffff80 = in_stack_ffffffffffffff80 & 0xffffffff00000000;
    FUN_180071c08(param_1,param_3,param_2,0x36,4,*(byte *)(param_3 + 0x1c7) ^ 0xf,
                  *(undefined4 *)(param_3 + 0xbc),0xe4,0x3f800000,0,in_stack_ffffffffffffff80,0,
                  0x12345678);
  }
  if (*(char *)(param_3 + 0x1c9) == '\0') {
    if ((*(uint *)(param_3 + 0x1ac) & 1) == 0) {
      in_stack_ffffffffffffff80 = CONCAT44((int)(in_stack_ffffffffffffff80 >> 0x20),0x3f800000);
      FUN_180071c08(param_1,param_3,param_2,0x36,2,0xf,*(undefined4 *)(param_3 + 0xbc),0xe4,
                    0x3f800000,0x3f800000,in_stack_ffffffffffffff80,0x3f800000,0x12345678);
    }
    else {
      iVar3 = *(int *)(param_3 + 0x1a4);
      if (iVar3 == 0) {
        iVar3 = (**(code **)*param_1)(param_1,param_2,param_3,5,*(undefined1 *)(param_3 + 0x1c5));
        *(int *)(param_3 + 0x1a4) = iVar3;
      }
      FUN_180071c08(param_1,param_3,param_2,0x36,2,0xf,iVar3,0xe4,0x12345678);
    }
    if ((*(uint *)(param_3 + 0x1ac) >> 1 & 1) == 0) {
      uVar2 = 0xf;
      if (*(char *)(param_3 + 0x1c8) == '\0') {
        uVar2 = 7;
      }
      FUN_180071c08(param_1,param_3,param_2,0x36,3,uVar2,*(undefined4 *)(param_3 + 0xbc),0xe4,0,0,
                    in_stack_ffffffffffffff80 & 0xffffffff00000000,0x3f800000,0x12345678);
    }
    else {
      iVar3 = *(int *)(param_3 + 0x1a8);
      if (iVar3 == 0) {
        iVar3 = (**(code **)*param_1)(param_1,param_2,param_3,6,*(undefined1 *)(param_3 + 0x1c6));
        *(int *)(param_3 + 0x1a8) = iVar3;
      }
      FUN_180071c08(param_1,param_3,param_2,0x36,3,7,iVar3,0xa4,0x12345678);
    }
    bVar1 = *(byte *)(param_3 + 0x1c5);
    *(byte *)(param_3 + 0x1c5) = bVar1 & 0xf0;
    if (((bVar1 & 0xf0) == 0) && (*(int *)(param_3 + 0x1a4) != 0)) {
      (**(code **)(*param_1 + 8))(param_1,param_3);
      *(undefined4 *)(param_3 + 0x1a4) = 0;
    }
    bVar1 = *(byte *)(param_3 + 0x1c6);
    *(byte *)(param_3 + 0x1c6) = bVar1 & 0xf0;
    if (((bVar1 & 0xf0) == 0) && (*(int *)(param_3 + 0x1a8) != 0)) {
      (**(code **)(*param_1 + 8))(param_1,param_3);
      *(undefined4 *)(param_3 + 0x1a8) = 0;
    }
  }
  uVar4 = FUN_180074818(param_1,param_2,param_3);
  FUN_180071d10(uVar4,param_3,1);
  if (*(char *)(param_3 + 0x1c9) != '\0') {
    uVar4 = FUN_180074eb8(param_1,param_2,param_3,param_4);
    bVar1 = *(byte *)(param_3 + 0x1c5);
    *(byte *)(param_3 + 0x1c5) = bVar1 & 0xf0;
    if (((bVar1 & 0xf0) == 0) && (*(int *)(param_3 + 0x1a4) != 0)) {
      uVar4 = (**(code **)(*param_1 + 8))(param_1,param_3);
      *(undefined4 *)(param_3 + 0x1a4) = 0;
    }
    bVar1 = *(byte *)(param_3 + 0x1c6);
    *(byte *)(param_3 + 0x1c6) = bVar1 & 0xf0;
    if (((bVar1 & 0xf0) == 0) && (*(int *)(param_3 + 0x1a8) != 0)) {
      uVar4 = (**(code **)(*param_1 + 8))(param_1,param_3);
      *(undefined4 *)(param_3 + 0x1a8) = 0;
    }
    FUN_180071d10(uVar4,param_3,4);
  }
  return;
}

