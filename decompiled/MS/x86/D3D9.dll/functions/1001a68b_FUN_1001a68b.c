/*
 * FUN_1001a68b at 1001a68b
 * undefined __fastcall FUN_1001a68b(int param_1)
 * Address ranges: 1001a68b-1001a6d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001a68b(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int local_44 [16];
  
  if (*(char *)(param_1 + 0xc98) == '\0') {
    piVar1 = FUN_10028a54((void *)(*(int *)(param_1 + 0xd80) + 0x280),local_44,
                          *(int *)(param_1 + 0xd80));
    piVar3 = (int *)(*(int *)(param_1 + 0xd80) + 0x8540);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = *piVar1;
      piVar1 = piVar1 + 1;
      piVar3 = piVar3 + 1;
    }
    *(undefined1 *)(param_1 + 0xc98) = 1;
  }
  return;
}

