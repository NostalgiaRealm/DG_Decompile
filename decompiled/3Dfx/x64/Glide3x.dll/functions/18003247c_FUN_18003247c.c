/*
 * FUN_18003247c at 18003247c
 * undefined8 __fastcall FUN_18003247c(longlong param_1, longlong * param_2, uint param_3, longlong param_4, uint param_5, longlong * param_6)
 * Address ranges: 18003247c-180032e9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18003247c(longlong param_1,longlong *param_2,uint param_3,longlong param_4,uint param_5,
             longlong *param_6)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined7 extraout_var;
  undefined8 uVar9;
  LPCSTR lpOutputString;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  int iVar13;
  longlong lVar14;
  undefined *puVar15;
  longlong *local_res10 [3];
  undefined8 *local_2f8;
  undefined8 *puStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2c4;
  uint local_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined8 local_29c;
  undefined8 local_294;
  undefined4 local_288;
  undefined4 local_284;
  uint local_280;
  undefined4 local_27c;
  uint local_278 [6];
  undefined8 *local_260 [4];
  undefined8 local_240;
  undefined8 uStack_22c;
  uint local_224;
  uint local_218 [2];
  uint local_210;
  uint local_20c;
  uint local_208;
  undefined1 *local_1e8;
  undefined1 local_1e0;
  byte local_1df;
  byte abStack_1d8 [4];
  byte local_1d4;
  byte local_1d3;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined1 auStack_16b [21];
  undefined2 local_156;
  ushort local_154;
  byte local_f0;
  undefined1 local_ee [146];
  undefined1 local_5c;
  char local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_57;
  
  lVar14 = param_4;
  local_res10[0] = param_2;
  FUN_180060f94((undefined1 *)local_218,0,0x1c8);
  local_1e8 = local_ee;
  local_218[0] = 0x40;
  local_1e0 = 0x10;
  if (param_5 != 0xa000) {
    if ((param_5 == 0xa100) || (param_5 == 0xb000)) {
      local_218[0] = 0x41;
    }
    else if (param_5 == 0xc000) {
      local_218[0] = 0x51;
    }
  }
  uVar11 = 0;
  local_1c0 = 0x110400;
  local_1bc = 0x410400;
  local_1b8 = 0x20000d00;
  local_1d0 = 0x110800;
  local_1cc = 0x210800;
  local_1c8 = 0x410800;
  local_1c4 = 0x410801;
  uVar8 = uVar11;
  do {
    auStack_16b[uVar8] = 0xff;
    auStack_16b[uVar8 + 6] = 0xff;
    auStack_16b[uVar8 + 3] = 0xff;
    uVar8 = uVar8 + 1;
  } while (uVar8 != 3);
  while (param_3 != 0) {
    param_3 = param_3 - 1;
    FUN_18002a1ac(param_1,param_3,(longlong)local_218,CONCAT71((int7)((ulonglong)lVar14 >> 8),1));
    lVar14 = 0;
    FUN_18002a1ac(param_1,param_3,(longlong)local_218,0);
  }
  FUN_18002a320(param_1,(longlong)local_218,1);
  FUN_18002a320(param_1,(longlong)local_218,0);
  if (local_5b != '\0') {
    local_156 = 0;
  }
  if ((*(int *)(param_1 + 0x634) != 0) && (((byte)local_154 & 0xf0) == 0xf0)) {
    local_f0 = local_f0 | (byte)(1 << (local_154 & 0xf));
  }
  if ((*(int *)(param_1 + 0x4c) != 0) && (((byte)local_154 & 0xf0) == 0xf0)) {
    local_f0 = local_f0 | (byte)(1 << (local_154 & 0xf));
  }
  FUN_18002a93c((longlong)local_218,0);
  FUN_18002a93c((longlong)local_218,1);
  plVar2 = param_6;
  uVar5 = *(uint *)(param_1 + 0x8c) & 0xff;
  if (uVar5 == 1) {
    local_1d4 = local_1d4 | 2;
LAB_180032666:
    local_5c = 1;
  }
  else {
    if (uVar5 == 2) {
      local_1d4 = local_1d4 | 1;
      goto LAB_180032666;
    }
    if (uVar5 == 3) {
      local_1d4 = local_1d4 | 4;
    }
  }
  local_5a = 1;
  if ((*(uint *)(param_1 + 0x8c) & 0x300) == 0x100) {
    local_5b = '\x01';
  }
  if ((*(int *)(param_1 + 0x78) == 0) || (*(int *)(param_1 + 0x78) == 7)) {
    local_5a = 0;
  }
  iVar13 = *(int *)(param_1 + 0x74);
  puVar15 = &DAT_18006c3b0;
  if (((*(int *)(&DAT_18006cd90 + (-(ulonglong)(iVar13 != 0) & 4) * 4) != 0xff) ||
      (*(int *)(&DAT_18006cd90 + ((-(ulonglong)(iVar13 != 0) & 4) + 1) * 4) != 0xff)) ||
     (*(int *)(&DAT_18006cd98 + (-(ulonglong)(iVar13 != 0) & 4) * 4) != 0xff)) {
    local_59 = 1;
  }
  uVar5 = *(uint *)(param_1 + 0x28) & *(uint *)(param_1 + 0x24);
  if (uVar5 == 1) {
LAB_18003271a:
    local_1d3 = local_1d3 | 4;
LAB_18003271e:
    local_58 = 1;
  }
  else {
    if (uVar5 == 2) {
LAB_180032712:
      local_1d4 = local_1d4 | 1;
      goto LAB_18003271e;
    }
    if (uVar5 == 3) goto LAB_18003271a;
    if (uVar5 == 4) goto LAB_180032712;
  }
  if ((*(int *)(param_1 + 0x1c) == 0x400) || (*(int *)(param_1 + 0x1c) == 0x404)) {
    local_57 = 1;
  }
  local_2b8 = 0x43425844;
  uStack_2a4 = 1;
  uStack_2a0 = 0;
  local_29c = 3;
  uStack_2b4 = 0;
  uStack_2b0 = 0;
  uStack_2ac = 0;
  uStack_2a8 = 0;
  local_294 = 0;
  FUN_1800578b8(param_6,(undefined8 *)&local_2b8,0x2c);
  *(int *)(*plVar2 + 0x20) = (int)plVar2[1] - (int)*plVar2;
  cVar4 = FUN_180029cf0(plVar2,(longlong)local_218);
  uVar9 = CONCAT71(extraout_var,cVar4);
  if (cVar4 == '\0') goto LAB_180032e89;
  *(int *)(*plVar2 + 0x24) = (int)plVar2[1] - (int)*plVar2;
  uVar9 = FUN_180029ea8(plVar2);
  if ((char)uVar9 == '\0') goto LAB_180032e89;
  uStack_2e0 = CONCAT71(uStack_2e0._1_7_,1);
  *(int *)(*plVar2 + 0x28) = (int)plVar2[1] - (int)*plVar2;
  local_2e8 = 0x200;
  local_2f8 = (undefined8 *)thunk_FUN_180060a9c(0x200);
  uVar5 = local_218[0];
  puStack_2f0 = local_2f8;
  uVar9 = FUN_180057ac4(local_218[0]);
  local_284 = 0;
  local_27c = 0;
  local_288 = 0x52444853;
  if (1 < (int)uVar9 - 0x40U) {
    local_288 = 0x58454853;
  }
  local_280 = uVar5;
  FUN_1800578b8((longlong *)&local_2f8,(undefined8 *)&local_288,0x10);
  iVar13 = (int)puStack_2f0 - (int)local_2f8;
  local_2b8 = 0;
  uStack_2b4 = 0;
  uStack_2b0 = 0;
  uStack_2ac = 0;
  uStack_2a8 = 0x80;
  uStack_2a4 = 0;
  uStack_2a0 = CONCAT31(uStack_2a0._1_3_,1);
  uVar9 = thunk_FUN_180060a9c(0x80);
  uStack_2b0 = (undefined4)uVar9;
  uStack_2ac = (undefined4)((ulonglong)uVar9 >> 0x20);
  local_2b8 = uStack_2b0;
  uStack_2b4 = uStack_2ac;
  FUN_180031ad4(param_1,local_218,(longlong *)&local_2b8);
  FUN_180057914((longlong *)&local_2b8,1,0x100003e,puVar15);
  uVar5 = -(uint)((local_20c & 0x7701700) != 0) & 0x4000;
  if (((local_218[0] == 0x40) || (local_218[0] == 0x41)) || (local_218[0] == 0x50)) {
LAB_1800328b6:
    uVar9 = FUN_180057ac4(local_218[0]);
    uVar8 = (ulonglong)(-(uint)((uint)uVar9 < 0x50) & uVar5 | 0x100086a);
LAB_1800328cb:
    FUN_180057914((longlong *)&local_2f8,1,uVar8,puVar15);
  }
  else {
    if (local_218[0] == 0x51) {
LAB_1800328ae:
      uVar8 = 0x108086a;
      goto LAB_1800328cb;
    }
    if ((local_218[0] == 0x10040) || (local_218[0] == 0x10050)) goto LAB_1800328b6;
    if (local_218[0] == 0x10051) goto LAB_1800328ae;
    if (local_218[0] == 0x20050) goto LAB_1800328b6;
    if (local_218[0] == 0x20051) goto LAB_1800328ae;
  }
  if ((local_210 & 1) != 0) {
    FUN_180057b10(local_218[0],(longlong *)&local_2f8);
  }
  uVar8 = uVar11;
  if ((local_210 & 2) != 0) {
    FUN_180057b10(local_218[0],(longlong *)&local_2f8);
  }
  do {
    if ((local_208 >> ((uint)uVar8 & 0x1f) & 1) != 0) {
      uVar9 = FUN_180057ac4(local_218[0]);
      iVar6 = (int)uVar9;
      if (((iVar6 == 0x40) || (iVar6 == 0x41)) || (iVar6 == 0x50)) {
        FUN_180057914((longlong *)&local_2f8,3,0x300005a,0x106000);
      }
      else if (iVar6 == 0x51) {
        FUN_180057914((longlong *)&local_2f8,6,0x600005a,0x306000);
      }
    }
    uVar5 = (uint)uVar8 + 1;
    uVar10 = uVar11;
    uVar8 = (ulonglong)uVar5;
  } while (uVar5 < 3);
  do {
    if ((local_20c >> ((int)uVar10 + 0x10U & 0x1f) & 1) != 0) {
      uVar9 = FUN_180057ac4(local_218[0]);
      iVar6 = (int)uVar9;
      if (((iVar6 == 0x40) || (iVar6 == 0x41)) || (iVar6 == 0x50)) {
        FUN_180057914((longlong *)&local_2f8,4,0x4001858,0x107000);
      }
      else if (iVar6 == 0x51) {
        FUN_180057914((longlong *)&local_2f8,7,0x7001858,0x307000);
      }
    }
    uVar5 = (int)uVar10 + 1;
    uVar10 = (ulonglong)uVar5;
  } while (uVar5 < 3);
  if ((local_20c & 0x100) != 0) {
    FUN_1800572b8((int *)local_218,(longlong *)&local_2f8);
  }
  if ((local_20c & 0x200) != 0) {
    FUN_1800572b8((int *)local_218,(longlong *)&local_2f8);
  }
  if ((local_20c & 0x400) != 0) {
    FUN_1800572b8((int *)local_218,(longlong *)&local_2f8);
  }
  uVar8 = uVar11;
  if ((local_20c & 0x1000) != 0) {
    FUN_1800572b8((int *)local_218,(longlong *)&local_2f8);
  }
  do {
    if ((local_20c >> ((int)uVar8 + 0x14U & 0x1f) & 1) != 0) {
      FUN_1800572b8((int *)local_218,(longlong *)&local_2f8);
    }
    uVar5 = (int)uVar8 + 1;
    uVar10 = uVar11;
    uVar8 = (ulonglong)uVar5;
  } while (uVar5 < 3);
  do {
    if ((local_20c >> ((int)uVar10 + 0x18U & 0x1f) & 1) != 0) {
      FUN_1800572b8((int *)local_218,(longlong *)&local_2f8);
    }
    uVar5 = (int)uVar10 + 1;
    uVar10 = (ulonglong)uVar5;
  } while (uVar5 < 3);
  if (local_1d3 != 0) {
    FUN_180057914((longlong *)&local_2f8,4,0x4002064,(ulonglong)((uint)local_1d3 << 4 | 0x101002));
  }
  if (local_1d4 != 0) {
    FUN_180057914((longlong *)&local_2f8,3,0x3002062,(ulonglong)((uint)local_1d4 << 4 | 0x101002));
  }
  do {
    if (abStack_1d8[uVar11] != 0) {
      FUN_180057914((longlong *)&local_2f8,3,0x3002062,
                    (ulonglong)((uint)abStack_1d8[uVar11] << 4 | 0x101002));
    }
    uVar5 = (int)uVar11 + 1;
    uVar11 = (ulonglong)uVar5;
  } while (uVar5 < 3);
  if (abStack_1d8[3] != 0) {
    FUN_180057914((longlong *)&local_2f8,3,0x3002062,
                  (ulonglong)((uint)abStack_1d8[3] << 4 | 0x101002));
  }
  FUN_180057914((longlong *)&local_2f8,3,0x3000065,0x1020f2);
  FUN_180057914((longlong *)&local_2f8,3,0x3000065,0x102012);
  if (local_1df != 0) {
    FUN_180057914((longlong *)&local_2f8,2,0x2000068,(ulonglong)local_1df);
  }
  FUN_1800578b8((longlong *)&local_2f8,(undefined8 *)CONCAT44(uStack_2b4,local_2b8),
                CONCAT44(uStack_2ac,uStack_2b0) - (longlong)CONCAT44(uStack_2b4,local_2b8));
  puVar3 = local_2f8;
  *(int *)((longlong)local_2f8 + 4) = ((int)puStack_2f0 - (int)local_2f8) + -8;
  *(uint *)((longlong)local_2f8 + 0xc) =
       ((uint)(((int)puStack_2f0 - (int)local_2f8) - iVar13) >> 2) + 2;
  FUN_1800578b8(plVar2,local_2f8,(longlong)puStack_2f0 - (longlong)local_2f8);
  local_278[0] = 0;
  local_278[1] = 0;
  local_278[2] = 0x67452301;
  *(int *)(*plVar2 + 0x18) = (int)plVar2[1] - (int)*plVar2;
  lVar14 = *plVar2;
  iVar13 = (int)plVar2[1] - (int)lVar14;
  local_278[3] = 0xefcdab89;
  local_278[4] = 0x98badcfe;
  local_278[5] = 0x10325476;
  uVar1 = iVar13 * 8 - 0xa0;
  uVar5 = iVar13 - 0x14;
  uVar7 = uVar5 & 0xffffffc0;
  param_5 = uVar1;
  FUN_18005ede8(local_278,(undefined1 *)(lVar14 + 0x14),(ulonglong)uVar7);
  puVar12 = (undefined1 *)(((ulonglong)uVar7 | 0x14) + lVar14);
  uVar5 = uVar5 & 0x3f;
  if (uVar5 < 0x38) {
    FUN_18005ede8(local_278,(undefined1 *)&param_5,4);
    if (uVar5 != 0) {
      FUN_18005ede8(local_278,puVar12,(ulonglong)uVar5);
    }
    FUN_180061330((undefined8 *)((longlong)local_260 + (ulonglong)(uVar5 + 4)),
                  (undefined8 *)&DAT_18006d830,(ulonglong)(0x3c - uVar5));
    local_2bc = (uVar1 | 4) >> 2;
    local_2f8 = local_260[0];
    puStack_2f0 = local_260[1];
    local_2e8 = local_260[2];
    uStack_2e0 = local_260[3];
    local_2d8 = local_240;
    uStack_2c4 = uStack_22c;
    local_224 = local_2bc;
  }
  else {
    FUN_18005ede8(local_278,puVar12,(ulonglong)uVar5);
    FUN_18005ede8(local_278,&DAT_18006d830,(ulonglong)(0x40 - uVar5));
    FUN_180060f94((undefined1 *)&local_2f8,0,0x40);
    local_2f8 = (undefined8 *)CONCAT44(local_2f8._4_4_,uVar1);
    local_2bc = (uVar1 | 4) >> 2;
  }
  FUN_18005e570((int *)(local_278 + 2),(int *)&local_2f8);
  *(uint *)(lVar14 + 4) = local_278[2];
  *(uint *)(lVar14 + 8) = local_278[3];
  *(uint *)(lVar14 + 0xc) = local_278[4];
  *(uint *)(lVar14 + 0x10) = local_278[5];
  if (*(code **)(param_4 + 0x2d0) != (code *)0x0) {
    local_res10[0] = (longlong *)0x0;
    iVar13 = (**(code **)(param_4 + 0x2d0))(*plVar2,plVar2[1] - *plVar2,2,0,local_res10);
    if (-1 < iVar13) {
      lpOutputString = (LPCSTR)(**(code **)(*local_res10[0] + 0x18))();
      OutputDebugStringA(lpOutputString);
      (**(code **)(*local_res10[0] + 0x10))();
    }
  }
  FUN_180060ac0((LPVOID)CONCAT44(uStack_2b4,local_2b8));
  uVar9 = FUN_180060ac0(puVar3);
LAB_180032e89:
  return CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
}

