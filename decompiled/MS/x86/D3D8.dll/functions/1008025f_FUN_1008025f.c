/*
 * FUN_1008025f at 1008025f
 * undefined __fastcall FUN_1008025f(undefined4 * param_1)
 * Address ranges: 1008025f-1008033d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1008025f(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  uint local_10;
  uint local_c;
  
  uVar3 = 0;
  if (param_1[7] != 0) {
    if (param_1[7] == 0) {
      iVar1 = 8;
      goto LAB_10080288;
    }
    do {
      iVar1 = (uVar3 * 0x9a0 | 0x10) + param_1[6];
LAB_10080288:
      FUN_1007fce8(param_1,iVar1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)param_1[7]);
  }
  thunk_FUN_100ad48c((LPVOID)param_1[5]);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  local_10 = 0;
  if (param_1[2] != 0) {
    if (param_1[2] == 0) {
      piVar2 = (int *)&DAT_00000008;
      goto LAB_100802cf;
    }
    do {
      piVar2 = (int *)(param_1[1] + 0x10 + local_10 * 0x18);
LAB_100802cf:
      local_c = 0;
      piVar4 = (int *)*piVar2;
      if (piVar4[1] != 0) {
        do {
          FUN_1007fce8(param_1,local_c * 0x990 + *piVar4);
          piVar4 = (int *)*piVar2;
          local_c = local_c + 1;
        } while (local_c < (uint)piVar4[1]);
      }
      if (piVar4 != (int *)0x0) {
        thunk_FUN_100ad48c((LPVOID)*piVar4);
        FUN_100ad48c(piVar4);
      }
      local_10 = local_10 + 1;
    } while (local_10 < (uint)param_1[2]);
  }
  thunk_FUN_100ad48c((LPVOID)*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}

