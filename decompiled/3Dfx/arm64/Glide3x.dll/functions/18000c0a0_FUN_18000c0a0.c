/*
 * FUN_18000c0a0 at 18000c0a0
 * char __cdecl FUN_18000c0a0(longlong * param_1, uint param_2, uint param_3, longlong * param_4, uint param_5, uint param_6)
 * Address ranges: 18000c0a0-18000c6d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_18000c0a0(longlong *param_1,uint param_2,uint param_3,longlong *param_4,uint param_5,
                  uint param_6)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if (0x4000 < param_3) {
    param_3 = 0x4000;
  }
  bVar3 = false;
  cVar6 = '\x01';
  switch(param_2) {
  case 0:
    iVar11 = 1;
    break;
  case 1:
    iVar11 = 3;
    if ((*(char *)((longlong)param_1 + 0x224) == '\0') || ((int)param_1[0x46] != 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    goto LAB_18000c12c;
  case 2:
    param_3 = param_3 & 0xfffffffe;
    iVar11 = 2;
    break;
  case 3:
  case 5:
    iVar11 = 4;
LAB_18000c12c:
    cVar6 = 1 < param_3;
    break;
  case 4:
    iVar11 = 5;
    if ((*(char *)((longlong)param_1 + 0x224) == '\0') || ((int)param_1[0x46] != 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    cVar6 = 2 < param_3;
    break;
  case 6:
    iVar11 = 4;
    param_3 = (param_3 / 3) * 3;
    break;
  case 7:
    cVar6 = *(char *)((longlong)param_1 + 0x225);
    iVar11 = 5;
    break;
  case 8:
    cVar6 = *(char *)((longlong)param_1 + 0x226);
    iVar11 = 4;
    break;
  default:
    iVar11 = 0;
    cVar6 = '\0';
  }
  if (param_3 == 0) {
    return cVar6;
  }
  if (cVar6 != '\0') {
    if (((*(char *)((longlong)param_1 + 0x224) == '\0') || ((int)param_1[0x46] == 0)) ||
       (bVar4 = true, param_1[0x49] == param_1[0x4d])) {
      bVar4 = false;
    }
    if (*(int *)((longlong)param_1 + 0x274) != iVar11 || bVar3) {
      (**(code **)(*param_1 + 8))(param_1,0,0);
      *(int *)((longlong)param_1 + 0x274) = iVar11;
      bVar4 = false;
    }
    *(undefined1 *)((longlong)param_1 + 0x224) = 0;
    *(undefined2 *)((longlong)param_1 + 0x225) = 0;
    switch(param_2) {
    case 1:
    case 4:
      *(undefined1 *)((longlong)param_1 + 0x224) = 1;
      if (bVar4) {
        FUN_180014ce8(param_1,0,1);
        *(int *)param_1[0x4d] = (int)param_1[0x46];
        param_1[0x4d] = param_1[0x4d] + 4;
      }
    case 0:
    case 2:
    case 6:
      FUN_180014ce8(param_1,param_3,param_3);
      *(uint *)(param_1 + 0x4f) = (int)param_1[0x4e] - param_3;
      uVar8 = param_3;
      do {
        iVar11 = (int)param_1[0x4e] - uVar8;
        uVar8 = uVar8 - 1;
        *(int *)param_1[0x4d] = iVar11;
        param_1[0x4d] = param_1[0x4d] + 4;
      } while (uVar8 != 0);
      break;
    case 3:
    case 5:
      FUN_180014ce8(param_1,param_3,param_3 * 3 - 6);
      *(uint *)(param_1 + 0x4f) = (int)param_1[0x4e] - param_3;
      for (uVar8 = param_3 - 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(uint *)param_1[0x4d] = (int)param_1[0x4e] - param_3;
        *(uint *)(param_1[0x4d] + 4) = (int)param_1[0x4e] + ~uVar8;
        *(uint *)(param_1[0x4d] + 8) = (int)param_1[0x4e] - uVar8;
        param_1[0x4d] = param_1[0x4d] + 0xc;
      }
      break;
    case 7:
      *(undefined1 *)((longlong)param_1 + 0x224) = 1;
      if ((int)param_1[0x4f] != -1) {
        if (*(uint *)((longlong)param_1 + 0x234) < param_3 || *(uint *)(param_1 + 0x47) < param_3) {
          (**(code **)*param_1)
                    (param_1,*(uint *)((longlong)param_1 + 0x234) < param_3,
                     *(uint *)(param_1 + 0x47) < param_3);
        }
      }
      if ((int)param_1[0x4f] == -1) {
        FUN_180014ce8(param_1,param_3 + 2,param_3 + 2);
        puVar7 = (undefined8 *)param_1[0x4c];
        iVar2 = (int)param_1[0x4e] - param_3;
        uVar14 = *(undefined8 *)((longlong)param_1 + 0x184);
        uVar13 = *(undefined8 *)((longlong)param_1 + 0x19c);
        uVar12 = *(undefined8 *)((longlong)param_1 + 0x194);
        iVar11 = iVar2 + -2;
        puVar7[1] = *(undefined8 *)((longlong)param_1 + 0x18c);
        *puVar7 = uVar14;
        puVar7[3] = uVar13;
        puVar7[2] = uVar12;
        uVar14 = *(undefined8 *)((longlong)param_1 + 0x1a4);
        uVar13 = *(undefined8 *)((longlong)param_1 + 0x1bc);
        uVar12 = *(undefined8 *)((longlong)param_1 + 0x1b4);
        puVar7[5] = *(undefined8 *)((longlong)param_1 + 0x1ac);
        puVar7[4] = uVar14;
        puVar7[7] = uVar13;
        puVar7[6] = uVar12;
        uVar12 = *(undefined8 *)((longlong)param_1 + 0x1c4);
        puVar7[9] = *(undefined8 *)((longlong)param_1 + 0x1cc);
        puVar7[8] = uVar12;
        lVar10 = param_1[0x4c];
        uVar14 = *(undefined8 *)((longlong)param_1 + 0x1d4);
        uVar13 = *(undefined8 *)((longlong)param_1 + 0x1ec);
        uVar12 = *(undefined8 *)((longlong)param_1 + 0x1e4);
        *(undefined8 *)(lVar10 + 0x58) = *(undefined8 *)((longlong)param_1 + 0x1dc);
        *(undefined8 *)(lVar10 + 0x50) = uVar14;
        *(undefined8 *)(lVar10 + 0x68) = uVar13;
        *(undefined8 *)(lVar10 + 0x60) = uVar12;
        uVar14 = *(undefined8 *)((longlong)param_1 + 500);
        uVar13 = *(undefined8 *)((longlong)param_1 + 0x20c);
        uVar12 = *(undefined8 *)((longlong)param_1 + 0x204);
        *(undefined8 *)(lVar10 + 0x78) = *(undefined8 *)((longlong)param_1 + 0x1fc);
        *(undefined8 *)(lVar10 + 0x70) = uVar14;
        *(undefined8 *)(lVar10 + 0x88) = uVar13;
        *(undefined8 *)(lVar10 + 0x80) = uVar12;
        uVar12 = *(undefined8 *)((longlong)param_1 + 0x214);
        *(undefined8 *)(lVar10 + 0x98) = *(undefined8 *)((longlong)param_1 + 0x21c);
        *(undefined8 *)(lVar10 + 0x90) = uVar12;
        *(int *)(param_1 + 0x4f) = iVar11;
        param_1[0x4c] = param_1[0x4c] + 0xa0;
        *(int *)param_1[0x4d] = iVar11;
        *(int *)(param_1[0x4d] + 4) = iVar2 + -1;
        param_1[0x4d] = param_1[0x4d] + 8;
        uVar8 = param_3;
      }
      else {
        FUN_180014ce8(param_1,param_3,param_3);
        uVar8 = param_3;
      }
      do {
        uVar1 = uVar8 - 1;
        *(uint *)param_1[0x4d] = (int)param_1[0x4e] - uVar8;
        param_1[0x4d] = param_1[0x4d] + 4;
        uVar8 = uVar1;
      } while (uVar1 != 0);
      break;
    case 8:
      if ((int)param_1[0x4f] != -1) {
        if (*(uint *)((longlong)param_1 + 0x234) < param_3 ||
            *(uint *)(param_1 + 0x47) < param_3 * 3) {
          (**(code **)*param_1)
                    (param_1,*(uint *)((longlong)param_1 + 0x234) < param_3,
                     *(uint *)(param_1 + 0x47) < param_3 * 3);
        }
      }
      iVar11 = (int)param_1[0x4f];
      if (iVar11 == -1) {
        FUN_180014ce8(param_1,param_3 + 2,param_3 * 3);
        puVar7 = (undefined8 *)param_1[0x4c];
        iVar11 = ((int)param_1[0x4e] - param_3) + -2;
        uVar14 = *(undefined8 *)((longlong)param_1 + 0x184);
        uVar13 = *(undefined8 *)((longlong)param_1 + 0x19c);
        uVar12 = *(undefined8 *)((longlong)param_1 + 0x194);
        puVar7[1] = *(undefined8 *)((longlong)param_1 + 0x18c);
        *puVar7 = uVar14;
        puVar7[3] = uVar13;
        puVar7[2] = uVar12;
        uVar14 = *(undefined8 *)((longlong)param_1 + 0x1a4);
        uVar13 = *(undefined8 *)((longlong)param_1 + 0x1bc);
        uVar12 = *(undefined8 *)((longlong)param_1 + 0x1b4);
        puVar7[5] = *(undefined8 *)((longlong)param_1 + 0x1ac);
        puVar7[4] = uVar14;
        puVar7[7] = uVar13;
        puVar7[6] = uVar12;
        uVar12 = *(undefined8 *)((longlong)param_1 + 0x1c4);
        puVar7[9] = *(undefined8 *)((longlong)param_1 + 0x1cc);
        puVar7[8] = uVar12;
        lVar10 = param_1[0x4c];
        uVar14 = *(undefined8 *)((longlong)param_1 + 0x1d4);
        uVar13 = *(undefined8 *)((longlong)param_1 + 0x1ec);
        uVar12 = *(undefined8 *)((longlong)param_1 + 0x1e4);
        *(undefined8 *)(lVar10 + 0x58) = *(undefined8 *)((longlong)param_1 + 0x1dc);
        *(undefined8 *)(lVar10 + 0x50) = uVar14;
        *(undefined8 *)(lVar10 + 0x68) = uVar13;
        *(undefined8 *)(lVar10 + 0x60) = uVar12;
        uVar14 = *(undefined8 *)((longlong)param_1 + 500);
        uVar13 = *(undefined8 *)((longlong)param_1 + 0x20c);
        uVar12 = *(undefined8 *)((longlong)param_1 + 0x204);
        *(undefined8 *)(lVar10 + 0x78) = *(undefined8 *)((longlong)param_1 + 0x1fc);
        *(undefined8 *)(lVar10 + 0x70) = uVar14;
        *(undefined8 *)(lVar10 + 0x88) = uVar13;
        *(undefined8 *)(lVar10 + 0x80) = uVar12;
        uVar12 = *(undefined8 *)((longlong)param_1 + 0x214);
        *(undefined8 *)(lVar10 + 0x98) = *(undefined8 *)((longlong)param_1 + 0x21c);
        *(undefined8 *)(lVar10 + 0x90) = uVar12;
        *(int *)(param_1 + 0x4f) = iVar11;
        param_1[0x4c] = param_1[0x4c] + 0xa0;
        uVar8 = param_3;
      }
      else {
        FUN_180014ce8(param_1,param_3,param_3 * 3);
        uVar8 = param_3;
      }
      do {
        *(int *)param_1[0x4d] = iVar11;
        *(uint *)(param_1[0x4d] + 4) = (int)param_1[0x4e] + ~uVar8;
        uVar1 = uVar8 - 1;
        *(uint *)(param_1[0x4d] + 8) = (int)param_1[0x4e] - uVar8;
        param_1[0x4d] = param_1[0x4d] + 0xc;
        uVar8 = uVar1;
      } while (uVar1 != 0);
    }
    if ((param_6 & 1) == 0) {
      if (param_5 == 0) {
        FUN_18000bd78((longlong)param_1,param_4,param_3);
      }
      else {
        FUN_18000bc30((longlong)param_1,*param_4,param_5,param_3);
      }
    }
    else {
      plVar5 = param_4;
      uVar8 = param_3;
      if (param_5 == 0) {
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          plVar9 = plVar5 + 1;
          FUN_18000bec8((longlong)param_1,(undefined8 *)*plVar5,0);
          param_1[0x4c] = param_1[0x4c] + 0x50;
          plVar5 = plVar9;
        }
      }
      else {
        FUN_18000bfa8((longlong)param_1,(undefined8 *)*param_4,param_5,param_3);
      }
    }
    if ((param_2 - 3 & 0xfffffffd) == 0) {
      FUN_18000ba18((longlong)param_1,(undefined8 *)*param_4,0,param_6 & 0xff);
    }
    else {
      if ((param_2 < 8) && ((0x90U >> (ulonglong)(param_2 & 0x1f) & 1) != 0)) {
        if (param_3 < 2) {
          *(undefined8 *)((longlong)param_1 + 0x18c) = *(undefined8 *)((longlong)param_1 + 0x1dc);
          *(undefined8 *)((longlong)param_1 + 0x184) = *(undefined8 *)((longlong)param_1 + 0x1d4);
          *(undefined8 *)((longlong)param_1 + 0x19c) = *(undefined8 *)((longlong)param_1 + 0x1ec);
          *(undefined8 *)((longlong)param_1 + 0x194) = *(undefined8 *)((longlong)param_1 + 0x1e4);
          *(undefined8 *)((longlong)param_1 + 0x1ac) = *(undefined8 *)((longlong)param_1 + 0x1fc);
          *(undefined8 *)((longlong)param_1 + 0x1a4) = *(undefined8 *)((longlong)param_1 + 500);
          *(undefined8 *)((longlong)param_1 + 0x1bc) = *(undefined8 *)((longlong)param_1 + 0x20c);
          *(undefined8 *)((longlong)param_1 + 0x1b4) = *(undefined8 *)((longlong)param_1 + 0x204);
          *(undefined8 *)((longlong)param_1 + 0x1cc) = *(undefined8 *)((longlong)param_1 + 0x21c);
          *(undefined8 *)((longlong)param_1 + 0x1c4) = *(undefined8 *)((longlong)param_1 + 0x214);
        }
        else {
          if (param_5 == 0) {
            puVar7 = (undefined8 *)param_4[param_3 - 2];
          }
          else {
            puVar7 = (undefined8 *)(*param_4 + (ulonglong)((param_3 - 2) * param_5));
          }
          FUN_18000ba18((longlong)param_1,puVar7,0,param_6 & 0xff);
        }
        if (param_5 == 0) {
          puVar7 = (undefined8 *)param_4[param_3 - 1];
        }
        else {
          puVar7 = (undefined8 *)(*param_4 + (ulonglong)((param_3 - 1) * param_5));
        }
        FUN_18000ba18((longlong)param_1,puVar7,1,param_6 & 0xff);
        *(undefined1 *)((longlong)param_1 + 0x225) = 1;
        return cVar6;
      }
      if (param_2 != 8) {
        return cVar6;
      }
    }
    if (param_5 == 0) {
      puVar7 = (undefined8 *)param_4[param_3 - 1];
    }
    else {
      puVar7 = (undefined8 *)(*param_4 + (ulonglong)((param_3 - 1) * param_5));
    }
    FUN_18000ba18((longlong)param_1,puVar7,1,param_6 & 0xff);
    *(undefined1 *)((longlong)param_1 + 0x226) = 1;
    return cVar6;
  }
  return '\0';
}

