/*
 * FUN_1003c501 at 1003c501
 * undefined __fastcall FUN_1003c501(void * param_1)
 * Address ranges: 1003c501-1003c5a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003c501(void *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  uVar5 = *(uint *)((int)param_1 + 0x48);
  uVar6 = uVar5;
  do {
    if (uVar6 == 0) {
      return;
    }
    uVar1 = uVar6 - 1;
    if (uVar1 < uVar5) {
      puVar7 = (undefined4 *)(*(int *)((int)param_1 + 0x44) + 0xc + uVar1 * 0x10);
    }
    else {
      puVar7 = (undefined4 *)&DAT_00000004;
    }
    piVar2 = (int *)*puVar7;
    for (iVar4 = piVar2[3]; iVar4 != -1; iVar4 = *(int *)(*piVar2 + 0x10 + iVar4)) {
      iVar3 = *piVar2;
      iVar4 = iVar4 * 0x18;
      if (*(int *)(iVar3 + iVar4) == -1) break;
      FUN_1003c380(param_1,*(uint *)(iVar3 + iVar4),*(int *)(iVar3 + 4 + iVar4));
    }
    thunk_FUN_1004f9b6((LPVOID)*piVar2);
    FUN_1004f9b6(piVar2);
    while( true ) {
      uVar6 = uVar6 + 1;
      if (*(uint *)((int)param_1 + 0x48) <= uVar6) break;
      puVar7 = (undefined4 *)(*(int *)((int)param_1 + 0x44) + uVar6 * 0x10);
      puVar7[-4] = *puVar7;
      puVar7[-3] = puVar7[1];
      puVar7[-2] = puVar7[2];
      puVar7[-1] = puVar7[3];
    }
    uVar5 = *(uint *)((int)param_1 + 0x48) - 1;
    *(uint *)((int)param_1 + 0x48) = uVar5;
    uVar6 = uVar1;
  } while( true );
}

