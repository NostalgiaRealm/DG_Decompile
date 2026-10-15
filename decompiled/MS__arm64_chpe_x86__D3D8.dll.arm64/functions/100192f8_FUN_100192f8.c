/*
 * FUN_100192f8 at 100192f8
 * undefined FUN_100192f8(void)
 * Address ranges: 100192f8-1001940f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100192f8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = FUN_100031e0(uVar5);
  uVar3 = FUN_100032d0(uVar5);
  uVar4 = FUN_10003360(uVar5);
  uVar5 = FUN_100030d0(uVar5);
  iVar1 = *(int *)(param_1 + 4);
  FUN_10034d50(iVar1,*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),1,uVar5,uVar2,
               uVar3,uVar4,0);
  *(undefined1 *)(iVar1 + 0x1f) = 0;
  uVar5 = FUN_10035090(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),1,uVar5,uVar2
                       ,uVar3,uVar4,*(undefined4 *)(*(int *)(param_1 + 4) + 0x10),0);
  *(undefined4 *)(param_1 + 0x38) = uVar5;
  return;
}

