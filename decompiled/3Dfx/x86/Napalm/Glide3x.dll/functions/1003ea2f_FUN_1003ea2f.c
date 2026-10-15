/*
 * FUN_1003ea2f at 1003ea2f
 * undefined __fastcall FUN_1003ea2f(undefined4 * param_1)
 * Address ranges: 1003ea2f-1003eab3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003ea2f(undefined4 *param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  uint local_8;
  
  *param_1 = &PTR__scalar_deleting_destructor__1005a77c;
  param_1[0xe] = &PTR_LAB_1005a7b8;
  if (param_1[0x10] == 0) {
    local_8 = 0;
    if (param_1[0x13] != 0) {
      do {
        iVar4 = param_1[0x12];
        iVar5 = local_8 * 0x20;
        if (*(int *)(iVar4 + 0x14 + iVar5) != 0) {
          while( true ) {
            piVar2 = *(int **)(iVar5 + 0x14 + iVar4);
            uVar6 = (**(code **)(*piVar2 + 0x20))(piVar2);
            uVar3 = (uint)((ulonglong)uVar6 >> 0x20);
            uVar1 = *(uint *)(iVar5 + 0x1c + iVar4);
            if (uVar1 < uVar3) break;
            if (((uVar1 <= uVar3) && (*(uint *)(iVar5 + 0x18 + iVar4) <= (uint)uVar6)) ||
               (iVar4 = param_1[0x12], *(int *)(iVar5 + 0x14 + iVar4) == 0)) break;
          }
        }
        piVar2 = *(int **)(param_1[0x12] + 0xc + iVar5);
        (**(code **)(*piVar2 + 8))(piVar2);
        local_8 = local_8 + 1;
      } while (local_8 < (uint)param_1[0x13]);
    }
  }
  else {
    FUN_1003ee76((int)param_1);
  }
  FUN_1003eb99(param_1);
  return;
}

