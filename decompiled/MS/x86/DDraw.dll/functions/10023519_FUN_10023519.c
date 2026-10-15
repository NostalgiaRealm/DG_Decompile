/*
 * FUN_10023519 at 10023519
 * int __fastcall FUN_10023519(int param_1)
 * Address ranges: 10023519-1002356b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10023519(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar2 = 0;
  uVar3 = (uint)*(ushort *)(param_1 + 4);
  if (uVar3 != 0) {
    do {
      uVar1 = 0;
      if (uVar2 != 0) {
        do {
          uVar3 = (uint)*(ushort *)(param_1 + 4);
          if (*(int *)(param_1 + 0x18 + uVar2 * 0x1c) == *(int *)(param_1 + 0x18 + uVar1 * 0x1c))
          goto LAB_10023560;
          uVar1 = uVar1 + 1;
        } while (uVar1 < uVar2);
      }
      if (uVar1 == uVar2) {
        iVar4 = iVar4 + **(int **)(uVar2 * 0x1c + 0x18 + param_1);
      }
LAB_10023560:
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return iVar4;
}

