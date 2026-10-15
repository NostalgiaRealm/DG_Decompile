/*
 * FUN_1003ecfe at 1003ecfe
 * undefined4 * __fastcall FUN_1003ecfe(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1003ecfe-1003ed9a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_1003ecfe(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar2 = (undefined4 *)FUN_1005225f(0x50);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = param_1;
    puVar2[2] = param_2;
    puVar2[3] = param_3;
    *puVar2 = &PTR_FUN_10057648;
    puVar2[4] = 0x400;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    puVar5 = puVar2 + 7;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    if (puVar2[4] == 0) {
      FUN_1003e8d1(puVar2);
      FUN_10052276(puVar2);
      puVar2 = (undefined4 *)0x0;
    }
    else {
      piVar1 = *(int **)(puVar2[2] * 0x18 + puVar2[1]);
      uVar3 = (**(code **)(*piVar1 + 0x3c))(piVar1,puVar2[3]);
      puVar2[6] = uVar3;
      InitializeCriticalSection((LPCRITICAL_SECTION)(puVar2 + 7));
    }
  }
  return puVar2;
}

