/*
 * FUN_10009250 at 10009250
 * undefined FUN_10009250(void)
 * Address ranges: 10009250-10009363
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10009250(int param_1)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  byte *pbVar5;
  byte bVar6;
  
  if ((*(char *)(param_1 + 0xad) != '\0') && (*(int *)(param_1 + 0x9c) != 0)) {
    FUN_10007548(param_1);
    piVar1 = (int *)(param_1 + 0x24);
    if (*piVar1 != 0) {
      puVar2 = (uint *)(param_1 + 0x2c);
      FUN_100a9eb0(*piVar1,0xffffffff,*puVar2 >> 2);
      FUN_100a9e00(*piVar1 + (*puVar2 & 0xfffffffc),0xff,*puVar2 & 3);
      piVar3 = (int *)(param_1 + 0x28);
      FUN_100a9eb0(*piVar3,0xffffffff,*puVar2 >> 2);
      FUN_100a9e00(*piVar3 + (*puVar2 & 0xfffffffc),0xff,*puVar2 & 3);
      uVar4 = (uint)*(ushort *)(param_1 + 0xc) * *(int *)(param_1 + 0x14) + 0xfff;
      bVar6 = *(byte *)((uVar4 >> 0xc & 7) + 0x100b33e0);
      pbVar5 = (byte *)(*piVar1 + (uVar4 >> 0xf));
      *pbVar5 = bVar6 & *pbVar5;
      pbVar5 = (byte *)(*piVar3 + (uVar4 >> 0xf));
      *pbVar5 = *pbVar5 & bVar6;
    }
    FUN_10009018(param_1);
  }
  return;
}

