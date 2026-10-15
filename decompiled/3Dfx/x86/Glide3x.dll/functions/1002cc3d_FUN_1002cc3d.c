/*
 * FUN_1002cc3d at 1002cc3d
 * char __fastcall FUN_1002cc3d(int param_1)
 * Address ranges: 1002cc3d-1002ccc1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __fastcall FUN_1002cc3d(int param_1)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  
  cVar6 = '\0';
  bVar1 = false;
  uVar7 = 0;
  while( true ) {
    if (((*(char **)(param_1 + 0x24) == (char *)0x0) || (0xffe < uVar7)) || (bVar1)) break;
    cVar6 = **(char **)(param_1 + 0x24);
    *(char *)(*(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x38)) = cVar6;
    if ((((cVar6 == '[') || (cVar6 == ']')) ||
        ((cVar6 == ';' || ((cVar6 == ',' || (cVar6 == ':')))))) || (bVar2 = 0, cVar6 == '=')) {
      bVar2 = 1;
    }
    if ((((cVar6 == ' ') || (cVar6 == '\t')) || (cVar6 == '\r')) || (cVar6 == '\n')) {
      bVar3 = 1;
    }
    else {
      bVar3 = 0;
    }
    bVar1 = (bool)(bVar2 | bVar3);
    if (!bVar1) {
      uVar5 = FUN_1002caa2(param_1);
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
      *(undefined4 *)(param_1 + 0x24) = uVar5;
    }
    uVar7 = uVar7 + 1;
  }
  cVar4 = '\0';
  if (bVar1) {
    cVar4 = cVar6;
  }
  return cVar4;
}

