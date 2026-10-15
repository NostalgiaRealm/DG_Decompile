/*
 * FUN_1009d780 at 1009d780
 * undefined __stdcall FUN_1009d780(int param_1, int param_2, uint * param_3)
 * Address ranges: 1009d780-1009d7c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009d780(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  iVar1 = FUN_1009104e((void *)(param_1 + 0xe0),param_2,param_3,&local_8);
  if ((-1 < iVar1) && (local_8 == 1)) {
    LOCK();
    *(int *)(&DAT_000066bc + *(int *)(param_1 + 0x120)) =
         *(int *)(&DAT_000066bc + *(int *)(param_1 + 0x120)) + 1;
    UNLOCK();
  }
  return;
}

