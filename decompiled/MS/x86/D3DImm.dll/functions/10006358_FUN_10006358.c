/*
 * FUN_10006358 at 10006358
 * undefined __fastcall FUN_10006358(int param_1)
 * Address ranges: 10006358-10006420
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10006358(int param_1)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;
  
  (**(code **)**(undefined4 **)(param_1 + 0x18))();
  if (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x28))();
  }
  cVar4 = '\0';
  uVar3 = 0;
  bVar6 = *(uint *)(param_1 + 0x93c) != 0;
  if (bVar6) {
    for (; (*(uint *)(param_1 + 0x93c) >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
    }
  }
  uVar5 = 0;
  if (bVar6) {
    pbVar2 = (byte *)(param_1 + 0x93c + ((int)uVar3 >> 3));
    *pbVar2 = *pbVar2 & ~('\x01' << (uVar3 & 7));
    for (; uVar3 != 0xffffffff; uVar3 = uVar5 + uVar3) {
      (**(code **)(**(int **)(param_1 + 0x14) + 0x5c))
                (uVar3,uVar3 * 0x40 + *(int *)(param_1 + 0x9cc));
      while( true ) {
        puVar1 = (uint *)(param_1 + 0x93c + (uVar5 >> 5) * 4);
        uVar3 = 0;
        bVar6 = *puVar1 != 0;
        if (bVar6) {
          for (; (*puVar1 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
          }
        }
        if (bVar6) break;
        uVar5 = uVar5 + 0x20;
        if (0xd < uVar5) goto LAB_100063ca;
      }
      pbVar2 = (byte *)(param_1 + 0x93c + (uVar5 >> 5) * 4 + ((int)uVar3 >> 3));
      *pbVar2 = *pbVar2 & ~('\x01' << (uVar3 & 7));
    }
  }
LAB_100063ca:
  if (*(char *)(param_1 + 0x932) != '\0') {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x34))(*(undefined4 *)(param_1 + 0x210));
    *(undefined1 *)(param_1 + 0x932) = 0;
  }
  if (((*(char *)(param_1 + 0x225) != '\0') || (*(char *)(param_1 + 0x228) != '\0')) &&
     (*(char *)(param_1 + 0x227) != '\0')) {
    cVar4 = '\x01';
  }
  if (cVar4 != *(char *)(param_1 + 0x226)) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x38))(cVar4);
    *(char *)(param_1 + 0x226) = cVar4;
  }
  return;
}

