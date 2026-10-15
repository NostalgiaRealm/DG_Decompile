/*
 * FUN_10011fa0 at 10011fa0
 * undefined FUN_10011fa0(void)
 * Address ranges: 10011fa0-10012187
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * FUN_10011fa0(undefined8 param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  undefined1 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_24 [4];
  undefined8 local_20;
  undefined8 uStack_18;
  
  FUN_1004b3f0(param_2);
  uVar5 = *param_3;
  param_2[1] = 0;
  param_2[2] = 1;
  *param_2 = uVar5;
  param_2[5] = 0x100400;
  *(undefined2 *)(param_2 + 6) = 3;
  *(undefined1 *)(param_2 + 0x27) = 0;
  puVar1 = param_2 + 3;
  puVar1[0] = 0x10;
  puVar1[1] = 1;
  puVar2 = param_2 + 2;
  if ((uVar5 >> 1 & 1) == 0) {
    uVar9 = 0x10;
    uVar8 = 1;
  }
  else {
    param_2[0xf] = 0x4040400;
    *(undefined2 *)(param_2 + 0x10) = 4;
    *(undefined1 *)((int)param_2 + 0x9d) = 5;
    uVar8 = *puVar2 + 1;
    *puVar2 = uVar8;
    uVar9 = (uint)*(byte *)((int)param_2 + 0x3e) + *puVar1;
    *puVar1 = uVar9;
  }
  if ((uVar5 >> 2 & 1) != 0) {
    *(undefined2 *)(param_2 + 0x11) = 0x400;
    *(char *)((int)param_2 + 0x47) = (char)(uVar9 >> 2);
    *(undefined2 *)(param_2 + 0x12) = 4;
    *(byte *)((int)param_2 + 0x46) = 4;
    *(undefined1 *)((int)param_2 + uVar8 + 0x9c) = 6;
    *puVar2 = *puVar2 + 1;
    *puVar1 = (uint)*(byte *)((int)param_2 + 0x46) + *puVar1;
  }
  uVar8 = 0;
  iVar10 = 0;
  do {
    if ((8 << (ulonglong)(uVar8 & 0x1f) & uVar5) != 0) {
      local_20 = 0x100000000;
      uStack_18 = 0x300000002;
      *(undefined1 *)((int)param_2 + iVar10 + 0x4c) = 0;
      iVar3 = (uVar5 >> (ulonglong)((uVar8 + 9) * 2 & 0x1f) & 3) + 1;
      cVar7 = (char)iVar3;
      *(char *)((int)param_2 + iVar10 + 0x4d) = cVar7;
      pbVar4 = (byte *)((int)param_2 + iVar10 + 0x4e);
      *pbVar4 = cVar7 * '\x04';
      *(char *)((int)param_2 + iVar10 + 0x4f) = (char)(*puVar1 >> 2);
      uVar6 = auStack_24[iVar3 * 4];
      *(undefined1 *)((int)param_2 + iVar10 + 0x51) = 0;
      *(undefined1 *)((int)param_2 + iVar10 + 0x50) = uVar6;
      *(char *)((int)param_2 + *puVar2 + 0x9c) = (char)uVar8 + '\a';
      *puVar2 = *puVar2 + 1;
      *puVar1 = (uint)*pbVar4 + *puVar1;
    }
    uVar8 = uVar8 + 1;
    iVar10 = iVar10 + 8;
  } while (uVar8 < 8);
  return param_2;
}

