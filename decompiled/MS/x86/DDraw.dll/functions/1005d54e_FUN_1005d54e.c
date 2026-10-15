/*
 * FUN_1005d54e at 1005d54e
 * int __stdcall FUN_1005d54e(int param_1, byte * param_2)
 * Address ranges: 1005d54e-1005d5dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1005d54e(int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  bool bVar7;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x3c) + 0x78 + param_1) + param_1;
  uVar5 = 0;
  if (*(uint *)(iVar2 + 0x18) != 0) {
    do {
      pbVar3 = (byte *)(*(int *)(*(int *)(iVar2 + 0x20) + param_1 + uVar5 * 4) + param_1);
      pbVar6 = param_2;
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_1005d5b1:
          uVar4 = -(uint)bVar7 | 1;
          goto LAB_1005d5b6;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_1005d5b1;
        pbVar3 = pbVar3 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      uVar4 = 0;
LAB_1005d5b6:
      if (uVar4 == 0) {
        return *(int *)(*(int *)(iVar2 + 0x1c) + param_1 +
                       (uint)*(ushort *)(*(int *)(iVar2 + 0x24) + param_1 + uVar5 * 2) * 4) +
               param_1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(iVar2 + 0x18));
  }
  return 0;
}

