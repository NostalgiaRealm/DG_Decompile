/*
 * FUN_1008f888 at 1008f888
 * undefined FUN_1008f888(void)
 * Address ranges: 1008f888-1008fac7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008f888(undefined8 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 char param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined8 local_70;
  int local_68;
  int iStack_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined4 uStack_3c;
  
  local_70 = 0;
  local_68 = param_4;
  iStack_64 = param_5;
  if ((param_4 == 0) || (param_5 == 0)) {
    (*(code *)PTR_FUN_100ba230)(param_2,&local_70);
    uVar7 = 0x615;
  }
  else {
    (*(code *)PTR_FUN_100ba260)(param_2,0,&local_70,2);
    uVar1 = (*(code *)PTR_FUN_100ba22c)(param_2,0xffffffec);
    uVar2 = (*(code *)PTR_FUN_100ba22c)(param_2,0xfffffff0);
    (*(code *)PTR_FUN_100ba19c)(&local_70,uVar2,0,uVar1);
    uVar7 = 0x614;
  }
  iVar6 = 0;
  iVar5 = 0;
  if (param_6 == '\0') {
    iVar3 = (*(code *)PTR_FUN_100ba218)(0x4c);
    iVar4 = (*(code *)PTR_FUN_100ba218)(0x4d);
    if (iVar3 > (int)local_70) {
      iVar6 = iVar3 - (int)local_70;
    }
    uVar8 = (uint)(iVar3 <= (int)local_70);
    if (local_70._4_4_ < iVar4) {
      iVar5 = iVar4 - local_70._4_4_;
      uVar8 = 0;
    }
  }
  else {
    iVar3 = (*(code *)PTR_FUN_100ba268)(param_2,2);
    if (iVar3 != 0) {
      local_60 = 0x28;
      local_54 = 0;
      local_5c = 0;
      uStack_44 = 0;
      uStack_4c = 0;
      uStack_3c = 0;
      iVar3 = (*(code *)PTR_FUN_100ba210)(iVar3,&local_60);
      if (iVar3 != 0) {
        iVar3 = (int)local_5c + (((int)local_54 - (local_68 - (int)local_70)) - (int)local_5c) / 2;
        local_68 = iVar3 + (local_68 - (int)local_70);
        iVar4 = local_5c._4_4_ +
                ((local_54._4_4_ - (iStack_64 - local_70._4_4_)) - local_5c._4_4_) / 2;
        iStack_64 = iVar4 + (iStack_64 - local_70._4_4_);
        local_70 = CONCAT44(iVar4,iVar3);
        if (iVar3 < (int)local_5c) {
          iVar6 = (int)local_5c - iVar3;
        }
        if (iVar4 < local_5c._4_4_) {
          iVar5 = local_5c._4_4_ - iVar4;
        }
        uVar8 = 0;
        goto LAB_1008f9fc;
      }
    }
    uVar8 = 1;
  }
LAB_1008f9fc:
  (*(code *)PTR_FUN_100ba26c)(&local_70,iVar6,iVar5);
  if (*(char *)(param_3 + 0x2c) != '\0') {
    uVar8 = 1;
  }
  (*(code *)PTR_FUN_100ba2cc)
            (param_2,0,local_70 & 0xffffffff,local_70._4_4_,local_68 - (int)local_70,
             iStack_64 - local_70._4_4_,uVar7 | uVar8 << 1);
  return;
}

