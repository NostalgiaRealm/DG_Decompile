/*
 * FUN_10029848 at 10029848
 * undefined4 __stdcall FUN_10029848(undefined4 param_1)
 * Address ranges: 10029848-100298bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10029848(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  SIZE_T SVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  iVar2 = DAT_100dea7c;
  iVar1 = *(int *)(DAT_100dea7c + 0x10);
  if (*(int *)(DAT_100dea7c + 0xc) == iVar1) {
    if (iVar1 == 0) {
      uVar5 = 0x10;
    }
    else {
      uVar5 = iVar1 * 2;
    }
    SVar3 = (SIZE_T)((ulonglong)uVar5 * 4);
    if ((int)((ulonglong)uVar5 * 4 >> 0x20) != 0) {
      SVar3 = 0xffffffff;
    }
    puVar4 = (undefined4 *)FUN_100cfd89(SVar3);
    if (puVar4 == (undefined4 *)0x0) {
      return 0;
    }
    FUN_100cff00(puVar4,*(undefined4 **)(iVar2 + 8),*(int *)(iVar2 + 0x10) << 2);
    thunk_FUN_100cfd6c(*(LPVOID *)(iVar2 + 8));
    *(undefined4 **)(iVar2 + 8) = puVar4;
    *(uint *)(iVar2 + 0x10) = uVar5;
  }
  *(undefined4 *)(*(int *)(iVar2 + 8) + *(int *)(iVar2 + 0xc) * 4) = param_1;
  *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}

