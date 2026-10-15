/*
 * FUN_1001140c at 1001140c
 * undefined __fastcall FUN_1001140c(int param_1)
 * Address ranges: 1001140c-1001144d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001140c(int param_1)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 4) + 8) + 4))();
  if (cVar1 != '\0') {
    bVar2 = FUN_100111e4(param_1);
    if (*(byte *)(param_1 + 0x126) != bVar2) {
      *(byte *)(param_1 + 0x126) = bVar2;
      *(byte *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x20) = bVar2 ^ 1;
                    /* WARNING: Could not recover jumptable at 0x1001144a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)**(undefined4 **)(*(int *)(param_1 + 4) + 8))();
      return;
    }
  }
  return;
}

