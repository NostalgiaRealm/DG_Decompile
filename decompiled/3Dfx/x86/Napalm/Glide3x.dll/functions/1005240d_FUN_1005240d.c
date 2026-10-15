/*
 * FUN_1005240d at 1005240d
 * undefined4 __fastcall FUN_1005240d(undefined * param_1)
 * Address ranges: 1005240d-1005243f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1005240d(undefined *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(*(int *)((int)ProcessEnvironmentBlock + 0xc) + 0x14);
  puVar2 = (undefined4 *)*puVar3;
  pvVar1 = ProcessEnvironmentBlock;
  while( true ) {
    if ((undefined4 *)*puVar2 == puVar3) {
      return (uint)pvVar1 & 0xffffff00;
    }
    pvVar1 = (void *)(*(code *)param_1)(puVar2 + -2);
    if ((char)pvVar1 != '\0') break;
    puVar2 = (undefined4 *)*puVar2;
  }
  return CONCAT31((int3)((uint)pvVar1 >> 8),1);
}

