/*
 * FUN_180022988 at 180022988
 * undefined __cdecl FUN_180022988(undefined8 * param_1)
 * Address ranges: 180022988-180022f33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180022988(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  uint *puVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  ushort uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong extraout_x0;
  undefined8 *puVar14;
  undefined8 extraout_x1;
  uint uVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  float fVar21;
  longlong local_230;
  uint local_228;
  uint uStack_224;
  longlong *local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  longlong *local_210;
  undefined8 local_208;
  float local_200;
  float fStack_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  longlong local_1f0 [6];
  undefined4 local_1c0;
  int aiStack_1b0 [11];
  undefined1 local_184;
  undefined1 local_15c;
  
  plVar17 = (longlong *)*param_1;
  uVar4 = *(uint *)(param_1 + 1);
  bVar5 = *(byte *)((longlong)param_1 + 0xc);
  uVar7 = *(ushort *)(param_1 + 2);
  local_220 = plVar17 + 0x800;
  FUN_180025b18((longlong)(plVar17 + 0x854),0,0);
  uVar11 = FUN_180016f80(plVar17 + 0x6cd,*(int *)(plVar17[0x6f5] + 0x29fc));
  uVar12 = FUN_180016f80(plVar17 + 0x6cd,*(int *)(plVar17[0x6f5] + 0x2a00));
  uVar13 = 0;
  local_230 = CONCAT44(local_230._4_4_,(uint)uVar7);
  uStack_224 = (uint)bVar5;
  lVar20 = 0;
  local_228 = uVar4;
  local_210 = plVar17 + 0x600;
  do {
    if (uVar13 == uVar11 || uVar13 == uVar12) {
      lVar18 = lVar20 * 0x170;
      if ((*(byte *)((longlong)plVar17 + lVar18 + 0x384a) & 1) != 0) {
        if ((*(int *)((longlong)plVar17 + lVar18 + 0x3824) == 0) &&
           ((int)plVar17[lVar20 * 0x2e + 0x705] == 0)) {
          FUN_18001a150(plVar17 + 0x6cd,plVar17 + lVar20 * 0x2e + 0x6f6,1,0);
          *(byte *)((longlong)plVar17 + lVar18 + 0x384a) =
               *(byte *)((longlong)plVar17 + lVar18 + 0x384a) & 0xfe;
        }
        else {
          FUN_180016dc8(plVar17 + 0x6cd,uVar13,1,0,0,(LONG)plVar17[lVar20 * 0x2e + 0x6fa],
                        *(LONG *)((longlong)plVar17 + lVar18 + 0x37d4),0);
          FUN_18001a150(plVar17 + 0x6cd,plVar17 + lVar20 * 0x2e + 0x6f6,1,0);
          FUN_180016c00(plVar17 + 0x6cd,uVar13,*(uint *)((longlong)plVar17 + lVar18 + 0x381c),
                        (int)plVar17[lVar20 * 0x2e + 0x704],
                        *(char *)((longlong)plVar17 + lVar18 + 0x3845),
                        (uint)*(byte *)((longlong)plVar17 + lVar18 + 0x3849),'\0',0,
                        *(undefined1 *)((longlong)plVar17 + lVar18 + 0x3847),
                        *(undefined4 *)((longlong)plVar17 + lVar18 + 0x383c),
                        (int)plVar17[lVar20 * 0x2e + 0x708]);
          FUN_18001d758((longlong)(plVar17 + lVar20 * 0x2e + 0x6f6),
                        (ulonglong)*(uint *)((longlong)plVar17 + lVar18 + 0x37d4));
        }
      }
      *(byte *)((longlong)plVar17 + lVar18 + 0x384a) =
           *(byte *)((longlong)plVar17 + lVar18 + 0x384a) | 2;
    }
    plVar1 = local_210;
    uVar8 = uStack_224;
    uVar4 = local_228;
    uVar13 = uVar13 + 1;
    lVar20 = lVar20 + 1;
  } while ((int)uVar13 < 7);
  uVar13 = (uint)local_230;
  bVar10 = FUN_18000db68((longlong)plVar17);
  FUN_1800176c0(plVar17,-1);
  if (((int)plVar17[0x55f] == 0) || (bVar9 = true, *(int *)((longlong)plVar17 + 0x2afc) != 1)) {
    bVar9 = false;
  }
  thunk_FUN_1800010d8((undefined8 *)aiStack_1b0,(undefined8 *)&DAT_1800658d0,0x148);
  local_184 = *(undefined1 *)((longlong)plVar17 + 0x2b54);
  if ((bVar9) || (local_15c = 0, (*(uint *)((longlong)plVar17 + 0x2cac) & 0xff0000) == 0)) {
    local_15c = 0xf;
  }
  lVar20 = FUN_18000faf8((longlong *)(plVar17[0x668] + 0x1978),aiStack_1b0);
  plVar17[0x67c] = lVar20;
  local_1c0 = 8;
  local_1f0[0] = plVar17[0x55f];
  local_1f0[1] = 8;
  local_1f0[3] = 0x300000003;
  local_1f0[2] = 0x30000ffff;
  local_1f0[5] = 0x300000003;
  local_1f0[4] = 0x300000008;
  lVar20 = FUN_18000fd80((longlong *)(plVar17[0x668] + 0x1960),(int *)local_1f0);
  plVar17[0x67f] = lVar20;
  lVar20 = FUN_18000f8c0((longlong *)(plVar17[0x668] + 0x19a8),(uint *)&DAT_180065860);
  plVar17[0x67e] = lVar20;
  bVar9 = *(int *)((longlong)plVar17 + 0x2b94) != 0;
  cVar6 = *(char *)((longlong)plVar1 + 0x459);
  *(bool *)((longlong)plVar1 + 0x459) = bVar9;
  *(byte *)((longlong)plVar1 + 0x2f1) = (bool)cVar6 != bVar9 | *(byte *)((longlong)plVar1 + 0x2f1);
  *(undefined1 *)((longlong)plVar17 + 0x345a) = 1;
  FUN_18000dbe8((longlong)plVar17);
  uVar11 = FUN_180016f80(plVar17 + 0x6cd,*(int *)((longlong)plVar17 + 0x29fc));
  uVar12 = FUN_180016f80(plVar17 + 0x6cd,(int)plVar17[0x540]);
  plVar1 = plVar17 + (longlong)(int)uVar11 * 0x2e + 0x6f6;
  if (uVar11 == 0xffffffff) {
    plVar1 = (longlong *)0x0;
  }
  plVar2 = plVar17 + (longlong)(int)uVar12 * 0x2e + 0x6f6;
  if (uVar12 == 0xffffffff) {
    plVar2 = (longlong *)0x0;
  }
  if (plVar1 == (longlong *)0x0) {
    uVar12 = 0;
    uVar19 = 0;
    uVar11 = 0;
    uVar15 = 0;
  }
  else {
    puVar3 = (uint *)(plVar17 + (longlong)(int)uVar11 * 0x2e + 0x6fb);
    bVar9 = uVar11 == 0xffffffff;
    if (bVar9) {
      puVar3 = (uint *)&DAT_00000028;
    }
    uVar12 = *puVar3;
    puVar3 = (uint *)((longlong)plVar17 + (longlong)(int)uVar11 * 0x170 + 0x37dc);
    if (bVar9) {
      puVar3 = (uint *)&DAT_0000002c;
    }
    uVar15 = *puVar3;
    puVar3 = (uint *)(plVar17 + (longlong)(int)uVar11 * 0x2e + 0x6fa);
    if (bVar9) {
      puVar3 = (uint *)&DAT_00000020;
    }
    uVar19 = *puVar3;
    puVar3 = (uint *)((longlong)plVar17 + (longlong)(int)uVar11 * 0x170 + 0x37d4);
    if (bVar9) {
      puVar3 = (uint *)&DAT_00000024;
    }
    uVar11 = *puVar3;
  }
  fStack_1fc = (float)uVar15;
  local_208 = 0;
  local_200 = (float)uVar12;
  local_1f8 = 0;
  local_1f4 = 0x3f800000;
  FUN_18004fc00(*(longlong *)(plVar17[0x668] + 0x1508),1,(longlong)&local_208);
  fVar21 = FUN_1800172c0((longlong)plVar17,uVar4,(byte)uVar8,uVar13);
  FUN_18000dea8(extraout_x0,bVar10,0);
  FUN_18000e568((longlong)plVar17,(ulonglong)bVar10);
  *(byte *)(local_220 + 0x9f) = *(byte *)(local_220 + 0x9f) | 1;
  puVar14 = FUN_180047a18((longlong *)(*(longlong *)(plVar17[0x6f5] + 0x3340) + 0x19c0),
                          (byte *)&PTR_s_POSITION_18006f668,1);
  lVar20 = plVar17[0x6f5];
  lVar18 = plVar17[0x850];
  lVar16 = plVar17[0x84c];
  *(undefined8 **)(lVar20 + 0x3400) = puVar14;
  *(longlong *)(lVar20 + 0x33b0) = lVar18;
  *(longlong *)(lVar20 + 0x33b8) = lVar16;
  *(undefined4 *)(lVar20 + 0x340c) = 3;
  *(undefined1 *)(lVar20 + 0x345a) = 1;
  FUN_18004f208(*(longlong *)(*(longlong *)(lVar20 + 0x3340) + 0x1508),5);
  FUN_18000e660(plVar17[0x6f5],bVar10);
  local_230 = 0;
  uVar13 = FUN_180018fd0((longlong)(plVar17 + 0x6cd),extraout_x1,&local_230);
  if (local_230 != 0) {
    puVar14 = (undefined8 *)(local_230 + (ulonglong)uVar13 * 0x10);
    *puVar14 = 0;
    *(float *)(puVar14 + 1) = fVar21;
    *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
    *(float *)(puVar14 + 2) = (float)uVar19;
    *(undefined4 *)((longlong)puVar14 + 0x14) = 0;
    *(float *)(puVar14 + 3) = fVar21;
    *(undefined8 *)((longlong)puVar14 + 0x1c) = 0;
    *(float *)((longlong)puVar14 + 0x24) = (float)uVar11;
    *(float *)(puVar14 + 5) = fVar21;
    *(undefined4 *)((longlong)puVar14 + 0x2c) = 0;
    *(float *)(puVar14 + 6) = (float)uVar19;
    *(float *)((longlong)puVar14 + 0x34) = (float)uVar11;
    *(float *)(puVar14 + 7) = fVar21;
    *(undefined4 *)((longlong)puVar14 + 0x3c) = 0;
    if (*(int *)(plVar17[0x852] + 0x34) != 0) {
      *(undefined4 *)(plVar17[0x852] + 0x34) = 0;
    }
    local_220 = *(longlong **)(plVar17[0x852] + 0x80);
    local_218 = *(undefined4 *)(plVar17[0x852] + 0x30);
    uStack_214 = 0x10;
    FUN_18004f6b8(*(longlong *)(*(longlong *)(plVar17[0x6f5] + 0x3340) + 0x1508),0,1,
                  (longlong)&local_220);
    FUN_18004ffc0(*(longlong *)(*(longlong *)(plVar17[0x6f5] + 0x3340) + 0x1508),4,1,uVar13,0);
  }
  FUN_180017380((longlong)plVar17,(longlong)plVar1,(longlong)plVar2,'\x0f','\x0f');
  FUN_18000e700((longlong)plVar17);
  FUN_18001beb8(plVar17 + 0x6cd);
  *(undefined4 *)(plVar17 + 0x58f) = 0x1010101;
  return;
}

