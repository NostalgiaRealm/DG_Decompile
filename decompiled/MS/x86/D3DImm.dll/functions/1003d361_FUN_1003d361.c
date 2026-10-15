/*
 * FUN_1003d361 at 1003d361
 * undefined __fastcall FUN_1003d361(int * param_1, uint * param_2, char param_3)
 * Address ranges: 1003d361-1003d3ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003d361(int *param_1,uint *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 == 0x16c) {
    uVar3 = *param_2;
    iVar2 = 0xc0;
  }
  else if (*param_1 == 0x1ac) {
    uVar3 = *param_2;
    iVar2 = 0xe0;
  }
  else {
    if (*param_1 != 0x20c) {
      return;
    }
    uVar3 = *param_2;
    iVar2 = 0x110;
  }
  iVar1 = 0x14;
  if (param_3 != '\0') {
    iVar1 = iVar2;
  }
  FUN_1005ca00((undefined4 *)(iVar1 + (int)param_1),param_2,uVar3);
  return;
}

