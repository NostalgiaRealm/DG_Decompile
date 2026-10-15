/*
 * FUN_18002e250 at 18002e250
 * undefined __cdecl FUN_18002e250(longlong * param_1)
 * Address ranges: 18002e250-18002e7d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002e250(longlong *param_1)

{
  longlong lVar1;
  uint *puVar2;
  byte bVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong extraout_x0;
  undefined8 *puVar13;
  undefined8 extraout_x1;
  longlong extraout_x8;
  longlong lVar14;
  uint uVar15;
  int extraout_w12;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  float fVar23;
  longlong local_230;
  uint local_228;
  uint uStack_224;
  longlong local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined8 local_210;
  float local_208;
  float fStack_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined4 local_1c0;
  int aiStack_1b0 [11];
  undefined1 local_184;
  undefined1 local_15c;
  
  lVar17 = *param_1;
  uVar10 = *(uint *)(param_1 + 1);
  bVar3 = *(byte *)((longlong)param_1 + 0xc);
  uVar5 = *(ushort *)(param_1 + 2);
  uVar11 = FUN_180031360(lVar17 + 0x3b60,0,0);
  uVar11 = FUN_180022ca0(uVar11,*(int *)(*(longlong *)(lVar17 + 0x3628) + 0x2984));
  uVar12 = FUN_180022ca0(uVar11,*(int *)(extraout_x8 + 0x2988));
  uStack_224 = (uint)bVar3;
  local_230 = CONCAT44(local_230._4_4_,(uint)uVar5);
  iVar19 = 0;
  lVar22 = 0;
  local_228 = uVar10;
  local_220 = lVar17 + 0x3000;
  do {
    if (iVar19 == (int)uVar11 || iVar19 == (int)uVar12) {
      lVar18 = lVar22 * 0x170;
      lVar14 = lVar17 + 0x36ca;
      if ((*(byte *)(lVar14 + lVar18) & 1) != 0) {
        lVar1 = lVar17 + 0x3630;
        if ((*(int *)(lVar17 + 0x36a4 + lVar18) == 0) && (*(int *)(lVar17 + lVar18 + 0x36a8) == 0))
        {
          FUN_180026660((longlong *)(lVar17 + 0x34e8),(longlong *)(lVar18 + lVar1),1,0);
          *(byte *)(lVar14 + lVar18) = *(byte *)(lVar14 + lVar18) & 0xfe;
        }
        else {
          FUN_180022ae8((longlong *)(lVar17 + 0x34e8),iVar19,1,0,0,
                        *(LONG *)(lVar17 + 0x3650 + lVar18),*(LONG *)(lVar17 + 0x3654 + lVar18),0);
          FUN_180026660((longlong *)(lVar17 + 0x34e8),(longlong *)(lVar18 + lVar1),1,0);
          FUN_180022920((longlong *)(lVar17 + 0x34e8),iVar19,*(uint *)(lVar17 + 0x369c + lVar18),
                        *(int *)(lVar17 + 0x36a0 + lVar18),*(char *)(lVar17 + 0x36c5 + lVar18),
                        (uint)*(byte *)(lVar17 + 0x36c9 + lVar18),'\0',0,
                        *(undefined1 *)(lVar17 + 0x36c7 + lVar18),
                        *(undefined4 *)(lVar17 + 0x36bc + lVar18),
                        *(undefined4 *)(lVar17 + 0x36c0 + lVar18));
          FUN_180029c60(lVar18 + lVar1,(ulonglong)*(uint *)(lVar17 + 0x3654 + lVar18));
        }
      }
      *(byte *)(lVar14 + lVar18) = *(byte *)(lVar14 + lVar18) | 2;
    }
    lVar14 = local_220;
    uVar7 = uStack_224;
    uVar10 = local_228;
    iVar19 = iVar19 + 1;
    lVar22 = lVar22 + 1;
  } while (iVar19 < 3);
  uVar6 = (uint)local_230;
  bVar9 = FUN_1800195f0(lVar17);
  if ((*(int *)(lVar17 + 0x2a60) == 0) || (bVar8 = true, *(int *)(lVar17 + 0x2a64) != 1)) {
    bVar8 = false;
  }
  thunk_FUN_180001218((undefined8 *)aiStack_1b0,(undefined8 *)&DAT_180061c10,0x148);
  local_184 = *(undefined1 *)(lVar17 + 0x2abc);
  if ((bVar8) || (local_15c = 0, (*(uint *)(lVar17 + 0x2c0c) & 0xff0000) == 0)) {
    local_15c = 0xf;
  }
  uVar11 = FUN_18001b588((longlong *)(*(longlong *)(lVar17 + 0x31c0) + 0x1978),aiStack_1b0);
  *(undefined8 *)(lVar17 + 0x3260) = uVar11;
  local_1c0 = 8;
  local_1f0 = *(undefined8 *)(lVar17 + 0x2a60);
  uStack_1e8 = 8;
  uStack_1d8 = 0x300000003;
  uStack_1e0 = 0x30000ffff;
  uStack_1c8 = 0x300000003;
  local_1d0 = 0x300000008;
  uVar11 = FUN_18001b810((longlong *)(*(longlong *)(lVar17 + 0x31c0) + 0x1960),(int *)&local_1f0);
  *(undefined8 *)(lVar17 + 0x3278) = uVar11;
  uVar11 = FUN_18001b350((longlong *)(*(longlong *)(lVar17 + 0x31c0) + 0x19a8),
                         (uint *)&DAT_180061ba8);
  *(undefined8 *)(lVar17 + 0x3270) = uVar11;
  bVar8 = *(int *)(lVar17 + 0x2afc) != 0;
  cVar4 = *(char *)(lVar14 + 0x2d9);
  *(bool *)(lVar14 + 0x2d9) = bVar8;
  *(byte *)(lVar14 + 0x171) = (bool)cVar4 != bVar8 | *(byte *)(lVar14 + 0x171);
  *(undefined1 *)(lVar17 + 0x32da) = 1;
  uVar11 = FUN_180019670(lVar17);
  uVar11 = FUN_180022ca0(uVar11,*(int *)(lVar17 + 0x2984));
  uVar11 = FUN_180022ca0(uVar11,*(int *)(lVar17 + 0x2988));
  lVar18 = lVar17 + (longlong)extraout_w12 * 0x170;
  lVar22 = lVar18 + 0x3630;
  if (extraout_w12 == -1) {
    lVar22 = 0;
  }
  lVar1 = lVar17 + (longlong)(int)uVar11 * 0x170 + 0x3630;
  if ((int)uVar11 == -1) {
    lVar1 = 0;
  }
  if (lVar22 == 0) {
    uVar16 = 0;
    uVar20 = 0;
    uVar21 = 0;
    uVar15 = 0;
  }
  else {
    puVar2 = (uint *)(lVar18 + 0x3658);
    bVar8 = extraout_w12 == -1;
    if (bVar8) {
      puVar2 = (uint *)&DAT_00000028;
    }
    uVar16 = *puVar2;
    puVar2 = (uint *)(lVar18 + 0x365c);
    if (bVar8) {
      puVar2 = (uint *)&DAT_0000002c;
    }
    uVar15 = *puVar2;
    puVar2 = (uint *)(lVar18 + 0x3650);
    if (bVar8) {
      puVar2 = (uint *)&DAT_00000020;
    }
    uVar20 = *puVar2;
    puVar2 = (uint *)(lVar18 + 0x3654);
    if (bVar8) {
      puVar2 = (uint *)&DAT_00000024;
    }
    uVar21 = *puVar2;
  }
  fStack_204 = (float)uVar15;
  local_210 = 0;
  local_208 = (float)uVar16;
  local_200 = 0;
  local_1fc = 0x3f800000;
  FUN_18004c070(*(longlong *)(*(longlong *)(lVar17 + 0x31c0) + 0x1508),1,(longlong)&local_210);
  fVar23 = FUN_180022dd8(lVar17,uVar10,(byte)uVar7,uVar6);
  FUN_180019930(extraout_x0,bVar9,0);
  FUN_180019fd8(lVar17,(ulonglong)bVar9);
  *(byte *)(lVar14 + 0xb98) = *(byte *)(lVar14 + 0xb98) | 1;
  puVar13 = FUN_180043e88((longlong *)
                          (*(longlong *)(*(longlong *)(lVar17 + 0x3628) + 0x31c0) + 0x19c0),
                          (byte *)&PTR_s_POSITION_18006b518,1);
  lVar14 = *(longlong *)(lVar17 + 0x3628);
  uVar11 = *(undefined8 *)(lVar17 + 0x3b40);
  uVar12 = *(undefined8 *)(lVar17 + 0x3b20);
  *(undefined8 **)(lVar14 + 0x3280) = puVar13;
  *(undefined8 *)(lVar14 + 0x3230) = uVar11;
  *(undefined8 *)(lVar14 + 0x3238) = uVar12;
  *(undefined4 *)(lVar14 + 0x328c) = 3;
  *(undefined1 *)(lVar14 + 0x32da) = 1;
  FUN_18004b678(*(longlong *)(*(longlong *)(lVar14 + 0x31c0) + 0x1508),5);
  FUN_18001a0c8(*(longlong *)(lVar17 + 0x3628),bVar9);
  local_230 = 0;
  uVar10 = FUN_1800255b8(lVar17 + 0x34e8,extraout_x1,&local_230);
  if (local_230 != 0) {
    puVar13 = (undefined8 *)(local_230 + (ulonglong)uVar10 * 0x10);
    *puVar13 = 0;
    *(float *)(puVar13 + 1) = fVar23;
    *(undefined4 *)((longlong)puVar13 + 0xc) = 0;
    *(float *)(puVar13 + 2) = (float)uVar20;
    *(undefined4 *)((longlong)puVar13 + 0x14) = 0;
    *(float *)(puVar13 + 3) = fVar23;
    *(undefined8 *)((longlong)puVar13 + 0x1c) = 0;
    *(float *)((longlong)puVar13 + 0x24) = (float)uVar21;
    *(float *)(puVar13 + 5) = fVar23;
    *(undefined4 *)((longlong)puVar13 + 0x2c) = 0;
    *(float *)(puVar13 + 6) = (float)uVar20;
    *(float *)((longlong)puVar13 + 0x34) = (float)uVar21;
    *(float *)(puVar13 + 7) = fVar23;
    *(undefined4 *)((longlong)puVar13 + 0x3c) = 0;
    if (*(int *)(*(longlong *)(lVar17 + 0x3b50) + 0x34) != 0) {
      *(undefined4 *)(*(longlong *)(lVar17 + 0x3b50) + 0x34) = 0;
    }
    local_220 = *(longlong *)(*(longlong *)(lVar17 + 0x3b50) + 0x80);
    local_218 = *(undefined4 *)(*(longlong *)(lVar17 + 0x3b50) + 0x30);
    uStack_214 = 0x10;
    FUN_18004bb28(*(longlong *)(*(longlong *)(*(longlong *)(lVar17 + 0x3628) + 0x31c0) + 0x1508),0,1
                  ,(longlong)&local_220);
    FUN_18004c430(*(longlong *)(*(longlong *)(*(longlong *)(lVar17 + 0x3628) + 0x31c0) + 0x1508),4,1
                  ,uVar10,0);
  }
  FUN_180022e98(lVar17,lVar22,lVar1,'\x0f','\x0f');
  FUN_18001a168(lVar17);
  FUN_1800283c0((longlong *)(lVar17 + 0x34e8));
  *(undefined4 *)(lVar17 + 0x2be0) = 0x1010101;
  return;
}

