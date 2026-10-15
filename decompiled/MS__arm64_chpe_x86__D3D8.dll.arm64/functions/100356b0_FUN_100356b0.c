/*
 * FUN_100356b0 at 100356b0
 * undefined FUN_100356b0(void)
 * Address ranges: 100356b0-1003579b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100356b0(int param_1)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  byte *pbVar5;
  byte bVar6;
  
  piVar1 = (int *)(param_1 + 0x24);
  if (*piVar1 != 0) {
    puVar2 = (uint *)(param_1 + 0x2c);
    FUN_10121220(*piVar1,0xffffffff,*puVar2 >> 2);
    FUN_10121170(*piVar1 + (*puVar2 & 0xfffffffc),0xff,*puVar2 & 3);
    piVar3 = (int *)(param_1 + 0x28);
    FUN_10121220(*piVar3,0xffffffff,*puVar2 >> 2);
    FUN_10121170(*piVar3 + (*puVar2 & 0xfffffffc),0xff,*puVar2 & 3);
    uVar4 = (uint)*(ushort *)(param_1 + 0xc) * *(int *)(param_1 + 0x14) + 0xfff;
    bVar6 = *(byte *)((uVar4 >> 0xc & 7) + 0x1012ba98);
    pbVar5 = (byte *)(*piVar1 + (uVar4 >> 0xf));
    *pbVar5 = *pbVar5 & bVar6;
    pbVar5 = (byte *)(*piVar3 + (uVar4 >> 0xf));
    *pbVar5 = bVar6 & *pbVar5;
  }
  return;
}

