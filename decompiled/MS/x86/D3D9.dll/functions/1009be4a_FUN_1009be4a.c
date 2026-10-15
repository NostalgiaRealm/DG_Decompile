/*
 * FUN_1009be4a at 1009be4a
 * undefined __fastcall FUN_1009be4a(undefined4 * param_1)
 * Address ranges: 1009be4a-1009bf27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1009be4a(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  uint local_c;
  
  uVar3 = 0;
  if (param_1[7] != 0) {
    if (param_1[7] == 0) {
      iVar1 = 8;
      goto LAB_1009be78;
    }
    do {
      iVar1 = param_1[6] + 0x10 + uVar3 * 0x238;
LAB_1009be78:
      FUN_1009bb0a(iVar1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)param_1[7]);
  }
  thunk_FUN_100cfd6c((LPVOID)param_1[5]);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  local_c = 0;
  if (param_1[2] != 0) {
    if (param_1[2] == 0) {
      piVar2 = (int *)&DAT_00000008;
      goto LAB_1009bebd;
    }
    do {
      piVar2 = (int *)(param_1[1] + 0x10 + local_c * 0x18);
LAB_1009bebd:
      uVar3 = 0;
      piVar4 = (int *)*piVar2;
      if (piVar4[1] != 0) {
        do {
          FUN_1009bb0a(uVar3 * 0x228 + *piVar4);
          piVar4 = (int *)*piVar2;
          uVar3 = uVar3 + 1;
        } while (uVar3 < (uint)piVar4[1]);
      }
      if (piVar4 != (int *)0x0) {
        thunk_FUN_100cfd6c((LPVOID)*piVar4);
        FUN_100cfd6c(piVar4);
      }
      local_c = local_c + 1;
    } while (local_c < (uint)param_1[2]);
  }
  thunk_FUN_100cfd6c((LPVOID)*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}

