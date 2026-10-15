/*
 * FUN_1004c8d0 at 1004c8d0
 * undefined __fastcall FUN_1004c8d0(void * param_1)
 * Address ranges: 1004c8d0-1004c993
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004c8d0(void *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar6 = *(uint *)((int)param_1 + 0x54);
  uVar7 = uVar6;
  do {
    if (uVar7 == 0) {
      return;
    }
    uVar1 = uVar7 - 1;
    if (uVar1 < uVar6) {
      puVar5 = (undefined4 *)(*(int *)((int)param_1 + 0x50) + 0xc + uVar1 * 0x10);
    }
    else {
      puVar5 = (undefined4 *)&DAT_00000004;
    }
    piVar2 = (int *)*puVar5;
    for (iVar8 = piVar2[3]; iVar8 != -1; iVar8 = *(int *)(*piVar2 + 0x1c + iVar8)) {
      iVar3 = *piVar2;
      iVar8 = iVar8 * 0x20;
      iVar4 = *(int *)(iVar3 + 0x18 + iVar8);
      if (iVar4 == 0) break;
      FUN_1004c663(param_1,iVar4,*(int *)(iVar3 + iVar8),*(undefined4 *)(iVar3 + 4 + iVar8),
                   *(uint *)(iVar3 + 8 + iVar8),*(uint *)(iVar3 + 0xc + iVar8));
    }
    thunk_FUN_10052276((LPVOID)*piVar2);
    FUN_10052276(piVar2);
    while( true ) {
      uVar7 = uVar7 + 1;
      if (*(uint *)((int)param_1 + 0x54) <= uVar7) break;
      puVar5 = (undefined4 *)(*(int *)((int)param_1 + 0x50) + uVar7 * 0x10);
      puVar5[-4] = *puVar5;
      puVar5[-3] = puVar5[1];
      puVar5[-2] = puVar5[2];
      puVar5[-1] = puVar5[3];
    }
    uVar6 = *(uint *)((int)param_1 + 0x54) - 1;
    *(uint *)((int)param_1 + 0x54) = uVar6;
    uVar7 = uVar1;
  } while( true );
}

