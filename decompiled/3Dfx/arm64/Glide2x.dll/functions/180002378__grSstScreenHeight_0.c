/*
 * _grSstScreenHeight@0 at 180002378
 * int __cdecl _grSstScreenHeight@0(void)
 * Address ranges: 180002378-1800023af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int _grSstScreenHeight_0(void)

{
  int iVar1;
  longlong lVar2;
  
                    /* 0x2378  74  _grSstScreenHeight@0
                       0x2378  231  grSstScreenHeight */
  lVar2 = FUN_180016878();
  if (*(char *)(lVar2 + 100) == '\0') {
    iVar1 = GetSystemMetrics(0x4f);
  }
  else {
    iVar1 = *(int *)(*(longlong *)(lVar2 + 0x18) + 0xac);
  }
  return iVar1;
}

