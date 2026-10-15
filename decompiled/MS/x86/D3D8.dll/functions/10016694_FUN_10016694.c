/*
 * FUN_10016694 at 10016694
 * undefined __fastcall FUN_10016694(int param_1)
 * Address ranges: 10016694-100166ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10016694(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int local_84 [16];
  int local_44 [16];
  
  if (*(char *)(param_1 + 0x9d5) == '\0') {
    iVar3 = param_1 + 0xa54;
    piVar2 = local_44;
    piVar1 = FUN_100213bc(*(void **)(param_1 + 0xabc),local_84,
                          (int)*(void **)(param_1 + 0xabc) + 0x40);
    piVar2 = FUN_100213bc(piVar1,piVar2,iVar3);
    piVar1 = (int *)(*(int *)(param_1 + 0xabc) + 0x8580);
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar1 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar1 = piVar1 + 1;
    }
    *(undefined1 *)(param_1 + 0x9d5) = 1;
  }
  return;
}

