/*
 * _grConstantColorValue4@16 at 180001c00
 * undefined __fastcall _grConstantColorValue4@16(int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 180001c00-180001cdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grConstantColorValue4_16(int param_1,int param_2,int param_3,int param_4)

{
  longlong *plVar1;
  undefined *puVar2;
  
                    /* 0x1c00  24  _grConstantColorValue4@16
                       0x1c00  182  grConstantColorValue4 */
  puVar2 = FUN_180015044();
  if (puVar2[100] != '\0') {
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + 1;
    UNLOCK();
    plVar1 = *(longlong **)(puVar2 + 0x18);
    if ((((param_2 != *(int *)((longlong)plVar1 + 0xfa)) ||
         (param_3 != *(int *)((longlong)plVar1 + 0xfe))) ||
        (param_4 != *(int *)((longlong)plVar1 + 0x102))) ||
       (param_1 != *(int *)((longlong)plVar1 + 0x106))) {
      (**(code **)(*plVar1 + 0x168))(plVar1,param_2);
      *(int *)(*(longlong *)(puVar2 + 0x18) + 0xfa) = param_2;
      *(int *)(*(longlong *)(puVar2 + 0x18) + 0xfe) = param_3;
      *(int *)(*(longlong *)(puVar2 + 0x18) + 0x102) = param_4;
      *(int *)(*(longlong *)(puVar2 + 0x18) + 0x106) = param_1;
    }
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

