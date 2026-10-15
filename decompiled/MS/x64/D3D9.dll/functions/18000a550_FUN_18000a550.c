/*
 * FUN_18000a550 at 18000a550
 * undefined4 __fastcall FUN_18000a550(ulonglong param_1, longlong * param_2, int param_3, int param_4, int param_5, uint param_6, int param_7, uint param_8)
 * Address ranges: 18000a550-18000ac5e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_18000a550(ulonglong param_1,longlong *param_2,int param_3,int param_4,int param_5,uint param_6,
             int param_7,uint param_8)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  bool bVar5;
  undefined4 uVar6;
  longlong lVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  undefined8 in_stack_fffffffffffffe58;
  undefined8 in_stack_fffffffffffffe60;
  undefined4 uVar14;
  undefined8 in_stack_fffffffffffffe68;
  undefined4 uVar15;
  undefined8 in_stack_fffffffffffffe70;
  undefined4 uVar16;
  undefined4 local_168;
  longlong local_158 [35];
  
  uVar6 = (undefined4)((ulonglong)in_stack_fffffffffffffe58 >> 0x20);
  uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffe60 >> 0x20);
  uVar16 = (undefined4)((ulonglong)in_stack_fffffffffffffe70 >> 0x20);
  uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffe68 >> 0x20);
  local_168 = 0;
  FUN_1800067dc(param_1);
  iVar1 = *(int *)(&DAT_1800fda90 + (longlong)param_4 * 4);
  bVar12 = *(int *)(param_1 + 0x69c) != 0;
  iVar2 = *(int *)(param_1 + 0x698);
  bVar13 = *(int *)(*(longlong *)(&DAT_000066c0 + param_1) + 0x54) == 0x66;
  uVar11 = *(uint *)(param_1 + 0x67cc) & *(uint *)(*param_2 + 0x10);
  iVar10 = param_8 * *(int *)(&DAT_1800fda58 + (longlong)iVar1 * 8) +
           *(int *)(&DAT_1800fda5c + (longlong)iVar1 * 8);
  if ((*(uint *)(param_1 + 0x67d8) & uVar11) == uVar11) {
    uVar8 = uVar11 & *(uint *)(&DAT_000067dc + param_1);
    bVar9 = (&DAT_000067e4)[param_1] & 1;
    uVar3 = *(undefined8 *)(*(longlong *)(&DAT_000066c0 + param_1) + 8);
    FUN_180009634(param_1,uVar8,bVar9);
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x178))
              (*(undefined8 *)(param_1 + 0x28),iVar1,*param_2,param_2[2],uVar3,
               CONCAT44(uVar14,param_3),CONCAT44(uVar15,param_7),CONCAT44(uVar16,iVar10),bVar13,
               bVar12);
    FUN_180009548(param_1,uVar11,'\x01');
LAB_18000a69b:
    FUN_180009588(param_1,uVar8,bVar9);
  }
  else if ((*(uint *)(param_1 + 0x67d8) & uVar11) == 0) {
    if (param_2[2] == 0) {
      lVar7 = *param_2;
      if ((((*(int *)(lVar7 + 4) == 0) || (!bVar12)) || (*(uint *)(param_1 + 0x360) < 9)) ||
         (*(char *)(param_1 + 0x681b) == '\0')) {
        if ((uVar11 == 1) && (*(int *)(lVar7 + 0xc) == *(int *)(param_1 + 0x6748))) {
          (**(code **)(**(longlong **)(param_1 + 0x28) + 0x40))
                    (*(undefined8 *)(param_1 + 0x28),iVar1,*param_2,
                     (ulonglong)*(uint *)(param_1 + 0x6788) +
                     *(longlong *)(*(longlong *)(&DAT_000066c8 + param_1) + 8),
                     CONCAT44(uVar6,*(undefined4 *)(param_1 + 0x6748)),CONCAT44(uVar14,param_6),
                     (ulonglong)(((-(uint)bVar13 & 2) + 2) * param_7) +
                     *(longlong *)(*(longlong *)(&DAT_000066c0 + param_1) + 8),
                     CONCAT44(uVar16,iVar10),param_3,bVar13,bVar12);
        }
        else {
          FUN_180009414(param_1,*param_2,uVar11,0,(longlong)local_158);
          (**(code **)(**(longlong **)(param_1 + 0x28) + 0x50))
                    (*(undefined8 *)(param_1 + 0x28),iVar1,param_2[1],local_158,param_6,
                     (ulonglong)(((-(uint)bVar13 & 2) + 2) * param_7) +
                     *(longlong *)(*(longlong *)(&DAT_000066c0 + param_1) + 8),
                     CONCAT44(uVar15,iVar10),CONCAT44(uVar16,param_3),bVar13,bVar12);
        }
      }
      else {
        param_8 = FUN_180012e78(param_1,lVar7);
        lVar7 = FUN_18000ac60((longlong *)(param_1 + 0x348),&param_8);
        bVar5 = FUN_18001e6d4(param_1,param_5 + param_6,*(int *)(lVar7 + 0xc));
        if (bVar5) {
          FUN_1800fbea0((undefined1 *)local_158,0,0x110);
          FUN_1800094a8(param_1,*param_2,(longlong)local_158);
          uVar11 = MXCSR;
          param_8 = 0x3fc0;
          MXCSR = 0x3fc0;
          FUN_18001eb84(param_1,local_158,*(longlong *)(param_1 + 0xde8),lVar7,
                        -(uint)(iVar2 != 0) & 2 | -(uint)bVar12 & 4 | 1,param_5,param_6,
                        param_3 + param_5,'\0');
          (**(code **)(**(longlong **)(param_1 + 0x28) + 0x40))
                    (*(undefined8 *)(param_1 + 0x28),iVar1,lVar7,*(undefined8 *)(param_1 + 0xde8),
                     CONCAT44(uVar6,*(undefined4 *)(lVar7 + 0xc)),CONCAT44(uVar14,param_6),
                     (ulonglong)(((-(uint)bVar13 & 2) + 2) * param_7) +
                     *(longlong *)(*(longlong *)(&DAT_000066c0 + param_1) + 8),
                     CONCAT44(uVar16,iVar10),0,bVar13,0);
          local_168 = 0;
          MXCSR = uVar11;
          param_8 = uVar11;
        }
      }
    }
    else {
      FUN_180009414(param_1,*param_2,uVar11,0,(longlong)local_158);
      if ((uVar11 == 1) && (*(int *)(*param_2 + 0xc) == *(int *)(param_1 + 0x6748))) {
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x148))
                  (*(undefined8 *)(param_1 + 0x28),iVar1,*param_2,param_2[2],
                   (ulonglong)*(uint *)(param_1 + 0x6788) +
                   *(longlong *)(*(longlong *)(&DAT_000066c8 + param_1) + 8),
                   CONCAT44(uVar14,*(undefined4 *)(param_1 + 0x6748)),CONCAT44(uVar15,param_6),
                   (ulonglong)(((-(uint)bVar13 & 2) + 2) * param_7) +
                   *(longlong *)(*(longlong *)(&DAT_000066c0 + param_1) + 8),iVar10,param_3,bVar13);
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x158))
                  (*(undefined8 *)(param_1 + 0x28),iVar1,param_2[1],param_2[2],local_158,
                   CONCAT44(uVar14,param_6),
                   (ulonglong)(((-(uint)bVar13 & 2) + 2) * param_7) +
                   *(longlong *)(*(longlong *)(&DAT_000066c0 + param_1) + 8),CONCAT44(uVar16,iVar10)
                   ,param_3,bVar13);
      }
    }
  }
  else {
    uVar6 = FUN_1800096cc(param_1,~*(uint *)(param_1 + 0x67d8) & uVar11,param_5 + param_3,param_6);
    if ((char)uVar6 != '\0') {
      uVar8 = uVar11 & *(uint *)(&DAT_000067dc + param_1);
      bVar9 = (&DAT_000067e4)[param_1] & 1;
      FUN_180009634(param_1,uVar8,bVar9);
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x178))
                (*(undefined8 *)(param_1 + 0x28),iVar1,*param_2,param_2[2],
                 *(undefined8 *)(*(longlong *)(&DAT_000066c0 + param_1) + 8),
                 CONCAT44(uVar14,param_3),CONCAT44(uVar15,param_7),CONCAT44(uVar16,iVar10),
                 *(int *)(*(longlong *)(&DAT_000066c0 + param_1) + 0x54) == 0x66,bVar12);
      FUN_180009548(param_1,uVar11,'\x01');
      goto LAB_18000a69b;
    }
    local_168 = 0x88760827;
  }
  bVar12 = false;
  if ((*(char *)(param_1 + 0xe21) == '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0x18) + 0x7f2) == '\0')) {
    if (*(char *)(param_1 + 0x2cd) == '\0') goto LAB_18000abdb;
  }
  else {
    bVar12 = true;
  }
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))(*(longlong **)(param_1 + 0x28));
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))
            (*(longlong **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x2c4),
             *(undefined4 *)(param_1 + 0x2c8));
  if ((bVar12) &&
     ((**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))
                (*(longlong **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x2c4),
                 *(undefined4 *)(param_1 + 0x2c8)),
     *(char *)(*(longlong *)(param_1 + 0x18) + 0x7f3) != '\0')) {
    DebugBreak();
  }
LAB_18000abdb:
  if (*(char *)(param_1 + 0x2ce) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))(*(longlong **)(param_1 + 0x30));
    if (*(longlong *)(param_1 + 0x50) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))(*(longlong **)(param_1 + 0x50));
    }
    *(undefined1 *)(param_1 + 0x2ce) = 1;
  }
  if (*(char *)(param_1 + 0x2cf) != '\0') {
    if (*(int *)(param_1 + 0x4e0) != 0) {
      plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 8) + 0x70);
      (**(code **)(*plVar4 + 0x40))
                (plVar4,*(undefined4 *)(param_1 + 0x2c4),*(undefined4 *)(param_1 + 0x2c8),1);
    }
    *(undefined1 *)(param_1 + 0x2cf) = 0;
  }
  return local_168;
}

