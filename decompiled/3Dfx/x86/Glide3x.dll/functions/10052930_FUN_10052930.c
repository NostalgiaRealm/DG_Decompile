/*
 * FUN_10052930 at 10052930
 * undefined4 * __cdecl FUN_10052930(undefined4 * param_1, undefined4 * param_2, uint param_3)
 * Address ranges: 10052930-1005298a;1005298c-100529a9;100529ac-100529b4;100529b8-100529bf;100529cc-100529f5;100529f8-10052a39;10052a5c-10052aa6;10052ab8-10052ac1;10052ac4-10052ad1;10052ad4-10052b01;10052b04-10052b2a;10052b2c-10052b36;10052b38-10052b55;10052b58-10052b5f;10052b6c-10052b8d;10052b90-10052be9;10052c0c-10052c56;10052c68-10052c71;10052c74-10052c99;10052c9c-10052db1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __cdecl FUN_10052930(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar19 = (undefined4 *)((int)param_2 + (param_3 - 4));
    puVar18 = (undefined4 *)((int)param_1 + (param_3 - 4));
    if (((uint)puVar18 & 3) == 0) {
      uVar17 = param_3 >> 2;
      uVar16 = param_3 & 3;
      if (7 < uVar17) {
        for (; uVar17 != 0; uVar17 = uVar17 - 1) {
          *puVar18 = *puVar19;
          puVar19 = puVar19 + -1;
          puVar18 = puVar18 + -1;
        }
        switch(uVar16) {
        case 0:
          return param_1;
        case 2:
          goto switchD_10052b28_caseD_2;
        case 3:
          goto switchD_10052b28_caseD_3;
        }
        goto switchD_10052b28_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_10052b28_caseD_0;
      case 1:
        goto switchD_10052b28_caseD_1;
      case 2:
        goto switchD_10052b28_caseD_2;
      case 3:
        goto switchD_10052b28_caseD_3;
      default:
        uVar17 = param_3 - ((uint)puVar18 & 3);
        switch((uint)puVar18 & 3) {
        case 1:
          uVar16 = uVar17 & 3;
          *(undefined1 *)((int)puVar18 + 3) = *(undefined1 *)((int)puVar19 + 3);
          puVar19 = (undefined4 *)((int)puVar19 + -1);
          uVar17 = uVar17 >> 2;
          puVar18 = (undefined4 *)((int)puVar18 - 1);
          if (7 < uVar17) {
            for (; uVar17 != 0; uVar17 = uVar17 - 1) {
              *puVar18 = *puVar19;
              puVar19 = puVar19 + -1;
              puVar18 = puVar18 + -1;
            }
            switch(uVar16) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10052b28_caseD_2;
            case 3:
              goto switchD_10052b28_caseD_3;
            }
            goto switchD_10052b28_caseD_1;
          }
          break;
        case 2:
          uVar16 = uVar17 & 3;
          *(undefined1 *)((int)puVar18 + 3) = *(undefined1 *)((int)puVar19 + 3);
          uVar17 = uVar17 >> 2;
          *(undefined1 *)((int)puVar18 + 2) = *(undefined1 *)((int)puVar19 + 2);
          puVar19 = (undefined4 *)((int)puVar19 + -2);
          puVar18 = (undefined4 *)((int)puVar18 - 2);
          if (7 < uVar17) {
            for (; uVar17 != 0; uVar17 = uVar17 - 1) {
              *puVar18 = *puVar19;
              puVar19 = puVar19 + -1;
              puVar18 = puVar18 + -1;
            }
            switch(uVar16) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10052b28_caseD_2;
            case 3:
              goto switchD_10052b28_caseD_3;
            }
            goto switchD_10052b28_caseD_1;
          }
          break;
        case 3:
          uVar16 = uVar17 & 3;
          *(undefined1 *)((int)puVar18 + 3) = *(undefined1 *)((int)puVar19 + 3);
          *(undefined1 *)((int)puVar18 + 2) = *(undefined1 *)((int)puVar19 + 2);
          uVar17 = uVar17 >> 2;
          *(undefined1 *)((int)puVar18 + 1) = *(undefined1 *)((int)puVar19 + 1);
          puVar19 = (undefined4 *)((int)puVar19 + -3);
          puVar18 = (undefined4 *)((int)puVar18 - 3);
          if (7 < uVar17) {
            for (; uVar17 != 0; uVar17 = uVar17 - 1) {
              *puVar18 = *puVar19;
              puVar19 = puVar19 + -1;
              puVar18 = puVar18 + -1;
            }
            switch(uVar16) {
            case 0:
              return param_1;
            case 2:
              goto switchD_10052b28_caseD_2;
            case 3:
              goto switchD_10052b28_caseD_3;
            }
            goto switchD_10052b28_caseD_1;
          }
        }
      }
    }
    switch(uVar17) {
    case 7:
      puVar18[7 - uVar17] = puVar19[7 - uVar17];
    case 6:
      puVar18[6 - uVar17] = puVar19[6 - uVar17];
    case 5:
      puVar18[5 - uVar17] = puVar19[5 - uVar17];
    case 4:
      puVar18[4 - uVar17] = puVar19[4 - uVar17];
    case 3:
      puVar18[3 - uVar17] = puVar19[3 - uVar17];
    case 2:
      puVar18[2 - uVar17] = puVar19[2 - uVar17];
    case 1:
      puVar18[1 - uVar17] = puVar19[1 - uVar17];
      puVar19 = puVar19 + -uVar17;
      puVar18 = puVar18 + -uVar17;
    }
    switch(uVar16) {
    case 1:
switchD_10052b28_caseD_1:
      *(undefined1 *)((int)puVar18 + 3) = *(undefined1 *)((int)puVar19 + 3);
      return param_1;
    case 2:
switchD_10052b28_caseD_2:
      *(undefined1 *)((int)puVar18 + 3) = *(undefined1 *)((int)puVar19 + 3);
      *(undefined1 *)((int)puVar18 + 2) = *(undefined1 *)((int)puVar19 + 2);
      return param_1;
    case 3:
switchD_10052b28_caseD_3:
      *(undefined1 *)((int)puVar18 + 3) = *(undefined1 *)((int)puVar19 + 3);
      *(undefined1 *)((int)puVar18 + 2) = *(undefined1 *)((int)puVar19 + 2);
      *(undefined1 *)((int)puVar18 + 1) = *(undefined1 *)((int)puVar19 + 1);
      return param_1;
    }
switchD_10052b28_caseD_0:
    return param_1;
  }
  if ((0x7f < param_3) && (((uint)param_1 & 0xf) == ((uint)param_2 & 0xf))) {
    puVar19 = param_1;
    if (((uint)param_2 & 0xf) != 0) {
      uVar17 = 0x10 - ((uint)param_2 & 0xf);
      param_3 = param_3 - uVar17;
      for (uVar16 = uVar17 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined1 *)puVar19 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        puVar19 = (undefined4 *)((int)puVar19 + 1);
      }
      for (uVar17 = uVar17 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *puVar19 = *param_2;
        param_2 = param_2 + 1;
        puVar19 = puVar19 + 1;
      }
    }
    for (uVar17 = param_3 >> 7; uVar17 != 0; uVar17 = uVar17 - 1) {
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      uVar4 = param_2[4];
      uVar5 = param_2[5];
      uVar6 = param_2[6];
      uVar7 = param_2[7];
      uVar8 = param_2[8];
      uVar9 = param_2[9];
      uVar10 = param_2[10];
      uVar11 = param_2[0xb];
      uVar12 = param_2[0xc];
      uVar13 = param_2[0xd];
      uVar14 = param_2[0xe];
      uVar15 = param_2[0xf];
      *puVar19 = *param_2;
      puVar19[1] = uVar1;
      puVar19[2] = uVar2;
      puVar19[3] = uVar3;
      puVar19[4] = uVar4;
      puVar19[5] = uVar5;
      puVar19[6] = uVar6;
      puVar19[7] = uVar7;
      puVar19[8] = uVar8;
      puVar19[9] = uVar9;
      puVar19[10] = uVar10;
      puVar19[0xb] = uVar11;
      puVar19[0xc] = uVar12;
      puVar19[0xd] = uVar13;
      puVar19[0xe] = uVar14;
      puVar19[0xf] = uVar15;
      uVar1 = param_2[0x11];
      uVar2 = param_2[0x12];
      uVar3 = param_2[0x13];
      uVar4 = param_2[0x14];
      uVar5 = param_2[0x15];
      uVar6 = param_2[0x16];
      uVar7 = param_2[0x17];
      uVar8 = param_2[0x18];
      uVar9 = param_2[0x19];
      uVar10 = param_2[0x1a];
      uVar11 = param_2[0x1b];
      uVar12 = param_2[0x1c];
      uVar13 = param_2[0x1d];
      uVar14 = param_2[0x1e];
      uVar15 = param_2[0x1f];
      puVar19[0x10] = param_2[0x10];
      puVar19[0x11] = uVar1;
      puVar19[0x12] = uVar2;
      puVar19[0x13] = uVar3;
      puVar19[0x14] = uVar4;
      puVar19[0x15] = uVar5;
      puVar19[0x16] = uVar6;
      puVar19[0x17] = uVar7;
      puVar19[0x18] = uVar8;
      puVar19[0x19] = uVar9;
      puVar19[0x1a] = uVar10;
      puVar19[0x1b] = uVar11;
      puVar19[0x1c] = uVar12;
      puVar19[0x1d] = uVar13;
      puVar19[0x1e] = uVar14;
      puVar19[0x1f] = uVar15;
      param_2 = param_2 + 0x20;
      puVar19 = puVar19 + 0x20;
    }
    if ((param_3 & 0x7f) != 0) {
      for (uVar17 = (param_3 & 0x7f) >> 4; uVar17 != 0; uVar17 = uVar17 - 1) {
        uVar1 = param_2[1];
        uVar2 = param_2[2];
        uVar3 = param_2[3];
        *puVar19 = *param_2;
        puVar19[1] = uVar1;
        puVar19[2] = uVar2;
        puVar19[3] = uVar3;
        param_2 = param_2 + 4;
        puVar19 = puVar19 + 4;
      }
      if ((param_3 & 0xf) != 0) {
        for (uVar17 = (param_3 & 0xf) >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *puVar19 = *param_2;
          param_2 = param_2 + 1;
          puVar19 = puVar19 + 1;
        }
        for (uVar17 = param_3 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined1 *)puVar19 = *(undefined1 *)param_2;
          param_2 = (undefined4 *)((int)param_2 + 1);
          puVar19 = (undefined4 *)((int)puVar19 + 1);
        }
      }
    }
    return param_1;
  }
  puVar19 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar17 = param_3 >> 2;
    uVar16 = param_3 & 3;
    if (7 < uVar17) {
      for (; uVar17 != 0; uVar17 = uVar17 - 1) {
        *puVar19 = *param_2;
        param_2 = param_2 + 1;
        puVar19 = puVar19 + 1;
      }
      switch(uVar16) {
      case 0:
        return param_1;
      case 2:
        goto switchD_10052988_caseD_2;
      case 3:
        goto switchD_10052988_caseD_3;
      }
      goto switchD_10052988_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_10052988_caseD_0;
    case 1:
      goto switchD_10052988_caseD_1;
    case 2:
      goto switchD_10052988_caseD_2;
    case 3:
      goto switchD_10052988_caseD_3;
    default:
      uVar17 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar16 = uVar17 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar17 = uVar17 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        param_2 = (undefined4 *)((int)param_2 + 3);
        puVar19 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar17) {
          for (; uVar17 != 0; uVar17 = uVar17 - 1) {
            *puVar19 = *param_2;
            param_2 = param_2 + 1;
            puVar19 = puVar19 + 1;
          }
          switch(uVar16) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10052988_caseD_2;
          case 3:
            goto switchD_10052988_caseD_3;
          }
          goto switchD_10052988_caseD_1;
        }
        break;
      case 2:
        uVar16 = uVar17 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar17 = uVar17 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        param_2 = (undefined4 *)((int)param_2 + 2);
        puVar19 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar17) {
          for (; uVar17 != 0; uVar17 = uVar17 - 1) {
            *puVar19 = *param_2;
            param_2 = param_2 + 1;
            puVar19 = puVar19 + 1;
          }
          switch(uVar16) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10052988_caseD_2;
          case 3:
            goto switchD_10052988_caseD_3;
          }
          goto switchD_10052988_caseD_1;
        }
        break;
      case 3:
        uVar16 = uVar17 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        uVar17 = uVar17 >> 2;
        puVar19 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar17) {
          for (; uVar17 != 0; uVar17 = uVar17 - 1) {
            *puVar19 = *param_2;
            param_2 = param_2 + 1;
            puVar19 = puVar19 + 1;
          }
          switch(uVar16) {
          case 0:
            return param_1;
          case 2:
            goto switchD_10052988_caseD_2;
          case 3:
            goto switchD_10052988_caseD_3;
          }
          goto switchD_10052988_caseD_1;
        }
      }
    }
  }
  switch(uVar17) {
  case 7:
    puVar19[uVar17 - 7] = param_2[uVar17 - 7];
  case 6:
    puVar19[uVar17 - 6] = param_2[uVar17 - 6];
  case 5:
    puVar19[uVar17 - 5] = param_2[uVar17 - 5];
  case 4:
    puVar19[uVar17 - 4] = param_2[uVar17 - 4];
  case 3:
    puVar19[uVar17 - 3] = param_2[uVar17 - 3];
  case 2:
    puVar19[uVar17 - 2] = param_2[uVar17 - 2];
  case 1:
    puVar19[uVar17 - 1] = param_2[uVar17 - 1];
    param_2 = param_2 + uVar17;
    puVar19 = puVar19 + uVar17;
  }
  switch(uVar16) {
  case 1:
switchD_10052988_caseD_1:
    *(undefined1 *)puVar19 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_10052988_caseD_2:
    *(undefined1 *)puVar19 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar19 + 1) = *(undefined1 *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_10052988_caseD_3:
    *(undefined1 *)puVar19 = *(undefined1 *)param_2;
    *(undefined1 *)((int)puVar19 + 1) = *(undefined1 *)((int)param_2 + 1);
    *(undefined1 *)((int)puVar19 + 2) = *(undefined1 *)((int)param_2 + 2);
    return param_1;
  }
switchD_10052988_caseD_0:
  return param_1;
}

