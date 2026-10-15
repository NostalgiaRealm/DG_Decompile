/*
 * FUN_140024620 at 140024620
 * undefined8 * __fastcall FUN_140024620(undefined8 * param_1, undefined8 * param_2, ulonglong param_3)
 * Address ranges: 140024620-14002469c;1400246a0-1400246c9;1400246d0-1400246dd;1400246e0-1400246ec;140024708-14002473a;140024740-14002476d;140024770-14002479b;1400247e0-140024832;140024858-140024862;140024868-140024876;140024878-14002488c;140024890-1400248aa;1400248b0-1400248e1;1400248e8-1400248f8;140024900-140024929;140024930-14002493c;140024958-1400249bd;1400249c0-1400249fb;140024a40-140024a91;140024ab8-140024ac2;140024ac8-140024ad8;140024ae0-140024af6;140024af8-140024c5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_140024620(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  
  if ((param_2 < param_1) && (param_1 < (undefined8 *)(param_3 + (longlong)param_2))) {
    puVar10 = (undefined4 *)((longlong)param_2 + (param_3 - 4));
    puVar11 = (undefined4 *)((longlong)param_1 + (param_3 - 4));
    if (((ulonglong)puVar11 & 3) == 0) {
      uVar9 = param_3 >> 2;
      uVar8 = param_3 & 3;
      if (7 < uVar9) {
        for (; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + -1;
          puVar11 = puVar11 + -1;
        }
        switch(uVar8) {
        case 0:
          return param_1;
        case 2:
          goto switchD_1400248df_caseD_2;
        case 3:
          goto switchD_1400248df_caseD_3;
        }
        goto switchD_1400248df_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_1400248df_caseD_0;
      case 1:
        goto switchD_1400248df_caseD_1;
      case 2:
        goto switchD_1400248df_caseD_2;
      case 3:
        goto switchD_1400248df_caseD_3;
      default:
        uVar9 = param_3 - ((ulonglong)puVar11 & 3);
        switch((ulonglong)puVar11 & 3) {
        case 1:
          uVar8 = uVar9 & 3;
          *(undefined1 *)((longlong)puVar11 + 3) = *(undefined1 *)((longlong)puVar10 + 3);
          puVar10 = (undefined4 *)((longlong)puVar10 + -1);
          uVar9 = uVar9 >> 2;
          puVar11 = (undefined4 *)((longlong)puVar11 - 1);
          if (7 < uVar9) {
            for (; uVar9 != 0; uVar9 = uVar9 - 1) {
              *puVar11 = *puVar10;
              puVar10 = puVar10 + -1;
              puVar11 = puVar11 + -1;
            }
            switch(uVar8) {
            case 0:
              return param_1;
            case 2:
              goto switchD_1400248df_caseD_2;
            case 3:
              goto switchD_1400248df_caseD_3;
            }
            goto switchD_1400248df_caseD_1;
          }
          break;
        case 2:
          uVar8 = uVar9 & 3;
          *(undefined1 *)((longlong)puVar11 + 3) = *(undefined1 *)((longlong)puVar10 + 3);
          uVar9 = uVar9 >> 2;
          *(undefined1 *)((longlong)puVar11 + 2) = *(undefined1 *)((longlong)puVar10 + 2);
          puVar10 = (undefined4 *)((longlong)puVar10 + -2);
          puVar11 = (undefined4 *)((longlong)puVar11 - 2);
          if (7 < uVar9) {
            for (; uVar9 != 0; uVar9 = uVar9 - 1) {
              *puVar11 = *puVar10;
              puVar10 = puVar10 + -1;
              puVar11 = puVar11 + -1;
            }
            switch(uVar8) {
            case 0:
              return param_1;
            case 2:
              goto switchD_1400248df_caseD_2;
            case 3:
              goto switchD_1400248df_caseD_3;
            }
            goto switchD_1400248df_caseD_1;
          }
          break;
        case 3:
          uVar8 = uVar9 & 3;
          *(undefined1 *)((longlong)puVar11 + 3) = *(undefined1 *)((longlong)puVar10 + 3);
          *(undefined1 *)((longlong)puVar11 + 2) = *(undefined1 *)((longlong)puVar10 + 2);
          uVar9 = uVar9 >> 2;
          *(undefined1 *)((longlong)puVar11 + 1) = *(undefined1 *)((longlong)puVar10 + 1);
          puVar10 = (undefined4 *)((longlong)puVar10 + -3);
          puVar11 = (undefined4 *)((longlong)puVar11 - 3);
          if (7 < uVar9) {
            for (; uVar9 != 0; uVar9 = uVar9 - 1) {
              *puVar11 = *puVar10;
              puVar10 = puVar10 + -1;
              puVar11 = puVar11 + -1;
            }
            switch(uVar8) {
            case 0:
              return param_1;
            case 2:
              goto switchD_1400248df_caseD_2;
            case 3:
              goto switchD_1400248df_caseD_3;
            }
            goto switchD_1400248df_caseD_1;
          }
        }
      }
    }
    switch(uVar9) {
    case 7:
      puVar11[7 - uVar9] = puVar10[7 - uVar9];
    case 6:
      puVar11[6 - uVar9] = puVar10[6 - uVar9];
    case 5:
      puVar11[5 - uVar9] = puVar10[5 - uVar9];
    case 4:
      puVar11[4 - uVar9] = puVar10[4 - uVar9];
    case 3:
      puVar11[3 - uVar9] = puVar10[3 - uVar9];
    case 2:
      puVar11[2 - uVar9] = puVar10[2 - uVar9];
    case 1:
      puVar11[1 - uVar9] = puVar10[1 - uVar9];
      uVar9 = (ulonglong)(uint)((int)uVar9 * -4);
      puVar10 = (undefined4 *)((longlong)puVar10 + uVar9);
      puVar11 = (undefined4 *)((longlong)puVar11 + uVar9);
    }
    switch(uVar8) {
    case 1:
switchD_1400248df_caseD_1:
      *(undefined1 *)((longlong)puVar11 + 3) = *(undefined1 *)((longlong)puVar10 + 3);
      return param_1;
    case 2:
switchD_1400248df_caseD_2:
      *(undefined1 *)((longlong)puVar11 + 3) = *(undefined1 *)((longlong)puVar10 + 3);
      *(undefined1 *)((longlong)puVar11 + 2) = *(undefined1 *)((longlong)puVar10 + 2);
      return param_1;
    case 3:
switchD_1400248df_caseD_3:
      *(undefined1 *)((longlong)puVar11 + 3) = *(undefined1 *)((longlong)puVar10 + 3);
      *(undefined1 *)((longlong)puVar11 + 2) = *(undefined1 *)((longlong)puVar10 + 2);
      *(undefined1 *)((longlong)puVar11 + 1) = *(undefined1 *)((longlong)puVar10 + 1);
      return param_1;
    }
switchD_1400248df_caseD_0:
    return param_1;
  }
  if ((0x7f < param_3) && (((ulonglong)param_1 & 0xf) == ((ulonglong)param_2 & 0xf))) {
    puVar12 = param_1;
    if (((ulonglong)param_2 & 0xf) != 0) {
      uVar9 = 0x10 - ((ulonglong)param_2 & 0xf);
      param_3 = param_3 - uVar9;
      for (uVar8 = uVar9 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)param_2;
        param_2 = (undefined8 *)((longlong)param_2 + 1);
        puVar12 = (undefined8 *)((longlong)puVar12 + 1);
      }
      for (uVar9 = uVar9 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)puVar12 = *(undefined4 *)param_2;
        param_2 = (undefined8 *)((longlong)param_2 + 4);
        puVar12 = (undefined8 *)((longlong)puVar12 + 4);
      }
    }
    for (uVar9 = param_3 >> 7; uVar9 != 0; uVar9 = uVar9 - 1) {
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      uVar4 = param_2[4];
      uVar5 = param_2[5];
      uVar6 = param_2[6];
      uVar7 = param_2[7];
      *puVar12 = *param_2;
      puVar12[1] = uVar1;
      puVar12[2] = uVar2;
      puVar12[3] = uVar3;
      puVar12[4] = uVar4;
      puVar12[5] = uVar5;
      puVar12[6] = uVar6;
      puVar12[7] = uVar7;
      uVar1 = param_2[9];
      uVar2 = param_2[10];
      uVar3 = param_2[0xb];
      uVar4 = param_2[0xc];
      uVar5 = param_2[0xd];
      uVar6 = param_2[0xe];
      uVar7 = param_2[0xf];
      puVar12[8] = param_2[8];
      puVar12[9] = uVar1;
      puVar12[10] = uVar2;
      puVar12[0xb] = uVar3;
      puVar12[0xc] = uVar4;
      puVar12[0xd] = uVar5;
      puVar12[0xe] = uVar6;
      puVar12[0xf] = uVar7;
      param_2 = param_2 + 0x10;
      puVar12 = puVar12 + 0x10;
    }
    if ((param_3 & 0x7f) != 0) {
      for (uVar9 = (param_3 & 0x7f) >> 4; uVar9 != 0; uVar9 = uVar9 - 1) {
        uVar1 = param_2[1];
        *puVar12 = *param_2;
        puVar12[1] = uVar1;
        param_2 = param_2 + 2;
        puVar12 = puVar12 + 2;
      }
      if ((param_3 & 0xf) != 0) {
        for (uVar9 = (param_3 & 0xf) >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)puVar12 = *(undefined4 *)param_2;
          param_2 = (undefined8 *)((longlong)param_2 + 4);
          puVar12 = (undefined8 *)((longlong)puVar12 + 4);
        }
        for (uVar9 = param_3 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined1 *)puVar12 = *(undefined1 *)param_2;
          param_2 = (undefined8 *)((longlong)param_2 + 1);
          puVar12 = (undefined8 *)((longlong)puVar12 + 1);
        }
      }
    }
    return param_1;
  }
  puVar12 = param_1;
  if (((ulonglong)param_1 & 3) == 0) {
    uVar9 = param_3 >> 2;
    uVar8 = param_3 & 3;
    if (7 < uVar9) {
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)puVar12 = *(undefined4 *)param_2;
        param_2 = (undefined8 *)((longlong)param_2 + 4);
        puVar12 = (undefined8 *)((longlong)puVar12 + 4);
      }
      switch(uVar8) {
      case 0:
        return param_1;
      case 2:
        goto switchD_14002469a_caseD_2;
      case 3:
        goto switchD_14002469a_caseD_3;
      }
      goto switchD_14002469a_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_14002469a_caseD_0;
    case 1:
      goto switchD_14002469a_caseD_1;
    case 2:
      goto switchD_14002469a_caseD_2;
    case 3:
      goto switchD_14002469a_caseD_3;
    default:
      uVar9 = (param_3 - 4) + ((ulonglong)param_1 & 3);
      switch((ulonglong)param_1 & 3) {
      case 1:
        uVar8 = uVar9 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_2 + 1);
        uVar9 = uVar9 >> 2 & 0x3fffffff;
        *(undefined1 *)((longlong)param_1 + 2) = *(undefined1 *)((longlong)param_2 + 2);
        param_2 = (undefined8 *)((longlong)param_2 + 3);
        puVar12 = (undefined8 *)((longlong)param_1 + 3);
        if (7 < uVar9) {
          for (; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)puVar12 = *(undefined4 *)param_2;
            param_2 = (undefined8 *)((longlong)param_2 + 4);
            puVar12 = (undefined8 *)((longlong)puVar12 + 4);
          }
          switch(uVar8) {
          case 0:
            return param_1;
          case 2:
            goto switchD_14002469a_caseD_2;
          case 3:
            goto switchD_14002469a_caseD_3;
          }
          goto switchD_14002469a_caseD_1;
        }
        break;
      case 2:
        uVar8 = uVar9 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar9 = uVar9 >> 2;
        *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_2 + 1);
        param_2 = (undefined8 *)((longlong)param_2 + 2);
        puVar12 = (undefined8 *)((longlong)param_1 + 2);
        if (7 < uVar9) {
          for (; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)puVar12 = *(undefined4 *)param_2;
            param_2 = (undefined8 *)((longlong)param_2 + 4);
            puVar12 = (undefined8 *)((longlong)puVar12 + 4);
          }
          switch(uVar8) {
          case 0:
            return param_1;
          case 2:
            goto switchD_14002469a_caseD_2;
          case 3:
            goto switchD_14002469a_caseD_3;
          }
          goto switchD_14002469a_caseD_1;
        }
        break;
      case 3:
        uVar8 = uVar9 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined8 *)((longlong)param_2 + 1);
        uVar9 = uVar9 >> 2;
        puVar12 = (undefined8 *)((longlong)param_1 + 1);
        if (7 < uVar9) {
          for (; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)puVar12 = *(undefined4 *)param_2;
            param_2 = (undefined8 *)((longlong)param_2 + 4);
            puVar12 = (undefined8 *)((longlong)puVar12 + 4);
          }
          switch(uVar8) {
          case 0:
            return param_1;
          case 2:
            goto switchD_14002469a_caseD_2;
          case 3:
            goto switchD_14002469a_caseD_3;
          }
          goto switchD_14002469a_caseD_1;
        }
      }
    }
  }
  switch(uVar9) {
  case 7:
    *(undefined4 *)((longlong)puVar12 + uVar9 * 4 + -0x1c) =
         *(undefined4 *)((longlong)param_2 + uVar9 * 4 + -0x1c);
  case 6:
    *(undefined4 *)((longlong)puVar12 + uVar9 * 4 + -0x18) =
         *(undefined4 *)((longlong)param_2 + uVar9 * 4 + -0x18);
  case 5:
    *(undefined4 *)((longlong)puVar12 + uVar9 * 4 + -0x14) =
         *(undefined4 *)((longlong)param_2 + uVar9 * 4 + -0x14);
  case 4:
    *(undefined4 *)((longlong)puVar12 + uVar9 * 4 + -0x10) =
         *(undefined4 *)((longlong)param_2 + uVar9 * 4 + -0x10);
  case 3:
    *(undefined4 *)((longlong)puVar12 + uVar9 * 4 + -0xc) =
         *(undefined4 *)((longlong)param_2 + uVar9 * 4 + -0xc);
  case 2:
    *(undefined4 *)((longlong)puVar12 + uVar9 * 4 + -8) =
         *(undefined4 *)((longlong)param_2 + uVar9 * 4 + -8);
  case 1:
    *(undefined4 *)((longlong)puVar12 + uVar9 * 4 + -4) =
         *(undefined4 *)((longlong)param_2 + uVar9 * 4 + -4);
    param_2 = (undefined8 *)((longlong)param_2 + uVar9 * 4);
    puVar12 = (undefined8 *)((longlong)puVar12 + uVar9 * 4);
  }
  switch(uVar8) {
  case 1:
switchD_14002469a_caseD_1:
    *(undefined1 *)puVar12 = *(undefined1 *)param_2;
    return param_1;
  case 2:
switchD_14002469a_caseD_2:
    *(undefined1 *)puVar12 = *(undefined1 *)param_2;
    *(undefined1 *)((longlong)puVar12 + 1) = *(undefined1 *)((longlong)param_2 + 1);
    return param_1;
  case 3:
switchD_14002469a_caseD_3:
    *(undefined1 *)puVar12 = *(undefined1 *)param_2;
    *(undefined1 *)((longlong)puVar12 + 1) = *(undefined1 *)((longlong)param_2 + 1);
    *(undefined1 *)((longlong)puVar12 + 2) = *(undefined1 *)((longlong)param_2 + 2);
    return param_1;
  }
switchD_14002469a_caseD_0:
  return param_1;
}

