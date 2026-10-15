/*
 * _grSstScreenWidth@0 at 1800023a8
 * int __cdecl _grSstScreenWidth@0(void)
 * Address ranges: 1800023a8-1800023df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int _grSstScreenWidth_0(void)

{
  int iVar1;
  longlong lVar2;
  
                    /* 0x23a8  81  _grSstScreenWidth@0
                       0x23a8  242  grSstScreenWidth */
  lVar2 = FUN_180017788();
  if (*(char *)(lVar2 + 100) == '\0') {
    iVar1 = GetSystemMetrics(0x4e);
  }
  else {
    iVar1 = *(int *)(*(longlong *)(lVar2 + 0x18) + 0xa8);
  }
  return iVar1;
}

