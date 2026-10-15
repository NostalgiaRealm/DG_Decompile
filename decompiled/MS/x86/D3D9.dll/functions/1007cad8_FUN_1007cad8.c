/*
 * FUN_1007cad8 at 1007cad8
 * undefined __fastcall FUN_1007cad8(int param_1)
 * Address ranges: 1007cad8-1007cb55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1007cad8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int local_14;
  int local_10;
  undefined4 *local_c;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x1cf04) + 0x1304);
  FUN_100bf6d2((void *)(*(int *)(param_1 + 0x1cf80) + 0x38),&local_14,2,
               *(int *)(*(int *)(*(int *)(param_1 + 0x1cf04) + 0x1300) + 0xc),
               *(undefined4 *)(iVar1 + 0x938),*(undefined4 *)(iVar1 + 0x93c));
  if (local_c != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(param_1 + 0x1ce30);
    for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 + -1) {
      *local_c = *puVar2;
      puVar2 = puVar2 + 1;
      local_c = local_c + 1;
    }
    FUN_100bf71c(*(int *)(param_1 + 0x1cf80) + 0x38);
    FUN_100bb73f(*(int *)(*(int *)(param_1 + 0x1cf04) + 0x1304),0,local_14,local_10);
  }
  return;
}

