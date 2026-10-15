/*
 * grSstScreenWidth at 1000168f
 * int __stdcall grSstScreenWidth(void)
 * Address ranges: 1000168f-100016ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grSstScreenWidth,0
 */

/* __stdcall grSstScreenWidth,0 */

int grSstScreenWidth(void)

{
  undefined *puVar1;
  int iVar2;
  
                    /* 0x168f  73  _grSstScreenWidth@0 */
  puVar1 = FUN_10012760();
  if (puVar1[0x3c] != '\0') {
    return *(int *)(*(int *)(puVar1 + 0xc) + 0x98);
  }
  iVar2 = GetSystemMetrics(0x4e);
  return iVar2;
}

