/*
 * FUN_1001df33 at 1001df33
 * undefined __fastcall FUN_1001df33(void * param_1)
 * Address ranges: 1001df33-1001dfb0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001df33(void *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  FUN_1001bfbf(*(int **)((int)param_1 + 0x315c));
  *(undefined1 *)((int)param_1 + 0x2bc5) = 1;
  fVar1 = (float)*(int *)((int)param_1 + 0xa0);
  if (*(int *)((int)param_1 + 0xa0) < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  *(float *)((int)param_1 + 0x2b08) = fVar1;
  fVar1 = (float)*(int *)((int)param_1 + 0xa4);
  if (*(int *)((int)param_1 + 0xa4) < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  *(float *)((int)param_1 + 0x2b0c) = fVar1;
  *(undefined1 *)((int)param_1 + 0x2bc3) = 1;
  puVar3 = (undefined4 *)((int)param_1 + 0x2b00);
  puVar4 = (undefined4 *)((int)param_1 + 0x2ae8);
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_1002cc78(param_1,(int *)((int)param_1 + 0x2984));
  return;
}

