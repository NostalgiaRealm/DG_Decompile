/*
 * FUN_10037d41 at 10037d41
 * undefined __stdcall FUN_10037d41(int * param_1, int param_2)
 * Address ranges: 10037d41-10037dc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10037d41(int *param_1,int param_2)

{
  uint uVar1;
  uint local_c;
  uint local_8;
  
  uVar1 = 1;
  FUN_10058380(param_1);
  do {
    FUN_10057d33(param_1,3);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0xd);
  local_8 = local_8 & 0xffffff00;
  local_c = local_c & 0xffffff00;
  FUN_100378ec(param_2,(undefined1 *)&local_8,(undefined1 *)&local_c);
  if ((char)local_8 != '\0') {
    FUN_10058380(param_1);
  }
  if ((char)local_c != '\0') {
    FUN_10058380(param_1);
  }
  return;
}

