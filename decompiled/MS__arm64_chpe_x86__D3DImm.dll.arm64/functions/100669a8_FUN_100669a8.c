/*
 * FUN_100669a8 at 100669a8
 * undefined FUN_100669a8(void)
 * Address ranges: 100669a8-10066a37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100669a8(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar1 == 0) {
    FUN_1004bc70(0);
  }
  uVar3 = 0x88760082;
  if ((param_2 != 0) && (uVar3 = 0x80070057, param_3 != (undefined4 *)0x0)) {
    uVar2 = FUN_10053a90(param_2,*(undefined4 *)(param_1 + 0x60));
    uVar3 = 0;
    *param_3 = uVar2;
  }
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar3;
}

