/*
 * FUN_10014cc0 at 10014cc0
 * undefined FUN_10014cc0(void)
 * Address ranges: 10014cc0-10014dd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10014cc0(int param_1,undefined8 param_2,short param_3,char param_4)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_10 [3];
  undefined4 uStack_4;
  
  uStack_4 = CONCAT31(uStack_4._1_3_,1);
  uVar3 = 0;
  uVar5 = 0xffffffff;
  do {
    local_10[0] = *(undefined4 *)(param_1 + 0xc);
    bVar1 = (&DAT_10160ab0)[uVar3];
    uVar4 = uVar5;
    if ((((*(byte *)((int)local_10 + ((int)(uint)bVar1 >> 3)) >> (ulonglong)(bVar1 & 7) & 1) == 0)
        && (local_10[0] = *(undefined4 *)(param_1 + 0x10),
           (*(byte *)((int)local_10 + ((int)(uint)bVar1 >> 3)) >> (ulonglong)(bVar1 & 7) & 1) == 0))
       && (uVar4 = (uint)bVar1, *(int *)(param_1 + uVar4 * 4 + 0x58) == -1)) goto LAB_10014d64;
    uVar3 = uVar3 + 1;
    uVar5 = uVar4;
  } while (uVar3 < 0x10);
  uVar4 = 0xffffffff;
LAB_10014d64:
  if (uVar4 == 0xffffffff) {
    uVar4 = uVar5;
  }
  *(int *)(param_1 + uVar4 * 4 + 0x58) = (int)param_3;
  if (param_4 != '\0') {
    pbVar2 = (byte *)(((int)uVar4 >> 3) + param_1 + 0x10);
    *pbVar2 = *pbVar2 | (byte)(1 << (ulonglong)(uVar4 & 7));
  }
  pbVar2 = (byte *)(((int)uVar4 >> 3) + param_1 + 0x98);
  *pbVar2 = *pbVar2 | (byte)(1 << (ulonglong)(uVar4 & 7));
  return CONCAT44(uStack_4,uVar4);
}

