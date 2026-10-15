/*
 * FUN_180178d20 at 180178d20
 * undefined FUN_180178d20(void)
 * Address ranges: 180178d20-180178e47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180178d20(undefined8 param_1,uint param_2,longlong param_3,undefined8 param_4,
                       byte param_5)

{
  int iVar1;
  ulonglong uVar2;
  longlong local_80;
  longlong lStack_78;
  undefined8 local_70;
  ulonglong local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  if ((param_2 & 0x70000) == 0x10000) {
    uVar2 = 0x31;
  }
  else {
    iVar1 = 1;
    if ((param_2 & 0x70000) == 0x20000) {
      uVar2 = 0x18;
      goto LAB_180178dc0;
    }
    if ((param_2 & 0x70000) == 0x30000) {
      uVar2 = 0x1d;
      goto LAB_180178dc0;
    }
    if ((param_2 & 0x70000) == 0x40000) {
      uVar2 = 0x31;
      goto LAB_180178dc0;
    }
    if ((param_2 & 0x70000) == 0x50000) {
      uVar2 = 0x39;
      goto LAB_180178dc0;
    }
    if ((param_2 & 0x70000) != 0x60000) {
      uVar2 = 0;
      goto LAB_180178dc0;
    }
    uVar2 = 0x1d;
  }
  iVar1 = 0;
LAB_180178dc0:
  if ((param_5 & 1) == 0) {
    local_30 = FUN_180213760(param_3,4,0,iVar1,uVar2);
    uStack_40 = 0xffffffffffffffff;
    uStack_38 = 0xffffffffffffffff;
    uStack_2c = CONCAT31(uStack_2c._1_3_,1);
    local_50 = CONCAT44(uStack_2c,local_30);
  }
  else {
    uStack_28 = *(undefined8 *)(param_3 + 0x348);
    local_50 = *(ulonglong *)(param_3 + 0x340);
    uStack_38 = *(undefined8 *)(param_3 + 0x358);
    uStack_40 = *(undefined8 *)(param_3 + 0x350);
  }
  local_70 = 0;
  lStack_78 = 0x3f0;
  if (iVar1 != 0) {
    lStack_78 = 0x420;
  }
  local_80 = 0x420;
  if (iVar1 != 0) {
    local_80 = 0x3f0;
  }
  lStack_78 = lStack_78 + param_3;
  local_80 = local_80 + param_3;
  uStack_48 = uStack_28;
  FUN_180214e10(param_3,param_4,uVar2 & 0xffffffff,&local_50,&local_80,0x18);
  return local_50 & 0xffffffff;
}

