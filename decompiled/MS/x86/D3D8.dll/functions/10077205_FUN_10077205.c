/*
 * FUN_10077205 at 10077205
 * undefined __fastcall FUN_10077205(void * param_1)
 * Address ranges: 10077205-10077252
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10077205(void *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  uVar2 = 0;
  do {
    FUN_10078023(param_1,uVar2,0);
    iVar4 = uVar2 * 0xc18;
    uVar2 = uVar2 + 1;
    puVar3 = (undefined4 *)((int)param_1 + 0x1c228);
    puVar5 = (undefined4 *)((int)param_1 + iVar4 + 0x100a8);
    for (iVar1 = 0x300; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
  } while (uVar2 < 0x10);
  return;
}

