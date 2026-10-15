/*
 * FUN_18000aed4 at 18000aed4
 * undefined __fastcall FUN_18000aed4(longlong * param_1, ulonglong param_2, undefined8 param_3, uint * param_4)
 * Address ranges: 18000aed4-18000b0c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_18000aed4(longlong *param_1,ulonglong param_2,undefined8 param_3,uint *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined8 *puVar7;
  char cVar8;
  uint uVar9;
  uint *puVar10;
  byte bVar11;
  longlong lVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  undefined8 local_298;
  undefined8 uStack_290;
  uint local_288 [5];
  undefined4 uStack_274;
  char acStack_273 [3];
  undefined2 uStack_270;
  undefined4 uStack_24c;
  undefined2 local_248;
  undefined2 uStack_244;
  undefined1 uStack_242;
  undefined1 uStack_241;
  undefined2 uStack_240;
  char acStack_23c [456];
  char local_74 [84];
  
  uVar1 = *param_4;
  lVar15 = (param_2 & 0xffffffff) * 0x260;
  *(undefined8 *)(lVar15 + *param_1) = param_3;
  *(uint *)(lVar15 + 8 + *param_1) = uVar1;
  FUN_180088764((undefined1 *)local_288);
  local_288[0] = uVar1;
  local_288[4] = 1;
  local_288[1] = 0;
  uStack_274 = 0x100400;
  uStack_241 = 4;
  uStack_270 = 3;
  local_288[2] = 1;
  local_74[0] = '\0';
  lVar16 = 4;
  local_288[3] = 0x10;
  lVar12 = 1;
  if ((uVar1 & 2) != 0) {
    uStack_241 = 5;
    uStack_24c = 0x4040400;
    local_288[3] = 0x14;
    local_248 = 4;
    local_74[1] = 5;
    local_288[2] = 2;
    lVar12 = 2;
  }
  if ((uVar1 & 4) != 0) {
    uStack_242 = 4;
    uStack_244 = 0x400;
    uStack_240 = 4;
    local_74[lVar12] = '\x06';
    local_288[2] = local_288[2] + 1;
    local_288[3] = local_288[3] + 4;
  }
  uVar17 = 0;
  do {
    bVar11 = (byte)uVar17;
    if ((uVar1 & 8 << (bVar11 & 0x1f)) != 0) {
      uVar14 = (ulonglong)(uVar17 + 7);
      *(undefined1 *)(&stack0xfffffffffffffd8c + (ulonglong)(uVar17 + 7) * 2) = 0;
      uVar9 = uVar1 >> (bVar11 * '\x02' + 0x12 & 0x1f) & 3;
      cVar8 = (char)uVar9 + '\x01';
      acStack_273[uVar14 * 8] = cVar8;
      acStack_273[uVar14 * 8 + 1] = cVar8 * '\x04';
      acStack_273[uVar14 * 8 + 2] = (char)(local_288[3] >> 2);
      *(undefined1 *)((longlong)&uStack_270 + uVar14 * 8 + 1) = 0;
      local_298 = 0x100000000;
      uStack_290 = 0x300000002;
      *(undefined1 *)(&uStack_270 + uVar14 * 4) =
           *(undefined1 *)((longlong)&local_298 + (ulonglong)uVar9 * 4);
      local_74[local_288[2]] = bVar11 + 7;
      local_288[2] = local_288[2] + 1;
      local_288[3] = local_288[3] + (byte)acStack_273[uVar14 * 8 + 1];
    }
    uVar17 = uVar17 + 1;
  } while (uVar17 < 8);
  puVar6 = local_288;
  puVar7 = (undefined8 *)(*param_1 + 0xc + lVar15);
  do {
    puVar13 = puVar7;
    puVar10 = puVar6;
    uVar2 = *(undefined8 *)(puVar10 + 2);
    uVar3 = *(undefined8 *)(puVar10 + 4);
    uVar4 = *(undefined8 *)(puVar10 + 6);
    *puVar13 = *(undefined8 *)puVar10;
    puVar13[1] = uVar2;
    uVar2 = *(undefined8 *)(puVar10 + 8);
    uVar5 = *(undefined8 *)(puVar10 + 10);
    puVar13[2] = uVar3;
    puVar13[3] = uVar4;
    uVar3 = *(undefined8 *)(puVar10 + 0xc);
    uVar4 = *(undefined8 *)(puVar10 + 0xe);
    puVar13[4] = uVar2;
    puVar13[5] = uVar5;
    uVar2 = *(undefined8 *)(puVar10 + 0x10);
    uVar5 = *(undefined8 *)(puVar10 + 0x12);
    puVar13[6] = uVar3;
    puVar13[7] = uVar4;
    uVar3 = *(undefined8 *)(puVar10 + 0x14);
    uVar4 = *(undefined8 *)(puVar10 + 0x16);
    puVar13[8] = uVar2;
    puVar13[9] = uVar5;
    uVar2 = *(undefined8 *)(puVar10 + 0x18);
    uVar5 = *(undefined8 *)(puVar10 + 0x1a);
    puVar13[10] = uVar3;
    puVar13[0xb] = uVar4;
    uVar3 = *(undefined8 *)(puVar10 + 0x1c);
    uVar4 = *(undefined8 *)(puVar10 + 0x1e);
    puVar13[0xc] = uVar2;
    puVar13[0xd] = uVar5;
    puVar13[0xe] = uVar3;
    puVar13[0xf] = uVar4;
    lVar16 = lVar16 + -1;
    puVar6 = puVar10 + 0x20;
    puVar7 = puVar13 + 0x10;
  } while (lVar16 != 0);
  uVar2 = *(undefined8 *)(puVar10 + 0x22);
  uVar3 = *(undefined8 *)(puVar10 + 0x24);
  uVar4 = *(undefined8 *)(puVar10 + 0x26);
  puVar13[0x10] = *(undefined8 *)(puVar10 + 0x20);
  puVar13[0x11] = uVar2;
  uVar2 = *(undefined8 *)(puVar10 + 0x28);
  uVar5 = *(undefined8 *)(puVar10 + 0x2a);
  puVar13[0x12] = uVar3;
  puVar13[0x13] = uVar4;
  uVar3 = *(undefined8 *)(puVar10 + 0x2c);
  uVar4 = *(undefined8 *)(puVar10 + 0x2e);
  puVar13[0x14] = uVar2;
  puVar13[0x15] = uVar5;
  uVar2 = *(undefined8 *)(puVar10 + 0x30);
  uVar5 = *(undefined8 *)(puVar10 + 0x32);
  uVar1 = puVar10[0x34];
  puVar13[0x16] = uVar3;
  puVar13[0x17] = uVar4;
  puVar13[0x18] = uVar2;
  puVar13[0x19] = uVar5;
  *(uint *)(puVar13 + 0x1a) = uVar1;
  return;
}

