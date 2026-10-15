/*
 * FUN_180111cb8 at 180111cb8
 * undefined FUN_180111cb8(void)
 * Address ranges: 180111cb8-180112033
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180111cb8(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  ulonglong local_48;
  
  uVar3 = FUN_18010ecc8(param_1,param_2,*(undefined2 *)(param_3 + 1),*(undefined1 *)(param_3 + 7),
                        *(undefined1 *)(param_3 + 10),*(undefined1 *)(param_3 + 0xd),1,0);
  FUN_18010f138(param_1,uVar3);
  uVar4 = FUN_18010eb78(param_1,param_2,0xffff);
  FUN_18010f138(param_1,uVar4);
  uVar5 = FUN_18010eb78(param_1,param_2,0xffff);
  FUN_18010f138(param_1,uVar5);
  FUN_180113dc0(param_1,param_2,0);
  uVar7 = FUN_18010f178(param_1,extraout_x1,0xffffffff,1);
  local_48 = uVar7;
  FUN_1801060c0(param_2,0x570200100700,uVar5,uVar5,0,0);
  FUN_1801060c0(param_2,0x290200100100,uVar4,*(uint *)(param_1 + 4) | 0x80000000,0x170,0);
  FUN_1801060c0(param_2,0xc20201330700,uVar5,uVar3,0,1);
  FUN_1801060c0(param_2,0x500200100700,uVar7 & 0xffffffff,uVar5,0,0);
  FUN_1801060c0(param_2,0x290200100100,uVar5,uVar3,0,0);
  FUN_1801060c0(param_2,0xf70200010010,uVar7 & 0xffffffff,0xffffffff,0,1);
  FUN_1801060c0(param_2,0xc60200130700,uVar5,uVar5,0,0xff);
  FUN_1801060c0(param_2,0x840100110000,0xffffffff,0xffffffff,0,0);
  iVar1 = (int)param_2[1] - (int)*param_2;
  FUN_1801060c0(param_2,0x110201300100,uVar4,uVar3,0,0);
  FUN_1801060c0(param_2,0xf70200010010,uVar7 & 0xffffffff,0xffffffff,0,2);
  FUN_1801060c0(param_2,0xc60200130700,uVar4,uVar4,0,0xe3);
  FUN_1801060c0(param_2,0x840100110000,0xffffffff,0xffffffff,0,0);
  iVar2 = (int)param_2[1] - (int)*param_2;
  FUN_1801060c0(param_2,0x5f0200100700,uVar5,*(uint *)(param_1 + 4) | 0x80000000,400,0);
  FUN_1801060c0(param_2,0x5d0200100700,uVar5,*(uint *)(param_1 + 4) | 0x80000000,0x180,0);
  FUN_1801060c0(param_2,0xc60200130700,uVar3,uVar3,0,0x55);
  FUN_18010f268(param_1,param_2,&local_48);
  uVar6 = FUN_180111590(param_1,param_2,uVar3);
  FUN_18010f138(param_1,uVar6);
  FUN_1801060c0(param_2,0x590200100700,uVar6,uVar5,0,0);
  uVar8 = FUN_18010f108(param_1,uVar5);
  FUN_180110d18(uVar8,param_2,uVar6);
  FUN_18010f108(param_1,uVar6);
  FUN_1801060c0(param_2,0x110201300100,uVar4);
  FUN_1801060c0(param_2,0xc60200130700,uVar4,uVar4,0,199);
  *(int *)(*param_2 + (ulonglong)(iVar1 - 4)) = ((int)param_2[1] - (int)*param_2) - iVar1;
  *(int *)(*param_2 + (ulonglong)(iVar2 - 4)) = ((int)param_2[1] - (int)*param_2) - iVar2;
  uVar8 = FUN_18010f108(param_1,uVar4);
  FUN_18010f108(uVar8,uVar3);
  return uVar4;
}

