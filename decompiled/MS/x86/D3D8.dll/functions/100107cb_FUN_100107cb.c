/*
 * FUN_100107cb at 100107cb
 * undefined4 __fastcall FUN_100107cb(int param_1)
 * Address ranges: 100107cb-100108d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_100107cb(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_EAX;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint local_14;
  int *local_8;
  
  if ((*(int *)(param_1 + 0x60) == 1) && (*(int *)(param_1 + 0x48) == 0)) {
    piVar5 = (int *)(uint)*(ushort *)(param_1 + 0x30);
    iVar6 = FUN_10010670(*(uint *)(param_1 + 0x4c),*(uint *)(param_1 + 0x50),(uint)piVar5,1,
                         *(int *)(param_1 + 0x58));
    uVar9 = *(int *)(param_1 + 100) * iVar6 + 8;
    piVar7 = (int *)FUN_1000eeed(uVar9);
    *(int **)(param_1 + 0x48) = piVar7;
    if (piVar7 == (int *)0x0) {
      return 0;
    }
    in_EAX = FUN_100ada8e(piVar7,0,uVar9);
    local_14 = 0;
    if (*(int *)(param_1 + 100) != 0) {
      do {
        iVar3 = *(int *)(param_1 + 0x48);
        in_EAX = (int *)0x0;
        local_8 = (int *)0x0;
        if (piVar5 != (int *)0x0) {
          do {
            iVar8 = FUN_10010670(*(uint *)(param_1 + 0x4c),*(uint *)(param_1 + 0x50),(uint)local_8,1
                                 ,*(int *)(param_1 + 0x58));
            iVar2 = local_14 * 0x40 + (int)local_8 * 4;
            iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x38) + iVar2) + 4);
            *(undefined4 *)(iVar4 + 0xb4) = 0;
            *(uint *)(iVar4 + 0x20) = local_14 * iVar6 + iVar3 + iVar8;
            *(uint *)(iVar4 + 0x34) = *(uint *)(iVar4 + 0x34) | 0x28;
            puVar1 = (uint *)(*(int *)(*(int *)(*(int *)(param_1 + 0x38) + iVar2) + 4) + 0x34);
            *puVar1 = *puVar1 | 1;
            in_EAX = (int *)((int)local_8 + 1);
            local_8 = in_EAX;
          } while (in_EAX < piVar5);
        }
        local_14 = local_14 + 1;
      } while (local_14 < *(uint *)(param_1 + 100));
    }
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

