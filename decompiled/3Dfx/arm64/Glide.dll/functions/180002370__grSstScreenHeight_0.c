/*
 * _grSstScreenHeight@0 at 180002370
 * int __cdecl _grSstScreenHeight@0(void)
 * Address ranges: 180002370-1800023a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int _grSstScreenHeight_0(void)

{
  int iVar1;
  longlong lVar2;
  
                    /* 0x2370  80  _grSstScreenHeight@0
                       0x2370  241  grSstScreenHeight */
  lVar2 = FUN_180017788();
  if (*(char *)(lVar2 + 100) == '\0') {
    iVar1 = GetSystemMetrics(0x4f);
  }
  else {
    iVar1 = *(int *)(*(longlong *)(lVar2 + 0x18) + 0xac);
  }
  return iVar1;
}

