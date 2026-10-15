/*
 * FUN_100120c0 at 100120c0
 * undefined FUN_100120c0(void)
 * Address ranges: 100120c0-10012183
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_100120c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    uVar3 = 0;
  }
  else {
    iVar2 = param_2 + *(int *)(param_1 + 0x2c) * param_3;
    if (*(int *)(param_1 + 0xc4) != 0) {
      iVar1 = *(int *)(param_1 + 0xc4) + iVar2 * 0x1c + 0xc;
      (*(code *)PTR_FUN_100ba2e0)(iVar1,iVar1,*(int *)(param_1 + 0x80) + iVar2 * 0x1c + 0xc);
    }
    uVar3 = FUN_10011ce0(param_1,*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x74),param_2,
                         param_3,*(int *)(param_1 + 0x80) + iVar2 * 0x1c + 0xc);
  }
  return uVar3;
}

