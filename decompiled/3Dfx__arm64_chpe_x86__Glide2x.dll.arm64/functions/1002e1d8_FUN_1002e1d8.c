/*
 * FUN_1002e1d8 at 1002e1d8
 * undefined FUN_1002e1d8(void)
 * Address ranges: 1002e1d8-1002e2d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002e1d8(int param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined8 uVar4;
  code *extraout_w11;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x315c) + 8);
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x315c) + 4) + 0x295c);
  uVar4 = (*(code *)PTR_FUN_1009d03c)(iVar2 + 0x4a0);
  bVar3 = FUN_10069eb0(uVar4,iVar1);
  if ((*(char *)(iVar1 + 0xd5e) != '\0') || (bVar3 != *(byte *)(iVar1 + 0xd5d))) {
    if ((bVar3 & 1) == 0) {
      *(undefined4 *)(iVar1 + 0x34) = 0;
    }
    FUN_1006a1b0(iVar2,iVar1,0,param_2);
    *(byte *)(iVar1 + 0xd5d) = bVar3;
    *(char *)(iVar1 + 0xd5e) = '\0';
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(iVar2,iVar1);
  }
  (*(code *)PTR_FUN_1009d090)(iVar2 + 0x4a0);
  return;
}

