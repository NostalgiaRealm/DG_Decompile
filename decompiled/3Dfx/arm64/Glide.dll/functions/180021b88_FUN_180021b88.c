/*
 * FUN_180021b88 at 180021b88
 * undefined __cdecl FUN_180021b88(longlong * param_1, uint param_2, longlong param_3, longlong param_4)
 * Address ranges: 180021b88-180021ce3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180021b88(longlong *param_1,uint param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  (**(code **)(*(longlong *)param_1[0x630] + 0x50))((longlong *)param_1[0x630],0,2);
  if (*(int *)(param_1[0x631] + 0x54) != 4) {
    (**(code **)(*param_1 + 0x2a0))(param_1);
    *(undefined4 *)(param_1[0x631] + 0x54) = 4;
  }
  FUN_18003a5b8((undefined8 *)param_1[0x631],param_2,param_2 * 3 - 6);
  uVar4 = 0;
  if (0 < (int)param_2) {
    do {
      iVar3 = (int)uVar4;
      uVar2 = *(uint *)(param_3 + uVar4 * 4);
      FUN_180020630(param_1[0x631],
                    (undefined4 *)
                    (param_4 +
                    ((-(ulonglong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulonglong)uVar2 << 4) -
                    (longlong)(int)uVar2) * 4),1,0);
      uVar4 = (ulonglong)(iVar3 + 1U);
    } while ((int)(iVar3 + 1U) < (int)param_2);
  }
  iVar3 = 1;
  if (1 < (int)(param_2 - 1)) {
    do {
      **(int **)(param_1[0x631] + 0x48) = *(int *)(param_1[0x631] + 0x50) - param_2;
      *(uint *)(*(longlong *)(param_1[0x631] + 0x48) + 4) =
           (*(int *)(param_1[0x631] + 0x50) - param_2) + iVar3;
      iVar1 = (*(int *)(param_1[0x631] + 0x50) - param_2) + iVar3;
      iVar3 = iVar3 + 1;
      *(int *)(*(longlong *)(param_1[0x631] + 0x48) + 8) = iVar1 + 1;
      *(longlong *)(param_1[0x631] + 0x48) = *(longlong *)(param_1[0x631] + 0x48) + 0xc;
    } while (iVar3 < (int)(param_2 - 1));
  }
  if ((*(uint *)((longlong)param_1 + 0x2b4c) >> 1 & 1) != 0) {
    (**(code **)(*param_1 + 0x2a0))(param_1);
  }
  (**(code **)(*(longlong *)param_1[0x630] + 0x90))();
  return;
}

