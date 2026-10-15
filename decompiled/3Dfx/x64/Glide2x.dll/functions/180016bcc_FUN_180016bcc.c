/*
 * FUN_180016bcc at 180016bcc
 * int __fastcall FUN_180016bcc(longlong param_1, int param_2)
 * Address ranges: 180016bcc-180016c2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180016bcc(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_180015224(param_1);
  if (cVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    if (param_2 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833)) {
      if (*(char *)(param_1 + 100) == '\0') {
        iVar2 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x82f);
      }
      else {
        LOCK();
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
        UNLOCK();
        iVar2 = *(int *)((longlong)param_2 * 0x4e8 + 700 + *(longlong *)(param_1 + 0x18));
        LOCK();
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
        UNLOCK();
      }
    }
    iVar2 = iVar2 + -0x10;
  }
  return iVar2;
}

