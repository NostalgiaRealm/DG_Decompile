/*
 * grGlideGetVertexLayout at 100021a6
 * undefined __stdcall grGlideGetVertexLayout(undefined4 * param_1)
 * Address ranges: 100021a6-100021c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grGlideGetVertexLayout,4
 */

/* __stdcall grGlideGetVertexLayout,4 */

void grGlideGetVertexLayout(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
                    /* 0x21a6  45  _grGlideGetVertexLayout@4 */
  FUN_1000504c();
  puVar2 = &DAT_1005b830;
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

