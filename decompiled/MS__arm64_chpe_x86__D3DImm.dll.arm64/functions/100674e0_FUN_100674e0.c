/*
 * FUN_100674e0 at 100674e0
 * undefined FUN_100674e0(void)
 * Address ranges: 100674e0-100675bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100674e0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  
  iVar2 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar2 == 0) {
    FUN_1004bc70(0);
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x68) + 0xc);
  if (iVar2 != 0) {
    FUN_10063750(iVar2,param_1);
  }
  uVar3 = FUN_10066f20(param_1);
  uVar4 = 0;
  do {
    iVar2 = *(int *)(param_1 + 0x40 + uVar4 * 0x1c);
    if (iVar2 != 0) {
      iVar1 = param_1 + 0x28 + uVar4 * 0x1c;
      uVar3 = FUN_10067098(uVar3,iVar1,iVar2);
      *(undefined4 *)(iVar1 + 0x18) = 0;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 2);
  FUN_10066eb0(param_1);
  FUN_10081d50(param_1,0x13c);
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return;
}

