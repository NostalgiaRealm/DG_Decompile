/*
 * FUN_10019ac0 at 10019ac0
 * undefined FUN_10019ac0(void)
 * Address ranges: 10019ac0-10019efb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10019ac0(int param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  char *pcVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
  int *piVar13;
  undefined4 *puVar14;
  int iVar15;
  int local_260;
  int local_25c;
  undefined4 local_258;
  uint local_250 [2];
  int local_248;
  int iStack_244;
  undefined4 local_240;
  int local_238;
  int iStack_234;
  undefined4 local_230;
  undefined8 local_228;
  ulonglong local_220;
  undefined8 local_218;
  uint local_190;
  uint uStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined2 local_178;
  undefined8 local_174;
  undefined8 local_16c;
  undefined8 auStack_158 [12];
  undefined4 auStack_f8 [45];
  undefined8 uStack_44;
  undefined1 local_3c;
  
  local_258 = 0x100;
  local_260 = FUN_101322b0(0x100);
  local_174 = 0;
  iVar8 = 4;
  local_16c = 0;
  puVar1 = auStack_158;
  do {
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    iVar8 = iVar8 + -1;
    puVar1 = puVar1 + 3;
  } while (iVar8 != 0);
  uStack_44 = 0;
  local_3c = 0;
  local_228 = 0x200000001;
  local_220 = 0xff1700000000;
  local_218 = 0xff0000000000;
  local_178 = 0xffff;
  local_188 = 0;
  uStack_180 = 0xffffffffffffffff;
  local_25c = local_260;
  FUN_10019a40(&local_228);
  local_240 = 0x80;
  local_248 = FUN_101322b0(0x80);
  local_230 = 0x80;
  iStack_244 = local_248;
  local_238 = FUN_101322b0(0x80);
  iVar8 = 0;
  iStack_234 = local_238;
  while( true ) {
    pbVar2 = (byte *)(param_1 + iVar8 * 0x14);
    bVar5 = *pbVar2;
    if (bVar5 == 0xff) goto LAB_10019c10;
    if ((bVar5 & 0x7f) == 0x1e) break;
    if ((char)bVar5 < '\0') {
      FUN_10019250();
    }
    else {
      FUN_10016e00(&local_228,&local_248,pbVar2);
    }
    iVar8 = iVar8 + 1;
  }
  local_3c = 1;
  do {
    pcVar3 = (char *)(param_1 + iVar8 * 0x14);
    if (((uint)(int)*pcVar3 >> 7 & 1) == 0) {
      FUN_10016e00(&local_228,&local_238,pcVar3);
    }
    else {
      FUN_10019250();
    }
    iVar8 = iVar8 + 1;
  } while (*(char *)(param_1 + iVar8 * 0x14) != -1);
LAB_10019c10:
  FUN_10019908(&local_228,&local_248,1);
  iVar8 = 0;
  uVar9 = 0;
  local_190 = local_190 | (uint)local_188;
  local_188 = CONCAT44(uStack_18c | local_188._4_4_,local_190);
  do {
    local_250[0] = local_190;
    if (((*(byte *)((int)local_250 + ((int)uVar9 >> 3)) >> (ulonglong)(uVar9 & 7) & 1) != 0) &&
       ((&DAT_10160a90)[uVar9] != '\0')) {
      FUN_10002470(&local_260,0x30ff0200000000,uVar9,0xffffffff,0,0);
      iVar8 = iVar8 + 1;
      local_190 = (uint)local_188;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x10);
  iVar8 = iVar8 * 4;
  FUN_10002470(&local_260,0x890200000210,local_228 & 0xffffffff,0x80000004,iVar8 + 4,0);
  FUN_10002470(&local_260,0x890200000210,local_228._4_4_,0x80000004,iVar8 + 8,0);
  FUN_10002470(&local_260,0x890200000210,local_220 & 0xffffffff,0x80000004,iVar8 + 0xc,0);
  iVar15 = local_25c - local_260;
  FUN_10002390(&local_260,local_248,iStack_244 - local_248);
  iVar8 = 0x10;
  uVar9 = (uint)local_188;
  do {
    local_250[0] = uVar9;
    if (((*(byte *)((int)local_250 + ((int)(iVar8 - 1U) >> 3)) >> (ulonglong)(iVar8 - 1U & 7) & 1)
         != 0) && (*(char *)(iVar8 + 0x10160a8f) != '\0')) {
      FUN_10002470(&local_260,0x8f0200000000,iVar8 + -1,0xffffffff,0,0);
      uVar9 = (uint)local_188;
    }
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  FUN_10002470(&local_260,0xc30100000000,0xffffffff,0xffffffff,0,0);
  iVar8 = local_25c - local_260;
  FUN_10002390(&local_260,local_238,iStack_234 - local_238);
  iVar6 = local_260;
  uVar9 = 0;
  if ((uint)local_16c != 0) {
    if ((uint)local_16c == 0) {
      piVar13 = (int *)&DAT_00000004;
      piVar12 = (int *)&DAT_00000008;
      puVar11 = (uint *)&DAT_0000000c;
      goto LAB_10019df4;
    }
    do {
      iVar7 = local_174._4_4_ + uVar9 * 0x20;
      piVar13 = (int *)(iVar7 + 0xc);
      piVar12 = (int *)(iVar7 + 0x10);
      puVar11 = (uint *)(iVar7 + 0x14);
LAB_10019df4:
      uVar10 = 0;
      if (*puVar11 != 0) {
        do {
          iVar7 = uVar10 * 4;
          uVar10 = uVar10 + 1;
          uVar4 = *(uint *)(*piVar12 + iVar7);
          iVar7 = iVar15 + uVar4;
          if ((int)uVar4 < 0) {
            iVar7 = (uVar4 & 0x7fffffff) + iVar8;
          }
          *(int *)(local_260 + iVar7 + -4) = (iVar8 - iVar7) + *piVar13;
        } while (uVar10 < *puVar11);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)local_16c);
  }
  FUN_101322d0(local_238);
  FUN_101322d0(local_248);
  iVar8 = 4;
  puVar14 = auStack_f8;
  do {
    puVar14 = puVar14 + -6;
    iVar8 = iVar8 + -1;
    FUN_101322d0(*puVar14);
  } while (iVar8 != 0);
  FUN_10019f20(&local_174);
  iVar8 = local_25c - iVar6;
  iVar7 = (*(code *)PTR_FUN_1016c128)(0,iVar8,0x1000,0x40);
  iVar15 = 0;
  if (iVar7 != 0) {
    FUN_101325a0(iVar7,iVar6,iVar8);
    iVar15 = iVar7;
  }
  FUN_101322d0(iVar6);
  return iVar15;
}

