/*
 * FUN_10095d20 at 10095d20
 * undefined FUN_10095d20(void)
 * Address ranges: 10095d20-10095dd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_10095d20(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  int iVar3;
  int local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  iVar3 = param_2 + 0x18;
  uVar2 = FUN_10121590(iVar3,4,1);
  puVar1 = (undefined4 *)FUN_10095628(uVar2,param_4);
  local_38 = puVar1[3];
  uStack_34 = 0;
  local_3c = puVar1[2];
  local_40 = puVar1[1];
  local_44 = *puVar1;
  local_48 = 0xe4;
  local_4c = *(undefined4 *)(param_2 + 0xac);
  local_50 = 0xf;
  local_58 = 0x36;
  local_60 = iVar3;
  uStack_5c = param_3;
  uStack_54 = (int)uVar2;
  FUN_10122a88(&local_60,0x30);
  return uVar2 & 0xffffffff;
}

