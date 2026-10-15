/*
 * FUN_180045ac0 at 180045ac0
 * undefined __fastcall FUN_180045ac0(longlong param_1, undefined8 param_2, char param_3)
 * Address ranges: 180045ac0-1800465ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180045ac0(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte bVar8;
  uint uVar9;
  
  if ((*(char *)(param_1 + 0x1018a) == '\0') && (param_3 == '\0')) goto LAB_180045e10;
  if (*(char *)(param_1 + 0x7662) == '\0') {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
    bVar8 = -(*(longlong *)(param_1 + 0xff20) != 0) & 2U | *(longlong *)(param_1 + 0xff18) != 0;
    if (bVar8 != 0) {
      if (bVar8 == 1) {
        uVar9 = *(uint *)(lVar2 + 0x44);
        uVar6 = 0;
        uVar5 = 0;
        if (uVar9 != 0) {
          do {
            if (*(longlong *)(lVar2 + 0x48 + uVar6 * 8) == *(longlong *)(param_1 + 0xff18))
            goto LAB_180045e04;
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while (uVar5 < uVar9);
        }
        if (uVar5 == uVar9) {
          iVar1 = *(int *)(lVar2 + 0x67c);
          *(int *)(lVar2 + 0x67c) = iVar1 + 1;
          if (((iVar1 == 0) && (*(longlong *)(lVar2 + 0xb10) != 0)) &&
             (uVar6 = 0, *(int *)(lVar2 + 0xba8) != 0)) {
            do {
              (**(code **)**(undefined8 **)(*(longlong *)(lVar2 + 0xba0) + uVar6 * 8))();
              uVar9 = (int)uVar6 + 1;
              uVar6 = (ulonglong)uVar9;
            } while (uVar9 < *(uint *)(lVar2 + 0xba8));
          }
          (**(code **)(**(longlong **)(lVar2 + 0x688) + 0xe0))
                    (*(longlong **)(lVar2 + 0x688),1,param_1 + 0xff18);
          *(undefined1 *)(lVar2 + 0x674) = 1;
          *(undefined4 *)(lVar2 + 0x44) = 1;
          uVar4 = *(undefined8 *)(param_1 + 0xff18);
          goto LAB_180045dfb;
        }
      }
      else {
        uVar9 = *(uint *)(lVar2 + 0x44);
        if (bVar8 != 2) {
          uVar6 = 0;
LAB_180045c18:
          uVar7 = 0;
          uVar5 = 0;
          if (uVar9 != 0) {
            do {
              if (*(longlong *)(lVar2 + 0x48 + uVar7 * 8) ==
                  *(longlong *)(param_1 + 0xff18 + uVar6 * 8)) goto LAB_180045c37;
              uVar5 = (int)uVar7 + 1;
              uVar7 = (ulonglong)uVar5;
            } while (uVar5 < uVar9);
          }
          if (uVar5 != uVar9) goto LAB_180045c37;
          iVar1 = *(int *)(lVar2 + 0x67c);
          *(int *)(lVar2 + 0x67c) = iVar1 + 1;
          if (((iVar1 == 0) && (*(longlong *)(lVar2 + 0xb10) != 0)) &&
             (uVar6 = 0, *(int *)(lVar2 + 0xba8) != 0)) {
            do {
              (**(code **)**(undefined8 **)(*(longlong *)(lVar2 + 0xba0) + uVar6 * 8))();
              uVar9 = (int)uVar6 + 1;
              uVar6 = (ulonglong)uVar9;
            } while (uVar9 < *(uint *)(lVar2 + 0xba8));
          }
          (**(code **)(**(longlong **)(lVar2 + 0x688) + 0xe0))
                    (*(longlong **)(lVar2 + 0x688),2,param_1 + 0xff18);
          *(undefined1 *)(lVar2 + 0x674) = 1;
          *(undefined4 *)(lVar2 + 0x44) = 2;
          uVar4 = *(undefined8 *)(param_1 + 0xff20);
          *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(param_1 + 0xff18);
          *(undefined8 *)(lVar2 + 0x50) = uVar4;
          goto LAB_180045e04;
        }
        uVar6 = 0;
        uVar5 = 0;
        if (uVar9 != 0) {
          do {
            if (*(longlong *)(lVar2 + 0x48 + uVar6 * 8) == *(longlong *)(param_1 + 0xff20))
            goto LAB_180045e04;
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while (uVar5 < uVar9);
        }
        if (uVar5 == uVar9) {
          iVar1 = *(int *)(lVar2 + 0x67c);
          *(int *)(lVar2 + 0x67c) = iVar1 + 1;
          if (((iVar1 == 0) && (*(longlong *)(lVar2 + 0xb10) != 0)) &&
             (uVar6 = 0, *(int *)(lVar2 + 0xba8) != 0)) {
            do {
              (**(code **)**(undefined8 **)(*(longlong *)(lVar2 + 0xba0) + uVar6 * 8))();
              uVar9 = (int)uVar6 + 1;
              uVar6 = (ulonglong)uVar9;
            } while (uVar9 < *(uint *)(lVar2 + 0xba8));
          }
          (**(code **)(**(longlong **)(lVar2 + 0x688) + 0xe0))
                    (*(longlong **)(lVar2 + 0x688),1,param_1 + 0xff20);
          *(undefined1 *)(lVar2 + 0x674) = 1;
          *(undefined4 *)(lVar2 + 0x44) = 1;
          uVar4 = *(undefined8 *)(param_1 + 0xff20);
LAB_180045dfb:
          *(undefined8 *)(lVar2 + 0x48) = uVar4;
        }
      }
    }
  }
  else if (*(longlong *)(param_1 + 0xfcb8) != 0) {
    uVar6 = 0;
    uVar5 = 0;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
    uVar9 = *(uint *)(lVar2 + 0x44);
    if (uVar9 != 0) {
      do {
        if (*(longlong *)(lVar2 + 0x48 + uVar6 * 8) == *(longlong *)(param_1 + 0xff18))
        goto LAB_180045e04;
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < uVar9);
    }
    if (uVar5 == uVar9) {
      iVar1 = *(int *)(lVar2 + 0x67c);
      *(int *)(lVar2 + 0x67c) = iVar1 + 1;
      if (((iVar1 == 0) && (*(longlong *)(lVar2 + 0xb10) != 0)) &&
         (uVar6 = 0, *(int *)(lVar2 + 0xba8) != 0)) {
        do {
          (**(code **)**(undefined8 **)(*(longlong *)(lVar2 + 0xba0) + uVar6 * 8))();
          uVar9 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar9;
        } while (uVar9 < *(uint *)(lVar2 + 0xba8));
      }
      (**(code **)(**(longlong **)(lVar2 + 0x688) + 0xe0))
                (*(longlong **)(lVar2 + 0x688),1,param_1 + 0xff18);
      *(undefined1 *)(lVar2 + 0x674) = 1;
      *(undefined4 *)(lVar2 + 0x44) = 1;
      *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(param_1 + 0xff18);
    }
  }
LAB_180045e04:
  *(undefined1 *)(param_1 + 0x1018a) = 0;
LAB_180045e10:
  if (*(char *)(param_1 + 0x1018e) != '\0') {
    if (*(char *)(param_1 + 0x1019a) != '\0') {
      lVar2 = *(longlong *)(param_1 + 0xf9b0);
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
      if (lVar2 != *(longlong *)(lVar3 + 0x88)) {
        iVar1 = *(int *)(lVar3 + 0x67c);
        *(int *)(lVar3 + 0x67c) = iVar1 + 1;
        if (((iVar1 == 0) && (*(longlong *)(lVar3 + 0xb10) != 0)) &&
           (uVar6 = 0, *(int *)(lVar3 + 0xba8) != 0)) {
          do {
            (**(code **)**(undefined8 **)(*(longlong *)(lVar3 + 0xba0) + uVar6 * 8))();
            uVar9 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar9;
          } while (uVar9 < *(uint *)(lVar3 + 0xba8));
        }
        (**(code **)(**(longlong **)(lVar3 + 0x688) + 0x100))(*(longlong **)(lVar3 + 0x688),4,lVar2)
        ;
        *(undefined1 *)(lVar3 + 0x674) = 1;
        *(longlong *)(lVar3 + 0x88) = lVar2;
      }
    }
    *(undefined1 *)(param_1 + 0x1018e) = 0;
  }
  if (*(char *)(param_1 + 0x1018c) != '\0') {
    if (*(char *)(param_1 + 0x7662) == '\0') {
      if ((*(int *)(param_1 + 0x1016c) != 0) || (*(char *)(param_1 + 0x1018d) != '\0')) {
        lVar2 = *(longlong *)(param_1 + 0xf9d0);
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
        if (lVar2 != *(longlong *)(lVar3 + 0xa8)) {
          iVar1 = *(int *)(lVar3 + 0x67c);
          *(int *)(lVar3 + 0x67c) = iVar1 + 1;
          if (((iVar1 == 0) && (*(longlong *)(lVar3 + 0xb10) != 0)) &&
             (uVar6 = 0, *(int *)(lVar3 + 0xba8) != 0)) {
            do {
              (**(code **)**(undefined8 **)(*(longlong *)(lVar3 + 0xba0) + uVar6 * 8))();
              uVar9 = (int)uVar6 + 1;
              uVar6 = (ulonglong)uVar9;
            } while (uVar9 < *(uint *)(lVar3 + 0xba8));
          }
          (**(code **)(**(longlong **)(lVar3 + 0x688) + 0x100))
                    (*(longlong **)(lVar3 + 0x688),8,lVar2);
          *(undefined1 *)(lVar3 + 0x674) = 1;
          *(longlong *)(lVar3 + 0xa8) = lVar2;
        }
      }
      if ((*(int *)(param_1 + 0x10170) != 0) || (*(char *)(param_1 + 0x1018d) != '\0')) {
        lVar2 = *(longlong *)(param_1 + 0xf9d0);
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
        if (lVar2 != *(longlong *)(lVar3 + 0xb0)) {
          iVar1 = *(int *)(lVar3 + 0x67c);
          *(int *)(lVar3 + 0x67c) = iVar1 + 1;
          if (((iVar1 == 0) && (*(longlong *)(lVar3 + 0xb10) != 0)) &&
             (uVar6 = 0, *(int *)(lVar3 + 0xba8) != 0)) {
            do {
              (**(code **)**(undefined8 **)(*(longlong *)(lVar3 + 0xba0) + uVar6 * 8))();
              uVar9 = (int)uVar6 + 1;
              uVar6 = (ulonglong)uVar9;
            } while (uVar9 < *(uint *)(lVar3 + 0xba8));
          }
          (**(code **)(**(longlong **)(lVar3 + 0x688) + 0x100))
                    (*(longlong **)(lVar3 + 0x688),9,lVar2);
          *(undefined1 *)(lVar3 + 0x674) = 1;
          *(longlong *)(lVar3 + 0xb0) = lVar2;
        }
      }
      if ((*(int *)(param_1 + 0x10174) != 0) || (*(char *)(param_1 + 0x1018d) != '\0')) {
        lVar2 = *(longlong *)(param_1 + 0xf9d0);
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
        if (lVar2 != *(longlong *)(lVar3 + 0xb8)) {
          iVar1 = *(int *)(lVar3 + 0x67c);
          *(int *)(lVar3 + 0x67c) = iVar1 + 1;
          if (((iVar1 == 0) && (*(longlong *)(lVar3 + 0xb10) != 0)) &&
             (uVar6 = 0, *(int *)(lVar3 + 0xba8) != 0)) {
            do {
              (**(code **)**(undefined8 **)(*(longlong *)(lVar3 + 0xba0) + uVar6 * 8))();
              uVar9 = (int)uVar6 + 1;
              uVar6 = (ulonglong)uVar9;
            } while (uVar9 < *(uint *)(lVar3 + 0xba8));
          }
          (**(code **)(**(longlong **)(lVar3 + 0x688) + 0x100))
                    (*(longlong **)(lVar3 + 0x688),10,lVar2);
          *(undefined1 *)(lVar3 + 0x674) = 1;
          *(longlong *)(lVar3 + 0xb8) = lVar2;
        }
      }
      *(undefined4 *)(param_1 + 0xf680) = 0;
      if (((*(int *)(param_1 + 0x1011c) != 0) || (*(int *)(param_1 + 0x10144) != 0)) ||
         (*(char *)(param_1 + 0x1018d) != '\0')) {
        lVar2 = *(longlong *)(param_1 + 0xf9e8);
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
        if (lVar2 != *(longlong *)(lVar3 + 0xd0)) {
          iVar1 = *(int *)(lVar3 + 0x67c);
          *(int *)(lVar3 + 0x67c) = iVar1 + 1;
          if (((iVar1 == 0) && (*(longlong *)(lVar3 + 0xb10) != 0)) &&
             (uVar6 = 0, *(int *)(lVar3 + 0xba8) != 0)) {
            do {
              (**(code **)**(undefined8 **)(*(longlong *)(lVar3 + 0xba0) + uVar6 * 8))();
              uVar9 = (int)uVar6 + 1;
              uVar6 = (ulonglong)uVar9;
            } while (uVar9 < *(uint *)(lVar3 + 0xba8));
          }
          (**(code **)(**(longlong **)(lVar3 + 0x688) + 0x100))
                    (*(longlong **)(lVar3 + 0x688),0xd,lVar2);
          *(undefined1 *)(lVar3 + 0x674) = 1;
          *(longlong *)(lVar3 + 0xd0) = lVar2;
        }
      }
      if (((*(int *)(param_1 + 0x10120) != 0) || (*(int *)(param_1 + 0x10148) != 0)) ||
         (*(char *)(param_1 + 0x1018d) != '\0')) {
        lVar2 = *(longlong *)(param_1 + 0xf9e8);
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
        if (lVar2 != *(longlong *)(lVar3 + 0xd8)) {
          iVar1 = *(int *)(lVar3 + 0x67c);
          *(int *)(lVar3 + 0x67c) = iVar1 + 1;
          if (((iVar1 == 0) && (*(longlong *)(lVar3 + 0xb10) != 0)) &&
             (uVar6 = 0, *(int *)(lVar3 + 0xba8) != 0)) {
            do {
              (**(code **)**(undefined8 **)(*(longlong *)(lVar3 + 0xba0) + uVar6 * 8))();
              uVar9 = (int)uVar6 + 1;
              uVar6 = (ulonglong)uVar9;
            } while (uVar9 < *(uint *)(lVar3 + 0xba8));
          }
          (**(code **)(**(longlong **)(lVar3 + 0x688) + 0x100))
                    (*(longlong **)(lVar3 + 0x688),0xe,lVar2);
          *(undefined1 *)(lVar3 + 0x674) = 1;
          *(longlong *)(lVar3 + 0xd8) = lVar2;
        }
      }
      if (((*(int *)(param_1 + 0x10124) != 0) || (*(int *)(param_1 + 0x1014c) != 0)) ||
         (*(char *)(param_1 + 0x1018d) != '\0')) {
        lVar2 = *(longlong *)(param_1 + 0xf9e8);
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
        if (lVar2 != *(longlong *)(lVar3 + 0xe0)) {
          iVar1 = *(int *)(lVar3 + 0x67c);
          *(int *)(lVar3 + 0x67c) = iVar1 + 1;
          if (((iVar1 == 0) && (*(longlong *)(lVar3 + 0xb10) != 0)) &&
             (uVar6 = 0, *(int *)(lVar3 + 0xba8) != 0)) {
            do {
              (**(code **)**(undefined8 **)(*(longlong *)(lVar3 + 0xba0) + uVar6 * 8))();
              uVar9 = (int)uVar6 + 1;
              uVar6 = (ulonglong)uVar9;
            } while (uVar9 < *(uint *)(lVar3 + 0xba8));
          }
          (**(code **)(**(longlong **)(lVar3 + 0x688) + 0x100))
                    (*(longlong **)(lVar3 + 0x688),0xf,lVar2);
          *(undefined1 *)(lVar3 + 0x674) = 1;
          *(longlong *)(lVar3 + 0xe0) = lVar2;
        }
      }
      *(undefined4 *)(param_1 + 0xf6b8) = 0;
      *(undefined1 *)(param_1 + 0x1018d) = 0;
    }
    else if (*(longlong *)(param_1 + 0xfcb8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xf9d0);
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
      if (lVar2 != *(longlong *)(lVar3 + 0xa8)) {
        iVar1 = *(int *)(lVar3 + 0x67c);
        *(int *)(lVar3 + 0x67c) = iVar1 + 1;
        if (((iVar1 == 0) && (*(longlong *)(lVar3 + 0xb10) != 0)) &&
           (uVar6 = 0, *(int *)(lVar3 + 0xba8) != 0)) {
          do {
            (**(code **)**(undefined8 **)(*(longlong *)(lVar3 + 0xba0) + uVar6 * 8))();
            uVar9 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar9;
          } while (uVar9 < *(uint *)(lVar3 + 0xba8));
        }
        (**(code **)(**(longlong **)(lVar3 + 0x688) + 0x100))(*(longlong **)(lVar3 + 0x688),8,lVar2)
        ;
        *(undefined1 *)(lVar3 + 0x674) = 1;
        *(longlong *)(lVar3 + 0xa8) = lVar2;
      }
    }
    *(undefined1 *)(param_1 + 0x1018c) = 0;
  }
  if (((*(char *)(param_1 + 0x10192) != '\0') || (param_3 != '\0')) &&
     (*(char *)(param_1 + 0x7662) == '\0')) {
    if ((*(int *)(param_1 + 0x10160) != 0) || (*(char *)(param_1 + 0x10191) != '\0')) {
      lVar2 = *(longlong *)(param_1 + 0xf9d8);
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
      if (lVar2 != *(longlong *)(lVar3 + 0xc0)) {
        iVar1 = *(int *)(lVar3 + 0x67c);
        *(int *)(lVar3 + 0x67c) = iVar1 + 1;
        if (((iVar1 == 0) && (*(longlong *)(lVar3 + 0xb10) != 0)) &&
           (uVar6 = 0, *(int *)(lVar3 + 0xba8) != 0)) {
          do {
            (**(code **)**(undefined8 **)(*(longlong *)(lVar3 + 0xba0) + uVar6 * 8))();
            uVar9 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar9;
          } while (uVar9 < *(uint *)(lVar3 + 0xba8));
        }
        (**(code **)(**(longlong **)(lVar3 + 0x688) + 0x100))
                  (*(longlong **)(lVar3 + 0x688),0xb,lVar2);
        *(undefined1 *)(lVar3 + 0x674) = 1;
        *(longlong *)(lVar3 + 0xc0) = lVar2;
      }
    }
    if ((*(int *)(param_1 + 0x10164) != 0) || (*(char *)(param_1 + 0x10191) != '\0')) {
      lVar2 = *(longlong *)(param_1 + 0xf9d8);
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
      if (lVar2 != *(longlong *)(lVar3 + 200)) {
        iVar1 = *(int *)(lVar3 + 0x67c);
        *(int *)(lVar3 + 0x67c) = iVar1 + 1;
        if (((iVar1 == 0) && (*(longlong *)(lVar3 + 0xb10) != 0)) &&
           (uVar6 = 0, *(int *)(lVar3 + 0xba8) != 0)) {
          do {
            (**(code **)**(undefined8 **)(*(longlong *)(lVar3 + 0xba0) + uVar6 * 8))();
            uVar9 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar9;
          } while (uVar9 < *(uint *)(lVar3 + 0xba8));
        }
        (**(code **)(**(longlong **)(lVar3 + 0x688) + 0x100))
                  (*(longlong **)(lVar3 + 0x688),0xc,lVar2);
        *(undefined1 *)(lVar3 + 0x674) = 1;
        *(longlong *)(lVar3 + 200) = lVar2;
      }
    }
    if ((*(int *)(param_1 + 0x10110) != 0) || (*(int *)(param_1 + 0x10138) != 0)) {
      lVar2 = *(longlong *)(param_1 + 0xf9f0);
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
      if (lVar2 != *(longlong *)(lVar3 + 0xe8)) {
        iVar1 = *(int *)(lVar3 + 0x67c);
        *(int *)(lVar3 + 0x67c) = iVar1 + 1;
        if (((iVar1 == 0) && (*(longlong *)(lVar3 + 0xb10) != 0)) &&
           (uVar6 = 0, *(int *)(lVar3 + 0xba8) != 0)) {
          do {
            (**(code **)**(undefined8 **)(*(longlong *)(lVar3 + 0xba0) + uVar6 * 8))();
            uVar9 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar9;
          } while (uVar9 < *(uint *)(lVar3 + 0xba8));
        }
        (**(code **)(**(longlong **)(lVar3 + 0x688) + 0x100))
                  (*(longlong **)(lVar3 + 0x688),0x10,lVar2);
        *(undefined1 *)(lVar3 + 0x674) = 1;
        *(longlong *)(lVar3 + 0xe8) = lVar2;
      }
    }
    *(undefined2 *)(param_1 + 0x10191) = 0;
  }
  return;
LAB_180045c37:
  uVar5 = (int)uVar6 + 1;
  uVar6 = (ulonglong)uVar5;
  if (1 < uVar5) goto LAB_180045e04;
  goto LAB_180045c18;
}

