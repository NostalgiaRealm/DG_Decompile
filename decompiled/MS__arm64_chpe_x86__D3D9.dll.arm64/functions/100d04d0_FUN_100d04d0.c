/*
 * FUN_100d04d0 at 100d04d0
 * undefined FUN_100d04d0(void)
 * Address ranges: 100d04d0-100d057b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100d04d0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  iVar4 = DAT_10170abc;
  uVar3 = DAT_10170ab8;
  iVar5 = 0;
  uVar7 = 0;
  if (DAT_10170ab8 != 0) {
    do {
      if (iVar5 != 0) {
        return iVar5;
      }
      iVar1 = *(int *)(iVar4 + uVar7 * 4);
      if ((iVar1 != 0) && (uVar2 = *(uint *)(iVar1 + 0xb8), uVar2 != 0)) {
        uVar6 = 0;
        do {
          if (iVar5 != 0) break;
          iVar5 = FUN_100d5360(*(undefined4 *)(*(int *)(iVar1 + 0xb4) + uVar6 * 4),param_1);
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar2);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar3);
  }
  return iVar5;
}

