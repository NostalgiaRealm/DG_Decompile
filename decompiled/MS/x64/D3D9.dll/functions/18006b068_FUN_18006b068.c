/*
 * FUN_18006b068 at 18006b068
 * undefined8 __fastcall FUN_18006b068(uint * param_1, longlong param_2, uint * param_3, longlong * param_4, ulonglong param_5)
 * Address ranges: 18006b068-18006b599
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18006b068(uint *param_1,longlong param_2,uint *param_3,longlong *param_4,ulonglong param_5)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  byte bVar11;
  longlong lVar12;
  ushort uVar13;
  uint uVar14;
  ulonglong uVar15;
  byte bVar16;
  uint uVar17;
  bool bVar18;
  uint in_stack_ffffffffffffff50;
  uint local_78 [8];
  uint local_58 [8];
  
  uVar15 = 0;
  uVar8 = param_5 & 0xffffffffffff;
  do {
    uVar17 = (uint)uVar15;
    lVar12 = uVar15 * 0x10;
    uVar13 = (ushort)param_3[uVar15 * 4 + 0x40];
    if ((uVar13 != 0) || ((short)param_3[uVar15 * 4 + 0x60] != 0)) {
      uVar2 = (ushort)param_3[uVar15 * 4 + 0x60];
      if ((uVar13 != (uVar2 & 0xfeff)) ||
         (bVar16 = 1,
         *(ushort *)((longlong)param_3 + lVar12 + 0x102) !=
         (*(ushort *)((longlong)param_3 + lVar12 + 0x182) & 0xfeff))) {
        bVar16 = 0;
      }
      puVar1 = (ushort *)((longlong)param_3 + lVar12 + 0x186);
      uVar6 = (ushort)param_3[uVar15 * 4 + 0x61] & 0xfeff;
      if (((ushort)param_3[uVar15 * 4 + 0x41] == uVar6) &&
         (*(ushort *)((longlong)param_3 + lVar12 + 0x106) == (*puVar1 & 0xfeff))) {
        bVar11 = 1;
      }
      else {
        bVar11 = 0;
      }
      uVar9 = *(uint *)(param_2 + uVar15 * 4);
      uVar14 = uVar9 & 0x1f;
      if ((uVar14 < 0x1b) && ((&DAT_180102850)[uVar14] != '\0')) {
        if (((ushort)param_3[uVar15 * 4 + 0x41] == (*puVar1 & 0xfeff)) &&
           (*(ushort *)((longlong)param_3 + lVar12 + 0x106) == uVar6)) {
          bVar5 = 1;
        }
        else {
          bVar5 = 0;
        }
        bVar11 = bVar11 | bVar5;
      }
      uVar8 = 0;
      uVar7 = 0;
      bVar5 = 0;
      if (uVar14 == (uVar9 >> 5 & 0x1f)) {
        bVar5 = bVar11;
      }
      bVar18 = false;
      do {
        bVar4 = true;
        if (bVar18) break;
        if ((((*(byte *)((longlong)param_3 + uVar8 * 2 + lVar12 + 0x102) & 0xf0) == 0x70) &&
            (uVar13 != 0)) ||
           (((*(byte *)((longlong)param_3 + uVar8 * 2 + lVar12 + 0x182) & 0xf0) == 0x70 &&
            (uVar2 != 0)))) {
          bVar18 = true;
        }
        else {
          bVar18 = false;
        }
        uVar9 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar9;
        bVar4 = bVar18;
      } while (uVar9 < 3);
      if (bVar4) {
        uVar9 = 0;
        if ((((uint)((param_5 & 0xffffffffffff) >> ((byte)uVar15 * '\x03' & 0x3f)) & 7) - 5 < 2) &&
           ((param_5 >> 0x32 & 1) != 0)) {
          uVar9 = FUN_1800ec8c0((longlong)param_3,4,'\x01');
        }
        puVar10 = param_3;
        uVar7 = FUN_1800ec8c0((longlong)param_3,4,'\x01');
        bVar18 = *(short *)((longlong)param_3 + lVar12 + 0x10a) != 0;
        in_stack_ffffffffffffff50 = CONCAT31((int3)(in_stack_ffffffffffffff50 >> 8),bVar18);
        FUN_180066d68(CONCAT71((int7)((ulonglong)puVar10 >> 8),bVar18),param_3,uVar17,
                      uVar17 + 5 | 0x410100,uVar7,uVar9,param_4,param_5,
                      (short)param_3[uVar15 * 4 + 0x42] != 0,bVar18);
        FUN_1800ec960((longlong)param_3,uVar9);
      }
      uVar6 = 0;
      uVar9 = *(uint *)(param_2 + uVar15 * 4);
      puVar10 = (uint *)(ulonglong)uVar9;
      if ((((byte)uVar9 & 0x1f) != 0x18) &&
         (puVar10 = (uint *)(ulonglong)(uVar9 & 0x3e0), (uVar9 & 0x3e0) == 0x300)) {
        uVar3 = (ushort)param_3[uVar15 * 4 + 0x40];
        puVar10 = (uint *)(ulonglong)uVar3;
        if ((uVar3 == ((ushort)param_3[uVar15 * 4 + 0x61] & 0xf0)) || (uVar3 == (*puVar1 & 0xf0))) {
          puVar10 = param_3;
          uVar9 = FUN_1800ec8c0((longlong)param_3,4,'\x01');
          uVar6 = (short)uVar9 << 10 | 0xb0;
        }
      }
      if (uVar13 != 0) {
        uVar13 = uVar6;
        if (uVar6 == 0) {
          uVar13 = (ushort)param_3[uVar15 * 4 + 0x40];
        }
        in_stack_ffffffffffffff50 =
             CONCAT22((short)(in_stack_ffffffffffffff50 >> 0x10),
                      *(undefined2 *)((longlong)param_3 + lVar12 + 0x102));
        puVar10 = param_1;
        FUN_1800674d0(param_1,param_3,param_4,uVar17,*(uint *)(param_2 + uVar15 * 4) & 0x1f,uVar7,
                      (bVar16 & bVar5) << 3 | 7,uVar13,(short)param_3[uVar15 * 4 + 0x43],
                      in_stack_ffffffffffffff50,(ushort)param_3[uVar15 * 4 + 0x41],
                      *(ushort *)((longlong)param_3 + lVar12 + 0x106));
      }
      if (((bVar16 & bVar5) == 0) && (uVar2 != 0)) {
        in_stack_ffffffffffffff50 =
             CONCAT22((short)(in_stack_ffffffffffffff50 >> 0x10),
                      *(undefined2 *)((longlong)param_3 + lVar12 + 0x182));
        puVar10 = param_1;
        FUN_1800674d0(param_1,param_3,param_4,uVar17,*(uint *)(param_2 + uVar15 * 4) >> 5 & 0x1f,
                      uVar7,8,(ushort)param_3[uVar15 * 4 + 0x60],(short)param_3[uVar15 * 4 + 99],
                      in_stack_ffffffffffffff50,(ushort)param_3[uVar15 * 4 + 0x61],*puVar1);
      }
      if (uVar6 != 0) {
        FUN_180067160(puVar10,local_58,param_3,param_4,(ushort)param_3[uVar15 * 4 + 0x40]);
        FUN_18006724c(puVar10,local_78,param_3,param_4,-1,0xffffffff,uVar6,0);
        FUN_1800edbe0(param_3,param_4,0x36,(ulonglong)local_58[0]);
      }
      param_3[0x84] = param_3[0x84] & ~(0x1010101 << ((byte)uVar15 & 0x1f));
      if (((char)param_3[0x84] == '\0') && ((param_3[0x89] & 0x3f00) == 0)) {
        FUN_1800ec960((longlong)param_3,param_3[0x89]);
        param_3[0x89] = 0;
      }
      if ((param_3[0x84] & 0xff0000) == 0) {
        FUN_1800ec960((longlong)param_3,param_3[0x88]);
        param_3[0x88] = 0;
      }
      if ((param_3[0x84] & 0xff000000) == 0) {
        FUN_1800ec960((longlong)param_3,param_3[0x87]);
        param_3[0x87] = 0;
      }
      uVar8 = FUN_1800ec960((longlong)param_3,uVar7);
    }
    uVar15 = (ulonglong)(uVar17 + 1);
    if (7 < uVar17 + 1) {
      return CONCAT71((int7)(uVar8 >> 8),1);
    }
  } while( true );
}

