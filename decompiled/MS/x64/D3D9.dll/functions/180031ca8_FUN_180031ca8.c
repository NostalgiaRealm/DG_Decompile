/*
 * FUN_180031ca8 at 180031ca8
 * undefined __fastcall FUN_180031ca8(longlong param_1)
 * Address ranges: 180031ca8-180031d48
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180031ca8(longlong param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  
  if (*(undefined4 **)(param_1 + 0x30) != (undefined4 *)0x0) {
    puVar5 = *(undefined4 **)(param_1 + 0x30);
    for (uVar4 = (ulonglong)(*(uint *)(param_1 + 0x40) >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    puVar6 = (undefined1 *)
             (*(longlong *)(param_1 + 0x30) + (ulonglong)(*(uint *)(param_1 + 0x40) >> 2) * 4);
    for (uVar4 = (ulonglong)(*(uint *)(param_1 + 0x40) & 3); uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = 0xff;
      puVar6 = puVar6 + 1;
    }
    puVar5 = *(undefined4 **)(param_1 + 0x38);
    for (uVar4 = (ulonglong)(*(uint *)(param_1 + 0x40) >> 2); uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    puVar6 = (undefined1 *)
             (*(longlong *)(param_1 + 0x38) + (ulonglong)(*(uint *)(param_1 + 0x40) >> 2) * 4);
    for (uVar4 = (ulonglong)(*(uint *)(param_1 + 0x40) & 3); uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = 0xff;
      puVar6 = puVar6 + 1;
    }
    uVar3 = (uint)*(ushort *)(param_1 + 0x14) * *(int *)(param_1 + 0x1c) + 0xfff;
    uVar4 = (ulonglong)(uVar3 >> 0xf);
    bVar2 = (&DAT_180101668)[uVar3 >> 0xc & 7];
    pbVar1 = (byte *)(uVar4 + *(longlong *)(param_1 + 0x30));
    *pbVar1 = *pbVar1 & bVar2;
    pbVar1 = (byte *)(uVar4 + *(longlong *)(param_1 + 0x38));
    *pbVar1 = *pbVar1 & bVar2;
  }
  return;
}

