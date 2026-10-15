/*
 * FUN_1008cce0 at 1008cce0
 * undefined FUN_1008cce0(void)
 * Address ranges: 1008cce0-1008cde3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1008cce0(undefined8 param_1,uint param_2,int param_3,undefined4 param_4,char param_5)

{
  bool bVar1;
  undefined4 uVar2;
  int local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined8 *puStack_74;
  int local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  bVar1 = true;
  switch(param_2 >> 0x10 & 7) {
  case 1:
    uVar2 = 0x31;
    goto LAB_1008cd24;
  case 2:
    uVar2 = 0x18;
    break;
  case 3:
    uVar2 = 0x1d;
    break;
  case 4:
    uVar2 = 0x31;
    break;
  case 5:
    uVar2 = 0x39;
    break;
  case 6:
    uVar2 = 0x1d;
LAB_1008cd24:
    bVar1 = false;
    break;
  default:
    uVar2 = 0;
  }
  if (param_5 == '\0') {
    local_30 = FUN_10121590(param_3,4,0);
    uStack_40 = 0xffffffffffffffff;
    uStack_38 = 0xffffffffffffffff;
    uStack_2c = CONCAT31(uStack_2c._1_3_,1);
    local_50 = CONCAT44(uStack_2c,local_30);
  }
  else {
    uStack_28 = *(undefined8 *)(param_3 + 0x338);
    local_50 = *(undefined8 *)(param_3 + 0x330);
    uStack_38 = *(undefined8 *)(param_3 + 0x348);
    uStack_40 = *(undefined8 *)(param_3 + 0x340);
  }
  local_68 = 0;
  local_70 = 0x410;
  iStack_6c = 0x3e0;
  if (bVar1) {
    iStack_6c = local_70;
  }
  iStack_6c = iStack_6c + param_3;
  if (bVar1) {
    local_70 = 0x3e0;
  }
  local_70 = local_70 + param_3;
  puStack_74 = &local_50;
  local_80 = param_3;
  uStack_7c = param_4;
  local_78 = uVar2;
  uStack_48 = uStack_28;
  FUN_10122c20(&local_80,0x1c);
  return (undefined4)local_50;
}

