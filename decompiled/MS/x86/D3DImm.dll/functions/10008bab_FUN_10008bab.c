/*
 * FUN_10008bab at 10008bab
 * undefined __fastcall FUN_10008bab(int param_1)
 * Address ranges: 10008bab-10008c2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10008bab(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int local_44 [16];
  
  if (*(char *)(param_1 + 0x906) == '\0') {
    if (*(char *)(param_1 + 0x904) == '\0') {
      iVar2 = *(int *)(param_1 + 0x9cc);
      piVar1 = FUN_10013790((void *)(iVar2 + 0x280),local_44,iVar2);
      piVar3 = (int *)(*(int *)(param_1 + 0x9cc) + 0x740);
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar3 = *piVar1;
        piVar1 = piVar1 + 1;
        piVar3 = piVar3 + 1;
      }
      *(undefined1 *)(param_1 + 0x904) = 1;
    }
    iVar2 = *(int *)(param_1 + 0x9cc);
    piVar1 = FUN_10013790((void *)(iVar2 + 0x740),local_44,iVar2 + 0x40);
    piVar3 = (int *)(*(int *)(param_1 + 0x9cc) + 0x7c0);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = *piVar1;
      piVar1 = piVar1 + 1;
      piVar3 = piVar3 + 1;
    }
    *(undefined1 *)(param_1 + 0x906) = 1;
  }
  return;
}

