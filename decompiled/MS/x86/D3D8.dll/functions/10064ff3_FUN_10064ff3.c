/*
 * FUN_10064ff3 at 10064ff3
 * undefined4 __fastcall FUN_10064ff3(void * param_1)
 * Address ranges: 10064ff3-100651d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10064ff3(void *param_1)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  undefined4 local_30;
  int local_2c;
  void *local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_1c = param_1;
  if (*(int *)((int)param_1 + 0x134) == 0) {
    FUN_1007923c(param_1,&local_30);
    if (*(char *)((int)param_1 + 0x150) != '\0') {
      bVar9 = *(int *)((int)param_1 + 0x1c) != 0x15;
      iVar7 = 0x2c;
      if (bVar9) {
        iVar7 = 0x1c;
      }
      local_30 = *(undefined4 *)(iVar7 + *(int *)((int)param_1 + 4));
      iVar7 = 0x34;
      if (bVar9) {
        iVar7 = 0x24;
      }
      local_2c = *(int *)(iVar7 + *(int *)((int)param_1 + 4));
    }
    uVar5 = *(uint *)((int)param_1 + 0x28);
    if (uVar5 == 0) {
      uVar5 = *(uint *)((int)param_1 + 0x20);
    }
    FUN_10061b08(*(undefined4 *)((int)param_1 + 0xdc),*(undefined4 *)((int)param_1 + 0xe0),uVar5,
                 *(uint *)((int)param_1 + 0x24),1,local_30,local_2c,0,0,0,8,0,
                 -(uint)(*(int *)((int)param_1 + 0x24) != 1) & 4,0,
                 *(int *)((int)param_1 + 0x24) != 1,'\0');
    *(undefined1 *)((int)param_1 + 0xdb) = 0;
    *(undefined4 *)((int)param_1 + 0xcc) = 0;
    *(undefined4 *)((int)param_1 + 0xd0) = 0;
    *(undefined4 *)((int)param_1 + 0xd4) = 0;
  }
  local_10 = (int)param_1 + 0xcc;
  if (*(int *)((int)param_1 + 0x134) == 0) {
    return 0;
  }
  if (*(char *)((int)param_1 + 0xdb) != '\0') goto LAB_100651ca;
  uVar5 = *(uint *)((int)param_1 + 0x24);
  local_8 = 0;
  uVar8 = 0;
  local_18 = uVar5 & 0x1f;
  local_c = uVar5;
  if (uVar5 == 0) {
LAB_10065179:
    piVar3 = *(int **)(*(int *)((int)param_1 + 0x44) + 4);
    (**(code **)(*piVar3 + 0xbc))
              (piVar3,*(undefined4 *)((int)param_1 + 0x134),*(undefined4 *)((int)param_1 + 0x54));
    if (uVar5 != 0) {
      uVar8 = 0;
      do {
        uVar1 = uVar8 + 0x20;
        uVar6 = 0xffffffff;
        if (uVar5 < uVar1) {
          uVar6 = 0xffffffff >> (0x20U - (char)local_18 & 0x1f);
        }
        puVar2 = (uint *)(local_10 + (uVar8 >> 5) * 4);
        *puVar2 = *puVar2 | uVar6;
        uVar8 = uVar1;
        param_1 = local_1c;
      } while (uVar1 < uVar5);
    }
  }
  else {
    local_14 = 0xffffffff >> (0x20U - (char)local_18 & 0x1f);
    do {
      if (uVar8 != 0) goto LAB_10065127;
      uVar1 = local_8 + 0x20;
      uVar8 = 0xffffffff;
      if (uVar5 < uVar1) {
        uVar8 = local_14;
      }
      uVar8 = *(uint *)((int)param_1 + (local_8 >> 5) * 4 + 0xcc) & uVar8;
      local_8 = uVar1;
    } while (uVar1 < uVar5);
    if (uVar8 == 0) goto LAB_10065179;
LAB_10065127:
    uVar8 = 0;
    do {
      local_14 = uVar8 & 0x1f;
      if ((*(byte *)((int)param_1 + ((int)local_14 >> 3) + (uVar8 >> 5) * 4 + 0xcc) >> (uVar8 & 7) &
          1) == 0) {
        piVar3 = *(int **)(*(int *)((int)param_1 + 0x44) + 4);
        (**(code **)(*piVar3 + 0xb8))
                  (piVar3,*(undefined4 *)((int)param_1 + 0x134),uVar8,0,0,0,
                   *(undefined4 *)((int)param_1 + 0x54),uVar8,0);
        pbVar4 = (byte *)((int)param_1 + ((int)local_14 >> 3) + (uVar8 >> 5) * 4 + 0xcc);
        *pbVar4 = *pbVar4 | '\x01' << (local_14 & 7);
        uVar5 = local_c;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar5);
  }
  *(undefined1 *)((int)param_1 + 0xdb) = 1;
LAB_100651ca:
  return *(undefined4 *)((int)param_1 + 0x13c);
}

