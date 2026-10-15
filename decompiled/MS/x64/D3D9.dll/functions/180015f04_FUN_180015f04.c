/*
 * FUN_180015f04 at 180015f04
 * undefined8 __fastcall FUN_180015f04(longlong param_1, HWND param_2, int param_3, undefined8 param_4, undefined8 param_5, undefined4 * param_6)
 * Address ranges: 180015f04-180015f50
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180015f04(longlong param_1,HWND param_2,int param_3,undefined8 param_4,undefined8 param_5,
             undefined4 *param_6)

{
  ULONG_PTR UVar1;
  
  *param_6 = 0;
  if (param_3 == 0x20) {
    UVar1 = GetClassLongPtrA(param_2,-0xc);
    if (UVar1 != 0) {
      *(ULONG_PTR *)(param_1 + -0x20) = UVar1;
      *param_6 = 1;
    }
  }
  return 1;
}

