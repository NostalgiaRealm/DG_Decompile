/*
 * FUN_180177590 at 180177590
 * undefined FUN_180177590(void)
 * Address ranges: 180177590-18017768f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180177590(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint local_80 [2];
  undefined4 local_78;
  uint local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined8 local_38;
  
  if (*(int *)(param_2 + 0x310) == 0) {
    uVar2 = FUN_180213760(param_2,4,1);
    uVar4 = 0xbf000000;
    *(undefined4 *)(param_2 + 0x310) = uVar2;
    bVar1 = *(byte *)(*(longlong *)(param_2 + 0x100) + 0x144);
    local_80[0] = (uint)bVar1;
    uVar3 = FUN_180213268(0xe4,bVar1);
    local_68 = *(undefined4 *)(param_2 + 0xac);
    local_38 = 0;
    local_40 = 0;
    local_48 = 0;
    local_78 = 0x410100;
    local_50 = CONCAT44(local_50._4_4_,uVar4);
    local_58 = CONCAT44(local_58._4_4_,uVar4);
    local_60 = 0xe4;
    local_70 = uVar3 & 0xff;
    FUN_180214c88(param_2,param_3,0);
    local_78 = *(undefined4 *)(param_2 + 0x310);
    local_60 = 0xe4;
    local_58 = 0x4c0;
    local_50 = 0;
    local_68 = *(undefined4 *)(param_2 + 0x68);
    local_80[0] = (uint)*(byte *)(*(longlong *)(param_2 + 0x100) + 0x144);
    local_70 = uVar3 & 0xff;
    FUN_180214c88(param_2,param_3,0x38,local_78,local_80,0x38);
  }
  return *(undefined4 *)(param_2 + 0x310);
}

