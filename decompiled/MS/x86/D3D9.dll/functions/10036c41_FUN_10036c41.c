/*
 * FUN_10036c41 at 10036c41
 * undefined4 __fastcall FUN_10036c41(int param_1)
 * Address ranges: 10036c41-10036ce1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10036c41(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  puVar1 = (undefined4 *)(param_1 + 0xc);
  local_1c = 1;
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0x14) * 0x1510 + *(int *)(param_1 + 4) + 0x510);
  local_24 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 **)(param_1 + 8) = puVar5;
  local_20 = 0;
  if (*(int *)(param_1 + 0x1c) == 1) {
    local_20 = 2;
  }
  local_18 = 0;
  if (*(int *)(param_1 + 0x1c) == 1) {
    local_18 = 0x10000;
  }
  local_14 = 0;
  local_10 = 0;
  piVar2 = (int *)*puVar5;
  uVar3 = (**(code **)(*piVar2 + 0xc))(piVar2,&local_24,0,puVar1);
  if ((int)uVar3 < 0) {
LAB_10036cd7:
    uVar3 = uVar3 & 0xffffff00;
  }
  else {
    if (*(int *)(param_1 + 0x1c) == 1) {
      local_c = 0;
      local_8 = 0;
      iVar4 = (**(code **)(*(int *)**(undefined4 **)(param_1 + 8) + 0x60))
                        ((int *)**(undefined4 **)(param_1 + 8),&local_c,param_1 + 0x10);
      uVar3 = 0;
      if (iVar4 < 0) {
        uVar3 = (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
        *puVar1 = 0;
        goto LAB_10036cd7;
      }
    }
    uVar3 = CONCAT31((int3)(uVar3 >> 8),1);
  }
  return uVar3;
}

