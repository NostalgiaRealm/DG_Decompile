/*
 * FUN_1003171c at 1003171c
 * undefined4 __fastcall FUN_1003171c(int param_1)
 * Address ranges: 1003171c-10031854
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1003171c(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int extraout_EDX;
  int extraout_EDX_00;
  uint uVar6;
  int local_30c [192];
  int local_c;
  char local_5;
  
  if ((*(byte *)(*(uint *)(param_1 + 4) + 200) & 8) == 0) {
    uVar6 = *(uint *)(param_1 + 4) & 0xffffff00;
  }
  else {
    FUN_10060d45(local_30c,0,0x300);
    local_5 = '\x01';
    iVar2 = FUN_1002b7cf(param_1);
    iVar3 = iVar2;
    for (; local_c = iVar3, iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x110)) {
      if ((*(uint *)(iVar2 + 0x1bc) & 0xfe00) == 0x200) {
        local_5 = '\0';
      }
      else {
        FUN_10031576(iVar2);
        iVar3 = FUN_10031f92(param_1);
        iVar3 = iVar3 * *(int *)(extraout_EDX + 0x70) + *(int *)(extraout_EDX + 0x6c);
        local_30c[iVar3 * 2] = *(int *)(extraout_EDX + 0x20);
        local_30c[iVar3 * 2 + 1] = *(int *)(*(int *)(iVar2 + 4) + 0x10);
      }
      iVar3 = local_c;
    }
    uVar6 = 0;
    do {
      iVar2 = *(int *)(iVar3 + 0x120 + uVar6 * 4);
      for (; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x110)) {
        if ((*(uint *)(iVar2 + 0x1bc) & 0xfe00) != 0x200) {
          FUN_10031576(iVar2);
          iVar3 = FUN_10031f92(param_1);
          iVar3 = iVar3 * *(int *)(extraout_EDX_00 + 0x70) + *(int *)(extraout_EDX_00 + 0x6c);
          local_30c[iVar3 * 2] = *(int *)(extraout_EDX_00 + 0x20);
          local_30c[iVar3 * 2 + 1] = *(int *)(*(int *)(iVar2 + 4) + 0x10);
        }
        iVar3 = local_c;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 5);
    piVar4 = local_30c;
    if (local_5 == '\0') {
      piVar4 = (int *)0x0;
    }
    uVar5 = (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x50) + 0x48))(piVar4);
    uVar6 = CONCAT31((int3)((uint)uVar5 >> 8),1);
    puVar1 = (uint *)(*(int *)(param_1 + 4) + 200);
    *puVar1 = *puVar1 | 0x10;
    puVar1 = (uint *)(*(int *)(param_1 + 4) + 200);
    *puVar1 = *puVar1 & 0xfffffff7;
  }
  return uVar6;
}

