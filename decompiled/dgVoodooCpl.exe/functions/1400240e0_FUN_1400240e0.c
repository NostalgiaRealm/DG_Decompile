/*
 * FUN_1400240e0 at 1400240e0
 * undefined8 __fastcall FUN_1400240e0(longlong param_1, DWORD param_2, LPVOID param_3, DWORD * param_4)
 * Address ranges: 1400240e0-14002415b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1400240e0(longlong param_1,DWORD param_2,LPVOID param_3,DWORD *param_4)

{
  BOOL BVar1;
  DWORD local_res8 [2];
  
  local_res8[0] = 0;
  if ((longlong)*(HANDLE *)(param_1 + 8) - 1U < 0xfffffffffffffffe) {
    BVar1 = ReadFile(*(HANDLE *)(param_1 + 8),param_3,param_2,local_res8,(LPOVERLAPPED)0x0);
    if (BVar1 == 1) {
      if (param_4 != (DWORD *)0x0) {
        *param_4 = local_res8[0];
        return 0;
      }
      if (local_res8[0] == param_2) {
        return 0;
      }
    }
  }
  return 1;
}

