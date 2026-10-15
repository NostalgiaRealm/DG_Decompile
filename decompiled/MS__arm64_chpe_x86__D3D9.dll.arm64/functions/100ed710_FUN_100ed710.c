/*
 * FUN_100ed710 at 100ed710
 * undefined FUN_100ed710(void)
 * Address ranges: 100ed710-100ed7ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100ed710(int param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  
  puVar1 = (uint *)&DAT_00000dd0;
  if (*(int *)(param_1 + -0xb4) != 0) {
    puVar1 = (uint *)(*(int *)(param_1 + -0xb4) + -0x58e4);
  }
  if (((*puVar1 >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar3 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    bVar3 = true;
    iVar5 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar5 == 0) {
      FUN_100071d0(0);
    }
  }
  cVar4 = FUN_10022c90(param_1 + -200,0,param_2);
  uVar2 = 0x8876086c;
  if (cVar4 != '\0') {
    uVar2 = 0;
  }
  if (bVar3) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return uVar2;
}

