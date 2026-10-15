/*
 * FUN_100221b0 at 100221b0
 * undefined4 __stdcall FUN_100221b0(undefined4 param_1)
 * Address ranges: 100221b0-10022225
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100221b0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  SIZE_T SVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  iVar2 = DAT_100ba2bc;
  iVar1 = *(int *)(DAT_100ba2bc + 0x10);
  if (*(int *)(DAT_100ba2bc + 0xc) == iVar1) {
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
    puVar4 = (undefined4 *)FUN_100ad4a9(SVar3);
    if (puVar4 == (undefined4 *)0x0) {
      return 0;
    }
    FUN_100adac0(puVar4,*(undefined4 **)(iVar2 + 8),*(int *)(iVar2 + 0x10) << 2);
    thunk_FUN_100ad48c(*(LPVOID *)(iVar2 + 8));
    *(undefined4 **)(iVar2 + 8) = puVar4;
    *(uint *)(iVar2 + 0x10) = uVar5;
  }
  *(undefined4 *)(*(int *)(iVar2 + 8) + *(int *)(iVar2 + 0xc) * 4) = param_1;
  *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}

