/*
 * FUN_10022550 at 10022550
 * undefined FUN_10022550(void)
 * Address ranges: 10022550-100225d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10022550(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  param_1[0x13] = &PTR_thunk_FUN_101334e0_1015e838;
  *param_1 = &PTR_D3DPERF_GetStatus_native_1015e83c;
  iVar1 = param_1[0x14];
  if (iVar1 != 0) {
    piVar3 = (int *)(iVar1 + -4);
    iVar2 = *piVar3;
    iVar1 = iVar1 + iVar2 * 0x20;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      iVar1 = iVar1 + -0x20;
      FUN_10002020(iVar1);
    }
    FUN_101322e0(piVar3,*piVar3 * 0x20 + 4);
  }
  return;
}

