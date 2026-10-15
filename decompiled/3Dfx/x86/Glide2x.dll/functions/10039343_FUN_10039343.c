/*
 * FUN_10039343 at 10039343
 * undefined __thiscall FUN_10039343(void * this, int param_1, int param_2)
 * Address ranges: 10039343-10039466
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10039343(void *this,int param_1,int param_2)

{
  int *piVar1;
  LPVOID pvVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  LPVOID local_28;
  uint local_24;
  undefined4 local_20;
  int *local_1c;
  void *local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = 0;
  local_1c = this;
  if (*(int *)((int)this + 8) != 0) {
    do {
      uVar7 = 0;
      iVar6 = *local_1c;
      iVar5 = local_8 * 0x10;
      local_28 = (LPVOID)0x0;
      local_24 = 0;
      iVar3 = *(int *)(iVar6 + 0xc + iVar5);
      local_20 = 0;
      local_14 = iVar5;
      local_c = iVar6;
      if (*(int *)(iVar3 + 0xc) != 0) {
        if (*(int *)(iVar3 + 0xc) == 0) goto LAB_100393be;
        do {
          puVar9 = (undefined4 *)(uVar7 * 0x28 + 8 + *(int *)(iVar3 + 8));
          if ((puVar9 != (undefined4 *)0x0) && ((puVar9[2] == param_1 || (puVar9[3] == param_2)))) {
            FUN_10039274(puVar9 + 2,'\x01');
            FUN_1000567e(&local_28,puVar9);
            iVar5 = local_14;
          }
LAB_100393be:
          iVar3 = *(int *)(iVar6 + 0xc + iVar5);
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(uint *)(iVar3 + 0xc));
      }
      pvVar2 = local_28;
      uVar8 = 0;
      uVar7 = local_24;
      if (local_24 != 0) {
        do {
          local_10 = *(int *)(local_c + 0xc + iVar5);
          local_18 = (void *)(local_10 + 4);
          uVar4 = FUN_10039f0c(local_18,*(uint *)((int)pvVar2 + uVar8 * 4),0);
          if (uVar4 != *(uint *)(local_10 + 0xc)) {
            iVar6 = uVar4 * 0x28;
            piVar1 = (int *)(local_10 + 8);
            uVar7 = local_24;
            local_10 = iVar6;
            if ((*(int *)(iVar6 + *piVar1) == *(int *)((int)pvVar2 + uVar8 * 4)) &&
               (*(int *)(iVar6 + 4 + *piVar1) == 0)) {
              FUN_10039dff(local_18,uVar4);
            }
          }
          uVar8 = uVar8 + 1;
          iVar5 = local_14;
        } while (uVar8 < uVar7);
      }
      uVar7 = local_8;
      thunk_FUN_1004f626(local_28);
      local_28 = (LPVOID)0x0;
      local_24 = 0;
      local_20 = 0;
      thunk_FUN_1004f626((LPVOID)0x0);
      local_8 = uVar7 + 1;
    } while (local_8 < (uint)local_1c[2]);
  }
  return;
}

