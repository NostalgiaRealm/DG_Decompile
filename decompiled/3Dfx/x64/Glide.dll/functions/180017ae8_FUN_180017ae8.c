/*
 * FUN_180017ae8 at 180017ae8
 * undefined __fastcall FUN_180017ae8(longlong param_1, uint param_2, undefined8 * param_3, int param_4, int param_5)
 * Address ranges: 180017ae8-180017b7e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180017ae8(longlong param_1,uint param_2,undefined8 *param_3,int param_4,int param_5)

{
  int iVar1;
  
  if (*(char *)(param_1 + 100) != '\0') {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    if (param_2 < 3) {
      iVar1 = 0;
      if (0 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833)) {
        do {
          FUN_18001e810(*(longlong *)(param_1 + 0x18),iVar1,param_2,param_3,param_4,param_5 + 1);
          (**(code **)(**(longlong **)(param_1 + 0x18) + 0x278))
                    (*(longlong **)(param_1 + 0x18),iVar1,param_2,param_3,param_4,param_5 + 1);
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833));
      }
    }
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

