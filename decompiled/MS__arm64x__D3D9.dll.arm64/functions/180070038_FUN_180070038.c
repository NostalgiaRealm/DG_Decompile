/*
 * FUN_180070038 at 180070038
 * undefined FUN_180070038(void)
 * Address ranges: 180070038-18007014f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180070038(undefined8 param_1,uint param_2,longlong param_3,undefined8 param_4,
                       ulonglong param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  if ((param_2 & 0x70000) == 0x10000) {
    uVar4 = 0x31;
  }
  else {
    iVar3 = 1;
    if ((param_2 & 0x70000) == 0x20000) {
      uVar4 = 0x18;
      goto LAB_1800700d4;
    }
    if ((param_2 & 0x70000) == 0x30000) {
      uVar4 = 0x1d;
      goto LAB_1800700d4;
    }
    if ((param_2 & 0x70000) == 0x40000) {
      uVar4 = 0x31;
      goto LAB_1800700d4;
    }
    if ((param_2 & 0x70000) == 0x50000) {
      uVar4 = 0x39;
      goto LAB_1800700d4;
    }
    if ((param_2 & 0x70000) != 0x60000) {
      uVar4 = 0;
      goto LAB_1800700d4;
    }
    uVar4 = 0x1d;
  }
  iVar3 = 0;
LAB_1800700d4:
  if ((param_5 & 1) == 0) {
    local_40 = FUN_1800f42d0(param_3 + 0x20,4,0);
    uStack_50 = 0xffffffffffffffff;
    uStack_48 = 0xffffffffffffffff;
    uStack_3c = CONCAT31(uStack_3c._1_3_,1);
    local_60 = CONCAT44(uStack_3c,local_40);
  }
  else {
    uStack_38 = *(undefined8 *)(param_3 + 0x328);
    local_60 = *(ulonglong *)(param_3 + 800);
    uStack_48 = *(undefined8 *)(param_3 + 0x338);
    uStack_50 = *(undefined8 *)(param_3 + 0x330);
  }
  lVar1 = 0x3d0;
  if (iVar3 != 0) {
    lVar1 = 0x400;
  }
  lVar2 = 0x400;
  if (iVar3 != 0) {
    lVar2 = 0x3d0;
  }
  uStack_58 = uStack_38;
  FUN_1800f58b8(param_3 + 0x20,param_4,uVar4,&local_60,lVar2 + param_3,lVar1 + param_3,0);
  return local_60 & 0xffffffff;
}

