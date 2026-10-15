/*
 * FUN_10096cc8 at 10096cc8
 * undefined FUN_10096cc8(void)
 * Address ranges: 10096cc8-10096dd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10096cc8(undefined8 param_1,uint param_2,int param_3,undefined4 param_4,char param_5)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined8 *puStack_84;
  int local_80;
  int iStack_7c;
  undefined4 local_78;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  bVar1 = true;
  switch(param_2 >> 0x10 & 7) {
  case 1:
    uVar3 = 0x31;
    goto LAB_10096d10;
  case 2:
    uVar3 = 0x18;
    break;
  case 3:
    uVar3 = 0x1d;
    break;
  case 4:
    uVar3 = 0x31;
    break;
  case 5:
    uVar3 = 0x39;
    break;
  case 6:
    uVar3 = 0x1d;
LAB_10096d10:
    bVar1 = false;
    break;
  default:
    uVar3 = 0;
  }
  iVar2 = param_3 + 0x18;
  if (param_5 == '\0') {
    local_40 = FUN_10121590(iVar2,4,0);
    uStack_50 = 0xffffffffffffffff;
    uStack_48 = 0xffffffffffffffff;
    uStack_3c = CONCAT31(uStack_3c._1_3_,1);
    local_60 = CONCAT44(uStack_3c,local_40);
  }
  else {
    uStack_38 = *(undefined8 *)(param_3 + 0x318);
    local_60 = *(undefined8 *)(param_3 + 0x310);
    uStack_48 = *(undefined8 *)(param_3 + 0x328);
    uStack_50 = *(undefined8 *)(param_3 + 800);
  }
  local_78 = 0;
  local_80 = 0x3f0;
  iStack_7c = 0x3c0;
  if (bVar1) {
    iStack_7c = local_80;
  }
  iStack_7c = iStack_7c + param_3;
  if (bVar1) {
    local_80 = 0x3c0;
  }
  local_80 = local_80 + param_3;
  puStack_84 = &local_60;
  local_90 = iVar2;
  uStack_8c = param_4;
  local_88 = uVar3;
  uStack_58 = uStack_38;
  FUN_10122c20(&local_90,0x1c);
  return (undefined4)local_60;
}

