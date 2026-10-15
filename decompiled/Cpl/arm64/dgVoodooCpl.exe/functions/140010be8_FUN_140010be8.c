/*
 * FUN_140010be8 at 140010be8
 * undefined4 __cdecl FUN_140010be8(longlong * param_1, LPCWSTR param_2, uint param_3)
 * Address ranges: 140010be8-140010c6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_140010be8(longlong *param_1,LPCWSTR param_2,uint param_3)

{
  int iVar1;
  BOOL BVar2;
  HMENU hMenu;
  undefined4 uVar3;
  
  hMenu = (HMENU)*param_1;
  if (hMenu == (HMENU)0x0) {
    hMenu = CreatePopupMenu();
    *param_1 = (longlong)hMenu;
    if (hMenu == (HMENU)0x0) {
      return 0xffffffff;
    }
  }
  uVar3 = 0xffffffff;
  iVar1 = (int)param_1[1] + 1;
  *(int *)(param_1 + 1) = iVar1;
  BVar2 = AppendMenuW(hMenu,(param_3 & 0xff) << 3,(UINT_PTR)iVar1,param_2);
  if (BVar2 != 0) {
    uVar3 = (undefined4)param_1[1];
  }
  return uVar3;
}

