/*
 * FUN_10008b50 at 10008b50
 * undefined __fastcall FUN_10008b50(int param_1)
 * Address ranges: 10008b50-10008baa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10008b50(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int local_84 [16];
  int local_44 [16];
  
  if (*(char *)(param_1 + 0x905) == '\0') {
    iVar3 = param_1 + 0x964;
    piVar2 = local_44;
    piVar1 = FUN_10013790(*(void **)(param_1 + 0x9cc),local_84,
                          (int)*(void **)(param_1 + 0x9cc) + 0x40);
    piVar2 = FUN_10013790(piVar1,piVar2,iVar3);
    piVar1 = (int *)(*(int *)(param_1 + 0x9cc) + 0x780);
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar1 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar1 = piVar1 + 1;
    }
    *(undefined1 *)(param_1 + 0x905) = 1;
  }
  return;
}

