/*
 * FUN_1009b9d9 at 1009b9d9
 * undefined __fastcall FUN_1009b9d9(undefined4 * param_1)
 * Address ranges: 1009b9d9-1009bb09
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1009b9d9(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  uint local_c;
  
  uVar4 = 0;
  if (param_1[7] != 0) {
    if (param_1[7] == 0) {
      iVar1 = 8;
      goto LAB_1009ba07;
    }
    do {
      iVar1 = (uVar4 * 0x880 | 0x10) + param_1[6];
LAB_1009ba07:
      FUN_1009b4ff(iVar1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)param_1[7]);
  }
  thunk_FUN_100cfd6c((LPVOID)param_1[5]);
  param_1[5] = 0;
  uVar4 = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  if (param_1[0xb] != 0) {
    if (param_1[0xb] == 0) {
      puVar3 = (undefined4 *)&DAT_00000008;
      goto LAB_1009ba47;
    }
    do {
      puVar3 = (undefined4 *)(uVar4 * 0x18 + param_1[10] + 0x10);
LAB_1009ba47:
      puVar3 = (undefined4 *)*puVar3;
      if (puVar3 != (undefined4 *)0x0) {
        thunk_FUN_100cfd6c((LPVOID)*puVar3);
        FUN_100cfd6c(puVar3);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)param_1[0xb]);
  }
  thunk_FUN_100cfd6c((LPVOID)param_1[9]);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  local_c = 0;
  if (param_1[2] != 0) {
    if (param_1[2] == 0) {
      piVar2 = (int *)&DAT_00000008;
      goto LAB_1009ba9c;
    }
    do {
      piVar2 = (int *)(param_1[1] + 0x10 + local_c * 0x18);
LAB_1009ba9c:
      piVar5 = (int *)*piVar2;
      if (piVar5[1] != 0) {
        uVar4 = 0;
        do {
          FUN_1009b4ff(uVar4 * 0x870 + *piVar5);
          piVar5 = (int *)*piVar2;
          uVar4 = uVar4 + 1;
        } while (uVar4 < (uint)piVar5[1]);
      }
      if (piVar5 != (int *)0x0) {
        thunk_FUN_100cfd6c((LPVOID)*piVar5);
        FUN_100cfd6c(piVar5);
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

