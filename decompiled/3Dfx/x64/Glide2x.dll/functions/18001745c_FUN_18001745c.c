/*
 * FUN_18001745c at 18001745c
 * undefined __fastcall FUN_18001745c(longlong param_1, int param_2, float param_3)
 * Address ranges: 18001745c-1800174f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001745c(longlong param_1,int param_2,float param_3)

{
  longlong *plVar1;
  int iVar2;
  float fVar3;
  
  if (*(char *)(param_1 + 100) != '\0') {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    if (param_2 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833)) {
      iVar2 = (int)(param_3 * 4.0);
      if (0x3f < iVar2 + 0x20U) {
        iVar2 = 0x1f;
      }
      plVar1 = *(longlong **)(param_1 + 0x18);
      fVar3 = (float)iVar2 * 0.25;
      if (fVar3 != *(float *)((longlong)param_2 * 0x41 + 0x176 + (longlong)plVar1)) {
        (**(code **)(*plVar1 + 0x268))(plVar1,param_2,fVar3);
        *(float *)((longlong)param_2 * 0x41 + 0x176 + *(longlong *)(param_1 + 0x18)) = fVar3;
      }
    }
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

