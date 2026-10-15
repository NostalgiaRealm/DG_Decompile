/*
 * FUN_10069160 at 10069160
 * undefined __stdcall FUN_10069160(int * param_1, int param_2)
 * Address ranges: 10069160-100691d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10069160(int *param_1,int param_2)

{
  uint uVar1;
  uint local_c;
  uint local_8;
  
  uVar1 = 1;
  FUN_100c4430(param_1);
  do {
    FUN_100c440d(param_1);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0xd);
  local_8 = local_8 & 0xffffff00;
  local_c = local_c & 0xffffff00;
  FUN_10068d0b(param_2,(undefined1 *)&local_8,(undefined1 *)&local_c);
  if ((char)local_8 != '\0') {
    FUN_100c4430(param_1);
  }
  if ((char)local_c != '\0') {
    FUN_100c4430(param_1);
  }
  return;
}

