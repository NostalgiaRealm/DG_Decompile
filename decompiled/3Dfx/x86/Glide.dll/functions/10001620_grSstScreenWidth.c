/*
 * grSstScreenWidth at 10001620
 * int __stdcall grSstScreenWidth(void)
 * Address ranges: 10001620-1000163d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grSstScreenWidth,0
 */

/* __stdcall grSstScreenWidth,0 */

int grSstScreenWidth(void)

{
  undefined *puVar1;
  int iVar2;
  
                    /* 0x1620  79  _grSstScreenWidth@0 */
  puVar1 = FUN_10012ab2();
  if (puVar1[0x3c] != '\0') {
    return *(int *)(*(int *)(puVar1 + 0xc) + 0x98);
  }
  iVar2 = GetSystemMetrics(0x4e);
  return iVar2;
}

