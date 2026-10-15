/*
 * FUN_1007275d at 1007275d
 * undefined4 __fastcall FUN_1007275d(int param_1)
 * Address ranges: 1007275d-10072957
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1007275d(int param_1)

{
  void *pvVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  void *local_a0;
  undefined4 local_9c;
  void *local_98;
  int local_94 [7];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined2 local_64;
  undefined2 local_62;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_38 [7];
  undefined4 local_1c [6];
  
  puVar3 = FUN_10078e00(*(void **)(param_1 + 0x10),&local_48);
  iVar9 = *(int *)(param_1 + 0x10);
  puVar10 = local_1c;
  for (iVar8 = 5; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar10 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar10 = puVar10 + 1;
  }
  local_9c = *(undefined4 *)(&DAT_100b0408 + iVar9 * 4);
  uVar7 = local_1c[1];
  switch(iVar9) {
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
    local_1c[0] = 0x1b;
    *(undefined1 *)(param_1 + 0x19) = 1;
    uVar7 = 0x1c;
  }
  pvVar1 = *(void **)(*(int *)(param_1 + 0x30) + 0x1cf00);
  iVar9 = *(int *)(*(int *)(param_1 + 0x30) + 0x14) * 0x16c0;
  local_94[1] = 0;
  local_94[2] = 0;
  local_94[3] = 0;
  local_94[4] = 0;
  local_70 = *(undefined4 *)(param_1 + 4);
  local_68 = *(undefined4 *)(param_1 + 8);
  local_64 = *(undefined2 *)(param_1 + 0xc);
  local_62 = *(undefined2 *)(param_1 + 0x14);
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_a0 = (void *)(iVar9 + 0x1c40 + (int)pvVar1);
  local_94[0] = 1;
  local_94[5] = 4;
  local_78 = 0;
  local_6c = 0;
  local_5c = 1;
  local_98 = pvVar1;
  local_60 = local_1c[0];
  puVar4 = FUN_100a58a9(local_a0,local_94,0,(uint *)(local_94 + 5));
  *(uint **)(param_1 + 0x34) = puVar4;
  if (puVar4 == (uint *)0x0) {
    puVar4 = (uint *)FUN_100a5a36(pvVar1,*(int *)(*(int *)(param_1 + 0x30) + 0x14),local_94,0,
                                  local_94 + 5,0,0);
    *(uint **)(param_1 + 0x34) = puVar4;
  }
  uVar5 = (uint)puVar4 & 0xffffff00;
  if (puVar4 != (uint *)0x0) {
    uVar5 = FUN_100978a5(*(void **)(iVar9 + 0x1c98 + (int)pvVar1),2);
    pvVar1 = local_98;
    *(uint *)(param_1 + 0x38) = uVar5;
    if (uVar5 == 0xffffffff) {
      uVar5 = FUN_100a7d2e(local_a0,*(undefined4 *)(param_1 + 0x34));
      uVar5 = uVar5 & 0xffffff00;
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    else {
      local_40 = local_9c;
      local_44 = 8;
      puVar3 = local_38;
      for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      local_38[0] = 0;
      local_38[2] = 0;
      local_38[1] = 0xffffffff;
      iVar8 = *(int *)(*(int *)(param_1 + 0x30) + 0x14);
      local_48 = uVar7;
      piVar6 = FUN_10097b61(*(void **)(iVar9 + 0x1c98 + (int)local_98),(int *)&local_a0,uVar5,0);
      piVar2 = *(int **)(iVar8 * 0x18 + 0x520 + (int)pvVar1);
      uVar7 = (**(code **)(*piVar2 + 0x48))
                        (piVar2,*(undefined4 *)(param_1 + 0x34),&local_48,*piVar6);
      uVar5 = CONCAT31((int3)((uint)uVar7 >> 8),1);
    }
  }
  return uVar5;
}

