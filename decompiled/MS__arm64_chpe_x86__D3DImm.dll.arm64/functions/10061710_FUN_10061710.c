/*
 * FUN_10061710 at 10061710
 * undefined FUN_10061710(void)
 * Address ranges: 10061710-10061803
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10061710(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  
  iVar2 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar2 == 0) {
    FUN_1004bc70(0);
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x44) + 0xc);
  if (iVar2 != 0) {
    FUN_100638b0(iVar2,param_1);
  }
  uVar3 = FUN_10081dc0(*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  uVar4 = 0;
  do {
    iVar2 = *(int *)(param_1 + 0x24 + uVar4 * 0x1c);
    if (iVar2 != 0) {
      iVar1 = param_1 + 0xc + uVar4 * 0x1c;
      uVar3 = FUN_10061448(uVar3,iVar1,iVar2);
      *(undefined4 *)(iVar1 + 0x18) = 0;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 2);
  FUN_10061400(param_1);
  FUN_10081d50(param_1,0x9c);
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return;
}

