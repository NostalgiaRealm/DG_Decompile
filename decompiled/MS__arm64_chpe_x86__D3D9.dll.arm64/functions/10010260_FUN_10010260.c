/*
 * FUN_10010260 at 10010260
 * undefined FUN_10010260(void)
 * Address ranges: 10010260-10010347
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_10010260(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  
  bVar5 = 1;
  uVar8 = 0;
  if (*(uint *)(param_2 + 8) != 0) {
    do {
      bVar4 = *(byte *)(param_2 + 0x214 + uVar8);
      if (bVar4 < 0x11) {
        cVar7 = (&DAT_10162538)[bVar4];
      }
      else {
        cVar7 = -1;
      }
      uVar6 = (uint)bVar4;
      bVar5 = uVar6 == 0 | bVar5;
      if (cVar7 == *(char *)(param_2 + 0x19 + uVar6 * 8)) {
        iVar1 = param_2 + uVar6 * 8;
        iVar2 = param_1 + *(char *)(iVar1 + 0x14) * 4;
        piVar3 = (int *)(param_3 + ((uint)bVar4 + uVar6 * 2) * 4);
        *piVar3 = *(int *)(*(int *)(iVar2 + 26000) + 4) + (uint)*(byte *)(iVar1 + 0x17) * 4 +
                  *(int *)(iVar2 + 0x6610);
        *(undefined1 *)(piVar3 + 2) = *(undefined1 *)(iVar1 + 0x18);
        *(undefined1 *)((int)piVar3 + 9) = *(undefined1 *)(iVar1 + 0x15);
        piVar3[1] = *(int *)(iVar2 + 0x65d0);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_2 + 8));
  }
  return bVar5;
}

