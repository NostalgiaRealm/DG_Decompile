/*
 * FUN_18000d6e0 at 18000d6e0
 * undefined FUN_18000d6e0(void)
 * Address ranges: 18000d6e0-18000d7cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_18000d6e0(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 *param_4)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_180020080(*(undefined4 *)(param_1 + 0xa0),param_2,param_1 + -0x48);
  *param_4 = 0;
  pcVar1 = __imp_USER32_dll_GetUpdateRect;
  if (lVar2 != 0) {
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    param_3[7] = 0;
    param_3[6] = 0;
    param_3[8] = 0;
    *param_3 = lVar2;
    (*pcVar1)(param_2,(longlong)param_3 + 0xc,0);
    uVar3 = (*__imp_GDI32_dll_CreateRectRgn)(0,0,0,0);
    (*__imp_USER32_dll_GetUpdateRgn)(param_2,uVar3,0);
    (*__imp_GDI32_dll_SelectClipRgn)(lVar2,uVar3);
    (*__imp_GDI32_dll_DeleteObject)(uVar3);
    (*__imp_USER32_dll_ValidateRect)(param_2,0);
    *param_4 = 1;
  }
  return lVar2;
}

