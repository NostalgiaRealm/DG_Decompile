/*
 * FUN_10024ec6 at 10024ec6
 * int __fastcall FUN_10024ec6(int param_1)
 * Address ranges: 10024ec6-10024f27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10024ec6(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_1003200f(param_1,0);
  if ((*(byte *)(param_1 + 0x68) & 8) != 0) {
    if ((*(uint *)(param_1 + 0x68) & 0x200) == 0) {
      if ((*(uint *)(param_1 + 0x68) & 0x1000) != 0) {
        uVar3 = 1;
        if (1 < *(uint *)(param_1 + 0x18)) {
          do {
            iVar2 = FUN_1003200f(param_1,(byte)uVar3);
            iVar1 = iVar1 + iVar2;
            uVar3 = uVar3 + 1;
          } while (uVar3 < *(uint *)(param_1 + 0x18));
        }
        iVar1 = iVar1 * ((-(uint)((*(uint *)(param_1 + 0x6c) & 0x200) != 0) & 5) + 1);
      }
    }
    else {
      iVar1 = iVar1 + *(int *)(param_1 + 0x14) * iVar1;
    }
  }
  return iVar1;
}

