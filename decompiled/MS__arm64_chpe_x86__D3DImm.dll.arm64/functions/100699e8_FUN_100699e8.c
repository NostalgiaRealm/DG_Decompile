/*
 * FUN_100699e8 at 100699e8
 * undefined FUN_100699e8(void)
 * Address ranges: 100699e8-10069a63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100699e8(int param_1,undefined4 param_2)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = *(ushort *)(param_1 + 4);
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      iVar1 = param_1 + 8 + uVar4 * 0x1c;
      iVar3 = FUN_10081e90(param_2,iVar1,0x10);
      if (iVar3 == 0) {
        return iVar1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return 0;
}

