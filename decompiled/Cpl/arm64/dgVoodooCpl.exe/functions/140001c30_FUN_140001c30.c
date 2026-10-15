/*
 * FUN_140001c30 at 140001c30
 * bool __cdecl FUN_140001c30(longlong param_1, uint * param_2, undefined8 param_3, undefined8 param_4, undefined1 * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
 * Address ranges: 140001c30-14000204b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_140001c30(longlong param_1,uint *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte bVar12;
  uint uVar13;
  undefined8 uVar14;
  char local_270 [4];
  uint local_26c;
  uint uStack_268;
  uint local_264;
  uint local_260 [4];
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 auStack_d0 [3];
  undefined1 auStack_b8 [136];
  
  uVar3 = FUN_14000ffb8(*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x10));
  if (uVar3 != 0xffffffff) {
    uVar3 = FUN_14000fd78(*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x10),(ulonglong)uVar3);
    puVar7 = FUN_140001b50(param_1,auStack_d0,uVar3);
    uVar14 = *puVar7;
    *(undefined8 *)(param_2 + 2) = puVar7[1];
    *(undefined8 *)param_2 = uVar14;
    param_2[4] = *(uint *)(puVar7 + 2);
    return true;
  }
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  FUN_14000fca8(*(longlong *)(param_1 + 8),*(int *)(param_1 + 0x10),(LPARAM)&local_1d0,0x80);
  CharLowerA((LPSTR)&local_1d0);
  local_26c = 0;
  uStack_268 = 0;
  bVar1 = true;
  local_260[0] = 0;
  uStack_248 = 0;
  local_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  pbVar11 = (byte *)&local_1d0;
  uStack_228 = 0;
  local_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  local_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  local_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  pbVar2 = (byte *)&local_250;
  bVar12 = (byte)local_1d0;
  while (bVar12 != 0) {
    bVar12 = *pbVar11;
    if (bVar12 == 0x2c && bVar1) {
      bVar1 = false;
      pbVar10 = (byte *)&local_150;
      bVar12 = 0;
    }
    else {
      pbVar10 = pbVar2 + 1;
    }
    *pbVar2 = bVar12;
    pbVar11 = pbVar11 + 1;
    pbVar2 = pbVar10;
    bVar12 = *pbVar11;
  }
  local_264 = 0;
  bVar1 = false;
  uVar8 = FUN_1400151c0((byte *)&local_250,(byte *)"unforced",&DAT_140026ff0,&local_264,param_5,
                        param_6,param_7,param_8);
  if ((uVar8 & 1) == 0) {
    uVar8 = FUN_1400151c0((byte *)&local_250,&DAT_140027374,(byte *)" max_%ux ",&local_264,param_5,
                          param_6,param_7,param_8);
    if ((uVar8 & 1) != 0) {
      local_26c = 0xffffffff;
      uStack_268 = 0xffffffff;
      goto LAB_140001eb0;
    }
    uVar8 = FUN_1400151c0((byte *)&local_250,(byte *)"max_isf",(byte *)" max_isf_%ux ",&local_264,
                          param_5,param_6,param_7,param_8);
    if ((uVar8 & 1) != 0) {
      local_26c = 0xfffffffe;
      uStack_268 = 0xfffffffe;
      goto LAB_140001eb0;
    }
    uVar8 = FUN_1400151c0((byte *)&local_250,(byte *)"max_fhd",(byte *)" max_fhd_%ux ",&local_264,
                          param_5,param_6,param_7,param_8);
    if ((uVar8 & 1) != 0) {
      local_26c = 0xfffffffd;
      uStack_268 = 0xfffffffd;
      goto LAB_140001eb0;
    }
    uVar8 = FUN_1400151c0((byte *)&local_250,(byte *)"max_fhd_isf",(byte *)" max_fhd_isf_%ux ",
                          &local_264,param_5,param_6,param_7,param_8);
    if ((uVar8 & 1) != 0) {
      local_26c = 0xfffffffc;
      uStack_268 = 0xfffffffc;
      goto LAB_140001eb0;
    }
    uVar8 = FUN_1400151c0((byte *)&local_250,(byte *)"max_qhd",(byte *)" max_qhd_%ux ",&local_264,
                          param_5,param_6,param_7,param_8);
    if ((uVar8 & 1) != 0) {
      local_26c = 0xfffffffb;
      uStack_268 = 0xfffffffb;
      goto LAB_140001eb0;
    }
    uVar8 = FUN_1400151c0((byte *)&local_250,(byte *)"max_qhd_isf",(byte *)" max_qhd_isf_%ux ",
                          &local_264,param_5,param_6,param_7,param_8);
    if ((uVar8 & 1) != 0) {
      local_26c = 0xfffffffa;
      uStack_268 = 0xfffffffa;
      goto LAB_140001eb0;
    }
    uVar8 = FUN_1400151c0((byte *)&local_250,(byte *)"desktop",(byte *)" desktop_%ux ",&local_264,
                          param_5,param_6,param_7,param_8);
    if ((uVar8 & 1) != 0) {
      local_26c = 0xfffffff8;
      uStack_268 = 0xfffffff8;
      goto LAB_140001eb0;
    }
    param_5 = auStack_b8;
    iVar4 = FUN_1400248b0((byte *)&local_250,(byte *)" %u%c%s ",&local_264,local_270,param_5,param_6
                          ,param_7,param_8);
    if (local_270[0] != 'x' || iVar4 != 2) {
LAB_140001f6c:
      local_270[0] = '\0';
      iVar4 = FUN_1400248b0((byte *)&local_1d0,(byte *)" %u x %u %c",&uStack_268,&local_26c,
                            local_270,param_6,param_7,param_8);
      iVar5 = FUN_1400248b0((byte *)&local_1d0,(byte *)" %u x %u , %u hz %c",&uStack_268,&local_26c,
                            local_260,local_270,param_7,param_8);
      iVar6 = FUN_1400248b0((byte *)&local_1d0,(byte *)" %u x %u , %u %c",&uStack_268,&local_26c,
                            local_260,local_270,param_7,param_8);
      bVar1 = (iVar4 != 2 && iVar5 != 3) && iVar6 != 3;
      uVar3 = local_26c;
      uVar13 = uStack_268;
      goto LAB_140001fe8;
    }
    local_26c = local_264;
    uStack_268 = 0xfffffff9;
    if (0xfd < local_264 - 2) goto LAB_140001f6c;
LAB_140001f08:
    local_26c = local_264;
  }
  else {
    local_26c = 0;
    uStack_268 = 0;
LAB_140001eb0:
    if (local_264 - 2 < 0xfe) goto LAB_140001f08;
  }
  uVar13 = uStack_268;
  uVar3 = local_26c;
  lVar9 = FUN_140024d20((char *)&local_150);
  if (lVar9 != 0) {
    local_270[0] = '\0';
    iVar4 = FUN_1400248b0((byte *)&local_150,(byte *)" %u hz %c",local_260,local_270,param_5,param_6
                          ,param_7,param_8);
    iVar5 = FUN_1400248b0((byte *)&local_150,(byte *)" %u %c",local_260,local_270,param_5,param_6,
                          param_7,param_8);
    uVar3 = local_26c;
    uVar13 = uStack_268;
    if (iVar4 != 1 && iVar5 != 1) {
      bVar1 = true;
    }
  }
LAB_140001fe8:
  if (((0xfffffff7 < uVar13) && (uVar13 == uVar3 && uVar13 != 0xfffffff9 || uVar3 < 0x100)) &&
     (*(char *)(param_1 + 0x30) == '\0')) {
    bVar1 = true;
  }
  if (!bVar1) {
    *param_2 = uVar13;
    param_2[1] = uVar3;
    param_2[4] = local_260[0];
    param_2[2] = local_260[0];
    param_2[3] = 1;
  }
  return !bVar1;
}

