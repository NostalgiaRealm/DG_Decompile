/*
 * FUN_10067fd0 at 10067fd0
 * undefined FUN_10067fd0(void)
 * Address ranges: 10067fd0-1006807b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10067fd0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x80) + 0xc);
  if (iVar2 != 0) {
    FUN_10063440(iVar2,param_1);
  }
  uVar3 = FUN_10067c30(param_1);
  uVar4 = 0;
  do {
    iVar2 = *(int *)(param_1 + 0x24 + uVar4 * 0x1c);
    if (iVar2 != 0) {
      iVar1 = param_1 + 0xc + uVar4 * 0x1c;
      uVar3 = FUN_10067cb8(uVar3,iVar1,iVar2);
      *(undefined4 *)(iVar1 + 0x18) = 0;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  FUN_10067be0(param_1);
  FUN_10081d50(param_1,0xd4);
  return;
}

