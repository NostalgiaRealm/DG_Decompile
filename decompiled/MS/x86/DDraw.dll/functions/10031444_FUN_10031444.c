/*
 * FUN_10031444 at 10031444
 * undefined4 __fastcall FUN_10031444(int param_1)
 * Address ranges: 10031444-1003146e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10031444(int param_1)

{
  int iVar1;
  undefined3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x50);
  uVar2 = (undefined3)((uint)iVar1 >> 8);
  if ((((iVar1 != 0x31545844) && (iVar1 != 0x32545844)) && (iVar1 != 0x33545844)) &&
     (iVar1 != 0x34545844)) {
    return CONCAT31(uVar2,iVar1 == 0x35545844);
  }
  return CONCAT31(uVar2,1);
}

