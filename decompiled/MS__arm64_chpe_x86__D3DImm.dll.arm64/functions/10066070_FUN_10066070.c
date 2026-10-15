/*
 * FUN_10066070 at 10066070
 * undefined FUN_10066070(void)
 * Address ranges: 10066070-1006613b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10066070(int param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  
  iVar2 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar2 == 0) {
    FUN_1004bc70(0);
  }
  uVar4 = *(uint *)(*(int *)(param_1 + 0x7c) + 0xc);
  uVar3 = (ulonglong)uVar4;
  if (uVar4 != 0) {
    uVar3 = FUN_100635f0(uVar4,param_1);
  }
  uVar4 = 0;
  do {
    iVar2 = *(int *)(param_1 + 0x20 + uVar4 * 0x1c);
    if (iVar2 != 0) {
      iVar1 = param_1 + 8 + uVar4 * 0x1c;
      uVar3 = FUN_10065d68(uVar3,iVar1,iVar2);
      *(undefined4 *)(iVar1 + 0x18) = 0;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  FUN_10081d50(param_1,0xd8);
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return;
}

