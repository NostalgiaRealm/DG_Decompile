/*
 * FUN_1800176c0 at 1800176c0
 * undefined __cdecl FUN_1800176c0(longlong * param_1, int param_2)
 * Address ranges: 1800176c0-180017b17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800176c0(longlong *param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  uint uVar14;
  undefined4 local_158;
  int local_128;
  int iStack_124;
  uint uStack_fc;
  byte bStack_f6;
  int local_cc;
  int local_c8;
  longlong local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  
  uVar10 = 0;
  do {
    if (uVar10 == 0) {
      plVar12 = (longlong *)((longlong)param_1 + 0x2a34);
      if (*(int *)((longlong)param_1 + 0x29fc) != 6) {
        plVar12 = (longlong *)0x0;
      }
    }
    else {
      plVar12 = (longlong *)0x0;
      if ((uVar10 == 1) && (plVar12 = param_1 + 0x549, (int)param_1[0x540] != 7)) {
        plVar12 = (longlong *)0x0;
      }
    }
    if (plVar12 != (longlong *)0x0) {
      lVar6 = plVar12[2];
      uVar4 = 3;
      uVar14 = *(uint *)(plVar12 + 1);
      uVar9 = *(uint *)((longlong)plVar12 + 0xc);
      plVar12 = (longlong *)param_1[0x660];
      do {
        lVar5 = (**(code **)(*plVar12 + 0x58))(plVar12,uVar4);
        uVar1 = *(uint *)(lVar5 + 0x18);
        if ((uVar14 < uVar1 && uVar9 <= uVar1) ||
           (bVar2 = false, *(uint *)(lVar5 + 0x1c) <= uVar14 && *(uint *)(lVar5 + 0x1c) < uVar9)) {
          bVar2 = true;
        }
        if (((*(uint *)(lVar5 + 0x1c) != uVar1 && !bVar2) &&
            (((uVar14 != uVar1 || uVar9 != *(uint *)(lVar5 + 0x1c) ||
              ((int)lVar6 != *(int *)(lVar5 + 0x14))) && (*(int *)(lVar5 + 0x74) == 0)))) &&
           (*(int *)(lVar5 + 0x78) == 0)) {
          if ((*(byte *)(lVar5 + 0x4a) >> 1 & 1) != 0) {
            (**(code **)(*plVar12 + 0x40))(plVar12,uVar4,1,0);
            FUN_18002df68((longlong *)plVar12[1],uVar4);
          }
          (**(code **)(*plVar12 + 0x68))(plVar12,uVar4);
          *(undefined4 *)(lVar5 + 0x18) = 0;
          *(undefined4 *)(lVar5 + 0x1c) = 0;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 7);
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 < 2);
  iVar11 = -1;
  uVar10 = 0;
  do {
    iVar13 = 0;
    if (uVar10 == 0) {
      if ((param_2 == 6) || ((param_2 == -1 && (*(int *)((longlong)param_1 + 0x29fc) == 6)))) {
        iVar11 = 6;
        plVar12 = (longlong *)((longlong)param_1 + 0x2a34);
        goto LAB_180017890;
      }
    }
    else {
      if ((uVar10 == 1) && ((param_2 == 7 || ((param_2 == -1 && ((int)param_1[0x540] == 7)))))) {
        iVar11 = 7;
        iVar13 = 1;
        plVar12 = param_1 + 0x549;
      }
      else {
        plVar12 = (longlong *)0x0;
      }
LAB_180017890:
      if ((plVar12 != (longlong *)0x0) &&
         (uVar4 = FUN_180016f80((longlong *)param_1[0x660],iVar11), uVar4 == 0xffffffff)) {
        uVar4 = 3;
        do {
          lVar6 = (**(code **)(*(longlong *)param_1[0x660] + 0x58))
                            ((longlong *)param_1[0x660],uVar4);
          local_128 = (int)*(undefined8 *)(lVar6 + 0x18);
          iStack_124 = (int)((ulonglong)*(undefined8 *)(lVar6 + 0x18) >> 0x20);
          if (local_128 == iStack_124) goto LAB_180017a2c;
          uVar4 = uVar4 + 1;
        } while (uVar4 < 7);
        uVar9 = 0;
        uVar14 = 3;
        uVar4 = 0xffffffff;
        do {
          lVar6 = (**(code **)(*(longlong *)param_1[0x660] + 0x58))
                            ((longlong *)param_1[0x660],uVar14);
          uStack_fc = (uint)((ulonglong)*(undefined8 *)(lVar6 + 0x40) >> 0x20);
          if (((uVar9 <= uStack_fc) &&
              (local_cc = (int)((ulonglong)*(undefined8 *)(lVar6 + 0x70) >> 0x20), local_cc == 0))
             && (local_c8 = (int)*(undefined8 *)(lVar6 + 0x78), local_c8 == 0)) {
            uVar9 = uStack_fc;
            uVar4 = uVar14;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < 7);
        if (uVar4 != 0xffffffff) {
          lVar6 = (**(code **)(*(longlong *)param_1[0x660] + 0x58))
                            ((longlong *)param_1[0x660],uVar4);
          bStack_f6 = (byte)((ulonglong)*(undefined8 *)(lVar6 + 0x48) >> 0x10);
          if ((bStack_f6 >> 1 & 1) != 0) {
            (**(code **)(*(longlong *)param_1[0x660] + 0x40))((longlong *)param_1[0x660],uVar4,1,0);
            FUN_18002df68(param_1,uVar4);
          }
          (**(code **)(*(longlong *)param_1[0x660] + 0x68))((longlong *)param_1[0x660],uVar4);
LAB_180017a2c:
          local_80 = *plVar12;
          if (iVar13 == 0) {
            uVar7 = *(undefined4 *)(&DAT_180065bf0 + (longlong)(int)plVar12[2] * 4);
          }
          else {
            uVar7 = 7;
          }
          uStack_78 = CONCAT44((int)*plVar12,1);
          uStack_68 = CONCAT44(uVar7,(int)plVar12[2]);
          uStack_70 = CONCAT44((int)*plVar12,*(undefined4 *)((longlong)plVar12 + 4));
          uVar7 = 9;
          if (iVar13 == 0) {
            uVar7 = 6;
          }
          uVar8 = 7;
          if (iVar13 == 0) {
            uVar8 = 0;
          }
          local_158 = CONCAT31(local_158._1_3_,*(undefined1 *)(param_1[1] + 0x54));
          local_60 = CONCAT44(uVar8,uVar7);
          local_58 = local_158;
          cVar3 = (**(code **)(*(longlong *)param_1[0x660] + 0x60))
                            ((longlong *)param_1[0x660],uVar4,&local_80,iVar13);
          if (cVar3 != '\0') {
            lVar6 = (**(code **)(*(longlong *)param_1[0x660] + 0x58))
                              ((longlong *)param_1[0x660],uVar4);
            uVar14 = *(uint *)(plVar12 + 1);
            *(uint *)(lVar6 + 0x18) = uVar14;
            uVar9 = *(uint *)((longlong)plVar12 + 0xc);
            *(uint *)(lVar6 + 0x1c) = uVar9;
            FUN_18002e118((longlong)param_1,uVar4,uVar14,uVar9);
          }
        }
      }
    }
    uVar10 = uVar10 + 1;
    if (1 < uVar10) {
      return;
    }
  } while( true );
}

