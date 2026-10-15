/*
 * FUN_1002c645 at 1002c645
 * undefined4 __thiscall FUN_1002c645(void * this, HWND param_1, int param_2, undefined4 param_3, undefined4 param_4, undefined4 * param_5)
 * Address ranges: 1002c645-1002c67b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_1002c645(void *this,HWND param_1,int param_2,undefined4 param_3,undefined4 param_4,
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

