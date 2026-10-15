/*
 * FUN_180058628 at 180058628
 * undefined __fastcall FUN_180058628(longlong * param_1)
 * Address ranges: 180058628-180058671
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180058628(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  lVar1 = *param_1;
  *(longlong *)(lVar1 + 0x18) = param_1[1];
  *(longlong *)(lVar1 + 0xa8) = param_1[2];
  *(longlong *)(lVar1 + 0xb0) = param_1[3];
  *(int *)(lVar1 + 0x5c) = (int)param_1[4];
  puVar3 = (undefined4 *)((longlong)param_1 + 0x24);
  puVar4 = (undefined4 *)(lVar1 + 0x60);
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
}

