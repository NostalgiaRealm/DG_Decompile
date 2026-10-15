/*
 * FUN_100176d0 at 100176d0
 * undefined FUN_100176d0(void)
 * Address ranges: 100176d0-100177cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100176d0(int param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined8 uVar4;
  code *extraout_w11;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x365c) + 8);
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x365c) + 4) + 0x2b14);
  uVar4 = (*(code *)PTR_FUN_100a803c)(iVar2 + 0x4a0);
  bVar3 = FUN_100731f0(uVar4,iVar1);
  if ((*(char *)(iVar1 + 0xd5e) != '\0') || (bVar3 != *(byte *)(iVar1 + 0xd5d))) {
    if ((bVar3 & 1) == 0) {
      *(undefined4 *)(iVar1 + 0x34) = 0;
    }
    FUN_100734f0(iVar2,iVar1,0,param_2);
    *(byte *)(iVar1 + 0xd5d) = bVar3;
    *(char *)(iVar1 + 0xd5e) = '\0';
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(iVar2,iVar1);
  }
  (*(code *)PTR_FUN_100a8090)(iVar2 + 0x4a0);
  return;
}

