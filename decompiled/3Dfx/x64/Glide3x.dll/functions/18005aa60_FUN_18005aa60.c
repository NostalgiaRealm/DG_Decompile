/*
 * FUN_18005aa60 at 18005aa60
 * ulonglong __fastcall FUN_18005aa60(undefined8 param_1, int * param_2)
 * Address ranges: 18005aa60-18005ad4a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18005aa60(undefined8 param_1,int *param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bVar7;
  
  iVar2 = param_2[8];
  uVar5 = 1;
  if (param_2[9] != 0) {
    uVar5 = param_2[9];
  }
  uVar4 = 1;
  uVar6 = 2;
  if (iVar2 < 0x3b) {
    if (iVar2 == 0x3a) goto LAB_18005ab97;
    if (iVar2 < 0x1e) {
      if (iVar2 != 0x1d) {
        if (iVar2 < 0x10) {
          if (iVar2 != 0xf) {
            if (iVar2 < 9) {
              if (iVar2 != 8) {
                if (((iVar2 == 1) || (iVar2 == 2)) || ((iVar2 == 3 || (iVar2 == 4)))) {
                  uVar4 = 0x10;
                  goto LAB_18005ab9a;
                }
                if (((iVar2 != 5) && (iVar2 != 6)) && (uVar4 = 1, iVar2 != 7)) goto LAB_18005ab9a;
              }
              uVar4 = 0xc;
              goto LAB_18005ab9a;
            }
            iVar2 = iVar2 + -9;
LAB_18005aae8:
            if (((iVar2 != 0) && (iVar2 != 1)) &&
               (((iVar2 != 2 && ((iVar2 != 3 && (iVar2 != 4)))) && (iVar2 != 5))))
            goto LAB_18005ab9a;
          }
        }
        else {
          if (0x16 < iVar2) {
            iVar2 = iVar2 + -0x17;
            bVar7 = iVar2 == 0;
            goto LAB_18005ab3e;
          }
          if (iVar2 != 0x16) {
            iVar2 = iVar2 + -0x10;
            goto LAB_18005aae8;
          }
        }
        uVar4 = 8;
        goto LAB_18005ab9a;
      }
    }
    else {
      if (0x2c < iVar2) {
        if (iVar2 < 0x34) {
          if (iVar2 != 0x33) {
            if (((iVar2 == 0x2d) || (iVar2 == 0x2e)) || (iVar2 = iVar2 + -0x2f, iVar2 == 0))
            goto LAB_18005ab71;
LAB_18005ab88:
            iVar2 = iVar2 + -1;
            if (iVar2 != 0) goto LAB_18005ab8d;
          }
        }
        else if (((iVar2 != 0x34) && (iVar2 != 0x35)) && (iVar2 = iVar2 + -0x36, iVar2 != 0))
        goto LAB_18005ab88;
        goto LAB_18005ab97;
      }
      if (iVar2 != 0x2c) {
        if (iVar2 < 0x26) {
          if ((iVar2 == 0x25) || (iVar2 == 0x1e)) goto LAB_18005ab71;
          iVar2 = iVar2 + -0x1f;
          bVar7 = iVar2 == 0;
        }
        else {
          iVar2 = iVar2 + -0x26;
          bVar7 = iVar2 == 0;
        }
LAB_18005ab3e:
        if ((((!bVar7) && (iVar2 != 1)) && (iVar2 != 2)) && ((iVar2 != 3 && (iVar2 != 4)))) {
          bVar7 = iVar2 == 5;
          goto LAB_18005ab57;
        }
      }
    }
LAB_18005ab71:
    uVar4 = 4;
  }
  else {
    if (iVar2 < 0x58) {
      if (iVar2 != 0x57) {
        if (0x49 < iVar2) {
          if (iVar2 < 0x51) goto LAB_18005ab9a;
          iVar2 = iVar2 + -0x51;
          goto LAB_18005aca3;
        }
        if (iVar2 == 0x49) goto LAB_18005ab9a;
        if (iVar2 < 0x43) {
          if ((iVar2 == 0x42) || (iVar2 != 0x3b)) goto LAB_18005ab9a;
          goto LAB_18005ab97;
        }
        if ((iVar2 != 0x43) && ((iVar2 != 0x44 && (iVar2 != 0x45)))) goto LAB_18005ab9a;
      }
      goto LAB_18005ab71;
    }
    if (iVar2 < 0x67) {
      if (((iVar2 == 0x66) || (0x5f < iVar2)) || (iVar2 == 0x5f)) goto LAB_18005ab9a;
      if (((iVar2 == 0x58) || (iVar2 == 0x59)) ||
         ((iVar2 == 0x5a || ((iVar2 == 0x5b || (iVar2 == 0x5c)))))) goto LAB_18005ab71;
      bVar7 = iVar2 == 0x5d;
LAB_18005ab57:
      if (!bVar7) goto LAB_18005ab9a;
      goto LAB_18005ab71;
    }
    if (iVar2 < 0x6e) goto LAB_18005ab9a;
    iVar2 = iVar2 + -0x6e;
LAB_18005aca3:
    if ((((iVar2 == 0) || (iVar2 == 1)) || (iVar2 == 2)) || (iVar2 = iVar2 + -3, iVar2 == 0))
    goto LAB_18005ab9a;
LAB_18005ab8d:
    if ((iVar2 != 1) && (iVar2 != 2)) goto LAB_18005ab9a;
LAB_18005ab97:
    uVar4 = 2;
  }
LAB_18005ab9a:
  iVar2 = *param_2;
  if (iVar2 == 1) {
    uVar1 = (ulonglong)uVar4 * *(longlong *)(param_2 + 4);
  }
  else if (iVar2 == 2) {
    uVar1 = (ulonglong)uVar4 * *(longlong *)(param_2 + 4) * (ulonglong)uVar5;
  }
  else if (iVar2 == 3) {
    uVar6 = 4;
    uVar1 = (ulonglong)(uint)param_2[6] * *(longlong *)(param_2 + 4) * (ulonglong)uVar4 *
            (ulonglong)uVar5;
  }
  else if (iVar2 == 4) {
    uVar6 = 8;
    uVar1 = (ulonglong)*(ushort *)(param_2 + 7) * (ulonglong)(uint)param_2[6] *
            *(longlong *)(param_2 + 4) * (ulonglong)uVar4 * (ulonglong)uVar5;
  }
  else {
    uVar1 = 0;
  }
  uVar5 = 1;
  uVar3 = uVar1;
  if (1 < *(ushort *)((longlong)param_2 + 0x1e)) {
    do {
      uVar5 = uVar5 + 1;
      uVar1 = uVar1 / uVar6;
      uVar3 = uVar3 + uVar1;
    } while (uVar5 < *(ushort *)((longlong)param_2 + 0x1e));
  }
  return uVar3;
}

