/*
 * FUN_140011ea0 at 140011ea0
 * undefined __fastcall FUN_140011ea0(longlong param_1, ulonglong param_2, short * param_3)
 * Address ranges: 140011ea0-140011f1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140011ea0(longlong param_1,ulonglong param_2,short *param_3)

{
  longlong *plVar1;
  wchar_t *pwVar2;
  short local_148 [160];
  
  if (*(char *)(param_1 + 0x478) == '\0') {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 8 + (param_2 & 0xffffffff) * 0x28);
    (**(code **)(*plVar1 + 0x50))(plVar1,local_148);
    FUN_1400250dc(param_3,local_148);
    return;
  }
  param_3[0] = L'M';
  param_3[1] = L'i';
  param_3[2] = L'c';
  param_3[3] = L'r';
  pwVar2 = param_3 + 4;
  pwVar2[0] = L'o';
  pwVar2[1] = L's';
  pwVar2[2] = L'o';
  pwVar2[3] = L'f';
  pwVar2 = param_3 + 8;
  pwVar2[0] = L't';
  pwVar2[1] = L' ';
  pwVar2[2] = L'B';
  pwVar2[3] = L'a';
  pwVar2 = param_3 + 0xc;
  pwVar2[0] = L's';
  pwVar2[1] = L'i';
  pwVar2[2] = L'c';
  pwVar2[3] = L' ';
  pwVar2 = param_3 + 0x10;
  pwVar2[0] = L'R';
  pwVar2[1] = L'e';
  pwVar2[2] = L'n';
  pwVar2[3] = L'd';
  pwVar2 = param_3 + 0x14;
  pwVar2[0] = L'e';
  pwVar2[1] = L'r';
  pwVar2[2] = L' ';
  pwVar2[3] = L'D';
  pwVar2 = param_3 + 0x16;
  pwVar2[0] = L' ';
  pwVar2[1] = L'D';
  pwVar2[2] = L'r';
  pwVar2[3] = L'i';
  pwVar2 = param_3 + 0x1a;
  pwVar2[0] = L'v';
  pwVar2[1] = L'e';
  pwVar2[2] = L'r';
  pwVar2[3] = L'\0';
  return;
}

