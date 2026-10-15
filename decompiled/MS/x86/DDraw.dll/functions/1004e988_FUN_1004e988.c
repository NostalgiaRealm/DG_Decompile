/*
 * FUN_1004e988 at 1004e988
 * undefined __fastcall FUN_1004e988(undefined4 * param_1)
 * Address ranges: 1004e988-1004ea2d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1004e988(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint local_c;
  uint local_8;
  
  local_c = 0;
  if (param_1[5] != 0) {
    do {
      piVar1 = *(int **)(param_1[3] + 0x10 + local_c * 0x18);
      local_8 = 0;
      if (piVar1[1] != 0) {
        do {
          FUN_1004feaf((void *)*param_1,*(uint *)(*piVar1 + 0x70 + local_8 * 0x74),(undefined *)0x0,
                       '\x01');
          piVar2 = *(int **)(*piVar1 + 0x70 + local_8 * 0x74);
          (**(code **)(*piVar2 + 8))(piVar2);
          local_8 = local_8 + 1;
        } while (local_8 < (uint)piVar1[1]);
      }
      local_c = local_c + 1;
    } while (local_c < (uint)param_1[5]);
  }
  uVar4 = 0;
  if (param_1[5] != 0) {
    do {
      puVar3 = *(undefined4 **)(param_1[3] + 0x10 + uVar4 * 0x18);
      if (puVar3 != (undefined4 *)0x0) {
        thunk_FUN_10060be1((LPVOID)*puVar3);
        FUN_10060be1(puVar3);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)param_1[5]);
  }
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}

