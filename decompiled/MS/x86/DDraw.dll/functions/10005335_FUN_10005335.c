/*
 * FUN_10005335 at 10005335
 * undefined __fastcall FUN_10005335(int param_1)
 * Address ranges: 10005335-100053b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10005335(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  
  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    puVar5 = *(undefined4 **)(param_1 + 0x24);
    for (uVar3 = *(uint *)(param_1 + 0x2c) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    puVar6 = (undefined1 *)(*(int *)(param_1 + 0x24) + (*(uint *)(param_1 + 0x2c) & 0xfffffffc));
    for (uVar3 = *(uint *)(param_1 + 0x2c) & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = 0xff;
      puVar6 = puVar6 + 1;
    }
    puVar5 = *(undefined4 **)(param_1 + 0x28);
    for (uVar3 = *(uint *)(param_1 + 0x2c) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    puVar6 = (undefined1 *)(*(int *)(param_1 + 0x28) + (*(uint *)(param_1 + 0x2c) & 0xfffffffc));
    for (uVar3 = *(uint *)(param_1 + 0x2c) & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar6 = 0xff;
      puVar6 = puVar6 + 1;
    }
    uVar3 = (uint)*(ushort *)(param_1 + 0xc) * *(int *)(param_1 + 0x14) + 0xfff;
    uVar4 = uVar3 >> 0xf;
    bVar2 = (&DAT_10063750)[uVar3 >> 0xc & 7];
    pbVar1 = (byte *)(uVar4 + *(int *)(param_1 + 0x24));
    *pbVar1 = *pbVar1 & bVar2;
    pbVar1 = (byte *)(uVar4 + *(int *)(param_1 + 0x28));
    *pbVar1 = *pbVar1 & bVar2;
  }
  return;
}

