/*
 * FUN_1006e348 at 1006e348
 * undefined __thiscall FUN_1006e348(void * this, int * param_1, uint param_2)
 * Address ranges: 1006e348-1006e4b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1006e348(void *this,int *param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  int *this_00;
  uint uVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  byte bStack_25;
  undefined4 local_24 [2];
  byte abStack_19 [13];
  undefined4 local_c;
  int *local_8;
  
  uVar9 = param_2;
  local_8 = this;
  puVar15 = local_24;
  for (iVar12 = 6; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  puVar2 = *(uint **)(param_2 + 0x1a0);
  uVar14 = 0;
  uVar3 = puVar2[5];
  uVar4 = puVar2[4];
  uVar5 = puVar2[8];
  uVar6 = *puVar2;
  uVar7 = puVar2[3];
  do {
    bVar11 = (char)uVar14 * '\x03';
    uVar10 = (uVar5 & uVar7) >> (bVar11 & 0x1f) & 7;
    uVar13 = (uVar3 & uVar4 & uVar6) >> (bVar11 & 0x1f) & 7;
    if (uVar10 == 1) {
      uVar13 = 9;
    }
    else if (uVar10 == 2) {
      uVar13 = 8;
    }
    else if (uVar10 == 3) {
      uVar13 = 0xb;
    }
    else if (uVar10 == 4) {
      uVar13 = 10;
    }
    *(byte *)((int)local_24 + uVar13) =
         *(byte *)((int)local_24 + uVar13) | (byte)(1 << (uVar14 & 0x1f));
    abStack_19[uVar13 + 1] = abStack_19[uVar13 + 1] + 1;
    uVar14 = uVar14 + 1;
  } while (uVar14 < 8);
  iVar12 = 0xc;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          this_00 = local_8;
          bVar11 = *(byte *)((int)local_24 + iVar12 + -1);
          param_2 = (uint)bVar11;
          uVar3 = 0;
          if (param_2 != 0) {
            for (; (bVar11 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
            }
          }
          if (param_2 != 0) {
            pbVar8 = (byte *)((int)&param_2 + ((int)uVar3 >> 3));
            *pbVar8 = *pbVar8 & ~('\x01' << (uVar3 & 7));
            local_c = CONCAT31((int3)(uVar3 >> 8),1 < abStack_19[iVar12]);
            while( true ) {
              FUN_1006da0d(this_00,param_1,uVar9,uVar3 & 0xff,(char)local_c);
              uVar3 = 0;
              if (param_2 != 0) {
                for (; (param_2 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
                }
              }
              if (param_2 == 0) break;
              pbVar8 = (byte *)((int)&param_2 + ((int)uVar3 >> 3));
              *pbVar8 = *pbVar8 & ~('\x01' << (uVar3 & 7));
            }
          }
          FUN_1006d9d9(uVar9);
          *(undefined4 *)(uVar9 + 0x184) = 0;
          (**(code **)(*local_8 + 4))(uVar9,*(undefined4 *)(uVar9 + 0x18c));
          iVar1 = iVar12 + -1;
          *(undefined4 *)(uVar9 + 0x18c) = 0;
          if (iVar12 != 10) break;
          FUN_100c2ed2(uVar9 + 0x18,*(uint *)(uVar9 + 0x158));
          *(undefined4 *)(uVar9 + 0x158) = 0;
          iVar12 = iVar1;
        }
        if (iVar12 != 0xb) break;
        FUN_100c2ed2(uVar9 + 0x18,*(uint *)(uVar9 + 0x160));
        *(undefined4 *)(uVar9 + 0x160) = 0;
        iVar12 = iVar1;
      }
      if (iVar12 != 0xc) break;
      FUN_100c2ed2(uVar9 + 0x18,*(uint *)(uVar9 + 0x15c));
      *(undefined4 *)(uVar9 + 0x15c) = 0;
      iVar12 = iVar1;
    }
    iVar12 = iVar1;
  } while (iVar1 != 0);
  return;
}

