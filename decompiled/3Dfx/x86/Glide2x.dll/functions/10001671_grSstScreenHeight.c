/*
 * grSstScreenHeight at 10001671
 * int __stdcall grSstScreenHeight(void)
 * Address ranges: 10001671-1000168e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grSstScreenHeight,0
 */

/* __stdcall grSstScreenHeight,0 */

int grSstScreenHeight(void)

{
  undefined *puVar1;
  int iVar2;
  
                    /* 0x1671  72  _grSstScreenHeight@0 */
  puVar1 = FUN_10012760();
  if (puVar1[0x3c] != '\0') {
    return *(int *)(*(int *)(puVar1 + 0xc) + 0x9c);
  }
  iVar2 = GetSystemMetrics(0x4f);
  return iVar2;
}

