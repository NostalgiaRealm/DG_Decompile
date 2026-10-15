/*
 * FUN_10032800 at 10032800
 * undefined4 __fastcall FUN_10032800(int param_1)
 * Address ranges: 10032800-10032860
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10032800(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(uint *)(param_1 + 0x154) >> 0xb & 1) == 0) {
    iVar1 = *(int *)(param_1 + 4);
    iVar2 = 0;
    if ((((*(uint *)(iVar1 + 0x34) >> 5 & 1) != 0) && (*(int *)(iVar1 + 0x24) == 0)) &&
       ((*(int *)(iVar1 + 0x20) != 0 ||
        (iVar2 = (**(code **)(**(int **)(iVar1 + 0x50) + 0x30))
                           (*(undefined4 *)(iVar1 + 0x6c),*(undefined4 *)(iVar1 + 0x70)),
        *(int *)(iVar1 + 0x20) != 0)))) {
      *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) | 1;
    }
    uVar3 = 0x80004005;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else if (iVar2 == 1) {
      uVar3 = 0x8876021c;
    }
    return uVar3;
  }
  return 0;
}

