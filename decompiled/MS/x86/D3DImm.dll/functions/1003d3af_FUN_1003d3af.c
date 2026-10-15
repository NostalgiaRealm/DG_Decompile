/*
 * FUN_1003d3af at 1003d3af
 * undefined __fastcall FUN_1003d3af(int * param_1, char param_2)
 * Address ranges: 1003d3af-1003d452
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003d3af(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 == 0x16c) {
    iVar2 = 0xac;
    iVar1 = 0x14;
    if (param_2 != '\0') {
      iVar1 = 0xc0;
    }
    FUN_1005c9cc((int *)(iVar1 + (int)param_1),0,0xac);
    if (param_2 != '\0') {
      param_1[0x30] = 0xac;
      return;
    }
  }
  else if (*param_1 == 0x1ac) {
    iVar2 = 0xcc;
    iVar1 = 0x14;
    if (param_2 != '\0') {
      iVar1 = 0xe0;
    }
    FUN_1005c9cc((int *)(iVar1 + (int)param_1),0,0xcc);
    if (param_2 != '\0') {
      param_1[0x38] = 0xcc;
      return;
    }
  }
  else {
    if (*param_1 != 0x20c) {
      return;
    }
    iVar2 = 0xfc;
    iVar1 = 0x14;
    if (param_2 != '\0') {
      iVar1 = 0x110;
    }
    FUN_1005c9cc((int *)(iVar1 + (int)param_1),0,0xfc);
    if (param_2 != '\0') {
      param_1[0x44] = 0xfc;
      return;
    }
  }
  param_1[5] = iVar2;
  return;
}

