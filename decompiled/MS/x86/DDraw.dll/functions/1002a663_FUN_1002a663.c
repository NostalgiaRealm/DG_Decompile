/*
 * FUN_1002a663 at 1002a663
 * undefined4 __thiscall FUN_1002a663(void * this, int param_1, int param_2)
 * Address ranges: 1002a663-1002a87c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002a663(void *this,int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  void *this_00;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 local_64 [12];
  undefined4 local_34 [6];
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  int *local_c;
  void *local_8;
  
  uVar8 = 0;
  local_1c = 0;
  local_8 = this;
  if (param_1 != 0) {
    for (; this_00 = local_8, this != (void *)0x0; this = *(void **)((int)this + 0x110)) {
      FUN_1003146f((int)this);
      iVar7 = *(int *)((int)this + 4);
      (**(code **)(**(int **)(iVar7 + 0x50) + 0x18))
                (*(undefined4 *)(iVar7 + 0x6c),*(undefined4 *)(iVar7 + 0x70),1);
    }
    for (; param_1 != 0; param_1 = param_1 + -1) {
      iVar7 = *(int *)((int)this_00 + 4);
      iVar2 = *(int *)((int)this_00 + 0x110);
      local_10 = *(undefined4 *)(iVar7 + 0x50);
      puVar9 = (undefined4 *)(iVar7 + 0x20);
      puVar10 = local_34;
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      puVar9 = (undefined4 *)(iVar7 + 0x80);
      puVar10 = local_64;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      local_14 = *(undefined4 *)(iVar7 + 0xc4);
      local_18 = *(uint *)(iVar7 + 200) >> 1;
      while (iVar2 != 0) {
        *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10c) + 4) + 0x50) =
             *(undefined4 *)(*(int *)(iVar2 + 4) + 0x50);
        puVar1 = (uint *)(*(int *)(*(int *)(iVar2 + 0x10c) + 4) + 200);
        *puVar1 = *puVar1 | 4;
        puVar9 = (undefined4 *)(*(int *)(iVar2 + 4) + 0x20);
        puVar10 = (undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10c) + 4) + 0x20);
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        puVar9 = (undefined4 *)(*(int *)(iVar2 + 4) + 0x80);
        puVar10 = (undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10c) + 4) + 0x80);
        for (iVar7 = 0xc; piVar4 = DAT_1006c238, iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x10c) + 4) + 0xc4) =
             *(undefined4 *)(*(int *)(iVar2 + 4) + 0xc4);
        iVar7 = *(int *)(*(int *)(iVar2 + 0x10c) + 4);
        uVar3 = *(uint *)(iVar7 + 200);
        *(uint *)(iVar7 + 200) = (*(uint *)(*(int *)(iVar2 + 4) + 200) ^ uVar3) & 2 ^ uVar3;
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 0x30))
                    (*(undefined4 *)(*(int *)((int)local_8 + 0xfc) + 0xc),
                     *(undefined4 *)(iVar2 + 0x10c));
        }
        local_c = (int *)(iVar2 + 0x110);
        if (*(int *)(iVar2 + 0x110) == 0) {
          *(undefined4 *)(*(int *)(iVar2 + 4) + 0x50) = local_10;
          puVar1 = (uint *)(*(int *)(iVar2 + 4) + 200);
          *puVar1 = *puVar1 | 4;
          puVar9 = local_34;
          puVar10 = (undefined4 *)(*(int *)(iVar2 + 4) + 0x20);
          for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          puVar9 = local_64;
          puVar10 = (undefined4 *)(*(int *)(iVar2 + 4) + 0x80);
          for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          *(undefined4 *)(*(int *)(iVar2 + 4) + 0xc4) = local_14;
          uVar3 = *(uint *)(*(int *)(iVar2 + 4) + 200);
          *(uint *)(*(int *)(iVar2 + 4) + 200) = ((local_18 & 0xff) * 2 ^ uVar3) & 2 ^ uVar3;
          if (DAT_1006c238 != (int *)0x0) {
            (**(code **)(*DAT_1006c238 + 0x30))
                      (*(undefined4 *)(*(int *)((int)local_8 + 0xfc) + 0xc),iVar2);
          }
        }
        this_00 = local_8;
        iVar2 = *local_c;
      }
      uVar8 = local_1c;
    }
    if (((*(uint *)((int)this_00 + 0x1b8) & 0x8000) != 0) &&
       (uVar5 = FUN_10033299(this_00,*(int *)(*(int *)((int)this_00 + 4) + 0x6c),
                             *(int *)(*(int *)((int)this_00 + 4) + 0x70),param_2),
       (char)uVar5 == '\0')) {
      uVar8 = 0x80004005;
    }
  }
  return uVar8;
}

