/*
 * FUN_1009a030 at 1009a030
 * undefined FUN_1009a030(void)
 * Address ranges: 1009a030-1009a08f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1009a030(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_2 * param_3;
  iVar2 = uVar1 * 0x20;
  if (uVar1 >> 0x1b != 0) {
    iVar2 = -1;
  }
  iVar2 = FUN_100fece0(iVar2);
  *(int *)(param_1 + 0x14) = iVar2;
  if (iVar2 != 0) {
    FUN_100ff690(iVar2,0,((ulonglong)uVar1 & 0x7ffffff) << 5);
  }
  return *(int *)(param_1 + 0x14) != 0;
}

