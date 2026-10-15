/*
 * FUN_1005bfab at 1005bfab
 * undefined __fastcall FUN_1005bfab(int * param_1)
 * Address ranges: 1005bfab-1005c060
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1005bfab(int *param_1)

{
  int *piVar1;
  int *piVar2;
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  if (param_1[0xf] != 0) {
    if (param_1[0xf] == 0) {
      piVar1 = (int *)&DAT_00000008;
      goto LAB_1005bfd8;
    }
    do {
      piVar1 = (int *)(param_1[0xe] + 0x10 + local_10 * 0x18);
LAB_1005bfd8:
      local_c = 0;
      piVar2 = (int *)*piVar1;
      if (piVar2[1] != 0) {
        do {
          (**(code **)(*param_1 + 4))(*(undefined4 *)(*piVar2 + local_c * 8));
          piVar2 = (int *)*piVar1;
          local_c = local_c + 1;
        } while (local_c < (uint)piVar2[1]);
      }
      if (piVar2 != (int *)0x0) {
        thunk_FUN_10060be1((LPVOID)*piVar2);
        FUN_10060be1(piVar2);
      }
      local_10 = local_10 + 1;
    } while (local_10 < (uint)param_1[0xf]);
  }
  thunk_FUN_10060be1((LPVOID)param_1[0xd]);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  thunk_FUN_10060be1((LPVOID)param_1[0x11]);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  return;
}

