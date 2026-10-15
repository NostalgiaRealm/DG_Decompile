/*
 * FUN_18000a024 at 18000a024
 * ulonglong __fastcall FUN_18000a024(ulonglong param_1, longlong * param_2, int param_3, int param_4, uint param_5)
 * Address ranges: 18000a024-18000a54d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18000a024(ulonglong param_1,longlong *param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  undefined4 uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  char cVar10;
  bool bVar11;
  undefined8 in_stack_fffffffffffffe88;
  undefined4 uVar12;
  uint uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  longlong local_148 [34];
  
  uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffe88 >> 0x20);
  FUN_1800067dc(param_1);
  iVar1 = *(int *)(&DAT_1800fda90 + (longlong)param_3 * 4);
  uVar7 = param_5 * *(int *)(&DAT_1800fda58 + (longlong)iVar1 * 8) +
          *(int *)(&DAT_1800fda5c + (longlong)iVar1 * 8);
  bVar11 = *(int *)(param_1 + 0x69c) != 0;
  iVar2 = *(int *)(param_1 + 0x698);
  uVar8 = *(uint *)(param_1 + 0x67cc) & *(uint *)(*param_2 + 0x10);
  if ((*(uint *)(param_1 + 0x67d8) & uVar8) == uVar8) {
    uVar13 = *(uint *)(&DAT_000067dc + param_1);
    FUN_180009634(param_1,uVar8 & uVar13,'\0');
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x170))
              (*(longlong **)(param_1 + 0x28),iVar1,*param_2,param_2[2],CONCAT44(uVar12,param_4),
               uVar7,bVar11);
    FUN_180009588(param_1,uVar8 & uVar13,'\0');
    uVar9 = 0;
    FUN_180009548(param_1,uVar8,'\0');
    uVar9 = uVar9 & 0xffffffff;
  }
  else {
    if ((*(uint *)(param_1 + 0x67d8) & uVar8) == 0) {
      if (param_2[2] == 0) {
        lVar6 = *param_2;
        if ((((*(int *)(lVar6 + 4) == 0) || (!bVar11)) || (*(uint *)(param_1 + 0x360) < 9)) ||
           (*(char *)(param_1 + 0x681b) == '\0')) {
          if ((uVar8 == 1) && (iVar2 = *(int *)(param_1 + 0x6748), *(int *)(lVar6 + 0xc) == iVar2))
          {
            (**(code **)(**(longlong **)(param_1 + 0x28) + 0x38))
                      (*(longlong **)(param_1 + 0x28),iVar1,*param_2,
                       (ulonglong)(uint)(iVar2 * param_4) + (ulonglong)*(uint *)(param_1 + 0x6788) +
                       *(longlong *)(*(longlong *)(&DAT_000066c8 + param_1) + 8),
                       CONCAT44(uVar12,iVar2),uVar7,bVar11);
          }
          else {
            FUN_180009414(param_1,*param_2,uVar8,param_4,(longlong)local_148);
            (**(code **)(**(longlong **)(param_1 + 0x28) + 0x48))
                      (*(longlong **)(param_1 + 0x28),iVar1,param_2[1],local_148,uVar7,bVar11);
          }
        }
        else {
          param_5 = FUN_180012e78(param_1,lVar6);
          lVar6 = FUN_18000ac60((longlong *)(param_1 + 0x348),&param_5);
          bVar4 = FUN_18001e6d4(param_1,uVar7,*(int *)(lVar6 + 0xc));
          if (bVar4) {
            FUN_1800fbea0((undefined1 *)local_148,0,0x110);
            FUN_1800094a8(param_1,*param_2,(longlong)local_148);
            uVar8 = MXCSR;
            uVar15 = 0;
            uVar14 = 0;
            param_5 = 0x3fc0;
            MXCSR = 0x3fc0;
            uVar13 = uVar7;
            FUN_18001eb84(param_1,local_148,*(longlong *)(param_1 + 0xde8),lVar6,
                          -(uint)(iVar2 != 0) & 2 | -(uint)bVar11 & 4 | 1,0,uVar7,param_4,'\0');
            (**(code **)(**(longlong **)(param_1 + 0x28) + 0x38))
                      (*(undefined8 *)(param_1 + 0x28),iVar1,lVar6,*(undefined8 *)(param_1 + 0xde8),
                       CONCAT44(uVar12,*(undefined4 *)(lVar6 + 0xc)),uVar7,uVar13 & 0xffffff00,
                       param_4,uVar14,uVar15);
            uVar9 = 0;
            MXCSR = uVar8;
            param_5 = uVar8;
            goto LAB_18000a186;
          }
        }
      }
      else if ((uVar8 == 1) &&
              (iVar2 = *(int *)(param_1 + 0x6748), *(int *)(*param_2 + 0xc) == iVar2)) {
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x140))
                  (*(longlong **)(param_1 + 0x28),iVar1,*param_2,param_2[2],
                   (ulonglong)(uint)(iVar2 * param_4) + (ulonglong)*(uint *)(param_1 + 0x6788) +
                   *(longlong *)(*(longlong *)(&DAT_000066c8 + param_1) + 8),iVar2,uVar7);
      }
      else {
        FUN_180009414(param_1,*param_2,uVar8,param_4,(longlong)local_148);
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x150))
                  (*(undefined8 *)(param_1 + 0x28),iVar1,param_2[1],param_2[2],local_148,uVar7);
      }
    }
    else {
      uVar5 = FUN_1800096cc(param_1,~*(uint *)(param_1 + 0x67d8) & uVar8,param_4,uVar7);
      if ((char)uVar5 == '\0') {
        uVar9 = 0x8876086d;
        goto LAB_18000a186;
      }
      uVar13 = *(uint *)(&DAT_000067dc + param_1);
      FUN_180009634(param_1,uVar8 & uVar13,'\0');
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x170))
                (*(longlong **)(param_1 + 0x28),iVar1,*param_2,param_2[2],CONCAT44(uVar12,param_4),
                 uVar7,bVar11);
      cVar10 = '\0';
      FUN_180009548(param_1,uVar8,'\0');
      FUN_180009588(param_1,uVar8 & uVar13,cVar10);
    }
    uVar9 = 0;
  }
LAB_18000a186:
  bVar11 = false;
  if ((*(char *)(param_1 + 0xe21) == '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0x18) + 0x7f2) == '\0')) {
    if (*(char *)(param_1 + 0x2cd) == '\0') goto LAB_18000a4c6;
  }
  else {
    bVar11 = true;
  }
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))(*(longlong **)(param_1 + 0x28));
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))
            (*(longlong **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x2c4),
             *(undefined4 *)(param_1 + 0x2c8));
  if ((bVar11) &&
     ((**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))
                (*(longlong **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x2c4),
                 *(undefined4 *)(param_1 + 0x2c8)),
     *(char *)(*(longlong *)(param_1 + 0x18) + 0x7f3) != '\0')) {
    DebugBreak();
  }
LAB_18000a4c6:
  if (*(char *)(param_1 + 0x2ce) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))(*(longlong **)(param_1 + 0x30));
    if (*(longlong *)(param_1 + 0x50) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))(*(longlong **)(param_1 + 0x50));
    }
    *(undefined1 *)(param_1 + 0x2ce) = 1;
  }
  if (*(char *)(param_1 + 0x2cf) != '\0') {
    if (*(int *)(param_1 + 0x4e0) != 0) {
      plVar3 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 8) + 0x70);
      (**(code **)(*plVar3 + 0x40))
                (plVar3,*(undefined4 *)(param_1 + 0x2c4),*(undefined4 *)(param_1 + 0x2c8),1);
    }
    *(undefined1 *)(param_1 + 0x2cf) = 0;
  }
  return uVar9;
}

