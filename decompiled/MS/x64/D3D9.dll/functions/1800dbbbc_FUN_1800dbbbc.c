/*
 * FUN_1800dbbbc at 1800dbbbc
 * undefined __fastcall FUN_1800dbbbc(longlong param_1, ulonglong param_2, int * param_3, int * param_4, int param_5, char param_6)
 * Address ranges: 1800dbbbc-1800dbc8e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800dbbbc(longlong param_1,ulonglong param_2,int *param_3,int *param_4,int param_5,
                  char param_6)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (param_2 & 0xffffffff) * 0x18c0 + param_1;
  if (param_6 == '\0') {
    lVar1 = FUN_1800dc610((longlong *)(lVar2 + 0xc18),param_3);
  }
  else {
    lVar1 = FUN_1800dc760((longlong *)(lVar2 + 0xc38),param_3);
  }
  if (((lVar1 != *(longlong *)(lVar2 + 0x6e0)) || (param_5 != *(int *)(lVar2 + 0x6f4))) ||
     ((param_4 != (int *)0x0 &&
      ((((*param_4 != *(int *)(lVar2 + 0x6f8) || (param_4[1] != *(int *)(lVar2 + 0x6fc))) ||
        (param_4[2] != *(int *)(lVar2 + 0x700))) || (param_4[3] != *(int *)(lVar2 + 0x704))))))) {
    (**(code **)(**(longlong **)(lVar2 + 0x6b8) + 0x118))
              (*(longlong **)(lVar2 + 0x6b8),lVar1,param_4,param_5);
    *(longlong *)(lVar2 + 0x6e0) = lVar1;
    *(int *)(lVar2 + 0x6f4) = param_5;
    if (param_4 != (int *)0x0) {
      lVar1 = 0;
      do {
        *(int *)(lVar2 + 0x6f8 + lVar1 * 4) = param_4[lVar1 * 4];
        lVar1 = lVar1 + 1;
      } while (lVar1 != 4);
    }
  }
  return;
}

