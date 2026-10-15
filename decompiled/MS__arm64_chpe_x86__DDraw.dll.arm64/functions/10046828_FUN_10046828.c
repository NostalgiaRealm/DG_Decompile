/*
 * FUN_10046828 at 10046828
 * undefined FUN_10046828(void)
 * Address ranges: 10046828-1004695f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10046828(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar2 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar2 == 0) {
    FUN_10001c10(0);
  }
  uVar4 = 0x80070057;
  if ((param_4 != 0) && (uVar4 = 0x887601c2, *(char *)(param_1 + 8) == '\0')) {
    iVar2 = 1;
    if ((*(int *)(param_1 + 0x110) != 0) && ((*(uint *)(param_1 + 0x1bc) & 0xfe00) != 0x200)) {
      iVar2 = FUN_100533c0(1,param_2,*(int *)(param_1 + 0x110),param_4,param_3);
    }
    uVar3 = 0;
    do {
      if (iVar2 == 0) break;
      iVar1 = *(int *)(param_1 + uVar3 * 4 + 0x120);
      if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0x1bc) & 0xfe00) != 0x200)) {
        iVar2 = FUN_100533c0(iVar2,param_2,iVar1,param_4,param_3);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 5);
    if ((*(int *)(param_1 + 0x118) != 0) && (iVar2 != 0)) {
      FUN_100533c0(iVar2,param_2,*(int *)(param_1 + 0x118),param_4,param_3);
    }
    uVar4 = 0;
  }
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar4;
}

