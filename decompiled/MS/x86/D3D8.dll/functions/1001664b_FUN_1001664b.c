/*
 * FUN_1001664b at 1001664b
 * undefined __fastcall FUN_1001664b(int param_1)
 * Address ranges: 1001664b-10016693
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001664b(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int local_44 [16];
  
  if (*(char *)(param_1 + 0x9d4) == '\0') {
    piVar1 = FUN_100213bc((void *)(*(int *)(param_1 + 0xabc) + 0x280),local_44,
                          *(int *)(param_1 + 0xabc));
    piVar3 = (int *)(*(int *)(param_1 + 0xabc) + 0x8540);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = *piVar1;
      piVar1 = piVar1 + 1;
      piVar3 = piVar3 + 1;
    }
    *(undefined1 *)(param_1 + 0x9d4) = 1;
  }
  return;
}

