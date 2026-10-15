/*
 * FUN_100135e8 at 100135e8
 * undefined FUN_100135e8(void)
 * Address ranges: 100135e8-10013abb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100135e8(int param_1,undefined4 param_2,int param_3,char param_4,char param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  short *psVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar5 = FUN_100127d8(param_1,param_2,0xffff);
  FUN_10012d90(param_1,uVar5);
  uVar6 = FUN_100127d8(param_1,param_2,0xffff);
  FUN_10012d90(param_1,uVar6);
  uVar9 = FUN_10012968(param_1,param_2,*(undefined2 *)(param_3 + 1),*(undefined1 *)(param_3 + 7),
                       *(undefined1 *)(param_3 + 10),*(undefined1 *)(param_3 + 0xd),param_5);
  if (param_5 != '\0') {
    FUN_10002350(param_2,0x540200100700,uVar9 & 0xffffffff,*(uint *)(param_1 + 4) | 0x80000000,0x70,
                 0);
  }
  FUN_10012d90(param_1,uVar9 & 0xffffffff);
  puVar1 = (undefined1 *)(param_3 + 0xe);
  puVar2 = (undefined1 *)(param_3 + 0xb);
  puVar3 = (undefined1 *)(param_3 + 8);
  psVar4 = (short *)(param_3 + 3);
  uVar10 = FUN_10012968(param_1,param_2,*psVar4,*puVar3,*puVar2,*puVar1,0);
  FUN_10002350(param_2,0x290200100100,uVar5,uVar10 & 0xffffffff,uVar10 >> 0x20,0);
  uVar11 = uVar9 >> 0x20;
  FUN_10002350(param_2,0x590200100700,uVar5,uVar9 & 0xffffffff,uVar11,0);
  uVar10 = FUN_10012968(param_1,param_2,*psVar4 + 1,*puVar3,*puVar2,*puVar1,0);
  FUN_10002350(param_2,0x290200100100,uVar6,uVar10 & 0xffffffff,uVar10 >> 0x20,0);
  FUN_10002350(param_2,0x590200100700,uVar6,uVar9 & 0xffffffff,uVar11,0);
  uVar7 = FUN_100127d8(param_1,param_2,0xffff);
  FUN_10012d90(param_1,uVar7);
  FUN_10002350(param_2,0x290200100100,uVar7,uVar5,0,0);
  FUN_10002350(param_2,0xc60200130700,uVar7,uVar6,0,0x44);
  uVar8 = FUN_100127d8(param_1,param_2,0xffff);
  FUN_10012d90(param_1,uVar8);
  uVar10 = FUN_10012968(param_1,param_2,*psVar4 + 2,*puVar3,*puVar2,*puVar1,0);
  FUN_10002350(param_2,0x290200100100,uVar8,uVar10 & 0xffffffff,uVar10 >> 0x20,0);
  FUN_10002350(param_2,0x590200100700,uVar8,uVar9 & 0xffffffff,uVar11,0);
  if (param_4 == '\0') {
    FUN_10012d60(param_1,uVar9 & 0xffffffff);
  }
  FUN_10002350(param_2,0xc60200130700,uVar5,uVar6,0,0xee);
  if (param_4 == '\0') {
    FUN_10002350(param_2,0x570200100700,uVar6,uVar6,0,0);
  }
  else {
    uVar10 = FUN_10012968(param_1,param_2,*psVar4 + 3,*puVar3,*puVar2,*puVar1,0);
    FUN_10002350(param_2,0x290200100100,uVar6,uVar10 & 0xffffffff,uVar10 >> 0x20,0);
    FUN_10002350(param_2,0x590200100700,uVar6,uVar9 & 0xffffffff,uVar11,0);
    FUN_10012d60(param_1,uVar9 & 0xffffffff);
  }
  FUN_10002350(param_2,0x580200100700,uVar5,uVar7,0,0);
  FUN_10002350(param_2,0x290200100100,uVar7,uVar8,0,0);
  FUN_10002350(param_2,0xc60200130700,uVar7,uVar6,0,0x44);
  FUN_10002350(param_2,0xc60200130700,uVar8,uVar6,0,0xee);
  FUN_10002350(param_2,0x580200100700,uVar7,uVar8,0,0);
  FUN_10002350(param_2,0x290200100100,uVar8,uVar5,0,0);
  FUN_10002350(param_2,0xc60200130700,uVar8,uVar7,0,0x88);
  FUN_10002350(param_2,0xc60200130700,uVar5,uVar7,0,0xdd);
  FUN_10002350(param_2,0x580200100700,uVar5,uVar8,0,0);
  FUN_10012d60(param_1,uVar8);
  FUN_10012d60(param_1,uVar7);
  FUN_10012d60(param_1,uVar6);
  FUN_10012d60(param_1,uVar5);
  return uVar5;
}

