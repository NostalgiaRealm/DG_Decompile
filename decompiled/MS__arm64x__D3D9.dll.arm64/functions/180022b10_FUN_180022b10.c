/*
 * FUN_180022b10 at 180022b10
 * undefined FUN_180022b10(void)
 * Address ranges: 180022b10-180022b6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180022b10(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_180022668();
  FUN_180022760(param_1,1,uVar1);
  lVar2 = (**(code **)(*param_1 + 0x28))(param_1);
  if (lVar2 != 0) {
    (*__imp_USER32_dll_PostMessageW)(lVar2,0x20,0,0);
  }
  return;
}

