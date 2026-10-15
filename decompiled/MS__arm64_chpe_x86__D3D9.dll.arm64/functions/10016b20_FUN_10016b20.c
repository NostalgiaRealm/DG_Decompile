/*
 * FUN_10016b20 at 10016b20
 * undefined FUN_10016b20(void)
 * Address ranges: 10016b20-10016c9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10016b20(undefined4 param_1,undefined4 param_2,int param_3,byte param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 extraout_x1;
  undefined1 auVar3 [16];
  ulonglong local_50 [2];
  
  uVar1 = FUN_10014800(param_1,param_2,*(undefined2 *)(param_3 + 0x10),*(undefined1 *)(param_3 + 8),
                       0,0,1,0);
  FUN_10014c78(param_1,uVar1);
  auVar3 = FUN_10014750(param_1,extraout_x1,*(undefined2 *)(param_3 + 0x12));
  uVar2 = FUN_10014cc0(param_1,auVar3._8_8_,0xffffffff,1);
  local_50[0] = uVar2;
  FUN_10002470(param_2,0xc20200130700,uVar1,auVar3._0_8_ & 0xffffffff,auVar3._0_8_ >> 0x20,
               (&DAT_10160a9f)[*(byte *)(param_3 + 2)]);
  FUN_10002470(param_2,0x500200100700,uVar2 & 0xffffffff,uVar1,0,0);
  FUN_10002470(param_2,0x20810200012010,uVar2 & 0xffffffff,0xffffffff,0,
               1 << (ulonglong)(*(uint *)(param_3 + 0xc) & 3));
  FUN_10014dd8(param_1,param_2,local_50);
  FUN_10014c48(param_1,uVar1);
  FUN_10019908(param_1,param_2,0);
  FUN_10002470(param_2,((ulonglong)param_4 ^ 1) + 4 << 0x28 | 0x800100110000,0xffffffff,0xffffffff,0
               ,0);
  return;
}

