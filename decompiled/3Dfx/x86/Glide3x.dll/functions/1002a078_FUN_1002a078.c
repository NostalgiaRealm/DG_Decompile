/*
 * FUN_1002a078 at 1002a078
 * undefined __fastcall FUN_1002a078(undefined4 param_1, uint param_2, uint param_3)
 * Address ranges: 1002a078-1002a0f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002a078(undefined4 param_1,uint param_2,uint param_3)

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
      if ((param_2 != *(byte *)(iVar4 + 399 + (int)piVar2)) ||
         (param_3 != *(byte *)(iVar4 + 400 + (int)piVar2))) {
        (**(code **)(*piVar2 + 0x150))(extraout_EDX,param_2,param_3);
        *(char *)(iVar4 + 399 + *(int *)(puVar3 + 0xc)) = (char)param_2;
        *(char *)(iVar4 + 400 + *(int *)(puVar3 + 0xc)) = (char)param_3;
      }
    }
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}

