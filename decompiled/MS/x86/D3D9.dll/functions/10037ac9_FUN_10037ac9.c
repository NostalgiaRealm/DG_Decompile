/*
 * FUN_10037ac9 at 10037ac9
 * undefined __fastcall FUN_10037ac9(undefined4 * param_1)
 * Address ranges: 10037ac9-10037b84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10037ac9(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint local_8;
  
  uVar3 = 0;
  if (param_1[2] != 0) {
    if (param_1[2] == 0) {
      iVar4 = 0;
      goto LAB_10037af4;
    }
    do {
      iVar4 = (uVar3 * 0x2a0 | 8) + param_1[1];
LAB_10037af4:
      local_8 = 0;
      do {
        piVar1 = *(int **)(iVar4 + 0x10 + local_8 * 0x48);
        if (piVar1 != (int *)0x0) {
          FUN_100b4ccf((void *)param_1[4],param_1[5],piVar1);
          FUN_100b4ccf((void *)param_1[4],param_1[5],*(int **)(iVar4 + 0x14 + local_8 * 0x48));
        }
        local_8 = local_8 + 1;
      } while (local_8 < 8);
      thunk_FUN_100cfd6c(*(LPVOID *)(iVar4 + 8));
      FUN_10038442(*(void **)(iVar4 + 4),param_1[4],param_1[5]);
      puVar2 = *(undefined4 **)(iVar4 + 4);
      if (puVar2 != (undefined4 *)0x0) {
        FUN_10008783(puVar2);
        FUN_100cfd6c(puVar2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)param_1[2]);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  FUN_10008783(param_1);
  return;
}

