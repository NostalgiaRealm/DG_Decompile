/*
 * FUN_10024b7d at 10024b7d
 * undefined __fastcall FUN_10024b7d(int * param_1)
 * Address ranges: 10024b7d-10024ba8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10024b7d(int *param_1)

{
  HWND pHVar1;
  int *piVar2;
  int iVar3;
  
  pHVar1 = (HWND)(**(code **)(*param_1 + 0x14))();
  piVar2 = FUN_100aaabf(DAT_100ba2b4,(int)pHVar1);
  if (piVar2 != (int *)0x0) {
    iVar3 = FUN_100aa642(pHVar1,0x100aabb6);
    piVar2[7] = iVar3;
  }
  return;
}

