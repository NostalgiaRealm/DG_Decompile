/*
 * FUN_18001fd54 at 18001fd54
 * undefined __fastcall FUN_18001fd54(longlong * param_1, uint param_2, longlong param_3, longlong param_4)
 * Address ranges: 18001fd54-18001fe75
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001fd54(longlong *param_1,uint param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  (**(code **)(*(longlong *)param_1[0x630] + 0x50))((longlong *)param_1[0x630],0,2);
  if (*(int *)(param_1[0x631] + 0x54) != 4) {
    (**(code **)(*param_1 + 0x2a0))(param_1);
    *(undefined4 *)(param_1[0x631] + 0x54) = 4;
  }
  FUN_180036418((undefined8 *)param_1[0x631],param_2,(param_2 - 2) * 3);
  uVar3 = 0;
  if (0 < (int)param_2) {
    do {
      FUN_18001ea88(param_1[0x631],
                    (undefined4 *)((longlong)*(int *)(param_3 + uVar3 * 4) * 0x3c + param_4),1,0);
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while ((int)uVar2 < (int)param_2);
  }
  iVar4 = 1;
  if (1 < (int)(param_2 - 1)) {
    do {
      **(int **)(param_1[0x631] + 0x48) = *(int *)(param_1[0x631] + 0x50) - param_2;
      *(uint *)(*(longlong *)(param_1[0x631] + 0x48) + 4) =
           (*(int *)(param_1[0x631] + 0x50) - param_2) + iVar4;
      iVar1 = (*(int *)(param_1[0x631] + 0x50) - param_2) + 1 + iVar4;
      iVar4 = iVar4 + 1;
      *(int *)(*(longlong *)(param_1[0x631] + 0x48) + 8) = iVar1;
      *(longlong *)(param_1[0x631] + 0x48) = *(longlong *)(param_1[0x631] + 0x48) + 0xc;
    } while (iVar4 < (int)(param_2 - 1));
  }
  if ((*(byte *)((longlong)param_1 + 0x2b4c) & 2) != 0) {
    (**(code **)(*param_1 + 0x2a0))(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00018001fe6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1[0x630] + 0x90))();
  return;
}

