/*
 * FUN_1000e78a at 1000e78a
 * undefined1 __fastcall FUN_1000e78a(undefined4 * param_1)
 * Address ranges: 1000e78a-1000e994
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_1000e78a(undefined4 *param_1)

{
  uint *puVar1;
  void *this;
  byte bVar2;
  int *piVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 local_84 [4];
  tagRECT local_74;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  int local_54 [5];
  int local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  int *local_20;
  int *local_1c;
  undefined4 *local_18;
  uint local_14;
  uint local_10;
  int *local_c;
  undefined1 local_5;
  
  local_5 = 0;
  piVar3 = param_1 + 10;
  piVar9 = local_54;
  local_18 = param_1;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar9 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar9 = piVar9 + 1;
  }
  this = (void *)param_1[7];
  if (this != (void *)0x0) {
    FUN_10010953(this,0,local_54);
  }
  FUN_10006c2f((void *)param_1[6],&local_34);
  local_c = (int *)((local_3c * local_34) / local_30);
  param_1[0x15] = local_c;
  local_10 = (local_38 * local_2c) / local_28;
  param_1[0x16] = local_10;
  local_1c = (int *)FUN_100030b6(extraout_ECX,extraout_ECX,local_40);
  uVar5 = 0;
  if (param_1[0xd] == 1) {
    uVar5 = 2;
  }
  else if (param_1[0xd] == 2) {
    uVar5 = 1;
  }
  local_24 = 1;
  if (local_54[1] == 5) {
    local_24 = 6;
  }
  local_14 = 1;
  if (this != (void *)0x0) {
    local_14 = (uint)*(ushort *)((int)this + 0x30);
  }
  uVar7 = local_14;
  piVar3 = *(int **)(param_1[1] + 0x4c);
  local_20 = piVar3;
  bVar2 = FUN_1000ee28((int)param_1);
  piVar3 = (int *)(**(code **)(*piVar3 + 0x28))
                            (local_c,local_10,local_3c,local_38,local_1c,param_1[0x14],uVar7,bVar2,
                             uVar5);
  if (piVar3 != (int *)0x0) {
    local_c = piVar3;
    (**(code **)*param_1)();
    *(undefined1 *)(param_1[1] + 0xae) = 0;
    (**(code **)(*piVar3 + 0x44))();
    local_1c = *(int **)(param_1[1] + 0x50);
    puVar1 = (uint *)(param_1[1] + 0xb8);
    *puVar1 = *puVar1 | 1;
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    local_58 = 1;
    puVar10 = local_84;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    uVar11 = 0;
    uVar7 = local_14;
    do {
      local_10 = 0;
      if (uVar7 != 0) {
        do {
          uVar6 = local_38 >> ((byte)local_10 & 0x1f);
          uVar8 = local_3c >> ((byte)local_10 & 0x1f);
          uVar7 = 1;
          if (uVar6 != 0) {
            uVar7 = uVar6;
          }
          uVar6 = 1;
          if (uVar8 != 0) {
            uVar6 = uVar8;
          }
          SetRect(&local_74,0,0,uVar6,uVar7);
          (**(code **)(*local_20 + 0x84))(local_10,uVar11,local_10,uVar11,piVar3,local_1c,local_84);
          local_10 = local_10 + 1;
          uVar7 = local_14;
        } while (local_10 < local_14);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < local_24);
    iVar4 = local_18[7];
    if (iVar4 == 0) {
      *(int **)(local_18[1] + 0x50) = local_c;
    }
    else {
      *(int **)(iVar4 + 0x44) = local_c;
      local_14 = 0;
      if (*(int *)(iVar4 + 100) != 0) {
        do {
          piVar3 = local_c;
          uVar7 = 0;
          if (*(short *)(iVar4 + 0x30) != 0) {
            local_24 = local_14 << 6;
            do {
              FUN_1000e6c7(*(void **)(*(int *)(iVar4 + 0x38) + local_24 + uVar7 * 4),piVar3);
              uVar7 = uVar7 + 1;
            } while (uVar7 < *(ushort *)(iVar4 + 0x30));
          }
          local_14 = local_14 + 1;
        } while (local_14 < *(uint *)(iVar4 + 100));
      }
    }
    FUN_10006893((void *)local_18[6],(int)local_18);
    (**(code **)(*local_1c + 0x10))();
    local_5 = 1;
  }
  return local_5;
}

