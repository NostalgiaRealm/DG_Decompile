/*
 * FUN_1000fcf3 at 1000fcf3
 * undefined __fastcall FUN_1000fcf3(int param_1)
 * Address ranges: 1000fcf3-1000fd70
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000fcf3(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int local_14;
  int local_10;
  undefined4 *local_c;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xcf04) + 0x1304);
  FUN_1004f537((void *)(*(int *)(param_1 + 0xcf80) + 0x38),&local_14,2,
               *(int *)(*(int *)(*(int *)(param_1 + 0xcf04) + 0x1300) + 0xc),
               *(undefined4 *)(iVar1 + 0x938),*(undefined4 *)(iVar1 + 0x93c));
  if (local_c != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(param_1 + 0xce30);
    for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 + -1) {
      *local_c = *puVar2;
      puVar2 = puVar2 + 1;
      local_c = local_c + 1;
    }
    FUN_1004f581(*(int *)(param_1 + 0xcf80) + 0x38);
    FUN_10053389(*(int *)(*(int *)(param_1 + 0xcf04) + 0x1304),0,local_14,local_10);
  }
  return;
}

