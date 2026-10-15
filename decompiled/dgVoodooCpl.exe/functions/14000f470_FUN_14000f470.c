/*
 * FUN_14000f470 at 14000f470
 * undefined4 __fastcall FUN_14000f470(longlong * param_1, LPCWSTR param_2, uint param_3)
 * Address ranges: 14000f470-14000f4c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_14000f470(longlong *param_1,LPCWSTR param_2,uint param_3)

{
  BOOL BVar1;
  HMENU hMenu;
  undefined4 uVar2;
  
  hMenu = (HMENU)*param_1;
  uVar2 = 0xffffffff;
  if (hMenu == (HMENU)0x0) {
    hMenu = CreatePopupMenu();
    *param_1 = (longlong)hMenu;
    if (hMenu == (HMENU)0x0) {
      return 0xffffffff;
    }
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  BVar1 = AppendMenuW(hMenu,(param_3 & 0xff) << 3,(ulonglong)*(uint *)(param_1 + 1),param_2);
  if (BVar1 != 0) {
    uVar2 = (undefined4)param_1[1];
  }
  return uVar2;
}

