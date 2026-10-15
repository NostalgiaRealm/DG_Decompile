/*
 * FUN_1800c08d4 at 1800c08d4
 * int __fastcall FUN_1800c08d4(longlong param_1, uint param_2)
 * Address ranges: 1800c08d4-1800c0932
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800c08d4(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = -0x7789f794;
  if (((param_2 & 0xfffffffc) == 0) &&
     (((param_2 & 2) == 0 || ((*(int *)(param_1 + 0x20) - 9U & 0xfffffffd) == 0)))) {
    iVar1 = FUN_1800b2060(*(longlong *)(param_1 + 0x18),param_1,param_2);
    if (-1 < iVar1) {
      *(undefined1 *)(param_1 + 0x40) = 0;
      *(bool *)(param_1 + 0x41) = (param_2 & 2) != 0;
    }
  }
  return iVar1;
}

