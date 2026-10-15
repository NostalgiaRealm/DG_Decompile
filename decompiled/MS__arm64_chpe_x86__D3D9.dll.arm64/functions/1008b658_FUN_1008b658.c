/*
 * FUN_1008b658 at 1008b658
 * undefined FUN_1008b658(void)
 * Address ranges: 1008b658-1008b75b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1008b658(undefined8 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  int iStack_74;
  uint local_70;
  int iStack_6c;
  uint local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  
  piVar1 = (int *)(param_2 + 0x300);
  if (*piVar1 == 0) {
    iVar2 = FUN_10121590(param_2,4,1);
    *piVar1 = iVar2;
    uVar3 = FUN_10123210(0xe4,*(undefined1 *)(*(int *)(param_2 + 0xf4) + 0x144));
    local_4c = 0;
    uStack_64 = *(undefined4 *)(param_2 + 0xa4);
    local_54 = 0;
    uStack_50 = 0;
    local_60 = 0xe4;
    local_78 = 0;
    iStack_6c = 0x410100;
    local_80 = param_2;
    uStack_7c = param_3;
    local_68 = uVar3 & 0xff;
    FUN_10122a88(&local_80,0x38);
    iStack_74 = *piVar1;
    local_58 = 0;
    local_60 = 0xe4;
    local_5c = 0x4c0;
    uStack_64 = *(undefined4 *)(param_2 + 0x60);
    local_70 = (uint)*(byte *)(*(int *)(param_2 + 0xf4) + 0x144);
    local_78 = 0x38;
    local_80 = param_2;
    uStack_7c = param_3;
    iStack_6c = iStack_74;
    local_68 = uVar3 & 0xff;
    FUN_10122a88(&local_80,0x2c);
  }
  return *piVar1;
}

