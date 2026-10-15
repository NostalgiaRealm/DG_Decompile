/*
 * FUN_10065f8c at 10065f8c
 * undefined4 __fastcall FUN_10065f8c(int param_1)
 * Address ranges: 10065f8c-1006608e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10065f8c(int param_1)

{
  undefined4 uVar1;
  void *this;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [5];
  int local_c;
  int local_8;
  
  puVar3 = FUN_10078e00(*(void **)(param_1 + 0x10),&local_34);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  puVar7 = local_20;
  for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar7 = puVar7 + 1;
  }
  uVar6 = local_20[1];
  switch(uVar1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
    local_20[0] = 0x1b;
    *(undefined1 *)(param_1 + 0x19) = 1;
    uVar6 = 0x1c;
  }
  local_c = *(int *)(*(int *)(param_1 + 0x30) + 0x14);
  this = *(void **)(*(int *)(param_1 + 0x30) + 0x1cf00);
  local_5c = *(undefined4 *)(param_1 + 4);
  local_58 = *(undefined4 *)(param_1 + 8);
  local_54 = *(undefined4 *)(param_1 + 0xc);
  local_50 = *(undefined4 *)(param_1 + 0x14);
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  local_8 = 0;
  local_44 = 8;
  piVar2 = *(int **)(local_c * 0x1510 + 0x510 + (int)this);
  local_4c = local_20[0];
  uVar4 = (**(code **)(*piVar2 + 0x18))(piVar2,&local_5c,0,&local_8);
  *(int *)(param_1 + 0x34) = local_8;
  if (local_8 != 0) {
    local_28 = 0;
    local_24 = 0;
    local_34 = 8;
    local_30 = 0;
    local_2c = 0xffffffff;
    local_38 = uVar6;
    iVar5 = FUN_10092b3d(this,local_c,local_8,&local_38);
    *(int *)(param_1 + 0x38) = iVar5;
    if (iVar5 != 0) {
      return CONCAT31((int3)((uint)iVar5 >> 8),1);
    }
    uVar4 = (**(code **)(**(int **)(param_1 + 0x34) + 8))(*(int **)(param_1 + 0x34));
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return uVar4 & 0xffffff00;
}

