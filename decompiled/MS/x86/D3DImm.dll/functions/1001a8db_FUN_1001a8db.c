/*
 * FUN_1001a8db at 1001a8db
 * uint __fastcall FUN_1001a8db(int param_1)
 * Address ranges: 1001a8db-1001aaef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1001a8db(int param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 local_94 [2];
  undefined8 local_8c;
  uint local_84;
  undefined4 local_80;
  uint local_7c;
  undefined2 local_78;
  undefined2 local_76;
  undefined4 local_74;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c [7];
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  uVar2 = FUN_100518fa(*(void **)(*(int *)(param_1 + 0xd4) + 0x15d8),3);
  *(uint *)(param_1 + 200) = uVar2;
  uVar6 = 0;
  if (uVar2 != 0xffffffff) {
    uVar2 = 0;
    local_c = 1;
    do {
      local_84 = local_c;
      local_3c = 0x1c;
      local_38 = 4;
      local_34 = 0x1688;
      puVar5 = local_2c;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      local_2c[0] = 0;
      local_2c[3] = 0;
      local_10 = 3;
      local_2c[1] = 0xffffffff;
      if (uVar2 == 1) {
        local_8 = 6;
        local_38 = 9;
      }
      else {
        local_8 = local_84;
        if (uVar2 == 2) {
          local_10 = 4;
          local_38 = 8;
        }
      }
      local_2c[2] = 0;
      local_94[0] = local_10;
      local_78 = (undefined2)local_8;
      local_80 = 0;
      local_6c = 0;
      local_68 = 0;
      local_64 = 0;
      local_8c = 0;
      local_76 = (undefined2)local_84;
      local_74 = 0x1c;
      local_7c = local_84;
      local_70 = local_84;
      iVar4 = FUN_10051e9c((void *)(*(int *)(param_1 + 0xcc) + 0x520),*(int *)(param_1 + 0xd0),
                           local_94);
      *(int *)(param_1 + 0xbc + uVar2 * 4) = iVar4;
      if (iVar4 == 0) goto joined_r0x1001aa97;
      uVar6 = 0;
      local_54 = 0;
      local_50 = 0;
      local_4c = 0;
      local_48 = local_c;
      local_44 = local_c;
      local_40 = local_c;
      do {
        FUN_10052e4b(*(int **)(param_1 + 0xbc + uVar2 * 4),uVar6,
                     (void *)(*(int *)(param_1 + 0xd4) + 0x1430),&local_54,
                     (undefined4 *)&DAT_1006125c,0);
        uVar6 = uVar6 + 1;
      } while (uVar6 < local_8);
      piVar3 = FUN_10051c18(*(void **)(*(int *)(param_1 + 0xd4) + 0x15d8),&local_58,
                            *(uint *)(param_1 + 200),uVar2);
      piVar1 = *(int **)(*(int *)(param_1 + 0xcc) + 0x520 + *(int *)(param_1 + 0xd0) * 0x18);
      (**(code **)(*piVar1 + 0x48))
                (piVar1,*(undefined4 *)(param_1 + 0xbc + uVar2 * 4),&local_3c,*piVar3);
      uVar2 = uVar2 + 1;
      uVar6 = local_c;
    } while (uVar2 < 3);
  }
LAB_1001aad3:
  uVar2 = FUN_10052215((void *)(*(int *)(*(int *)(param_1 + 0xd4) + 0x130c) + 4),'\0');
  return CONCAT31((int3)(uVar2 >> 8),(char)uVar6);
joined_r0x1001aa97:
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    piVar1 = *(int **)(param_1 + 0xb8 + uVar2 * 4);
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  FUN_10051a23(*(void **)(*(int *)(param_1 + 0xd4) + 0x15d8),*(uint *)(param_1 + 200),3,(int *)0x0,0
               ,0);
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  uVar6 = 0;
  goto LAB_1001aad3;
}

