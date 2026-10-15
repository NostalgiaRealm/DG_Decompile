/*
 * FUN_14001b450 at 14001b450
 * uint __cdecl FUN_14001b450(uint * param_1, longlong * param_2, char * param_3, ulonglong param_4, ulonglong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
 * Address ranges: 14001b450-14001cbe3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_14001b450(uint *param_1,longlong *param_2,char *param_3,ulonglong param_4,ulonglong param_5
                  ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  bool bVar2;
  LPCSTR pCVar3;
  char **ppcVar4;
  char cVar5;
  uint uVar6;
  LPVOID pvVar7;
  int iVar8;
  char *pcVar9;
  ulonglong uVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  CHAR *pCVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  char *local_260;
  LPVOID local_258;
  undefined8 local_250;
  CHAR aCStack_248 [16];
  uint local_238 [2];
  char *local_230 [8];
  char *local_1f0;
  char *local_1e8;
  longlong *local_1e0;
  char *local_1d8;
  CHAR local_1d0 [128];
  char local_150 [256];
  
  local_238[0] = 0;
  local_1e8 = param_3;
  local_1e0 = param_2;
  pcVar9 = (char *)thunk_FUN_1400247f0(0x1000);
  if (pcVar9 == (char *)0x0) {
    return local_238[0];
  }
  local_1d8 = pcVar9;
  uVar10 = FUN_140024d20(param_3);
  local_1f0 = (char *)thunk_FUN_1400247f0((uVar10 & 0x7fffffff) << 1);
  if (local_1f0 == (char *)0x0) goto LAB_14001cbb8;
  local_258 = (LPVOID)0x0;
  local_250 = 0;
  local_260 = pcVar9;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  FUN_140024880(aCStack_248,"0x%x",0x287,param_4,param_5,param_6,param_7,param_8);
  pcVar11 = FUN_14001b090((undefined8 *)pcVar9,aCStack_248);
  local_260 = pcVar11;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar9 = "";
  pcVar15 = pcVar9;
  if (*param_1 < 7) {
    pcVar15 = (&PTR_s_bestavailable_14002a140)[(int)*param_1];
  }
  pcVar11 = FUN_14001b090((undefined8 *)pcVar11,pcVar15);
  local_260 = pcVar11;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  FUN_140024880(aCStack_248,"%d",(ulonglong)param_1[1],param_4,param_5,param_6,param_7,param_8);
  pcVar15 = aCStack_248;
  if (param_1[1] == 0) {
    pcVar15 = "all";
  }
  pcVar11 = FUN_14001b090((undefined8 *)pcVar11,pcVar15);
  local_260 = pcVar11;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  FUN_140024880(aCStack_248,"%d",(ulonglong)param_1[2],param_4,param_5,param_6,param_7,param_8);
  pcVar15 = aCStack_248;
  if (param_1[2] == 0) {
    pcVar15 = "default";
  }
  pcVar12 = FUN_14001b090((undefined8 *)pcVar11,pcVar15);
  local_260 = pcVar12;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar15 = "true";
  pcVar11 = "false";
  pcVar13 = pcVar15;
  if ((char)param_1[8] != '\0') {
    pcVar13 = pcVar11;
  }
  pcVar12 = FUN_14001b090((undefined8 *)pcVar12,pcVar13);
  local_260 = pcVar12;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar13 = pcVar9;
  if (param_1[7] < 9) {
    pcVar13 = (&PTR_s_unspecified_14002a1b0)[(int)param_1[7]];
  }
  pcVar12 = FUN_14001b090((undefined8 *)pcVar12,pcVar13);
  local_260 = pcVar12;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar13 = pcVar11;
  if ((param_1[6] == 0) || (pcVar13 = pcVar15, param_1[6] == 1)) {
    pcVar12 = FUN_14001b090((undefined8 *)pcVar12,pcVar13);
    local_260 = pcVar12;
  }
  else {
    FUN_14001b090((undefined8 *)pcVar12,"");
  }
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar13 = pcVar15;
  if (*(char *)((longlong)param_1 + 0x22) == '\0') {
    pcVar13 = pcVar11;
  }
  pcVar13 = FUN_14001b090((undefined8 *)pcVar12,pcVar13);
  local_260 = pcVar13;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  FUN_140024880(aCStack_248,"%d",(ulonglong)param_1[3],param_4,param_5,param_6,param_7,param_8);
  pcVar13 = FUN_14001b090((undefined8 *)pcVar13,aCStack_248);
  local_260 = pcVar13;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  FUN_140024880(aCStack_248,"%d",(ulonglong)param_1[4],param_4,param_5,param_6,param_7,param_8);
  pcVar13 = FUN_14001b090((undefined8 *)pcVar13,aCStack_248);
  local_260 = pcVar13;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  FUN_140024880(aCStack_248,"%d",(ulonglong)param_1[5],param_4,param_5,param_6,param_7,param_8);
  pcVar12 = FUN_14001b090((undefined8 *)pcVar13,aCStack_248);
  local_260 = pcVar12;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar13 = pcVar15;
  if (*(char *)((longlong)param_1 + 0x26) == '\0') {
    pcVar13 = pcVar11;
  }
  pcVar12 = FUN_14001b090((undefined8 *)pcVar12,pcVar13);
  local_260 = pcVar12;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar13 = pcVar15;
  if (*(char *)((longlong)param_1 + 0x21) == '\0') {
    pcVar13 = pcVar11;
  }
  pcVar12 = FUN_14001b090((undefined8 *)pcVar12,pcVar13);
  local_260 = pcVar12;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar13 = pcVar15;
  if (*(char *)((longlong)param_1 + 0x23) == '\0') {
    pcVar13 = pcVar11;
  }
  pcVar12 = FUN_14001b090((undefined8 *)pcVar12,pcVar13);
  local_260 = pcVar12;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar13 = pcVar15;
  if ((char)param_1[9] == '\0') {
    pcVar13 = pcVar11;
  }
  pcVar12 = FUN_14001b090((undefined8 *)pcVar12,pcVar13);
  local_260 = pcVar12;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar13 = pcVar15;
  if (*(char *)((longlong)param_1 + 0x25) == '\0') {
    pcVar13 = pcVar11;
  }
  pcVar13 = FUN_14001b090((undefined8 *)pcVar12,pcVar13);
  local_1d0[0] = '\0';
  local_260 = pcVar13;
  if ((*(uint *)((longlong)param_1 + 0x8a) != 0) &&
     (param_4 = (ulonglong)*(uint *)((longlong)param_1 + 0x8e),
     *(uint *)((longlong)param_1 + 0x8e) != 0)) {
    if ((*(uint *)((longlong)param_1 + 0x92) == 0) ||
       (uVar21 = *(uint *)((longlong)param_1 + 0x96), uVar21 == 0)) {
      param_5 = 0;
    }
    else {
      uVar6 = 0;
      if (uVar21 != 0) {
        uVar6 = *(uint *)((longlong)param_1 + 0x92) / uVar21;
      }
      param_5 = (ulonglong)uVar6;
    }
    pCVar3 = "%dx%d@%d";
    if ((int)param_5 == 0) {
      pCVar3 = "%dx%d";
    }
    FUN_140024880(local_1d0,pCVar3,(ulonglong)*(uint *)((longlong)param_1 + 0x8a),param_4,param_5,
                  param_6,param_7,param_8);
  }
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar13 = FUN_14001b090((undefined8 *)pcVar13,local_1d0);
  local_260 = pcVar13;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pCVar16 = pcVar9;
  if (*(uint *)((longlong)param_1 + 0x9a) != 0) {
    FUN_140024880(aCStack_248,"%d",(ulonglong)*(uint *)((longlong)param_1 + 0x9a),param_4,param_5,
                  param_6,param_7,param_8);
    pCVar16 = aCStack_248;
  }
  pcVar13 = FUN_14001b090((undefined8 *)pcVar13,pCVar16);
  local_260 = pcVar13;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  FUN_140024880(aCStack_248,"%d",(ulonglong)*(uint *)((longlong)param_1 + 0x9e),param_4,param_5,
                param_6,param_7,param_8);
  pcVar13 = FUN_14001b090((undefined8 *)pcVar13,aCStack_248);
  local_260 = pcVar13;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  uVar10 = (ulonglong)*(uint *)((longlong)param_1 + 0xa6);
  uVar21 = *(uint *)((longlong)param_1 + 0xa2);
  if (uVar21 == *(uint *)((longlong)param_1 + 0xa6)) {
    FUN_140024880(local_1d0,"%d",(ulonglong)uVar21,uVar10,param_5,param_6,param_7,param_8);
  }
  else {
    FUN_140024880(local_1d0,"x:%d, y:%d",(ulonglong)uVar21,uVar10,param_5,param_6,param_7,param_8);
  }
  pcVar13 = FUN_14001b090((undefined8 *)pcVar13,local_1d0);
  local_260 = pcVar13;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  FUN_140024880(aCStack_248,"%d",(ulonglong)*(uint *)((longlong)param_1 + 0xaa),uVar10,param_5,
                param_6,param_7,param_8);
  pcVar13 = FUN_14001b090((undefined8 *)pcVar13,aCStack_248);
  local_260 = pcVar13;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  uVar21 = *(uint *)((longlong)param_1 + 0xb6);
  local_230[0] = (char *)((ulonglong)local_230[0] & 0xffffffffffffff00);
  if (uVar21 == 0xffffffff) {
    pcVar12 = "%d_%d";
    uVar21 = *(uint *)((longlong)param_1 + 0xba) >> 0x10;
    uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xba) & 0xffff);
LAB_14001b990:
    FUN_140024880((LPSTR)local_230,pcVar12,(ulonglong)uVar21,uVar10,param_5,param_6,param_7,param_8)
    ;
    if ((*(uint *)((longlong)param_1 + 0xae) == 0xffffffff) &&
       (*(int *)((longlong)param_1 + 0xb2) == -1)) {
      pcVar12 = ", pos:centered";
    }
    else {
      uVar10 = (ulonglong)*(uint *)((longlong)param_1 + 0xb2);
      FUN_140024880(local_1d0,", pos:(%d|%d)",(ulonglong)*(uint *)((longlong)param_1 + 0xae),uVar10,
                    param_5,param_6,param_7,param_8);
      pcVar12 = local_1d0;
    }
    FUN_140024cb8((char *)local_230,pcVar12);
  }
  else if ((uVar21 != 0) &&
          (uVar10 = (ulonglong)*(uint *)((longlong)param_1 + 0xba),
          *(uint *)((longlong)param_1 + 0xba) != 0)) {
    pcVar12 = "(%d|%d)";
    goto LAB_14001b990;
  }
  pcVar13 = FUN_14001b090((undefined8 *)pcVar13,(char *)local_230);
  iVar8 = *(int *)((longlong)param_1 + 0xca);
  if (iVar8 == 0) {
    local_230[0] = "pointsampled";
  }
  else if (iVar8 == 1) {
    local_230[0] = "bilinear";
  }
  else if (iVar8 == 2) {
    local_230[0] = "bicubic";
  }
  else if (iVar8 == 3) {
    local_230[0] = "lanczos-2";
  }
  else if (iVar8 == 4) {
    local_230[0] = "lanczos-3";
  }
  else {
    local_230[0] = "";
  }
  local_260 = pcVar13;
  FUN_14001cbe8((longlong *)&local_258,local_230);
  iVar8 = *(int *)((longlong)param_1 + 0xce);
  if (iVar8 == 0) {
    local_230[0] = "auto";
  }
  else if (iVar8 == 1) {
    local_230[0] = "discard";
  }
  else if (iVar8 == 2) {
    local_230[0] = "seq";
  }
  else if (iVar8 == 3) {
    local_230[0] = "flip_discard";
  }
  else if (iVar8 == 4) {
    local_230[0] = "flip_seq";
  }
  else {
    local_230[0] = "";
  }
  FUN_14001cbe8((longlong *)&local_258,local_230);
  pcVar12 = "appdriven";
  iVar8 = *(int *)((longlong)param_1 + 0xd2);
  if (iVar8 == 0) {
    local_230[0] = "appdriven";
  }
  else if (iVar8 == 1) {
    local_230[0] = "argb8888_sdr";
  }
  else if (iVar8 == 2) {
    local_230[0] = "argb2101010_sdr";
  }
  else if (iVar8 == 3) {
    local_230[0] = "argb2101010_sdr_wcg";
  }
  else if (iVar8 == 4) {
    local_230[0] = "argb16161616_hdr";
  }
  else {
    local_230[0] = "";
  }
  FUN_14001cbe8((longlong *)&local_258,local_230);
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  FUN_140024880(aCStack_248,"%d",(ulonglong)*(uint *)((longlong)param_1 + 0xd6),uVar10,param_5,
                param_6,param_7,param_8);
  pcVar14 = FUN_14001b090((undefined8 *)pcVar13,aCStack_248);
  local_260 = pcVar14;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar13 = pcVar15;
  if (*(char *)((longlong)param_1 + 0xe6) == '\0') {
    pcVar13 = pcVar11;
  }
  pcVar13 = FUN_14001b090((undefined8 *)pcVar14,pcVar13);
  local_260 = pcVar13;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar13 = (char *)FUN_14001b378((undefined8 *)pcVar13,0x14002c290,
                                  *(uint *)((longlong)param_1 + 0xc2),7);
  local_260 = pcVar13;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  uVar18 = 1;
  pcVar13 = (char *)FUN_14001b378((undefined8 *)pcVar13,0x14002c278,
                                  *(uint *)((longlong)param_1 + 0xc6),1);
  local_260 = pcVar13;
  FUN_140015790(*(uint *)((longlong)param_1 + 0xda),*(uint *)((longlong)param_1 + 0xde),local_1d0,
                uVar18,param_5,param_6,param_7,param_8);
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar13 = FUN_14001b090((undefined8 *)pcVar13,local_1d0);
  if (*(int *)((longlong)param_1 + 0xbe) == 1) {
    local_230[0] = "DosBox";
  }
  else if (*(int *)((longlong)param_1 + 0xbe) == 2) {
    local_230[0] = "QEmu";
  }
  else {
    local_230[0] = "";
  }
  local_260 = pcVar13;
  FUN_14001cbe8((longlong *)&local_258,local_230);
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  uVar18 = 3;
  pcVar14 = (char *)FUN_14001b378((undefined8 *)pcVar13,0x14002c280,
                                  *(uint *)((longlong)param_1 + 0xe2),3);
  local_260 = pcVar14;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar13 = pcVar9;
  if (*(uint *)((longlong)param_1 + 0x27) < 5) {
    pcVar13 = (&PTR_s_voodoo_graphics_14002a2a0)[(int)*(uint *)((longlong)param_1 + 0x27)];
  }
  pcVar13 = FUN_14001b090((undefined8 *)pcVar14,pcVar13);
  local_260 = pcVar13;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  FUN_140024880(aCStack_248,"%d",(ulonglong)(*(uint *)((longlong)param_1 + 0x2b) >> 0x14),uVar18,
                param_5,param_6,param_7,param_8);
  pcVar13 = FUN_14001b090((undefined8 *)pcVar13,aCStack_248);
  local_260 = pcVar13;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  FUN_140024880(aCStack_248,"%d",(ulonglong)(*(uint *)((longlong)param_1 + 0x2f) >> 10),uVar18,
                param_5,param_6,param_7,param_8);
  pcVar13 = FUN_14001b090((undefined8 *)pcVar13,aCStack_248);
  local_260 = pcVar13;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  FUN_140024880(aCStack_248,"%d",(ulonglong)*(uint *)((longlong)param_1 + 0x33),uVar18,param_5,
                param_6,param_7,param_8);
  pcVar14 = FUN_14001b090((undefined8 *)pcVar13,aCStack_248);
  iVar8 = *(int *)((longlong)param_1 + 0x4b);
  pcVar13 = pcVar12;
  if (iVar8 != 0) {
    if (iVar8 == 0x100) {
      pcVar13 = "pointsampled";
    }
    else if (iVar8 == 0x200) {
      pcVar13 = "bilinear";
    }
  }
  local_260 = pcVar14;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar14 = FUN_14001b090((undefined8 *)pcVar14,pcVar13);
  local_260 = pcVar14;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar13 = pcVar15;
  if (*(char *)((longlong)param_1 + 0x4f) == '\0') {
    pcVar13 = pcVar11;
  }
  pcVar13 = FUN_14001b090((undefined8 *)pcVar14,pcVar13);
  local_260 = pcVar13;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  uVar20 = (ulonglong)*(byte *)((longlong)param_1 + 0x22);
  uVar19 = (ulonglong)*(uint *)((longlong)param_1 + 0x47);
  uVar10 = (ulonglong)*(uint *)((longlong)param_1 + 0x43);
  pcVar13 = (char *)FUN_14001b0e0((undefined8 *)pcVar13,*(uint *)((longlong)param_1 + 0x37),
                                  *(uint *)((longlong)param_1 + 0x3b),uVar10,uVar19,uVar20,param_7,
                                  param_8);
  local_260 = pcVar13;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar14 = (char *)FUN_14001b2b0((undefined8 *)pcVar13,*(int *)((longlong)param_1 + 0x3f));
  local_260 = pcVar14;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar13 = pcVar15;
  if ((char)param_1[0x14] == '\0') {
    pcVar13 = pcVar11;
  }
  pcVar14 = FUN_14001b090((undefined8 *)pcVar14,pcVar13);
  local_260 = pcVar14;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar13 = pcVar15;
  if (*(char *)((longlong)param_1 + 0x52) == '\0') {
    pcVar13 = pcVar11;
  }
  pcVar14 = FUN_14001b090((undefined8 *)pcVar14,pcVar13);
  local_260 = pcVar14;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar13 = pcVar15;
  if (*(char *)((longlong)param_1 + 0x53) == '\0') {
    pcVar13 = pcVar11;
  }
  pcVar14 = FUN_14001b090((undefined8 *)pcVar14,pcVar13);
  local_260 = pcVar14;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar13 = pcVar15;
  if ((char)param_1[0x15] == '\0') {
    pcVar13 = pcVar11;
  }
  pcVar14 = FUN_14001b090((undefined8 *)pcVar14,pcVar13);
  local_260 = pcVar14;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar13 = pcVar15;
  if (*(char *)((longlong)param_1 + 0x55) == '\0') {
    pcVar13 = pcVar11;
  }
  pcVar14 = FUN_14001b090((undefined8 *)pcVar14,pcVar13);
  local_260 = pcVar14;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar13 = pcVar15;
  if (*(char *)((longlong)param_1 + 0x56) == '\0') {
    pcVar13 = pcVar11;
  }
  pcVar14 = FUN_14001b090((undefined8 *)pcVar14,pcVar13);
  local_260 = pcVar14;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar13 = pcVar15;
  if (*(char *)((longlong)param_1 + 0x51) == '\0') {
    pcVar13 = pcVar11;
  }
  pcVar14 = FUN_14001b090((undefined8 *)pcVar14,pcVar13);
  local_260 = pcVar14;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar13 = pcVar15;
  if (*(char *)((longlong)param_1 + 0x57) == '\0') {
    pcVar13 = pcVar11;
  }
  pcVar14 = FUN_14001b090((undefined8 *)pcVar14,pcVar13);
  local_260 = pcVar14;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar13 = pcVar9;
  if (*(uint *)((longlong)param_1 + 0xe7) < 3) {
    pcVar13 = (&PTR_s_pure32bit_14002a2e0)[(int)*(uint *)((longlong)param_1 + 0xe7)];
  }
  pcVar14 = FUN_14001b090((undefined8 *)pcVar14,pcVar13);
  local_260 = pcVar14;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar13 = pcVar9;
  if (*(uint *)((longlong)param_1 + 0xeb) < 3) {
    pcVar13 = (&PTR_s_disabled_14002a2c8)[(int)*(uint *)((longlong)param_1 + 0xeb)];
  }
  pcVar13 = FUN_14001b090((undefined8 *)pcVar14,pcVar13);
  local_260 = pcVar13;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  FUN_140024880(aCStack_248,"%d",(ulonglong)*(uint *)((longlong)param_1 + 0xef),uVar10,uVar19,uVar20
                ,param_7,param_8);
  pcVar14 = FUN_14001b090((undefined8 *)pcVar13,aCStack_248);
  local_260 = pcVar14;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar13 = pcVar15;
  if ((char)param_1[0x20] == '\0') {
    pcVar13 = pcVar11;
  }
  pcVar14 = FUN_14001b090((undefined8 *)pcVar14,pcVar13);
  local_260 = pcVar14;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar13 = pcVar9;
  if (param_1[0x16] < 7) {
    pcVar13 = (&PTR_DAT_14002a178)[(int)param_1[0x16]];
  }
  pcVar13 = FUN_14001b090((undefined8 *)pcVar14,pcVar13);
  local_260 = pcVar13;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  FUN_140024880(aCStack_248,"%d",*(ulonglong *)(param_1 + 0x17) >> 0x14,uVar10,uVar19,uVar20,param_7
                ,param_8);
  pcVar13 = FUN_14001b090((undefined8 *)pcVar13,aCStack_248);
  uVar6 = param_1[0x1e];
  local_260 = pcVar13;
  FUN_140024880(aCStack_248,"%d",(ulonglong)(byte)uVar6,uVar10,uVar19,uVar20,param_7,param_8);
  uVar21 = param_1[0x1e];
  if (uVar21 == 0) {
    pcVar14 = "appdriven";
  }
  else {
    pcVar14 = "pointsampled";
    if (uVar21 != 0x100) {
      if (uVar21 == 0x200) {
        pcVar14 = "bilinear";
      }
      else if (uVar21 == 0x300) {
        pcVar14 = "linearmip";
      }
      else if (uVar21 == 0x400) {
        pcVar14 = "trilinear";
      }
      else if (uVar21 == 0x500) {
        pcVar14 = "pointmip";
      }
      else {
        pcVar14 = aCStack_248;
        if (0x10 < (byte)uVar6) {
          pcVar14 = pcVar9;
        }
      }
    }
  }
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar13 = FUN_14001b090((undefined8 *)pcVar13,pcVar14);
  uVar21 = param_1[0x1f];
  if (uVar21 != 0) {
    if (uVar21 == 1) {
      pcVar12 = "disabled";
    }
    else if (uVar21 == 2) {
      pcVar12 = "autogen_point";
    }
    else if (uVar21 == 3) {
      pcVar12 = "autogen_bilinear";
    }
  }
  local_260 = pcVar13;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar12 = FUN_14001b090((undefined8 *)pcVar13,pcVar12);
  local_260 = pcVar12;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar13 = pcVar15;
  if (*(char *)((longlong)param_1 + 0x87) == '\0') {
    pcVar13 = pcVar11;
  }
  pcVar13 = FUN_14001b090((undefined8 *)pcVar12,pcVar13);
  local_260 = pcVar13;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  uVar20 = (ulonglong)*(byte *)((longlong)param_1 + 0x22);
  uVar10 = (ulonglong)param_1[0x1c];
  uVar19 = (ulonglong)param_1[0x1d];
  pcVar13 = (char *)FUN_14001b0e0((undefined8 *)pcVar13,param_1[0x19],param_1[0x1a],uVar10,uVar19,
                                  uVar20,param_7,param_8);
  local_260 = pcVar13;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar12 = (char *)FUN_14001b2b0((undefined8 *)pcVar13,param_1[0x1b]);
  local_260 = pcVar12;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar13 = pcVar15;
  if (*(char *)((longlong)param_1 + 0x81) == '\0') {
    pcVar13 = pcVar11;
  }
  pcVar12 = FUN_14001b090((undefined8 *)pcVar12,pcVar13);
  local_260 = pcVar12;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar13 = pcVar15;
  if (*(char *)((longlong)param_1 + 0x82) == '\0') {
    pcVar13 = pcVar11;
  }
  pcVar12 = FUN_14001b090((undefined8 *)pcVar12,pcVar13);
  local_260 = pcVar12;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar13 = pcVar15;
  if ((char)param_1[0x21] == '\0') {
    pcVar13 = pcVar11;
  }
  pcVar12 = FUN_14001b090((undefined8 *)pcVar12,pcVar13);
  local_260 = pcVar12;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar13 = pcVar15;
  if (*(char *)((longlong)param_1 + 0x85) == '\0') {
    pcVar13 = pcVar11;
  }
  pcVar12 = FUN_14001b090((undefined8 *)pcVar12,pcVar13);
  local_260 = pcVar12;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar13 = pcVar15;
  if (*(char *)((longlong)param_1 + 0x86) == '\0') {
    pcVar13 = pcVar11;
  }
  pcVar12 = FUN_14001b090((undefined8 *)pcVar12,pcVar13);
  local_260 = pcVar12;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar13 = pcVar15;
  if (*(char *)((longlong)param_1 + 0x83) == '\0') {
    pcVar13 = pcVar11;
  }
  pcVar12 = FUN_14001b090((undefined8 *)pcVar12,pcVar13);
  local_260 = pcVar12;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar13 = pcVar15;
  if ((char)param_1[0x22] == '\0') {
    pcVar13 = pcVar11;
  }
  pcVar13 = FUN_14001b090((undefined8 *)pcVar12,pcVar13);
  local_260 = pcVar13;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  if (*(char *)((longlong)param_1 + 0x89) == '\0') {
    pcVar15 = pcVar11;
  }
  pcVar15 = FUN_14001b090((undefined8 *)pcVar13,pcVar15);
  local_260 = pcVar15;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar11 = FUN_14001b090((undefined8 *)pcVar15,
                          (&PTR_DAT_14002a280)[*(int *)((longlong)param_1 + 0xf7)]);
  local_260 = pcVar11;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  FUN_140024880(aCStack_248,"0x%x",(ulonglong)*(uint *)((longlong)param_1 + 0xfb),uVar10,uVar19,
                uVar20,param_7,param_8);
  pcVar15 = aCStack_248;
  if (*(int *)((longlong)param_1 + 0xfb) == -1) {
    pcVar15 = pcVar9;
  }
  pcVar11 = FUN_14001b090((undefined8 *)pcVar11,pcVar15);
  local_260 = pcVar11;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  FUN_140024880(aCStack_248,"0x%x",(ulonglong)*(uint *)((longlong)param_1 + 0xff),uVar10,uVar19,
                uVar20,param_7,param_8);
  pcVar15 = aCStack_248;
  if (*(int *)((longlong)param_1 + 0xff) == -1) {
    pcVar15 = pcVar9;
  }
  pcVar11 = FUN_14001b090((undefined8 *)pcVar11,pcVar15);
  local_260 = pcVar11;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  FUN_140024880(aCStack_248,"0x%x",(ulonglong)*(uint *)((longlong)param_1 + 0x103),uVar10,uVar19,
                uVar20,param_7,param_8);
  pcVar15 = aCStack_248;
  if (*(uint *)((longlong)param_1 + 0x103) == 0xffffffff) {
    pcVar15 = pcVar9;
  }
  pcVar11 = FUN_14001b090((undefined8 *)pcVar11,pcVar15);
  local_260 = pcVar11;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  FUN_140024880(aCStack_248,"0x%x",(ulonglong)*(uint *)((longlong)param_1 + 0x107),uVar10,uVar19,
                uVar20,param_7,param_8);
  pcVar15 = aCStack_248;
  if (*(uint *)((longlong)param_1 + 0x107) == 0xffffffff) {
    pcVar15 = pcVar9;
  }
  pcVar15 = FUN_14001b090((undefined8 *)pcVar11,pcVar15);
  local_260 = pcVar15;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  if (*(uint *)((longlong)param_1 + 0x1df) < 3) {
    pcVar9 = (&PTR_DAT_14002a1f8)[(int)*(uint *)((longlong)param_1 + 0x1df)];
  }
  local_260 = FUN_14001b090((undefined8 *)pcVar15,pcVar9);
  local_150[0] = '\0';
  uVar22 = 0;
  local_230[0] = local_260;
  do {
    if ((*(int *)((longlong)param_1 + uVar22 * 0xc + 0x10b) == 0) ||
       (*(int *)((longlong)param_1 + uVar22 * 0xc + 0x10f) == 0)) break;
    if ((int)uVar22 != 0) {
      FUN_140024cb8(local_150,", ");
    }
    uVar21 = *(uint *)((longlong)param_1 + uVar22 * 0xc + 0x10b);
    uVar6 = *(uint *)((longlong)param_1 + uVar22 * 0xc + 0x10f);
    uVar10 = (ulonglong)uVar6;
    if (uVar21 == 0xffffffff) {
      if (uVar6 == 0xffffffff) {
        uVar21 = *(uint *)((longlong)param_1 + uVar22 * 0xc + 0x113);
        uVar17 = (ulonglong)uVar21;
        pcVar9 = "max@%d";
        if (uVar21 == 0) {
          pcVar9 = "max";
        }
      }
      else if (uVar6 == 0x100) {
        uVar21 = *(uint *)((longlong)param_1 + uVar22 * 0xc + 0x113);
        uVar17 = (ulonglong)uVar21;
        pcVar9 = "max_4_3@%d";
        if (uVar21 == 0) {
          pcVar9 = "max_4_3";
        }
      }
      else {
        if (uVar6 != 0x101) goto LAB_14001c5f0;
        uVar21 = *(uint *)((longlong)param_1 + uVar22 * 0xc + 0x113);
        uVar17 = (ulonglong)uVar21;
        pcVar9 = "max_16_9@%d";
        if (uVar21 == 0) {
          pcVar9 = "max_16_9";
        }
      }
      FUN_140024880(local_1d0,pcVar9,uVar17,uVar10,uVar19,uVar20,param_7,param_8);
    }
    else {
LAB_14001c5f0:
      uVar6 = *(uint *)((longlong)param_1 + uVar22 * 0xc + 0x113);
      uVar19 = (ulonglong)uVar6;
      pCVar3 = "%dx%d@%d";
      if (uVar6 == 0) {
        pCVar3 = "%dx%d";
      }
      FUN_140024880(local_1d0,pCVar3,(ulonglong)uVar21,uVar10,uVar19,uVar20,param_7,param_8);
    }
    FUN_140024cb8(local_150,local_1d0);
    uVar21 = (int)uVar22 + 1;
    uVar22 = (ulonglong)uVar21;
  } while (uVar21 < 0x10);
  pcVar11 = local_230[0];
  pcVar9 = "true";
  pcVar15 = "false";
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar11 = FUN_14001b090((undefined8 *)pcVar11,local_150);
  puVar1 = (uint *)((longlong)param_1 + 0x1e3);
  local_230[0] = (char *)((ulonglong)local_230[0] & 0xffffffffffffff00);
  bVar2 = (*puVar1 & 1) != 0;
  local_260 = pcVar11;
  if (bVar2) {
    FUN_140024cb8((char *)local_230,"8");
  }
  if ((*puVar1 >> 1 & 1) != 0) {
    if (bVar2) {
      FUN_140024cb8((char *)local_230,", ");
    }
    FUN_140024cb8((char *)local_230,"16");
    bVar2 = true;
  }
  if ((*puVar1 >> 2 & 1) != 0) {
    if (bVar2) {
      FUN_140024cb8((char *)local_230,", ");
    }
    FUN_140024cb8((char *)local_230,"32");
  }
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  ppcVar4 = local_230;
  if (*puVar1 == 7) {
    ppcVar4 = (char **)&DAT_140029394;
  }
  pcVar11 = FUN_14001b090((undefined8 *)pcVar11,(char *)ppcVar4);
  local_260 = pcVar11;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  if (*(uint *)((longlong)param_1 + 0x1cb) < 3) {
    pcVar13 = (&PTR_s_high_quality_14002a230)[(int)*(uint *)((longlong)param_1 + 0x1cb)];
  }
  else {
    pcVar13 = "";
  }
  pcVar11 = FUN_14001b090((undefined8 *)pcVar11,pcVar13);
  local_260 = pcVar11;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  if (*(uint *)((longlong)param_1 + 0x1cf) < 4) {
    pcVar13 = (&PTR_s_disabled_14002a210)[(int)*(uint *)((longlong)param_1 + 0x1cf)];
  }
  else {
    pcVar13 = "";
  }
  pcVar11 = FUN_14001b090((undefined8 *)pcVar11,pcVar13);
  local_260 = pcVar11;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  FUN_140024880((LPSTR)local_230,"%d",(ulonglong)*(uint *)((longlong)param_1 + 0x1d3),uVar10,uVar19,
                uVar20,param_7,param_8);
  pcVar11 = FUN_14001b090((undefined8 *)pcVar11,(char *)local_230);
  local_260 = pcVar11;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  if (*(uint *)((longlong)param_1 + 0x1d7) < 3) {
    pcVar13 = (&PTR_s_appdriven_14002a268)[(int)*(uint *)((longlong)param_1 + 0x1d7)];
  }
  else {
    pcVar13 = "";
  }
  pcVar11 = FUN_14001b090((undefined8 *)pcVar11,pcVar13);
  local_260 = pcVar11;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  if (*(uint *)((longlong)param_1 + 0x1db) < 4) {
    pcVar13 = (&PTR_DAT_14002a248)[(int)*(uint *)((longlong)param_1 + 0x1db)];
  }
  else {
    pcVar13 = "";
  }
  pcVar11 = FUN_14001b090((undefined8 *)pcVar11,pcVar13);
  local_260 = pcVar11;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  FUN_140024880((LPSTR)local_230,"%d",(ulonglong)*(uint *)((longlong)param_1 + 0x1e7),uVar10,uVar19,
                uVar20,param_7,param_8);
  pcVar13 = FUN_14001b090((undefined8 *)pcVar11,(char *)local_230);
  local_260 = pcVar13;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar11 = pcVar9;
  if (*(char *)((longlong)param_1 + 0x1f9) == '\0') {
    pcVar11 = pcVar15;
  }
  pcVar13 = FUN_14001b090((undefined8 *)pcVar13,pcVar11);
  local_260 = pcVar13;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar11 = pcVar9;
  if (*(char *)((longlong)param_1 + 0x1fa) == '\0') {
    pcVar11 = pcVar15;
  }
  pcVar11 = FUN_14001b090((undefined8 *)pcVar13,pcVar11);
  local_260 = pcVar11;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  FUN_140024880((LPSTR)local_230,"%d",(ulonglong)*(uint *)((longlong)param_1 + 0x1eb),uVar10,uVar19,
                uVar20,param_7,param_8);
  pcVar11 = FUN_14001b090((undefined8 *)pcVar11,(char *)local_230);
  local_260 = pcVar11;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  FUN_140024880((LPSTR)local_230,"0x%x",(ulonglong)*(uint *)((longlong)param_1 + 0x1ef),uVar10,
                uVar19,uVar20,param_7,param_8);
  pcVar13 = FUN_14001b090((undefined8 *)pcVar11,(char *)local_230);
  local_260 = pcVar13;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar11 = pcVar9;
  if (*(char *)((longlong)param_1 + 499) == '\0') {
    pcVar11 = pcVar15;
  }
  pcVar13 = FUN_14001b090((undefined8 *)pcVar13,pcVar11);
  local_260 = pcVar13;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar11 = pcVar9;
  if ((char)param_1[0x7d] == '\0') {
    pcVar11 = pcVar15;
  }
  pcVar13 = FUN_14001b090((undefined8 *)pcVar13,pcVar11);
  local_260 = pcVar13;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar11 = pcVar9;
  if (*(char *)((longlong)param_1 + 0x1f5) == '\0') {
    pcVar11 = pcVar15;
  }
  pcVar13 = FUN_14001b090((undefined8 *)pcVar13,pcVar11);
  local_260 = pcVar13;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar11 = pcVar9;
  if (*(char *)((longlong)param_1 + 0x1f6) == '\0') {
    pcVar11 = pcVar15;
  }
  pcVar13 = FUN_14001b090((undefined8 *)pcVar13,pcVar11);
  local_260 = pcVar13;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar11 = pcVar9;
  if (*(char *)((longlong)param_1 + 0x1f7) == '\0') {
    pcVar11 = pcVar15;
  }
  pcVar13 = FUN_14001b090((undefined8 *)pcVar13,pcVar11);
  local_260 = pcVar13;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar11 = pcVar9;
  if ((char)param_1[0x7e] == '\0') {
    pcVar11 = pcVar15;
  }
  pcVar11 = FUN_14001b090((undefined8 *)pcVar13,pcVar11);
  local_260 = pcVar11;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar11 = (char *)FUN_14001b330((undefined8 *)pcVar11,*(int *)((longlong)param_1 + 0x1fb));
  local_260 = pcVar11;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar11 = (char *)FUN_14001b330((undefined8 *)pcVar11,*(int *)((longlong)param_1 + 0x1ff));
  local_260 = pcVar11;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  pcVar11 = (char *)FUN_14001b330((undefined8 *)pcVar11,*(int *)((longlong)param_1 + 0x203));
  local_260 = pcVar11;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  FUN_140024880(aCStack_248,"%d",(ulonglong)*(uint *)((longlong)param_1 + 0x207),uVar10,uVar19,
                uVar20,param_7,param_8);
  pcVar11 = FUN_14001b090((undefined8 *)pcVar11,aCStack_248);
  local_260 = pcVar11;
  FUN_14001cbe8((longlong *)&local_258,&local_260);
  if (*(char *)((longlong)param_1 + 0x20b) == '\0') {
    pcVar9 = pcVar15;
  }
  FUN_14001b090((undefined8 *)pcVar11,pcVar9);
  pcVar9 = local_1f0;
  pvVar7 = local_258;
  if ((int)local_250 == 0x60) {
    uVar10 = 0;
    uVar19 = 0;
    cVar5 = *local_1e8;
    pcVar15 = local_1f0;
    while (cVar5 != '\0') {
      if ((local_1e8[uVar19] == '%') && (uVar21 = (uint)uVar19 + 1, local_1e8[uVar21] == 's')) {
        pcVar13 = *(char **)((longlong)local_258 + uVar10 * 8);
        uVar10 = (ulonglong)((int)uVar10 + 1);
        cVar5 = *pcVar13;
        pcVar11 = pcVar15;
        while (cVar5 != '\0') {
          *pcVar11 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar11 = pcVar11 + 1;
          cVar5 = *pcVar13;
        }
      }
      else {
        pcVar11 = pcVar15 + 1;
        *pcVar15 = local_1e8[uVar19];
        uVar21 = (uint)uVar19;
      }
      uVar19 = (ulonglong)(uVar21 + 1);
      pcVar15 = pcVar11;
      cVar5 = local_1e8[uVar19];
    }
    *pcVar15 = '\0';
    uVar10 = FUN_140024d20(local_1f0);
    local_238[0] = 0;
    iVar8 = (**(code **)(*local_1e0 + 0x10))(local_1e0,uVar10 & 0xffffffff,pcVar9,local_238);
    local_238[0] = (uint)(iVar8 == 0 && local_238[0] == (uint)uVar10);
  }
  thunk_FUN_140024830(local_1f0);
  thunk_FUN_140024830(pvVar7);
LAB_14001cbb8:
  thunk_FUN_140024830(local_1d8);
  return local_238[0];
}

