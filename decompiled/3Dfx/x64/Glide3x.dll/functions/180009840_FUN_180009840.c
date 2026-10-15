/*
 * FUN_180009840 at 180009840
 * char __fastcall FUN_180009840(longlong * param_1, ulonglong param_2, uint param_3, longlong * param_4, uint param_5, char param_6)
 * Address ranges: 180009840-180009de4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_180009840(longlong *param_1,ulonglong param_2,uint param_3,longlong *param_4,uint param_5,
                  char param_6)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined7 uVar5;
  undefined4 *puVar4;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong *plVar10;
  char cVar11;
  uint uVar12;
  char cVar13;
  bool bVar14;
  
  uVar8 = (ulonglong)param_3;
  iVar2 = (int)param_2;
  if (0x4000 < param_3) {
    uVar8 = 0x4000;
  }
  cVar13 = '\x01';
  cVar11 = '\0';
  cVar1 = '\0';
  iVar6 = 0;
  if (iVar2 == 0) {
    iVar6 = 1;
  }
  else {
    uVar7 = (uint)uVar8;
    if (iVar2 == 1) {
      iVar9 = 3;
      if ((*(char *)((longlong)param_1 + 0x224) != '\0') && ((int)param_1[0x46] == 0)) {
        cVar1 = '\x01';
      }
      goto LAB_180009929;
    }
    if (iVar2 == 2) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe);
      iVar6 = 2;
      goto LAB_180009937;
    }
    iVar9 = 4;
    if (iVar2 == 3) {
LAB_180009929:
      iVar6 = iVar9;
      bVar14 = uVar7 < 2;
      cVar11 = cVar1;
    }
    else {
      if (iVar2 != 4) {
        if (iVar2 != 5) {
          if (iVar2 == 6) {
            param_2 = uVar8 / 3;
            uVar8 = (ulonglong)(uint)((int)param_2 * 3);
            iVar6 = 4;
          }
          else if (iVar2 == 7) {
            cVar13 = *(char *)((longlong)param_1 + 0x225);
            iVar6 = 5;
          }
          else {
            cVar13 = cVar11;
            if (iVar2 == 8) {
              cVar13 = *(char *)((longlong)param_1 + 0x226);
              iVar6 = 4;
            }
          }
          goto LAB_180009937;
        }
        goto LAB_180009929;
      }
      iVar6 = 5;
      if ((*(char *)((longlong)param_1 + 0x224) != '\0') && ((int)param_1[0x46] == 0)) {
        cVar1 = '\x01';
      }
      bVar14 = uVar7 < 3;
      cVar11 = cVar1;
    }
    cVar13 = !bVar14;
  }
LAB_180009937:
  uVar7 = (uint)uVar8;
  if (uVar7 == 0) {
    return cVar13;
  }
  if (cVar13 == '\0') {
    return '\0';
  }
  if (((*(char *)((longlong)param_1 + 0x224) == '\0') || ((int)param_1[0x46] == 0)) ||
     (param_2 = CONCAT71((int7)(param_2 >> 8),1), param_1[0x49] == param_1[0x4d])) {
    param_2 = param_2 & 0xffffffffffffff00;
  }
  if ((*(int *)((longlong)param_1 + 0x274) != iVar6) || (cVar11 != '\0')) {
    uVar3 = 0;
    (**(code **)(*param_1 + 8))(param_1,0);
    param_2 = uVar3 & 0xffffffffffffff00;
    *(int *)((longlong)param_1 + 0x274) = iVar6;
  }
  *(undefined2 *)((longlong)param_1 + 0x225) = 0;
  *(undefined1 *)((longlong)param_1 + 0x224) = 0;
  if (iVar2 == 0) {
LAB_180009c0d:
    FUN_180012898(param_1,uVar7,uVar7);
    *(uint *)(param_1 + 0x4f) = (int)param_1[0x4e] - uVar7;
    uVar3 = uVar8;
    do {
      *(int *)param_1[0x4d] = (int)param_1[0x4e] - (int)uVar3;
      param_1[0x4d] = param_1[0x4d] + 4;
      uVar12 = (int)uVar3 - 1;
      uVar3 = (ulonglong)uVar12;
    } while (uVar12 != 0);
  }
  else {
    if (iVar2 == 1) {
LAB_180009bde:
      *(undefined1 *)((longlong)param_1 + 0x224) = 1;
      if ((char)param_2 != '\0') {
        FUN_180012898(param_1,0,1);
        *(int *)param_1[0x4d] = (int)param_1[0x46];
        param_1[0x4d] = param_1[0x4d] + 4;
      }
      goto LAB_180009c0d;
    }
    if (iVar2 == 2) goto LAB_180009c0d;
    if (iVar2 == 3) {
LAB_180009b6e:
      FUN_180012898(param_1,uVar7,(uVar7 - 2) * 3);
      *(uint *)(param_1 + 0x4f) = (int)param_1[0x4e] - uVar7;
      for (uVar12 = uVar7 - 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(uint *)param_1[0x4d] = (int)param_1[0x4e] - uVar7;
        *(uint *)(param_1[0x4d] + 4) = ~uVar12 + (int)param_1[0x4e];
        *(uint *)(param_1[0x4d] + 8) = (int)param_1[0x4e] - uVar12;
        param_1[0x4d] = param_1[0x4d] + 0xc;
      }
    }
    else {
      if (iVar2 == 4) goto LAB_180009bde;
      if (iVar2 == 5) goto LAB_180009b6e;
      if (iVar2 == 6) goto LAB_180009c0d;
      uVar5 = (undefined7)(param_2 >> 8);
      if (iVar2 != 7) {
        if (iVar2 == 8) {
          if ((int)param_1[0x4f] != -1) {
            if ((*(uint *)((longlong)param_1 + 0x234) < uVar7) ||
               (*(uint *)(param_1 + 0x47) < uVar7 * 3)) {
              (**(code **)*param_1)
                        (param_1,CONCAT71(uVar5,*(uint *)((longlong)param_1 + 0x234) < uVar7),
                         *(uint *)(param_1 + 0x47) < uVar7 * 3);
            }
          }
          iVar6 = (int)param_1[0x4f];
          if (iVar6 == -1) {
            FUN_180012898(param_1,uVar7 + 2,uVar7 * 3);
            iVar6 = ((int)param_1[0x4e] - uVar7) + -2;
            FUN_1800092f8((longlong)param_1);
            *(int *)(param_1 + 0x4f) = iVar6;
            uVar3 = uVar8;
          }
          else {
            FUN_180012898(param_1,uVar7,uVar7 * 3);
            uVar3 = uVar8;
          }
          do {
            uVar12 = (uint)uVar3;
            *(int *)param_1[0x4d] = iVar6;
            *(uint *)(param_1[0x4d] + 4) = ~uVar12 + (int)param_1[0x4e];
            *(uint *)(param_1[0x4d] + 8) = (int)param_1[0x4e] - uVar12;
            param_1[0x4d] = param_1[0x4d] + 0xc;
            uVar3 = (ulonglong)(uVar12 - 1);
          } while (uVar12 - 1 != 0);
        }
        goto LAB_180009c46;
      }
      *(undefined1 *)((longlong)param_1 + 0x224) = 1;
      if ((int)param_1[0x4f] == -1) {
LAB_180009af3:
        FUN_180012898(param_1,uVar7 + 2,uVar7 + 2);
        iVar9 = (int)param_1[0x4e] - uVar7;
        iVar6 = iVar9 + -2;
        FUN_1800092f8((longlong)param_1);
        *(int *)(param_1 + 0x4f) = iVar6;
        *(int *)param_1[0x4d] = iVar6;
        *(int *)(param_1[0x4d] + 4) = iVar9 + -1;
        param_1[0x4d] = param_1[0x4d] + 8;
        uVar3 = uVar8;
      }
      else {
        if ((*(uint *)((longlong)param_1 + 0x234) < uVar7) || (*(uint *)(param_1 + 0x47) < uVar7)) {
          (**(code **)*param_1)
                    (param_1,CONCAT71(uVar5,*(uint *)((longlong)param_1 + 0x234) < uVar7),
                     *(uint *)(param_1 + 0x47) < uVar7);
        }
        if ((int)param_1[0x4f] == -1) goto LAB_180009af3;
        FUN_180012898(param_1,uVar7,uVar7);
        uVar3 = uVar8;
      }
      do {
        *(int *)param_1[0x4d] = (int)param_1[0x4e] - (int)uVar3;
        param_1[0x4d] = param_1[0x4d] + 4;
        uVar12 = (int)uVar3 - 1;
        uVar3 = (ulonglong)uVar12;
      } while (uVar12 != 0);
    }
  }
LAB_180009c46:
  if (param_6 == '\0') {
    if (param_5 == 0) {
      FUN_18000967c((longlong)param_1,param_4,uVar7);
    }
    else {
      FUN_180009588((longlong)param_1,*param_4,(ulonglong)param_5,uVar7);
    }
  }
  else {
    plVar10 = param_4;
    uVar12 = uVar7;
    if (param_5 == 0) {
      while (uVar12 != 0) {
        FUN_180009770((longlong)param_1,(undefined4 *)*plVar10,0);
        param_1[0x4c] = param_1[0x4c] + 0x50;
        uVar12 = (int)uVar8 - 1;
        uVar8 = (ulonglong)uVar12;
        plVar10 = plVar10 + 1;
      }
    }
    else {
      FUN_1800097f0((longlong)param_1,(undefined4 *)*param_4,(ulonglong)param_5,uVar7);
    }
  }
  if (iVar2 != 3) {
    if (iVar2 == 4) {
LAB_180009cf6:
      if (uVar7 < 2) {
        *(undefined8 *)((longlong)param_1 + 0x184) = *(undefined8 *)((longlong)param_1 + 0x1d4);
        *(undefined8 *)((longlong)param_1 + 0x18c) = *(undefined8 *)((longlong)param_1 + 0x1dc);
        *(undefined8 *)((longlong)param_1 + 0x194) = *(undefined8 *)((longlong)param_1 + 0x1e4);
        *(undefined8 *)((longlong)param_1 + 0x19c) = *(undefined8 *)((longlong)param_1 + 0x1ec);
        *(undefined8 *)((longlong)param_1 + 0x1a4) = *(undefined8 *)((longlong)param_1 + 500);
        *(undefined8 *)((longlong)param_1 + 0x1ac) = *(undefined8 *)((longlong)param_1 + 0x1fc);
        *(undefined8 *)((longlong)param_1 + 0x1b4) = *(undefined8 *)((longlong)param_1 + 0x204);
        *(undefined8 *)((longlong)param_1 + 0x1bc) = *(undefined8 *)((longlong)param_1 + 0x20c);
        *(undefined8 *)((longlong)param_1 + 0x1c4) = *(undefined8 *)((longlong)param_1 + 0x214);
        *(undefined8 *)((longlong)param_1 + 0x1cc) = *(undefined8 *)((longlong)param_1 + 0x21c);
      }
      else {
        if (param_5 == 0) {
          puVar4 = (undefined4 *)param_4[uVar7 - 2];
        }
        else {
          puVar4 = (undefined4 *)((ulonglong)((uVar7 - 2) * param_5) + *param_4);
        }
        FUN_1800091fc((longlong)param_1,puVar4,0,param_6);
      }
      if (param_5 == 0) {
        puVar4 = (undefined4 *)param_4[uVar7 - 1];
      }
      else {
        puVar4 = (undefined4 *)((ulonglong)((uVar7 - 1) * param_5) + *param_4);
      }
      FUN_1800091fc((longlong)param_1,puVar4,1,param_6);
      *(undefined1 *)((longlong)param_1 + 0x225) = 1;
      return cVar13;
    }
    if (iVar2 != 5) {
      if (iVar2 == 7) goto LAB_180009cf6;
      if (iVar2 != 8) {
        return cVar13;
      }
      goto LAB_180009da5;
    }
  }
  FUN_1800091fc((longlong)param_1,(undefined4 *)*param_4,0,param_6);
LAB_180009da5:
  if (param_5 == 0) {
    puVar4 = (undefined4 *)param_4[uVar7 - 1];
  }
  else {
    puVar4 = (undefined4 *)((ulonglong)((uVar7 - 1) * param_5) + *param_4);
  }
  FUN_1800091fc((longlong)param_1,puVar4,1,param_6);
  *(undefined1 *)((longlong)param_1 + 0x226) = 1;
  return cVar13;
}

