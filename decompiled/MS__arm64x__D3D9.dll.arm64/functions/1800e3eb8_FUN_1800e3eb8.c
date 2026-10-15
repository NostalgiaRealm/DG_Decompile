/*
 * FUN_1800e3eb8 at 1800e3eb8
 * undefined FUN_1800e3eb8(void)
 * Address ranges: 1800e3eb8-1800e3f1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e3eb8(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_D3DPERF_GetStatus_18023b860;
  FUN_1800e40b0();
  thunk_FUN_180102fc0(param_1[0xd2]);
  thunk_FUN_180102fc0(param_1[0xcb]);
  thunk_FUN_180102fc0(param_1[0xc9]);
  lVar2 = 8;
  param_1 = param_1 + 0xc3;
  do {
    puVar1 = param_1 + -0xb;
    lVar2 = lVar2 + -1;
    param_1 = param_1 + -0xc;
    thunk_FUN_180102fc0(*puVar1);
  } while (lVar2 != 0);
  return;
}

