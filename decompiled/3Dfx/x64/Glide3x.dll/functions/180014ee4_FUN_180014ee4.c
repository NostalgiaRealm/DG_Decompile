/*
 * FUN_180014ee4 at 180014ee4
 * undefined __fastcall FUN_180014ee4(longlong * param_1, int param_2)
 * Address ranges: 180014ee4-1800151e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180014ee4(longlong *param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  int local_110;
  undefined4 local_10c;
  int local_108;
  uint local_104;
  undefined1 local_100;
  
  uVar8 = 0;
  do {
    plVar6 = (longlong *)0x0;
    if (uVar8 == 0) {
      if (*(int *)((longlong)param_1 + 0x29fc) == 6) {
        plVar6 = (longlong *)((longlong)param_1 + 0x2a34);
      }
    }
    else if ((uVar8 == 1) && ((int)param_1[0x540] == 7)) {
      plVar6 = param_1 + 0x549;
    }
    if (plVar6 != (longlong *)0x0) {
      FUN_1800149f8((longlong *)param_1[0x660],*(uint *)(plVar6 + 1),
                    *(uint *)((longlong)plVar6 + 0xc),(int)plVar6[2],'\x01');
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 2);
  iVar7 = -1;
  uVar8 = 0;
  do {
    plVar6 = param_1 + 0x549;
    bVar2 = false;
    if (uVar8 == 0) {
      if ((param_2 == 6) || ((param_2 == -1 && (*(int *)((longlong)param_1 + 0x29fc) == 6)))) {
        iVar7 = 6;
        plVar6 = (longlong *)((longlong)param_1 + 0x2a34);
        goto LAB_180014fd5;
      }
    }
    else {
      if ((uVar8 == 1) && ((param_2 == 7 || ((param_2 == -1 && ((int)param_1[0x540] == 7)))))) {
        bVar2 = true;
        iVar7 = 7;
      }
      else {
        plVar6 = (longlong *)0x0;
      }
LAB_180014fd5:
      if ((plVar6 != (longlong *)0x0) &&
         (uVar4 = FUN_180014854((longlong *)param_1[0x660],iVar7), uVar4 == 0xffffffff)) {
        uVar4 = 3;
        do {
          lVar5 = (**(code **)(*(longlong *)param_1[0x660] + 0x58))
                            ((longlong *)param_1[0x660],uVar4);
          if ((int)*(undefined8 *)(lVar5 + 0x18) ==
              (int)((ulonglong)*(undefined8 *)(lVar5 + 0x18) >> 0x20)) goto LAB_1800150e8;
          uVar4 = uVar4 + 1;
        } while (uVar4 < 7);
        uVar9 = 0;
        uVar10 = 3;
        uVar4 = 0xffffffff;
        do {
          lVar5 = (**(code **)(*(longlong *)param_1[0x660] + 0x58))
                            ((longlong *)param_1[0x660],uVar10);
          uVar1 = SUB164(*(undefined1 (*) [16])(lVar5 + 0x40),4);
          if (((uVar9 <= uVar1) && (SUB164(*(undefined1 (*) [16])(lVar5 + 0x70),4) == 0)) &&
             (SUB164(*(undefined1 (*) [16])(lVar5 + 0x70),8) == 0)) {
            uVar4 = uVar10;
            uVar9 = uVar1;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < 7);
        if (uVar4 != 0xffffffff) {
          lVar5 = (**(code **)(*(longlong *)param_1[0x660] + 0x58))
                            ((longlong *)param_1[0x660],uVar4);
          if ((SUB164(*(undefined1 (*) [16])(lVar5 + 0x40),10) & 2) != 0) {
            (**(code **)(*(longlong *)param_1[0x660] + 0x40))((longlong *)param_1[0x660],uVar4,1,0);
            FUN_1800284f0(param_1,uVar4);
          }
          (**(code **)(*(longlong *)param_1[0x660] + 0x68))((longlong *)param_1[0x660],uVar4);
LAB_1800150e8:
          local_128 = (undefined4)*plVar6;
          local_124 = *(undefined4 *)((longlong)plVar6 + 4);
          local_110 = (int)plVar6[2];
          if (bVar2) {
            local_10c = 7;
          }
          else {
            local_10c = *(undefined4 *)(&DAT_180062c90 + (longlong)local_110 * 4);
          }
          local_108 = (-(uint)bVar2 & 3) + 6;
          local_104 = -(uint)bVar2 & 7;
          local_120 = 1;
          local_100 = *(undefined1 *)(param_1[1] + 0x54);
          local_11c = local_128;
          local_118 = local_124;
          local_114 = local_128;
          cVar3 = (**(code **)(*(longlong *)param_1[0x660] + 0x60))
                            ((longlong *)param_1[0x660],uVar4,&local_128);
          if (cVar3 != '\0') {
            lVar5 = (**(code **)(*(longlong *)param_1[0x660] + 0x58))
                              ((longlong *)param_1[0x660],uVar4);
            uVar10 = *(uint *)(plVar6 + 1);
            *(uint *)(lVar5 + 0x18) = uVar10;
            uVar9 = *(uint *)((longlong)plVar6 + 0xc);
            *(uint *)(lVar5 + 0x1c) = uVar9;
            FUN_180028688((longlong)param_1,uVar4,uVar10,uVar9);
          }
        }
      }
    }
    uVar8 = uVar8 + 1;
    if (1 < uVar8) {
      return;
    }
  } while( true );
}

