/*
 * FUN_10017fad at 10017fad
 * undefined __fastcall FUN_10017fad(int param_1)
 * Address ranges: 10017fad-10018072
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10017fad(int param_1)

{
  int iVar1;
  uint *puVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  bool bVar8;
  
  FUN_10017f75(param_1);
  cVar6 = '\0';
  uVar7 = 0;
  do {
    uVar4 = uVar7 >> 5;
    puVar2 = (uint *)(param_1 + 0xcd0 + uVar4 * 4);
    uVar5 = 0;
    bVar8 = *puVar2 != 0;
    if (bVar8) {
      for (; (*puVar2 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    if (bVar8) goto LAB_1001800c;
    uVar7 = uVar7 + 0x20;
  } while (uVar7 < 0x10a);
LAB_1001801c:
  if (*(char *)(param_1 + 0xcc6) != '\0') {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x2c))(*(undefined4 *)(param_1 + 0x3b0));
    *(undefined1 *)(param_1 + 0xcc6) = 0;
  }
  if (((*(char *)(param_1 + 0x3c5) != '\0') || (*(char *)(param_1 + 0x3c8) != '\0')) &&
     (*(char *)(param_1 + 0x3c7) != '\0')) {
    cVar6 = '\x01';
  }
  if (cVar6 != *(char *)(param_1 + 0x3c6)) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x30))(cVar6);
    *(char *)(param_1 + 0x3c6) = cVar6;
  }
  return;
LAB_1001800c:
  while( true ) {
    pbVar3 = (byte *)(param_1 + 0xcd0 + uVar4 * 4 + ((int)uVar5 >> 3));
    *pbVar3 = *pbVar3 & ~('\x01' << (uVar5 & 7));
    iVar1 = uVar7 + uVar5;
    if (iVar1 == -1) break;
    (**(code **)(**(int **)(param_1 + 0x14) + 0x54))(iVar1,iVar1 * 0x40 + *(int *)(param_1 + 0xd80))
    ;
    while( true ) {
      uVar4 = uVar7 >> 5;
      puVar2 = (uint *)(param_1 + 0xcd0 + uVar4 * 4);
      uVar5 = 0;
      bVar8 = *puVar2 != 0;
      if (bVar8) {
        for (; (*puVar2 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
      if (bVar8) break;
      uVar7 = uVar7 + 0x20;
      if (0x109 < uVar7) goto LAB_1001801c;
    }
  }
  goto LAB_1001801c;
}

