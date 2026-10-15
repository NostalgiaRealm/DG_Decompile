/*
 * FUN_1001eb20 at 1001eb20
 * undefined __thiscall FUN_1001eb20(void * this, char param_1, char param_2)
 * Address ranges: 1001eb20-1001f3e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001eb20(void *this,char param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  void *this_00;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  undefined4 *puVar10;
  
  if ((*(char *)((int)this + 0x21d2) == '\0') && (param_2 == '\0')) goto LAB_1001eda5;
  if (*(char *)((int)this + 0x1905) == '\0') {
    bVar8 = -(*(int *)((int)this + 0x2018) != 0) & 2U | *(int *)((int)this + 0x2014) != 0;
    if (bVar8 != 0) {
      iVar7 = *(int *)(*(int *)((int)this + 0x1d54) + 0x1304);
      if (bVar8 == 1) {
        uVar9 = *(uint *)(iVar7 + 0x24);
        uVar5 = 0;
        if (uVar9 != 0) {
          do {
            if (*(int *)(iVar7 + 0x28 + uVar5 * 4) == *(int *)((int)this + 0x2014))
            goto LAB_1001ed9e;
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar9);
        }
        if (uVar5 == uVar9) {
          iVar1 = *(int *)(iVar7 + 0x628);
          *(int *)(iVar7 + 0x628) = iVar1 + 1;
          if (((iVar1 == 0) && (*(int *)(iVar7 + 0x8e0) != 0)) &&
             (uVar9 = 0, *(int *)(iVar7 + 0x958) != 0)) {
            do {
              (**(code **)**(undefined4 **)(*(int *)(iVar7 + 0x954) + uVar9 * 4))();
              uVar9 = uVar9 + 1;
            } while (uVar9 < *(uint *)(iVar7 + 0x958));
          }
          goto LAB_1001ed76;
        }
      }
      else {
        uVar9 = *(uint *)(iVar7 + 0x24);
        if (bVar8 != 2) {
          uVar5 = 0;
LAB_1001ec25:
          uVar6 = 0;
          if (uVar9 != 0) {
            do {
              if (*(int *)(iVar7 + 0x28 + uVar6 * 4) == *(int *)((int)this + uVar5 * 4 + 0x2014))
              goto LAB_1001ec41;
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar9);
          }
          if (uVar6 != uVar9) goto LAB_1001ec41;
          iVar1 = *(int *)(iVar7 + 0x628);
          *(int *)(iVar7 + 0x628) = iVar1 + 1;
          if (((iVar1 == 0) && (*(int *)(iVar7 + 0x8e0) != 0)) &&
             (uVar9 = 0, *(int *)(iVar7 + 0x958) != 0)) {
            do {
              (**(code **)**(undefined4 **)(*(int *)(iVar7 + 0x954) + uVar9 * 4))();
              uVar9 = uVar9 + 1;
            } while (uVar9 < *(uint *)(iVar7 + 0x958));
          }
          (**(code **)(**(int **)(iVar7 + 0x638) + 0x70))
                    (*(int **)(iVar7 + 0x638),2,(undefined4 *)((int)this + 0x2014));
          *(undefined1 *)(iVar7 + 0x620) = 1;
          *(undefined4 *)(iVar7 + 0x24) = 2;
          uVar2 = *(undefined4 *)((int)this + 0x2018);
          *(undefined4 *)(iVar7 + 0x28) = *(undefined4 *)((int)this + 0x2014);
          *(undefined4 *)(iVar7 + 0x2c) = uVar2;
          goto LAB_1001ed9e;
        }
        uVar5 = 0;
        if (uVar9 != 0) {
          do {
            if (*(int *)(iVar7 + 0x28 + uVar5 * 4) == *(int *)((int)this + 0x2018))
            goto LAB_1001ed9e;
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar9);
        }
        if (uVar5 == uVar9) {
          iVar1 = *(int *)(iVar7 + 0x628);
          *(int *)(iVar7 + 0x628) = iVar1 + 1;
          if (((iVar1 == 0) && (*(int *)(iVar7 + 0x8e0) != 0)) &&
             (uVar9 = 0, *(int *)(iVar7 + 0x958) != 0)) {
            do {
              (**(code **)**(undefined4 **)(*(int *)(iVar7 + 0x954) + uVar9 * 4))();
              uVar9 = uVar9 + 1;
            } while (uVar9 < *(uint *)(iVar7 + 0x958));
          }
          puVar10 = (undefined4 *)((int)this + 0x2018);
          goto LAB_1001ed7c;
        }
      }
    }
  }
  else if (*(int *)((int)this + 0x1f68) != 0) {
    iVar7 = *(int *)(*(int *)((int)this + 0x1d54) + 0x1304);
    uVar5 = 0;
    uVar9 = *(uint *)(iVar7 + 0x24);
    if (uVar9 != 0) {
      do {
        if (*(int *)(iVar7 + 0x28 + uVar5 * 4) == *(int *)((int)this + 0x2014)) goto LAB_1001ed9e;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar9);
    }
    if (uVar5 == uVar9) {
      iVar1 = *(int *)(iVar7 + 0x628);
      *(int *)(iVar7 + 0x628) = iVar1 + 1;
      if (((iVar1 == 0) && (*(int *)(iVar7 + 0x8e0) != 0)) &&
         (uVar9 = 0, *(int *)(iVar7 + 0x958) != 0)) {
        do {
          (**(code **)**(undefined4 **)(*(int *)(iVar7 + 0x954) + uVar9 * 4))();
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(uint *)(iVar7 + 0x958));
      }
LAB_1001ed76:
      puVar10 = (undefined4 *)((int)this + 0x2014);
LAB_1001ed7c:
      (**(code **)(**(int **)(iVar7 + 0x638) + 0x70))(*(int **)(iVar7 + 0x638),1,puVar10);
      *(undefined1 *)(iVar7 + 0x620) = 1;
      *(undefined4 *)(iVar7 + 0x24) = 1;
      *(undefined4 *)(iVar7 + 0x28) = *puVar10;
    }
  }
LAB_1001ed9e:
  *(undefined1 *)((int)this + 0x21d2) = 0;
LAB_1001eda5:
  if (*(char *)((int)this + 0x21d4) != '\0') {
    if (*(char *)((int)this + 0x1905) == '\0') {
      if ((*(int *)((int)this + 0x21b4) != 0) || (*(char *)((int)this + 0x21d5) != '\0')) {
        iVar7 = *(int *)((int)this + 0x1e88);
        iVar1 = *(int *)((int)this + 0x1e8c);
        iVar3 = *(int *)(*(int *)((int)this + 0x1d54) + 0x1304);
        if ((iVar7 != *(int *)(iVar3 + 0x58)) || (iVar1 != *(int *)(iVar3 + 0x5c))) {
          iVar4 = *(int *)(iVar3 + 0x628);
          *(int *)(iVar3 + 0x628) = iVar4 + 1;
          if (((iVar4 == 0) && (*(int *)(iVar3 + 0x8e0) != 0)) &&
             (uVar9 = 0, *(int *)(iVar3 + 0x958) != 0)) {
            do {
              (**(code **)**(undefined4 **)(*(int *)(iVar3 + 0x954) + uVar9 * 4))();
              uVar9 = uVar9 + 1;
            } while (uVar9 < *(uint *)(iVar3 + 0x958));
          }
          (**(code **)(**(int **)(iVar3 + 0x638) + 0x80))(*(int **)(iVar3 + 0x638),4,iVar7,iVar1);
          *(undefined1 *)(iVar3 + 0x620) = 1;
          *(int *)(iVar3 + 0x58) = iVar7;
          *(int *)(iVar3 + 0x5c) = iVar1;
        }
      }
      if ((*(int *)((int)this + 0x21b8) != 0) || (*(char *)((int)this + 0x21d5) != '\0')) {
        iVar7 = *(int *)((int)this + 0x1e88);
        iVar1 = *(int *)((int)this + 0x1e8c);
        iVar3 = *(int *)(*(int *)((int)this + 0x1d54) + 0x1304);
        if ((iVar7 != *(int *)(iVar3 + 0x60)) || (iVar1 != *(int *)(iVar3 + 100))) {
          iVar4 = *(int *)(iVar3 + 0x628);
          *(int *)(iVar3 + 0x628) = iVar4 + 1;
          if (((iVar4 == 0) && (*(int *)(iVar3 + 0x8e0) != 0)) &&
             (uVar9 = 0, *(int *)(iVar3 + 0x958) != 0)) {
            do {
              (**(code **)**(undefined4 **)(*(int *)(iVar3 + 0x954) + uVar9 * 4))();
              uVar9 = uVar9 + 1;
            } while (uVar9 < *(uint *)(iVar3 + 0x958));
          }
          (**(code **)(**(int **)(iVar3 + 0x638) + 0x80))(*(int **)(iVar3 + 0x638),5,iVar7,iVar1);
          *(undefined1 *)(iVar3 + 0x620) = 1;
          *(int *)(iVar3 + 0x60) = iVar7;
          *(int *)(iVar3 + 100) = iVar1;
        }
      }
      if ((param_1 != '\0') && (((*(uint *)((int)this + 0x1d30) & 1) != 0 || (param_2 != '\0')))) {
        uVar9 = *(uint *)((int)this + 0x200c);
        this_00 = *(void **)(*(int *)((int)this + 0x1d54) + 0x1304);
        if ((*(int *)((int)this_00 + 0x8e0) != 0) &&
           ((((uVar9 != 0 &&
              (iVar7 = FUN_10055a43(*(void **)((int)this_00 + 0x8e4),uVar9,0,1,
                                    *(int *)((int)this_00 + 0x8e0),(int)this_00,0x80,
                                    *(int *)((int)this_00 + 0x938),*(int *)((int)this_00 + 0x93c)),
              *(int *)(*(int *)((int)this_00 + 0x8e0) + 0x20) != 3)) && (iVar7 != 0x80)) &&
            (iVar7 != 0)))) {
          FUN_10051f2d(this_00,uVar9,0,iVar7,0x80);
        }
        iVar7 = *(int *)((int)this + 0x1e90);
        iVar1 = *(int *)((int)this + 0x1e94);
        iVar3 = *(int *)(*(int *)((int)this + 0x1d54) + 0x1304);
        if ((iVar7 != *(int *)(iVar3 + 0x68)) || (iVar1 != *(int *)(iVar3 + 0x6c))) {
          iVar4 = *(int *)(iVar3 + 0x628);
          *(int *)(iVar3 + 0x628) = iVar4 + 1;
          if ((iVar4 == 0) &&
             ((*(int *)(iVar3 + 0x8e0) != 0 && (uVar9 = 0, *(int *)(iVar3 + 0x958) != 0)))) {
            do {
              (**(code **)**(undefined4 **)(*(int *)(iVar3 + 0x954) + uVar9 * 4))();
              uVar9 = uVar9 + 1;
            } while (uVar9 < *(uint *)(iVar3 + 0x958));
          }
          (**(code **)(**(int **)(iVar3 + 0x638) + 0x80))(*(int **)(iVar3 + 0x638),6,iVar7,iVar1);
          *(undefined1 *)(iVar3 + 0x620) = 1;
          *(int *)(iVar3 + 0x68) = iVar7;
          *(int *)(iVar3 + 0x6c) = iVar1;
        }
        iVar7 = *(int *)((int)this + 0x1e98);
        iVar1 = *(int *)((int)this + 0x1e9c);
        iVar3 = *(int *)(*(int *)((int)this + 0x1d54) + 0x1304);
        if ((iVar7 != *(int *)(iVar3 + 0x70)) || (iVar1 != *(int *)(iVar3 + 0x74))) {
          iVar4 = *(int *)(iVar3 + 0x628);
          *(int *)(iVar3 + 0x628) = iVar4 + 1;
          if ((iVar4 == 0) &&
             ((*(int *)(iVar3 + 0x8e0) != 0 && (uVar9 = 0, *(int *)(iVar3 + 0x958) != 0)))) {
            do {
              (**(code **)**(undefined4 **)(*(int *)(iVar3 + 0x954) + uVar9 * 4))();
              uVar9 = uVar9 + 1;
            } while (uVar9 < *(uint *)(iVar3 + 0x958));
          }
          (**(code **)(**(int **)(iVar3 + 0x638) + 0xa0))(*(int **)(iVar3 + 0x638),7,iVar7,iVar1);
          *(int *)(iVar3 + 0x70) = iVar7;
          *(int *)(iVar3 + 0x74) = iVar1;
        }
        iVar7 = *(int *)((int)this + 0x1ea0);
        iVar1 = *(int *)((int)this + 0x1ea4);
        iVar3 = *(int *)(*(int *)((int)this + 0x1d54) + 0x1304);
        if ((iVar7 != *(int *)(iVar3 + 0x78)) || (iVar1 != *(int *)(iVar3 + 0x7c))) {
          iVar4 = *(int *)(iVar3 + 0x628);
          *(int *)(iVar3 + 0x628) = iVar4 + 1;
          if ((iVar4 == 0) &&
             ((*(int *)(iVar3 + 0x8e0) != 0 && (uVar9 = 0, *(int *)(iVar3 + 0x958) != 0)))) {
            do {
              (**(code **)**(undefined4 **)(*(int *)(iVar3 + 0x954) + uVar9 * 4))();
              uVar9 = uVar9 + 1;
            } while (uVar9 < *(uint *)(iVar3 + 0x958));
          }
          (**(code **)(**(int **)(iVar3 + 0x638) + 0xa0))(*(int **)(iVar3 + 0x638),8,iVar7,iVar1);
          *(int *)(iVar3 + 0x78) = iVar7;
          *(int *)(iVar3 + 0x7c) = iVar1;
        }
        iVar7 = *(int *)((int)this + 0x1ea8);
        iVar1 = *(int *)((int)this + 0x1eac);
        iVar3 = *(int *)(*(int *)((int)this + 0x1d54) + 0x1304);
        if ((iVar7 != *(int *)(iVar3 + 0x80)) || (iVar1 != *(int *)(iVar3 + 0x84))) {
          iVar4 = *(int *)(iVar3 + 0x628);
          *(int *)(iVar3 + 0x628) = iVar4 + 1;
          if ((iVar4 == 0) &&
             ((*(int *)(iVar3 + 0x8e0) != 0 && (uVar9 = 0, *(int *)(iVar3 + 0x958) != 0)))) {
            do {
              (**(code **)**(undefined4 **)(*(int *)(iVar3 + 0x954) + uVar9 * 4))();
              uVar9 = uVar9 + 1;
            } while (uVar9 < *(uint *)(iVar3 + 0x958));
          }
          (**(code **)(**(int **)(iVar3 + 0x638) + 0xa0))(*(int **)(iVar3 + 0x638),9,iVar7,iVar1);
          *(int *)(iVar3 + 0x80) = iVar7;
          *(int *)(iVar3 + 0x84) = iVar1;
        }
        iVar7 = *(int *)((int)this + 0x1eb0);
        iVar1 = *(int *)((int)this + 0x1eb4);
        iVar3 = *(int *)(*(int *)((int)this + 0x1d54) + 0x1304);
        if ((iVar7 != *(int *)(iVar3 + 0x88)) || (iVar1 != *(int *)(iVar3 + 0x8c))) {
          iVar4 = *(int *)(iVar3 + 0x628);
          *(int *)(iVar3 + 0x628) = iVar4 + 1;
          if ((iVar4 == 0) &&
             ((*(int *)(iVar3 + 0x8e0) != 0 && (uVar9 = 0, *(int *)(iVar3 + 0x958) != 0)))) {
            do {
              (**(code **)**(undefined4 **)(*(int *)(iVar3 + 0x954) + uVar9 * 4))();
              uVar9 = uVar9 + 1;
            } while (uVar9 < *(uint *)(iVar3 + 0x958));
          }
          (**(code **)(**(int **)(iVar3 + 0x638) + 0xa0))(*(int **)(iVar3 + 0x638),10,iVar7,iVar1);
          *(int *)(iVar3 + 0x88) = iVar7;
          *(int *)(iVar3 + 0x8c) = iVar1;
        }
      }
      *(undefined4 *)((int)this + 0x1d30) = 0;
      *(undefined1 *)((int)this + 0x21d5) = 0;
    }
    else if (*(int *)((int)this + 0x1f68) != 0) {
      iVar7 = *(int *)((int)this + 0x1e88);
      iVar1 = *(int *)((int)this + 0x1e8c);
      iVar3 = *(int *)(*(int *)((int)this + 0x1d54) + 0x1304);
      if ((iVar7 != *(int *)(iVar3 + 0x58)) || (iVar1 != *(int *)(iVar3 + 0x5c))) {
        iVar4 = *(int *)(iVar3 + 0x628);
        *(int *)(iVar3 + 0x628) = iVar4 + 1;
        if ((iVar4 == 0) &&
           ((*(int *)(iVar3 + 0x8e0) != 0 && (uVar9 = 0, *(int *)(iVar3 + 0x958) != 0)))) {
          do {
            (**(code **)**(undefined4 **)(*(int *)(iVar3 + 0x954) + uVar9 * 4))();
            uVar9 = uVar9 + 1;
          } while (uVar9 < *(uint *)(iVar3 + 0x958));
        }
        (**(code **)(**(int **)(iVar3 + 0x638) + 0x80))(*(int **)(iVar3 + 0x638),4,iVar7,iVar1);
        *(undefined1 *)(iVar3 + 0x620) = 1;
        *(int *)(iVar3 + 0x58) = iVar7;
        *(int *)(iVar3 + 0x5c) = iVar1;
      }
    }
    *(undefined1 *)((int)this + 0x21d4) = 0;
  }
  if (((*(char *)((int)this + 0x21d8) != '\0') || (param_2 != '\0')) &&
     (*(char *)((int)this + 0x1905) == '\0')) {
    if ((*(int *)((int)this + 0x21a8) != 0) || (*(char *)((int)this + 0x21d7) != '\0')) {
      iVar7 = *(int *)((int)this + 0x1eb8);
      iVar1 = *(int *)((int)this + 0x1ebc);
      iVar3 = *(int *)(*(int *)((int)this + 0x1d54) + 0x1304);
      if ((iVar7 != *(int *)(iVar3 + 0x90)) || (iVar1 != *(int *)(iVar3 + 0x94))) {
        iVar4 = *(int *)(iVar3 + 0x628);
        *(int *)(iVar3 + 0x628) = iVar4 + 1;
        if (((iVar4 == 0) && (*(int *)(iVar3 + 0x8e0) != 0)) &&
           (uVar9 = 0, *(int *)(iVar3 + 0x958) != 0)) {
          do {
            (**(code **)**(undefined4 **)(*(int *)(iVar3 + 0x954) + uVar9 * 4))();
            uVar9 = uVar9 + 1;
          } while (uVar9 < *(uint *)(iVar3 + 0x958));
        }
        (**(code **)(**(int **)(iVar3 + 0x638) + 0x80))(*(int **)(iVar3 + 0x638),0xb,iVar7,iVar1);
        *(undefined1 *)(iVar3 + 0x620) = 1;
        *(int *)(iVar3 + 0x90) = iVar7;
        *(int *)(iVar3 + 0x94) = iVar1;
      }
    }
    *(undefined2 *)((int)this + 0x21d7) = 0;
  }
  return;
LAB_1001ec41:
  uVar5 = uVar5 + 1;
  if (1 < uVar5) goto LAB_1001ed9e;
  goto LAB_1001ec25;
}

