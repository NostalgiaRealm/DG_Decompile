/*
 * grGlideGetVertexLayout at 10002152
 * undefined __stdcall grGlideGetVertexLayout(undefined4 * param_1)
 * Address ranges: 10002152-1000216e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grGlideGetVertexLayout,4
 */

/* __stdcall grGlideGetVertexLayout,4 */

void grGlideGetVertexLayout(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
                    /* 0x2152  53  _grGlideGetVertexLayout@4 */
  FUN_10005411();
  puVar2 = &DAT_1005fa10;
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

