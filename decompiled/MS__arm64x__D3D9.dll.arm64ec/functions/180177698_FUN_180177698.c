/*
 * FUN_180177698 at 180177698
 * undefined FUN_180177698(void)
 * Address ranges: 180177698-18017773b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180177698(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 local_70 [2];
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined8 local_28;
  
  if (*(int *)(param_2 + 0x314) == 0) {
    uVar1 = FUN_180213760(param_2,1,1,param_4,param_3);
    local_58 = *(undefined4 *)(param_2 + 0xa8);
    local_38 = 0xe4;
    local_50 = 0xe4;
    local_68 = 0x41010d;
    *(undefined4 *)(param_2 + 0x314) = uVar1;
    local_70[0] = 1;
    local_28 = 0;
    local_30 = 0xbf800000;
    local_48 = 0x3f800000;
    local_60 = 0;
    local_40 = local_58;
    FUN_180214c88(param_2,param_3,0x37,uVar1,local_70,0x50);
  }
  return *(undefined4 *)(param_2 + 0x314);
}

