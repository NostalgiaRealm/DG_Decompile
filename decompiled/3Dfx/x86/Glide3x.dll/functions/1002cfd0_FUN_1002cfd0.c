/*
 * FUN_1002cfd0 at 1002cfd0
 * undefined4 __fastcall FUN_1002cfd0(void * param_1)
 * Address ranges: 1002cfd0-1002d202
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1002cfd0(void *param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined3 extraout_var;
  uint uVar4;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  byte bVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  undefined4 uStack_8;
  
  cVar1 = FUN_1002d3f9(param_1);
  uVar4 = CONCAT31(extraout_var,cVar1);
  bVar2 = 0;
  if (cVar1 != '\0') {
    bVar2 = FUN_1002ccc2((int)param_1);
    iVar8 = *(int *)((int)param_1 + 0x40);
    uVar4 = (uint)bVar2;
    uVar6 = 0;
    if (iVar8 == 5) {
      uVar6 = uVar4;
    }
    bVar2 = 0;
    if ((char)uVar6 != '\0') {
      uStack_8._2_1_ = 0;
      uStack_8 = 0;
      do {
        bVar2 = (byte)uVar6;
        bVar3 = *(byte *)((int)param_1 + 0x2c) | uStack_8._2_1_;
        uVar4 = CONCAT31((int3)(uVar4 >> 8),bVar3);
        if (bVar3 != 0) break;
        if (iVar8 == 0) {
          bVar2 = FUN_1002ccc2((int)param_1);
          uVar4 = CONCAT31(extraout_var_03,bVar2);
          iVar8 = *(int *)((int)param_1 + 0x40);
          uStack_8 = CONCAT13(bVar2,(undefined3)uStack_8);
          if ((((iVar8 == 0) || (iVar8 == 1)) || (iVar8 == 6)) || ((iVar8 == 4 || (iVar8 == 3)))) {
            uVar6 = (uint)bVar2;
            if (bVar2 != 0) {
              if (iVar8 == 0) {
                bVar3 = FUN_1002d4ea(param_1,0x1000,*(uint *)((int)param_1 + 0x3c));
                uVar6 = (uint)(bVar3 & bVar2);
                goto LAB_1002d106;
              }
              if (iVar8 == 1) {
                bVar3 = FUN_1002d4ea(param_1,0x1000,*(uint *)((int)param_1 + 0x3c));
                bVar3 = bVar3 & bVar2;
                goto LAB_1002d13b;
              }
              if (iVar8 == 6) {
                bVar3 = FUN_1002d58e(param_1,6,*(uint *)((int)param_1 + 0x3c));
                iVar8 = FUN_1002d6af(param_1,*(undefined4 **)((int)param_1 + 0x34),
                                     *(uint *)((int)param_1 + 0x38));
                if (iVar8 != -1) {
                  *(int *)(*(int *)(*(int *)((int)param_1 + 0x54) * 0x1c + 0x10 +
                                   *(int *)(*(int *)((int)param_1 + 0x5c) + 4 +
                                           *(int *)((int)param_1 + 0x50) * 0x10)) + 4 +
                          *(int *)((int)param_1 + 0x58) * 8) = iVar8;
                }
                uVar4 = 0;
                bVar5 = 0;
                if (iVar8 != -1) {
                  bVar5 = bVar3 & bVar2;
                }
                uVar6 = (uint)bVar5;
              }
              else if ((iVar8 == 3) || (iVar8 == 4)) {
                uVar4 = *(uint *)((int)param_1 + 0x3c);
                iVar8 = 0x1000;
                goto LAB_1002d1b1;
              }
            }
          }
          else {
LAB_1002d0e1:
            uVar6 = 0;
          }
        }
        else if (iVar8 == 1) {
LAB_1002d03b:
          bVar2 = FUN_1002ccc2((int)param_1);
          uVar4 = CONCAT31(extraout_var_00,bVar2);
          iVar8 = *(int *)((int)param_1 + 0x40);
          uVar6 = (uint)bVar2;
          if (iVar8 != 0) {
            if (iVar8 != 1) {
              bVar7 = iVar8 == 4;
LAB_1002d070:
              if ((!bVar7) && (iVar8 != 3)) goto LAB_1002d0e1;
            }
            bVar3 = (byte)uVar6;
            if (iVar8 != 0) {
              if (iVar8 == 1) {
LAB_1002d13b:
                bVar2 = FUN_1002d4ea(param_1,0,*(uint *)((int)param_1 + 0x38));
                uVar4 = CONCAT31(extraout_var_04,bVar2);
                uVar6 = (uint)(bVar3 & bVar2);
              }
              goto LAB_1002d1bd;
            }
          }
LAB_1002d106:
          FUN_10052930(*(undefined4 **)((int)param_1 + 0x34) + 0x400,
                       *(undefined4 **)((int)param_1 + 0x34),*(uint *)((int)param_1 + 0x38));
          uVar4 = *(uint *)((int)param_1 + 0x38);
          *(uint *)((int)param_1 + 0x3c) = uVar4;
        }
        else if (iVar8 == 4) {
          bVar2 = FUN_1002ccc2((int)param_1);
          uVar4 = CONCAT31(extraout_var_02,bVar2);
          iVar8 = *(int *)((int)param_1 + 0x40);
          uStack_8 = CONCAT13(bVar2,(undefined3)uStack_8);
          if ((iVar8 != 0) && (iVar8 != 1)) goto LAB_1002d0e1;
          uVar6 = (uint)bVar2;
          if (iVar8 == 0) goto LAB_1002d106;
          if (iVar8 == 1) {
            uVar4 = *(uint *)((int)param_1 + 0x38);
            iVar8 = 0;
LAB_1002d1b1:
            bVar2 = FUN_1002d4ea(param_1,iVar8,uVar4);
            uVar4 = CONCAT31(extraout_var_05,bVar2 & uStack_8._3_1_);
            uVar6 = (uint)(bVar2 & uStack_8._3_1_);
          }
        }
        else {
          if (iVar8 == 5) {
            bVar2 = FUN_1002ccc2((int)param_1);
            uVar4 = CONCAT31(extraout_var_01,bVar2);
            iVar8 = *(int *)((int)param_1 + 0x40);
            uVar6 = (uint)bVar2;
            if (iVar8 != 0) {
              bVar7 = iVar8 == 1;
              goto LAB_1002d070;
            }
            goto LAB_1002d106;
          }
          if (iVar8 == 6) goto LAB_1002d03b;
        }
LAB_1002d1bd:
        iVar8 = *(int *)((int)param_1 + 0x40);
        if (*(char *)((int)param_1 + 0x2c) == '\0') {
          cVar1 = **(char **)((int)param_1 + 0x24);
          uVar4 = CONCAT31((int3)((uint)*(char **)((int)param_1 + 0x24) >> 8),cVar1);
          if ((cVar1 == '\r') || (uStack_8 = 0, cVar1 == '\n')) {
            uStack_8 = 0x10000;
          }
        }
        bVar2 = 0;
      } while ((char)uVar6 != '\0');
      if ((iVar8 == 0) && (*(int *)((int)param_1 + 0x3c) != 0)) {
        bVar3 = FUN_1002d4ea(param_1,0x1000,*(uint *)((int)param_1 + 0x3c));
        uVar4 = CONCAT31(extraout_var_06,bVar3);
        bVar2 = bVar2 & bVar3;
      }
    }
  }
  return CONCAT31((int3)(uVar4 >> 8),bVar2);
}

