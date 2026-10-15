/*
 * FUN_180051848 at 180051848
 * undefined __cdecl FUN_180051848(undefined8 * param_1)
 * Address ranges: 180051848-18005191f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180051848(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_180066958;
  FUN_180051e30((longlong)param_1);
  lVar2 = 0x10;
  puVar1 = param_1 + 0x3256;
  do {
    lVar2 = lVar2 + -1;
    thunk_FUN_180060a18((LPVOID)puVar1[-0x253]);
    thunk_FUN_180060a18((LPVOID)puVar1[-599]);
    thunk_FUN_180060a18((LPVOID)puVar1[-0x25b]);
    thunk_FUN_180060a18((LPVOID)puVar1[-0x25f]);
    thunk_FUN_180060a18((LPVOID)puVar1[-0x263]);
    thunk_FUN_180060a18((LPVOID)puVar1[-0x267]);
    thunk_FUN_180060a18((LPVOID)puVar1[-0x26b]);
    thunk_FUN_180060a18((LPVOID)puVar1[-0x26f]);
    puVar1 = puVar1 + -0x318;
  } while (lVar2 != 0);
  FUN_180051968(param_1);
  return;
}

