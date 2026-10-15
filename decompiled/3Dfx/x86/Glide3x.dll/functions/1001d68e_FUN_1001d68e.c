/*
 * FUN_1001d68e at 1001d68e
 * undefined __stdcall FUN_1001d68e(int param_1, uint param_2, uint param_3, int param_4, int param_5, byte param_6)
 * Address ranges: 1001d68e-1001d8aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001d68e(int param_1,uint param_2,uint param_3,int param_4,int param_5,byte param_6)

{
  int *piVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 local_54;
  uint local_50;
  undefined4 local_4c;
  uint local_48;
  int local_44;
  undefined4 local_40;
  uint local_3c [5];
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_c;
  int local_8;
  
  uVar7 = *(uint *)(param_1 + 0x20);
  puVar3 = FUN_10014b9d(param_2,param_3,local_3c,uVar7,*(uint *)(param_1 + 0x24),param_5,param_6);
  local_28 = *puVar3;
  uVar8 = puVar3[1];
  local_20 = puVar3[2];
  local_1c = puVar3[3];
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + (local_1c - uVar8 >> 4);
  local_44 = *(int *)(param_1 + 0x24);
  local_54 = 0;
  local_c = (uint)param_6 * 2 + 2;
  local_50 = 0;
  iVar4 = local_c * param_5;
  local_4c = 0;
  local_40 = 1;
  local_48 = uVar7;
  local_24 = uVar8;
  if ((((param_2 < param_3) && (local_44 = (local_20 != 0) + local_1c, local_50 = uVar8, uVar8 != 0)
       ) || (local_44 != *(int *)(param_1 + 0x24))) || (*(char *)(param_1 + 0x49) != '\0')) {
    piVar1 = *(int **)(*(int *)(*(int *)(local_8 + 0x138) + 0x3308) + 4);
    if (param_6 == 0) {
      (**(code **)(*piVar1 + 0xb8))
                (piVar1,*(undefined4 *)(param_1 + 0xfc),0,0,local_50,0,
                 *(undefined4 *)(param_1 + 0xc4),0,&local_54);
    }
    else {
      (**(code **)(*piVar1 + 0xb8))
                (piVar1,*(undefined4 *)(param_1 + 0x100),0,0,local_50,0,
                 *(undefined4 *)(param_1 + 0xdc),0,&local_54);
    }
  }
  else {
    piVar1 = *(int **)(*(int *)(*(int *)(local_8 + 0x138) + 0x3308) + 4);
    if (param_6 == 0) {
      (**(code **)(*piVar1 + 0xbc))
                (piVar1,*(undefined4 *)(param_1 + 0xfc),*(undefined4 *)(param_1 + 0xc4));
    }
    else {
      (**(code **)(*piVar1 + 0xbc))
                (piVar1,*(undefined4 *)(param_1 + 0x100),*(undefined4 *)(param_1 + 0xdc));
    }
  }
  if (param_4 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0xfc + (uint)param_6 * 4);
    piVar1 = *(int **)(*(int *)(*(int *)(local_8 + 0x138) + 0x3308) + 4);
    iVar5 = (**(code **)(*piVar1 + 0x38))(piVar1,uVar2,0,3,0,&local_18);
    if (-1 < iVar5) {
      puVar9 = (undefined4 *)(local_14 * uVar8 + local_18);
      if (local_28 != 0) {
        FUN_10052930((undefined4 *)(param_4 + param_2),
                     (undefined4 *)(local_c * local_28 + (int)puVar9),
                     (*(int *)(param_1 + 0x20) - local_28) * local_c);
        puVar9 = (undefined4 *)((int)puVar9 + local_14);
        uVar8 = uVar8 + 1;
      }
      puVar6 = (undefined4 *)(uVar8 * iVar4 + param_4);
      for (; uVar8 <= local_1c; uVar8 = uVar8 + 1) {
        uVar7 = local_20;
        if (uVar8 != local_1c) {
          uVar7 = *(uint *)(param_1 + 0x20);
        }
        FUN_10052930(puVar6,puVar9,local_c * uVar7);
        puVar9 = (undefined4 *)((int)puVar9 + local_14);
        puVar6 = (undefined4 *)((int)puVar6 + iVar4);
      }
      piVar1 = *(int **)(*(int *)(*(int *)(local_8 + 0x138) + 0x3308) + 4);
      (**(code **)(*piVar1 + 0x3c))(piVar1,uVar2,0);
    }
  }
  return;
}

