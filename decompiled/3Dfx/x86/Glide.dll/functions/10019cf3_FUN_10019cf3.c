/*
 * FUN_10019cf3 at 10019cf3
 * undefined __fastcall FUN_10019cf3(int param_1)
 * Address ranges: 10019cf3-10019d20
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10019cf3(int param_1)

{
  HWND pHVar1;
  undefined4 uVar2;
  
  pHVar1 = *(HWND *)(*(int *)(param_1 + 0xc) + 0x94);
  if (pHVar1 == *(HWND *)(param_1 + 0x28)) {
    uVar2 = *(undefined4 *)(param_1 + 0x2c);
  }
  else {
    uVar2 = 0;
  }
  FUN_10003676(*(void **)(param_1 + 0x1c),pHVar1,uVar2,-(uint)(param_1 != 0) & param_1 + 4U);
  return;
}

