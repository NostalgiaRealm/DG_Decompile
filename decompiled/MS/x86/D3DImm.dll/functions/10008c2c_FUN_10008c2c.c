/*
 * FUN_10008c2c at 10008c2c
 * undefined __fastcall FUN_10008c2c(int param_1)
 * Address ranges: 10008c2c-10008c7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10008c2c(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int local_44 [16];
  
  if (*(char *)(param_1 + 0x907) == '\0') {
    FUN_10008bab(param_1);
    piVar1 = FUN_10013790((void *)(*(int *)(param_1 + 0x9cc) + 0x7c0),local_44,param_1 + 0x964);
    piVar3 = (int *)(*(int *)(param_1 + 0x9cc) + 0x800);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = *piVar1;
      piVar1 = piVar1 + 1;
      piVar3 = piVar3 + 1;
    }
    *(undefined1 *)(param_1 + 0x907) = 1;
  }
  return;
}

