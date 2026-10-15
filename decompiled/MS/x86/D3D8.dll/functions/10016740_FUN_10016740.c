/*
 * FUN_10016740 at 10016740
 * undefined __fastcall FUN_10016740(int param_1)
 * Address ranges: 10016740-10016793
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10016740(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int local_44 [16];
  
  if (*(char *)(param_1 + 0x9d7) == '\0') {
    FUN_100166ef(param_1);
    piVar1 = FUN_100213bc((void *)(*(int *)(param_1 + 0xabc) + 0x85c0),local_44,param_1 + 0xa54);
    piVar3 = (int *)(*(int *)(param_1 + 0xabc) + 0x8600);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = *piVar1;
      piVar1 = piVar1 + 1;
      piVar3 = piVar3 + 1;
    }
    *(undefined1 *)(param_1 + 0x9d7) = 1;
  }
  return;
}

