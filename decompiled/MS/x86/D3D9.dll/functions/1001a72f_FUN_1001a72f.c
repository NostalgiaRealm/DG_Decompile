/*
 * FUN_1001a72f at 1001a72f
 * undefined __fastcall FUN_1001a72f(int param_1)
 * Address ranges: 1001a72f-1001a77f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001a72f(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int local_44 [16];
  
  if (*(char *)(param_1 + 0xc9a) == '\0') {
    FUN_1001a68b(param_1);
    piVar1 = FUN_10028a54((void *)(*(int *)(param_1 + 0xd80) + 0x8540),local_44,
                          *(int *)(param_1 + 0xd80) + 0x40);
    piVar3 = (int *)(*(int *)(param_1 + 0xd80) + 0x85c0);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = *piVar1;
      piVar1 = piVar1 + 1;
      piVar3 = piVar3 + 1;
    }
    *(undefined1 *)(param_1 + 0xc9a) = 1;
  }
  return;
}

