/*
 * FUN_1001a6d4 at 1001a6d4
 * undefined __fastcall FUN_1001a6d4(int param_1)
 * Address ranges: 1001a6d4-1001a72e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001a6d4(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int local_84 [16];
  int local_44 [16];
  
  if (*(char *)(param_1 + 0xc99) == '\0') {
    iVar3 = param_1 + 0xd18;
    piVar2 = local_44;
    piVar1 = FUN_10028a54(*(void **)(param_1 + 0xd80),local_84,
                          (int)*(void **)(param_1 + 0xd80) + 0x40);
    piVar2 = FUN_10028a54(piVar1,piVar2,iVar3);
    piVar1 = (int *)(*(int *)(param_1 + 0xd80) + 0x8580);
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar1 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar1 = piVar1 + 1;
    }
    *(undefined1 *)(param_1 + 0xc99) = 1;
  }
  return;
}

