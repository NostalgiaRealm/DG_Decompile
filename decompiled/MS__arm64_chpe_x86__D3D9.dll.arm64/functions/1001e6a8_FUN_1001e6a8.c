/*
 * FUN_1001e6a8 at 1001e6a8
 * undefined FUN_1001e6a8(void)
 * Address ranges: 1001e6a8-1001e767
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001e6a8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = FUN_100034b0(uVar4);
  uVar3 = FUN_100035f0(uVar4);
  FUN_100036b0(uVar4);
  uVar4 = FUN_10003300(uVar4);
  iVar1 = *(int *)(param_1 + 4);
  FUN_1003ec20(iVar1,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),1,uVar4,uVar2,
               uVar3);
  *(undefined1 *)(iVar1 + 0x1f) = 0;
  return;
}

