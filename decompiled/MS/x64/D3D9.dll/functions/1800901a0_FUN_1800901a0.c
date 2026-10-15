/*
 * FUN_1800901a0 at 1800901a0
 * undefined __fastcall FUN_1800901a0(longlong param_1, undefined8 param_2, undefined8 param_3, longlong * param_4, undefined4 param_5, uint * param_6, longlong param_7, int param_8)
 * Address ranges: 1800901a0-180090477
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800901a0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  undefined4 param_5,uint *param_6,longlong param_7,int param_8)

{
  uint uVar1;
  byte bVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong in_stack_ffffffffffffff08;
  undefined8 in_stack_ffffffffffffff10;
  longlong *plVar19;
  undefined4 uVar20;
  ulonglong in_stack_ffffffffffffff18;
  undefined8 local_a8;
  undefined4 local_a0;
  uint local_9c;
  uint local_98;
  undefined4 local_94;
  longlong local_90;
  int local_88;
  undefined1 local_80 [16];
  int local_70 [12];
  
  uVar20 = (undefined4)((ulonglong)in_stack_ffffffffffffff10 >> 0x20);
  lVar9 = *(longlong *)(param_1 + 0x110);
  if (*(char *)(lVar9 + 0x1d0b0) != '\0') {
    (**(code **)(*param_4 + 0x50))(param_4,local_80);
    lVar9 = FUN_18008d6fc((longlong *)(lVar9 + 0x1d098),local_70);
    if (lVar9 != 0) {
      if (param_6[3] <= *param_6) {
        return;
      }
      if (param_6[4] <= param_6[1]) {
        return;
      }
      if (param_6[5] <= param_6[2]) {
        return;
      }
      uVar13 = param_6[3] - *param_6;
      uVar16 = 0;
      uVar18 = param_6[4] - param_6[1];
      if (uVar18 == 0) {
        return;
      }
      do {
        uVar17 = uVar18 - uVar16;
        if (0x400 < uVar17) {
          uVar17 = 0x400;
        }
        uVar15 = 0;
        uVar1 = uVar17 + uVar16;
        if (uVar13 != 0) {
          do {
            uVar5 = uVar13 - uVar15;
            if (0x400 < uVar13 - uVar15) {
              uVar5 = 0x400;
            }
            plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
            uVar6 = uVar5 + uVar15;
            plVar19 = &local_90;
            in_stack_ffffffffffffff08 = in_stack_ffffffffffffff08 & 0xffffffff00000000;
            iVar7 = (**(code **)(*plVar3 + 0x70))
                              (plVar3,lVar9,0,2,in_stack_ffffffffffffff08,plVar19);
            uVar20 = (undefined4)(in_stack_ffffffffffffff08 >> 0x20);
            if (-1 < iVar7) {
              uVar10 = (ulonglong)*(uint *)(param_1 + 0x2c);
              bVar2 = (&DAT_1800fead8)[uVar10];
              if (*(uint *)(&DAT_1800ff000 + uVar10 * 4) < 8) {
                uVar11 = *(uint *)(&DAT_1800fea30 + uVar10 * 4);
              }
              else {
                uVar11 = *(uint *)(&DAT_1800ff000 + uVar10 * 4) >> 3;
              }
              uVar4 = uVar15 / bVar2;
              uVar14 = uVar16 / (byte)(&DAT_1800feb08)[uVar10];
              uVar8 = uVar1 / (byte)(&DAT_1800feb08)[uVar10];
              if (uVar8 != uVar14) {
                uVar12 = 0;
                do {
                  FUN_1800fbec0((undefined8 *)((ulonglong)(local_88 * uVar12) + local_90),
                                (undefined8 *)
                                ((ulonglong)((uVar12 + uVar14) * param_8) +
                                param_7 + (ulonglong)(uVar11 * uVar4)),
                                (ulonglong)((uVar6 / bVar2 - uVar4) * uVar11));
                  uVar20 = (undefined4)(in_stack_ffffffffffffff08 >> 0x20);
                  uVar12 = uVar12 + 1;
                } while (uVar12 < uVar8 - uVar14);
              }
              plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
              (**(code **)(*plVar3 + 0x78))(plVar3,lVar9,0);
              local_a8 = 0;
              local_a0 = 0;
              local_94 = 1;
              plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
              in_stack_ffffffffffffff08 = CONCAT44(uVar20,param_6[1] + uVar16);
              local_9c = uVar5;
              local_98 = uVar17;
              (**(code **)(*plVar3 + 0x170))
                        (plVar3,param_4,param_5,*param_6 + uVar15,in_stack_ffffffffffffff08,
                         (ulonglong)plVar19 & 0xffffffff00000000,lVar9,0,&local_a8);
            }
            uVar15 = uVar6;
          } while (uVar6 < uVar13);
        }
        uVar16 = uVar1;
      } while (uVar1 < uVar18);
      return;
    }
  }
  plVar19 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 8);
  (**(code **)(*plVar19 + 0x180))
            (plVar19,*(undefined8 *)(param_1 + 0x78),param_5,param_6,param_7,
             CONCAT44(uVar20,param_8),in_stack_ffffffffffffff18 & 0xffffffff00000000);
  return;
}

