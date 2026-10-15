/*
 * FUN_1800dc590 at 1800dc590
 * undefined __fastcall FUN_1800dc590(undefined8 * param_1)
 * Address ranges: 1800dc590-1800dc5e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800dc590(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_1801066a8;
  FUN_1800de514((longlong)param_1);
  lVar2 = 0x10;
  puVar1 = param_1 + 0x3256;
  do {
    puVar1 = puVar1 + -0x318;
    FUN_1800d9a74((longlong)puVar1);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_1800de04c(param_1);
  return;
}

