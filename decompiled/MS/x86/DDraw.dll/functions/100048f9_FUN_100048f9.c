/*
 * FUN_100048f9 at 100048f9
 * undefined4 __thiscall FUN_100048f9(void * this, HWND param_1, int param_2, undefined4 param_3, undefined4 param_4, undefined4 * param_5)
 * Address ranges: 100048f9-1000492f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_100048f9(void *this,HWND param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  DWORD DVar1;
  
  *param_5 = 0;
  if (param_2 == 0x20) {
    DVar1 = GetClassLongA(param_1,-0xc);
    if (DVar1 != 0) {
      *(DWORD *)((int)this + 0x18) = DVar1;
      *param_5 = 1;
    }
  }
  return 1;
}

