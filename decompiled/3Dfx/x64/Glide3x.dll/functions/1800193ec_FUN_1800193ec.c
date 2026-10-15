/*
 * FUN_1800193ec at 1800193ec
 * undefined __fastcall FUN_1800193ec(longlong param_1, ulonglong param_2, int param_3)
 * Address ranges: 1800193ec-18001999c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800193ec(longlong param_1,ulonglong param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  bool bVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int *piVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  float local_240;
  float local_23c;
  undefined4 local_238;
  undefined4 local_234;
  longlong local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined2 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  uint local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined8 local_1bc;
  undefined8 uStack_1b4;
  undefined4 local_1ac;
  undefined **local_1a8;
  longlong local_1a0;
  longlong local_198;
  int local_188 [11];
  undefined1 uStack_15c;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar16 = (param_2 & 0xffffffff) * 0x170;
  uVar3 = *(ulonglong *)(lVar16 + 0x220 + param_1);
  uVar19 = *(ulonglong *)(lVar16 + 0x228 + param_1);
  uVar17 = 0;
  if (uVar3 != uVar19) {
    uVar17 = uVar3;
  }
  uVar18 = *(int *)(lVar16 + 0x230 + param_1) + 1;
  iVar10 = FUN_180013430(param_1);
  if (iVar10 != 0) {
    FUN_1800526a0(*(longlong **)(*(longlong *)(param_1 + 0x140) + 0x3330),lVar2,1);
    if (*(longlong *)(lVar2 + 0xda0) != 0) {
      bVar9 = FUN_18000c348(*(longlong *)(param_1 + 0x140));
      if (uVar17 != 0) {
        FUN_18004a068(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 0x1508)
                      ,uVar19,0,0,0x1000);
        FUN_18004a068(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 0x1508)
                      ,uVar17,0,0,0x2000);
        FUN_18004af4c(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 0x1508)
                      ,uVar19,0,uVar17,0,*(undefined4 *)(lVar16 + 0x14c + param_1));
      }
      FUN_18000ca68(*(longlong *)(param_1 + 0x140),bVar9,'\0');
      lVar15 = 2;
      uVar1 = *(undefined4 *)
               (&DAT_180063030 + (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x34) * 4);
      puVar12 = (undefined8 *)&DAT_180062970;
      piVar8 = local_188;
      do {
        piVar14 = piVar8;
        puVar13 = puVar12;
        uVar11 = puVar13[1];
        uVar4 = puVar13[2];
        uVar5 = puVar13[3];
        *(undefined8 *)piVar14 = *puVar13;
        *(undefined8 *)(piVar14 + 2) = uVar11;
        uVar11 = puVar13[4];
        uVar6 = puVar13[5];
        *(undefined8 *)(piVar14 + 4) = uVar4;
        *(undefined8 *)(piVar14 + 6) = uVar5;
        uVar4 = puVar13[6];
        uVar5 = puVar13[7];
        *(undefined8 *)(piVar14 + 8) = uVar11;
        *(undefined8 *)(piVar14 + 10) = uVar6;
        uVar11 = puVar13[8];
        uVar6 = puVar13[9];
        *(undefined8 *)(piVar14 + 0xc) = uVar4;
        *(undefined8 *)(piVar14 + 0xe) = uVar5;
        uVar4 = puVar13[10];
        uVar5 = puVar13[0xb];
        *(undefined8 *)(piVar14 + 0x10) = uVar11;
        *(undefined8 *)(piVar14 + 0x12) = uVar6;
        uVar11 = puVar13[0xc];
        uVar6 = puVar13[0xd];
        *(undefined8 *)(piVar14 + 0x14) = uVar4;
        *(undefined8 *)(piVar14 + 0x16) = uVar5;
        uVar4 = puVar13[0xe];
        uVar5 = puVar13[0xf];
        *(undefined8 *)(piVar14 + 0x18) = uVar11;
        *(undefined8 *)(piVar14 + 0x1a) = uVar6;
        *(undefined8 *)(piVar14 + 0x1c) = uVar4;
        *(undefined8 *)(piVar14 + 0x1e) = uVar5;
        lVar15 = lVar15 + -1;
        puVar12 = puVar13 + 0x10;
        piVar8 = piVar14 + 0x20;
      } while (lVar15 != 0);
      uVar11 = puVar13[0x11];
      uVar4 = puVar13[0x12];
      uVar5 = puVar13[0x13];
      *(undefined8 *)(piVar14 + 0x20) = puVar13[0x10];
      *(undefined8 *)(piVar14 + 0x22) = uVar11;
      uVar6 = puVar13[0x14];
      uVar7 = puVar13[0x15];
      *(undefined8 *)(piVar14 + 0x24) = uVar4;
      *(undefined8 *)(piVar14 + 0x26) = uVar5;
      uVar4 = puVar13[0x16];
      uVar5 = puVar13[0x17];
      uVar11 = puVar13[0x18];
      *(undefined8 *)(piVar14 + 0x28) = uVar6;
      *(undefined8 *)(piVar14 + 0x2a) = uVar7;
      *(undefined8 *)(piVar14 + 0x2c) = uVar4;
      *(undefined8 *)(piVar14 + 0x2e) = uVar5;
      *(undefined8 *)(piVar14 + 0x30) = uVar11;
      uStack_15c = 0xf;
      uVar11 = FUN_18000d928((longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 0x1978),
                             local_188);
      *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x33e0) = uVar11;
      uVar11 = FUN_18000dbc8((longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 0x1960),
                             (int *)&DAT_1800628c8);
      *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x33f8) = uVar11;
      uVar11 = FUN_18000dad8((longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340) + 0x19a8),
                             (uint *)&DAT_180062900);
      *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x33f0) = uVar11;
      *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x3414) = uVar1;
      uVar17 = 0;
      *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x3418) = 0;
      *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x3434) = 0;
      *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x3438) = 1;
      *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x343c) = 0;
      *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x345a) = 1;
      lVar15 = *(longlong *)(param_1 + 0x140);
      local_248 = 0;
      local_240 = (float)*(uint *)(lVar15 + 0xb0);
      local_238 = 0;
      local_234 = 0x3f800000;
      local_23c = (float)*(uint *)(lVar15 + 0xb4);
      FUN_18004ae78(*(longlong *)(*(longlong *)(lVar15 + 0x3340) + 0x1508),1,(longlong)&local_248);
      lVar15 = *(longlong *)(param_1 + 0x140);
      local_268 = 0;
      local_260 = *(undefined4 *)(lVar15 + 0xb0);
      local_25c = *(undefined4 *)(lVar15 + 0xb4);
      FUN_18004adcc(*(longlong *)(*(longlong *)(lVar15 + 0x3340) + 0x1508),1,(longlong)&local_268);
      local_258 = 0;
      local_250 = *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0xb0);
      local_24c = *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0xb4);
      FUN_1800168d4(param_1,&local_258,
                    *(undefined8 *)(param_1 + 0xc00 + (ulonglong)(iVar10 != 2) * 8),uVar18,
                    *(uint *)(lVar2 + 0xdb4),uVar19,*(ulonglong *)(lVar2 + 0xda0),bVar9);
      FUN_18000d268(*(longlong *)(param_1 + 0x140));
      uVar19 = *(ulonglong *)(lVar2 + 0xda0);
      uVar18 = *(uint *)(lVar2 + 0xdb0);
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x140);
  local_1a8 = &PTR_FUN_180064888;
  local_198 = param_1 + 0x148 + lVar16;
  local_218 = *(undefined8 *)(lVar2 + 0xa0);
  local_1dc = *(undefined4 *)(*(longlong *)(lVar2 + 8) + 0xda);
  local_1d8 = *(undefined4 *)(*(longlong *)(lVar2 + 8) + 0xde);
  local_220 = *(undefined4 *)(lVar2 + 0x3338);
  local_210 = 0;
  local_208 = 0;
  local_200 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  local_1e4 = 0;
  local_1e0 = 0;
  local_228 = param_1;
  local_1a0 = param_1;
  puVar12 = FUN_180051fd4(*(LARGE_INTEGER *)(lVar2 + 0x3330),&local_228);
  lVar2 = *(longlong *)(param_1 + 0x140);
  if (((*(byte *)(*(longlong *)(lVar2 + 8) + 0xc2) & 4) != 0) ||
     (bVar9 = false, *(char *)(param_1 + 0x12e) != '\0')) {
    bVar9 = true;
  }
  local_1c8 = *(uint *)(*(longlong *)(lVar2 + 8) + 0xc);
  local_1c4 = *(undefined4 *)(*(longlong *)(lVar2 + 8) + 0x10);
  local_1c0 = *(undefined4 *)(*(longlong *)(lVar2 + 8) + 0x14);
  puVar13 = (undefined8 *)(lVar2 + 0xcc);
  if (!bVar9) {
    puVar13 = (undefined8 *)&DAT_1800647d8;
  }
  local_1bc = *puVar13;
  uStack_1b4 = puVar13[1];
  local_1ac = *(undefined4 *)
               (&DAT_180064890 + (longlong)*(int *)(*(longlong *)(lVar2 + 8) + 0xca) * 4);
  FUN_180054f74(*(longlong **)(lVar2 + 0x3330),(longlong)puVar12,uVar19,uVar18,uVar17,
                *(int *)(lVar16 + 0x14c + param_1),param_3,&local_1c8,
                (undefined8 *)
                (-(ulonglong)(*(char *)(lVar2 + 0x2c82) != '\0') & (ulonglong)&local_1a8));
  FUN_180052ff4(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330),(longlong)puVar12);
  FUN_1800526f8(*(longlong **)(*(longlong *)(param_1 + 0x140) + 0x3330),
                *(longlong *)(*(longlong *)(param_1 + 0x140) + 0xa0),0);
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2c79) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2c78) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2c7a) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2c7b) = 1;
  return;
}

