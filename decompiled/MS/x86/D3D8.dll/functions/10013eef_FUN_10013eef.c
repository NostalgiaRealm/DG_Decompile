/*
 * FUN_10013eef at 10013eef
 * undefined __fastcall FUN_10013eef(int param_1)
 * Address ranges: 10013eef-10013fc1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10013eef(int param_1)

{
  int iVar1;
  uint *puVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  bool bVar8;
  
  (**(code **)**(undefined4 **)(param_1 + 0x18))();
  if (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x28))();
  }
  cVar6 = '\0';
  uVar7 = 0;
  do {
    uVar4 = uVar7 >> 5;
    puVar2 = (uint *)(param_1 + 0xa0c + uVar4 * 4);
    uVar5 = 0;
    bVar8 = *puVar2 != 0;
    if (bVar8) {
      for (; (*puVar2 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    if (bVar8) goto LAB_10013f5b;
    uVar7 = uVar7 + 0x20;
  } while (uVar7 < 0x10a);
LAB_10013f6b:
  if (*(char *)(param_1 + 0xa02) != '\0') {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x2c))(*(undefined4 *)(param_1 + 0x20c));
    *(undefined1 *)(param_1 + 0xa02) = 0;
  }
  if (((*(char *)(param_1 + 0x221) != '\0') || (*(char *)(param_1 + 0x224) != '\0')) &&
     (*(char *)(param_1 + 0x223) != '\0')) {
    cVar6 = '\x01';
  }
  if (cVar6 != *(char *)(param_1 + 0x222)) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x30))(cVar6);
    *(char *)(param_1 + 0x222) = cVar6;
  }
  return;
LAB_10013f5b:
  while( true ) {
    pbVar3 = (byte *)(param_1 + 0xa0c + uVar4 * 4 + ((int)uVar5 >> 3));
    *pbVar3 = *pbVar3 & ~('\x01' << (uVar5 & 7));
    iVar1 = uVar7 + uVar5;
    if (iVar1 == -1) break;
    (**(code **)(**(int **)(param_1 + 0x14) + 0x54))(iVar1,iVar1 * 0x40 + *(int *)(param_1 + 0xabc))
    ;
    while( true ) {
      uVar4 = uVar7 >> 5;
      puVar2 = (uint *)(param_1 + 0xa0c + uVar4 * 4);
      uVar5 = 0;
      bVar8 = *puVar2 != 0;
      if (bVar8) {
        for (; (*puVar2 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
      if (bVar8) break;
      uVar7 = uVar7 + 0x20;
      if (0x109 < uVar7) goto LAB_10013f6b;
    }
  }
  goto LAB_10013f6b;
}

