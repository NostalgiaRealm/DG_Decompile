/*
 * FUN_10029d78 at 10029d78
 * undefined __stdcall FUN_10029d78(int param_1, uint param_2, uint param_3, int param_4, int param_5, byte param_6)
 * Address ranges: 10029d78-10029f8e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10029d78(int param_1,uint param_2,uint param_3,int param_4,int param_5,byte param_6)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_54;
  uint local_50;
  undefined4 local_4c;
  uint local_48;
  int local_44;
  undefined4 local_40;
  uint local_3c [4];
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_10;
  int local_c;
  char local_5;
  
  uVar6 = *(uint *)(param_1 + 0x20);
  puVar2 = FUN_10021793(param_2,param_3,local_3c,uVar6,*(uint *)(param_1 + 0x24),param_5,param_6);
  local_2c = *puVar2;
  uVar7 = puVar2[1];
  local_24 = puVar2[2];
  local_20 = puVar2[3];
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + (local_20 - uVar7 >> 4);
  local_5 = *(char *)(param_1 + 0x49);
  local_44 = *(int *)(param_1 + 0x24);
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_10 = (uint)param_6 * 2 + 2;
  iVar3 = local_10 * param_5;
  local_40 = 1;
  local_48 = uVar6;
  local_28 = uVar7;
  if (param_2 < param_3) {
    local_44 = (local_24 != 0) + local_20;
    local_50 = uVar7;
    if (param_4 != 0) {
      uVar10 = *(undefined4 *)(param_1 + 0xfc + (uint)param_6 * 4);
      piVar1 = *(int **)(*(int *)(*(int *)(local_c + 0x138) + 0x3188) + 4);
      iVar4 = (**(code **)(*piVar1 + 0x38))(piVar1,uVar10,0,3,0,&local_1c);
      if (-1 < iVar4) {
        puVar8 = (undefined4 *)(local_18 * uVar7 + local_1c);
        if (local_2c != 0) {
          FUN_1004fd20((undefined4 *)(local_10 * local_2c + (int)puVar8),
                       (undefined4 *)(param_4 + param_2),
                       (*(int *)(param_1 + 0x20) - local_2c) * local_10);
          puVar8 = (undefined4 *)((int)puVar8 + local_18);
          uVar7 = uVar7 + 1;
        }
        puVar5 = (undefined4 *)(uVar7 * iVar3 + param_4);
        for (; uVar7 <= local_20; uVar7 = uVar7 + 1) {
          uVar6 = local_24;
          if (uVar7 != local_20) {
            uVar6 = *(uint *)(param_1 + 0x20);
          }
          FUN_1004fd20(puVar8,puVar5,local_10 * uVar6);
          puVar5 = (undefined4 *)((int)puVar5 + iVar3);
          puVar8 = (undefined4 *)((int)puVar8 + local_18);
        }
        piVar1 = *(int **)(*(int *)(*(int *)(local_c + 0x138) + 0x3188) + 4);
        (**(code **)(*piVar1 + 0x3c))(piVar1,uVar10,0);
      }
    }
    if (local_50 != 0) goto LAB_10029ef0;
  }
  if ((local_44 == *(int *)(*(int *)(local_c + 0x138) + 0x9c)) && (local_5 == '\0')) {
    piVar1 = *(int **)(*(int *)(*(int *)(local_c + 0x138) + 0x3188) + 4);
    if (param_6 == 0) {
      uVar10 = *(undefined4 *)(param_1 + 0xfc);
      uVar9 = *(undefined4 *)(param_1 + 0xc4);
    }
    else {
      uVar10 = *(undefined4 *)(param_1 + 0x100);
      uVar9 = *(undefined4 *)(param_1 + 0xdc);
    }
    (**(code **)(*piVar1 + 0xbc))(piVar1,uVar9,uVar10);
    return;
  }
LAB_10029ef0:
  piVar1 = *(int **)(*(int *)(*(int *)(local_c + 0x138) + 0x3188) + 4);
  if (param_6 == 0) {
    uVar10 = *(undefined4 *)(param_1 + 0xfc);
    uVar9 = *(undefined4 *)(param_1 + 0xc4);
  }
  else {
    uVar10 = *(undefined4 *)(param_1 + 0x100);
    uVar9 = *(undefined4 *)(param_1 + 0xdc);
  }
  (**(code **)(*piVar1 + 0xb8))(piVar1,uVar9,0,0,local_50,0,uVar10,0,&local_54);
  return;
}

