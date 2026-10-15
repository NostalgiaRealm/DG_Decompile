/*
 * FUN_10004412 at 10004412
 * undefined __fastcall FUN_10004412(int param_1)
 * Address ranges: 10004412-10004461
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10004412(int param_1)

{
  int iVar1;
  int iVar2;
  EXECUTION_STATE EVar3;
  
  iVar2 = DAT_1006c210;
  *(uint *)(param_1 + 0xc) = *(uint *)(DAT_1006c210 + 0x826) >> 2 & 1;
  *(uint *)(param_1 + 0x10) = *(uint *)(iVar2 + 0x82a) & 1;
  iVar1 = *(int *)(iVar2 + 0xf8);
  *(int *)(iVar2 + 0xf8) = iVar1 + 1;
  if ((iVar1 == 0) && (*(char *)(iVar2 + 0x789) != '\0')) {
    EVar3 = SetThreadExecutionState(0x80000002);
    *(EXECUTION_STATE *)(iVar2 + 0xf4) = EVar3;
  }
  return;
}

