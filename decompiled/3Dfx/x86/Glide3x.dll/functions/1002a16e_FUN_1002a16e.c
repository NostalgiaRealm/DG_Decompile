/*
 * FUN_1002a16e at 1002a16e
 * undefined __fastcall FUN_1002a16e(undefined4 param_1, uint param_2, int param_3)
 * Address ranges: 1002a16e-1002a1e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002a16e(undefined4 param_1,uint param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  undefined *puVar3;
  int extraout_EDX;
  int iVar4;
  
  puVar3 = FUN_1000504c();
  if (puVar3[0x3c] != '\0') {
    piVar1 = (int *)(puVar3 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (extraout_EDX < *(int *)(*(int *)(puVar3 + 0x1c) + 0x797)) {
      piVar2 = *(int **)(puVar3 + 0xc);
      iVar4 = extraout_EDX * 0x55;
      if ((*(byte *)(iVar4 + 0x19f + (int)piVar2) != param_2) ||
         (*(int *)(iVar4 + 0x1a0 + (int)piVar2) != param_3)) {
        (**(code **)(*piVar2 + 0x16c))(extraout_EDX,param_2,param_3);
        *(char *)(iVar4 + 0x19f + *(int *)(puVar3 + 0xc)) = (char)param_2;
        *(int *)(iVar4 + 0x1a0 + *(int *)(puVar3 + 0xc)) = param_3;
      }
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

