/*
 * FUN_18010f178 at 18010f178
 * undefined FUN_18010f178(void)
 * Address ranges: 18010f178-18010f267
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18010f178(longlong param_1,undefined8 param_2,short param_3,uint param_4)

{
  undefined4 *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_20 [3];
  undefined4 uStack_14;
  
  uStack_14 = CONCAT31(uStack_14._1_3_,1);
  uVar6 = 0;
  puVar1 = (undefined4 *)(param_1 + 0x10);
  uVar8 = 0xffffffff;
  do {
    bVar3 = (&DAT_180229d40)[uVar6];
    uVar4 = (uint)bVar3;
    local_20[0] = *(undefined4 *)(param_1 + 0xc);
    uVar7 = uVar8;
    if ((*(byte *)((longlong)local_20 + (longlong)((int)(uint)bVar3 >> 3)) >> (ulonglong)(bVar3 & 7)
        & 1) == 0) {
      uVar5 = (uint)bVar3;
      local_20[0] = *puVar1;
      if (((*(byte *)((longlong)local_20 + (longlong)((int)uVar5 >> 3)) >> (ulonglong)(uVar5 & 7) &
           1) == 0) && (uVar7 = uVar5, *(int *)(param_1 + 0x58 + (ulonglong)uVar5 * 4) == -1))
      goto LAB_18010f208;
    }
    uVar4 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar4;
    uVar8 = uVar7;
  } while (uVar4 < 0x10);
  uVar4 = 0xffffffff;
LAB_18010f208:
  if (uVar4 == 0xffffffff) {
    uVar4 = uVar8;
  }
  *(int *)(param_1 + (ulonglong)uVar4 * 4 + 0x58) = (int)param_3;
  iVar2 = (int)uVar4 >> 3;
  if ((param_4 & 1) != 0) {
    *(byte *)((longlong)puVar1 + (longlong)iVar2) =
         *(byte *)((longlong)puVar1 + (longlong)iVar2) | (byte)(1 << (ulonglong)(uVar4 & 7));
  }
  *(byte *)(param_1 + 0x98 + (longlong)iVar2) =
       *(byte *)(param_1 + 0x98 + (longlong)iVar2) | (byte)(1 << (ulonglong)(uVar4 & 7));
  return CONCAT44(uStack_14,uVar4);
}

