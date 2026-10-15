/*
 * FUN_180111890 at 180111890
 * undefined FUN_180111890(void)
 * Address ranges: 180111890-180111b4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180111890(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 extraout_x1;
  undefined1 auVar6 [16];
  ulonglong local_40;
  ulonglong local_38;
  
  uVar1 = FUN_18010ecc8(param_1,param_2,*(undefined2 *)(param_3 + 1),*(undefined1 *)(param_3 + 7),2,
                        *(undefined1 *)(param_3 + 0xd),1,0);
  FUN_18010f138(param_1,uVar1);
  uVar2 = FUN_18010eb78(param_1,param_2,0xffff);
  FUN_18010f138(param_1,uVar2);
  uVar4 = FUN_18010f178(param_1,extraout_x1,0xffffffff,1);
  local_38 = uVar4;
  FUN_1801060c0(param_2,0x570200100700,uVar2,uVar2,0,0);
  FUN_1801060c0(param_2,0x7e0201400500,uVar4 & 0xffffffff,uVar1,0,0);
  FUN_1801060c0(param_2,0xc20200130700,uVar2,uVar1,0,1);
  uVar3 = FUN_180111590(param_1,param_2,uVar1);
  auVar6 = FUN_18010f108(param_1,uVar1);
  uVar5 = FUN_18010f178(auVar6._0_8_,auVar6._8_8_,0xffffffff,1);
  local_40 = uVar5;
  FUN_1801060c0(param_2,0xc60200130700,uVar3,*(uint *)(param_1 + 4) | 0x80000000,0x170,0x10);
  FUN_1801060c0(param_2,0x890200000210,uVar5 & 0xffffffff,uVar4 & 0xffffffff,0,0);
  FUN_1801060c0(param_2,0x28c10200030010,uVar4 & 0xffffffff,0xffffffff,0,0x17);
  FUN_1801060c0(param_2,0x20810200012010,uVar5 & 0xffffffff,0xffffffff,0,0x7fffff);
  FUN_1801060c0(param_2,0x28810200012010,uVar4 & 0xffffffff,0xffffffff,0,0x7f);
  FUN_1801060c0(param_2,0x8810200012010,uVar5 & 0xffffffff,0xffffffff,0,0x3f800000);
  FUN_1801060c0(param_2,0xc60200130700,uVar3,uVar3,0,0xda);
  FUN_1801060c0(param_2,0x6e0201400700,uVar3,uVar5 & 0xffffffff,0,0);
  FUN_1801060c0(param_2,0xc60200130700,uVar3,uVar3,0,0xe1);
  FUN_1801060c0(param_2,0x2a0201300700,uVar3,uVar4 & 0xffffffff,0,0);
  FUN_1801060c0(param_2,0x540200100700,uVar3,uVar2,0,0);
  FUN_1801060c0(param_2,0x550200100700,uVar2,*(uint *)(param_1 + 4) | 0x80000000,0x140,0);
  FUN_1801060c0(param_2,0x560200100700,uVar2,uVar3,0,0);
  FUN_18010f268(param_1,param_2,&local_40);
  FUN_18010f268(param_1,param_2,&local_38);
  FUN_18010f108(param_1,uVar2);
  return uVar2;
}

