/*
 * FUN_1000ca0a at 1000ca0a
 * undefined4 __fastcall FUN_1000ca0a(int param_1, int * param_2)
 * Address ranges: 1000ca0a-1000cc78
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1000ca0a(int param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 auStack_cc [16];
  undefined4 auStack_8c [16];
  uint local_4c;
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  undefined2 local_3c;
  undefined4 local_3a;
  undefined4 local_36;
  LPVOID local_28 [3];
  undefined4 *local_1c;
  int local_18;
  uint local_10;
  int *local_c;
  uint local_8;
  
  local_e0 = 2;
  local_36 = 0xffffffff;
  local_e4 = 1;
  local_dc = 0;
  local_3c = 0xffff;
  uVar2 = 0;
  local_d4 = 0;
  local_3a = 0xffffffff;
  local_d8 = 0xff17;
  local_d0 = 0xff00;
  local_44 = 0;
  local_40 = 0;
  iVar6 = 0x10;
  local_c = param_2;
  do {
    auStack_8c[uVar2] = 0xffffffff;
    auStack_cc[uVar2] = 0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  local_48 = 0;
  local_4c = 7;
  FUN_1000191b(&local_1c,0x80);
  FUN_1000191b(local_28,0x80);
  iVar7 = 0;
  while( true ) {
    pbVar4 = (byte *)(iVar7 * 0x14 + param_1);
    bVar1 = *pbVar4;
    if (bVar1 == 0xff) break;
    if (-1 < (char)bVar1) {
      FUN_1000c413(&local_e4,(int *)&local_1c,pbVar4);
    }
    iVar7 = iVar7 + 1;
  }
  FUN_1000c973(&local_e4,(int *)&local_1c,'\x01');
  uVar2 = 0;
  local_8 = local_44 | local_4c;
  uVar10 = 0;
  local_10 = local_8;
  do {
    if (((*(byte *)((int)&local_8 + ((int)uVar10 >> 3)) >> (uVar10 & 7) & 1) != 0) &&
       ((&DAT_100b1770)[uVar10] != '\0')) {
      FUN_1000199d(local_c,uVar10,0,0x30ff02,0xffffffff,0,0);
      uVar2 = uVar2 + 1;
      local_8 = local_10;
    }
    piVar5 = local_c;
    uVar10 = uVar10 + 1;
  } while (uVar10 < 0x10);
  local_8 = uVar2;
  FUN_1000199d(local_c,local_e4,0x210,0x8902,0x80000004,uVar2 * 4 + 4,0);
  uVar2 = local_8;
  FUN_1000199d(piVar5,local_e0,0x210,0x8902,0x80000004,local_8 * 4 + 8,0);
  FUN_1000199d(piVar5,local_dc,0x210,0x8902,0x80000004,uVar2 * 4 + 0xc,0);
  local_8 = local_18 - (int)local_1c;
  if ((uint)piVar5[2] < (piVar5[1] - *piVar5) + local_8) {
    FUN_10001947(piVar5,local_8);
  }
  uVar2 = local_10;
  puVar8 = local_1c;
  puVar11 = (undefined4 *)piVar5[1];
  for (uVar10 = local_8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar11 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar9 = (undefined1 *)((int)local_1c + (local_8 & 0xfffffffc));
  puVar12 = (undefined1 *)(local_c[1] + (local_8 & 0xfffffffc));
  for (uVar10 = local_8 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar12 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar12 = puVar12 + 1;
  }
  local_c[1] = local_c[1] + local_8;
  piVar5 = local_c;
  do {
    local_8 = uVar2;
    if (((*(byte *)((int)&local_8 + ((int)(iVar6 - 1U) >> 3)) >> (iVar6 - 1U & 7) & 1) != 0) &&
       ((&UNK_100b176f)[iVar6] != '\0')) {
      FUN_1000199d(piVar5,iVar6 - 1,0,0x8f02,0xffffffff,0,0);
      piVar5 = local_c;
    }
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  FUN_1000199d(piVar5,0xffffffff,0,0xc301,0xffffffff,0,0);
  thunk_FUN_100ad48c(local_28[0]);
  uVar3 = thunk_FUN_100ad48c(local_1c);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}

