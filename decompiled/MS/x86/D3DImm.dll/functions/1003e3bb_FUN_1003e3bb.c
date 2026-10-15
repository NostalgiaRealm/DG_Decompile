/*
 * FUN_1003e3bb at 1003e3bb
 * undefined __fastcall FUN_1003e3bb(int param_1)
 * Address ranges: 1003e3bb-1003e450
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003e3bb(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(param_1 + 0x31c);
  puVar1 = (undefined4 *)(param_1 + 0x14);
  if (*(char *)(param_1 + 0xa86) != '\0') {
    iVar3 = 800;
    if (*piVar2 == 0) {
      iVar3 = 0x14c4;
    }
    (**(code **)(*(int *)*puVar1 + 0x50))(0x24,*(undefined4 *)(iVar3 + param_1));
    *(undefined1 *)(param_1 + 0xa86) = 0;
  }
  if (*(char *)(param_1 + 0xa87) != '\0') {
    iVar3 = 0x324;
    if (*piVar2 == 0) {
      iVar3 = 0x14c8;
    }
    (**(code **)(*(int *)*puVar1 + 0x50))(0x25,*(undefined4 *)(iVar3 + param_1));
    *(undefined1 *)(param_1 + 0xa87) = 0;
  }
  if (*(char *)(param_1 + 0xa88) != '\0') {
    iVar3 = 0x328;
    if (*piVar2 == 0) {
      iVar3 = 0x14cc;
    }
    (**(code **)(*(int *)*puVar1 + 0x50))(0x26,*(undefined4 *)(iVar3 + param_1));
    *(undefined1 *)(param_1 + 0xa88) = 0;
  }
  return;
}

