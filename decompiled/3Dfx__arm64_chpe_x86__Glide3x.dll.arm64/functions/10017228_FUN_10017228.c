/*
 * FUN_10017228 at 10017228
 * undefined FUN_10017228(void)
 * Address ranges: 10017228-10017327
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10017228(int param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined8 uVar4;
  code *extraout_w11;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x32dc) + 8);
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x32dc) + 4) + 0x29d8);
  uVar4 = (*(code *)PTR_FUN_100a003c)(iVar2 + 0x4a0);
  bVar3 = FUN_1006db50(uVar4,iVar1);
  if ((*(char *)(iVar1 + 0xd5e) != '\0') || (bVar3 != *(byte *)(iVar1 + 0xd5d))) {
    if ((bVar3 & 1) == 0) {
      *(undefined4 *)(iVar1 + 0x34) = 0;
    }
    FUN_1006de50(iVar2,iVar1,0,param_2);
    *(byte *)(iVar1 + 0xd5d) = bVar3;
    *(char *)(iVar1 + 0xd5e) = '\0';
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(iVar2,iVar1);
  }
  (*(code *)PTR_FUN_100a0090)(iVar2 + 0x4a0);
  return;
}

