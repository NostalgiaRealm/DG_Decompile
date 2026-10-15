/*
 * FUN_1009cc56 at 1009cc56
 * int __stdcall FUN_1009cc56(int param_1, uint param_2)
 * Address ranges: 1009cc56-1009cc9e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1009cc56(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = -0x7789f794;
  if ((((param_2 & 0xfffffffc) == 0) &&
      ((((param_2 & 2) == 0 || (*(int *)(param_1 + 0x14) == 9)) || (*(int *)(param_1 + 0x14) == 0xb)
       ))) && (iVar1 = FUN_1009389b(*(void **)(param_1 + 0x10),param_1,param_2), -1 < iVar1)) {
    *(undefined1 *)(param_1 + 0x28) = 0;
    *(byte *)(param_1 + 0x29) = (byte)(param_2 >> 1) & 1;
  }
  return iVar1;
}

