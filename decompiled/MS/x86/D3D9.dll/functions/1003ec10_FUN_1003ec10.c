/*
 * FUN_1003ec10 at 1003ec10
 * undefined __thiscall FUN_1003ec10(void * this, undefined4 param_1, char param_2)
 * Address ranges: 1003ec10-1003f410
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003ec10(void *this,undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  
  if ((*(char *)((int)this + 0xfd9a) == '\0') && (param_2 == '\0')) goto LAB_1003eebd;
  if (*(char *)((int)this + 0x7642) == '\0') {
    bVar6 = -(*(int *)((int)this + 0xfbc4) != 0) & 2U | *(int *)((int)this + 0xfbc0) != 0;
    if (bVar6 != 0) {
      iVar10 = *(int *)(*(int *)((int)this + 0xf6b8) + 0x1304);
      if (bVar6 == 1) {
        uVar7 = *(uint *)(iVar10 + 0x24);
        uVar4 = 0;
        if (uVar7 != 0) {
          do {
            if (*(int *)(iVar10 + 0x28 + uVar4 * 4) == *(int *)((int)this + 0xfbc0)) break;
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar7);
        }
        if (uVar4 == uVar7) {
          iVar2 = *(int *)(iVar10 + 0x628);
          *(int *)(iVar10 + 0x628) = iVar2 + 1;
          if (((iVar2 == 0) && (*(int *)(iVar10 + 0x8e0) != 0)) &&
             (uVar7 = 0, *(int *)(iVar10 + 0x958) != 0)) {
            do {
              (**(code **)**(undefined4 **)(*(int *)(iVar10 + 0x954) + uVar7 * 4))();
              uVar7 = uVar7 + 1;
            } while (uVar7 < *(uint *)(iVar10 + 0x958));
          }
          goto LAB_1003ee88;
        }
      }
      else {
        uVar7 = *(uint *)(iVar10 + 0x24);
        if (bVar6 != 2) {
          uVar4 = 0;
LAB_1003ed30:
          uVar5 = 0;
          if (uVar7 != 0) {
            do {
              if (*(int *)(iVar10 + 0x28 + uVar5 * 4) == *(int *)((int)this + uVar4 * 4 + 0xfbc0))
              goto LAB_1003ed4f;
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar7);
          }
          if (uVar5 != uVar7) goto LAB_1003ed4f;
          iVar2 = *(int *)(iVar10 + 0x628);
          *(int *)(iVar10 + 0x628) = iVar2 + 1;
          if (((iVar2 == 0) && (*(int *)(iVar10 + 0x8e0) != 0)) &&
             (uVar7 = 0, *(int *)(iVar10 + 0x958) != 0)) {
            do {
              (**(code **)**(undefined4 **)(*(int *)(iVar10 + 0x954) + uVar7 * 4))();
              uVar7 = uVar7 + 1;
            } while (uVar7 < *(uint *)(iVar10 + 0x958));
          }
          (**(code **)(**(int **)(iVar10 + 0x638) + 0x70))
                    (*(int **)(iVar10 + 0x638),2,(undefined4 *)((int)this + 0xfbc0));
          *(undefined1 *)(iVar10 + 0x620) = 1;
          *(undefined4 *)(iVar10 + 0x24) = 2;
          uVar1 = *(undefined4 *)((int)this + 0xfbc4);
          *(undefined4 *)(iVar10 + 0x28) = *(undefined4 *)((int)this + 0xfbc0);
          *(undefined4 *)(iVar10 + 0x2c) = uVar1;
          goto LAB_1003eeb6;
        }
        uVar4 = 0;
        if (uVar7 != 0) {
          do {
            if (*(int *)(iVar10 + 0x28 + uVar4 * 4) == *(int *)((int)this + 0xfbc4))
            goto LAB_1003eeb6;
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar7);
        }
        if (uVar4 == uVar7) {
          iVar2 = *(int *)(iVar10 + 0x628);
          *(int *)(iVar10 + 0x628) = iVar2 + 1;
          if (((iVar2 == 0) && (*(int *)(iVar10 + 0x8e0) != 0)) &&
             (uVar7 = 0, *(int *)(iVar10 + 0x958) != 0)) {
            do {
              (**(code **)**(undefined4 **)(*(int *)(iVar10 + 0x954) + uVar7 * 4))();
              uVar7 = uVar7 + 1;
            } while (uVar7 < *(uint *)(iVar10 + 0x958));
          }
          puVar8 = (undefined4 *)((int)this + 0xfbc4);
          goto LAB_1003ee8e;
        }
      }
    }
  }
  else if (*(int *)((int)this + 0xfa7c) != 0) {
    iVar10 = *(int *)(*(int *)((int)this + 0xf6b8) + 0x1304);
    uVar4 = 0;
    uVar7 = *(uint *)(iVar10 + 0x24);
    if (uVar7 != 0) {
      do {
        if (*(int *)(iVar10 + 0x28 + uVar4 * 4) == *(int *)((int)this + 0xfbc0)) goto LAB_1003eeb6;
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar7);
    }
    if (uVar4 == uVar7) {
      iVar2 = *(int *)(iVar10 + 0x628);
      *(int *)(iVar10 + 0x628) = iVar2 + 1;
      if (((iVar2 == 0) && (*(int *)(iVar10 + 0x8e0) != 0)) &&
         (uVar7 = 0, *(int *)(iVar10 + 0x958) != 0)) {
        do {
          (**(code **)**(undefined4 **)(*(int *)(iVar10 + 0x954) + uVar7 * 4))();
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(uint *)(iVar10 + 0x958));
      }
LAB_1003ee88:
      puVar8 = (undefined4 *)((int)this + 0xfbc0);
LAB_1003ee8e:
      (**(code **)(**(int **)(iVar10 + 0x638) + 0x70))(*(int **)(iVar10 + 0x638),1,puVar8);
      *(undefined1 *)(iVar10 + 0x620) = 1;
      *(undefined4 *)(iVar10 + 0x24) = 1;
      *(undefined4 *)(iVar10 + 0x28) = *puVar8;
    }
  }
LAB_1003eeb6:
  *(undefined1 *)((int)this + 0xfd9a) = 0;
LAB_1003eebd:
  piVar9 = (int *)((int)this + 0xf6b8);
  if (*(char *)((int)this + 0xfd9e) != '\0') {
    if (*(char *)((int)this + 0xfdaa) != '\0') {
      iVar10 = *(int *)((int)this + 0xf8a0);
      iVar2 = *(int *)((int)this + 0xf8a4);
      iVar3 = *(int *)(*piVar9 + 0x1304);
      if ((iVar10 != *(int *)(iVar3 + 0x58)) || (iVar2 != *(int *)(iVar3 + 0x5c))) {
        FUN_100ba94f(iVar3);
        (**(code **)(**(int **)(iVar3 + 0x638) + 0x80))(*(int **)(iVar3 + 0x638),4,iVar10,iVar2);
        *(int *)(iVar3 + 0x58) = iVar10;
        *(undefined1 *)(iVar3 + 0x620) = 1;
        *(int *)(iVar3 + 0x5c) = iVar2;
      }
    }
    *(undefined1 *)((int)this + 0xfd9e) = 0;
  }
  if (*(char *)((int)this + 0xfd9c) != '\0') {
    if (*(char *)((int)this + 0x7642) == '\0') {
      if ((*(int *)((int)this + 0xfd7c) != 0) || (*(char *)((int)this + 0xfd9d) != '\0')) {
        iVar10 = *(int *)((int)this + 0xf8c0);
        iVar2 = *(int *)((int)this + 0xf8c4);
        iVar3 = *(int *)(*piVar9 + 0x1304);
        if ((iVar10 != *(int *)(iVar3 + 0x78)) || (iVar2 != *(int *)(iVar3 + 0x7c))) {
          FUN_100ba94f(iVar3);
          (**(code **)(**(int **)(iVar3 + 0x638) + 0x80))(*(int **)(iVar3 + 0x638),8,iVar10,iVar2);
          *(int *)(iVar3 + 0x78) = iVar10;
          *(undefined1 *)(iVar3 + 0x620) = 1;
          *(int *)(iVar3 + 0x7c) = iVar2;
        }
      }
      if ((*(int *)((int)this + 0xfd80) != 0) || (*(char *)((int)this + 0xfd9d) != '\0')) {
        iVar10 = *(int *)((int)this + 0xf8c0);
        iVar2 = *(int *)((int)this + 0xf8c4);
        iVar3 = *(int *)(*piVar9 + 0x1304);
        if ((iVar10 != *(int *)(iVar3 + 0x80)) || (iVar2 != *(int *)(iVar3 + 0x84))) {
          FUN_100ba94f(iVar3);
          (**(code **)(**(int **)(iVar3 + 0x638) + 0x80))(*(int **)(iVar3 + 0x638),9,iVar10,iVar2);
          *(int *)(iVar3 + 0x80) = iVar10;
          *(undefined1 *)(iVar3 + 0x620) = 1;
          *(int *)(iVar3 + 0x84) = iVar2;
        }
      }
      if ((*(int *)((int)this + 0xfd84) != 0) || (*(char *)((int)this + 0xfd9d) != '\0')) {
        iVar10 = *(int *)((int)this + 0xf8c0);
        iVar2 = *(int *)((int)this + 0xf8c4);
        iVar3 = *(int *)(*piVar9 + 0x1304);
        if ((iVar10 != *(int *)(iVar3 + 0x88)) || (iVar2 != *(int *)(iVar3 + 0x8c))) {
          FUN_100ba94f(iVar3);
          (**(code **)(**(int **)(iVar3 + 0x638) + 0x80))(*(int **)(iVar3 + 0x638),10,iVar10,iVar2);
          *(int *)(iVar3 + 0x88) = iVar10;
          *(undefined1 *)(iVar3 + 0x620) = 1;
          *(int *)(iVar3 + 0x8c) = iVar2;
        }
      }
      *(undefined4 *)((int)this + 0xf660) = 0;
      if (((*(int *)((int)this + 0xfd2c) != 0) || (*(int *)((int)this + 0xfd54) != 0)) ||
         (*(char *)((int)this + 0xfd9d) != '\0')) {
        iVar10 = *(int *)((int)this + 0xf8d8);
        iVar2 = *(int *)((int)this + 0xf8dc);
        iVar3 = *(int *)(*piVar9 + 0x1304);
        if ((iVar10 != *(int *)(iVar3 + 0xa0)) || (iVar2 != *(int *)(iVar3 + 0xa4))) {
          FUN_100ba94f(iVar3);
          (**(code **)(**(int **)(iVar3 + 0x638) + 0x80))(*(int **)(iVar3 + 0x638),0xd,iVar10,iVar2)
          ;
          *(int *)(iVar3 + 0xa0) = iVar10;
          *(undefined1 *)(iVar3 + 0x620) = 1;
          *(int *)(iVar3 + 0xa4) = iVar2;
        }
      }
      if (((*(int *)((int)this + 0xfd30) != 0) || (*(int *)((int)this + 0xfd58) != 0)) ||
         (*(char *)((int)this + 0xfd9d) != '\0')) {
        iVar10 = *(int *)((int)this + 0xf8d8);
        iVar2 = *(int *)((int)this + 0xf8dc);
        iVar3 = *(int *)(*piVar9 + 0x1304);
        if ((iVar10 != *(int *)(iVar3 + 0xa8)) || (iVar2 != *(int *)(iVar3 + 0xac))) {
          FUN_100ba94f(iVar3);
          (**(code **)(**(int **)(iVar3 + 0x638) + 0x80))(*(int **)(iVar3 + 0x638),0xe,iVar10,iVar2)
          ;
          *(int *)(iVar3 + 0xa8) = iVar10;
          *(undefined1 *)(iVar3 + 0x620) = 1;
          *(int *)(iVar3 + 0xac) = iVar2;
        }
      }
      if (((*(int *)((int)this + 0xfd34) != 0) || (*(int *)((int)this + 0xfd5c) != 0)) ||
         (*(char *)((int)this + 0xfd9d) != '\0')) {
        iVar10 = *(int *)((int)this + 0xf8d8);
        iVar2 = *(int *)((int)this + 0xf8dc);
        iVar3 = *(int *)(*piVar9 + 0x1304);
        if ((iVar10 != *(int *)(iVar3 + 0xb0)) || (iVar2 != *(int *)(iVar3 + 0xb4))) {
          FUN_100ba94f(iVar3);
          (**(code **)(**(int **)(iVar3 + 0x638) + 0x80))(*(int **)(iVar3 + 0x638),0xf,iVar10,iVar2)
          ;
          *(int *)(iVar3 + 0xb0) = iVar10;
          *(undefined1 *)(iVar3 + 0x620) = 1;
          *(int *)(iVar3 + 0xb4) = iVar2;
        }
      }
      *(undefined4 *)((int)this + 0xf698) = 0;
      *(undefined1 *)((int)this + 0xfd9d) = 0;
    }
    else if (*(int *)((int)this + 0xfa7c) != 0) {
      iVar10 = *(int *)((int)this + 0xf8c0);
      iVar2 = *(int *)((int)this + 0xf8c4);
      iVar3 = *(int *)(*piVar9 + 0x1304);
      if ((iVar10 != *(int *)(iVar3 + 0x78)) || (iVar2 != *(int *)(iVar3 + 0x7c))) {
        FUN_100ba94f(iVar3);
        (**(code **)(**(int **)(iVar3 + 0x638) + 0x80))(*(int **)(iVar3 + 0x638),8,iVar10,iVar2);
        *(int *)(iVar3 + 0x78) = iVar10;
        *(undefined1 *)(iVar3 + 0x620) = 1;
        *(int *)(iVar3 + 0x7c) = iVar2;
      }
    }
    *(undefined1 *)((int)this + 0xfd9c) = 0;
  }
  if (((*(char *)((int)this + 0xfda2) != '\0') || (param_2 != '\0')) &&
     (*(char *)((int)this + 0x7642) == '\0')) {
    if ((*(int *)((int)this + 0xfd70) != 0) || (*(char *)((int)this + 0xfda1) != '\0')) {
      iVar10 = *(int *)((int)this + 0xf8c8);
      iVar2 = *(int *)((int)this + 0xf8cc);
      iVar3 = *(int *)(*piVar9 + 0x1304);
      if ((iVar10 != *(int *)(iVar3 + 0x90)) || (iVar2 != *(int *)(iVar3 + 0x94))) {
        FUN_100ba94f(iVar3);
        (**(code **)(**(int **)(iVar3 + 0x638) + 0x80))(*(int **)(iVar3 + 0x638),0xb,iVar10,iVar2);
        *(int *)(iVar3 + 0x90) = iVar10;
        *(undefined1 *)(iVar3 + 0x620) = 1;
        *(int *)(iVar3 + 0x94) = iVar2;
      }
    }
    if ((*(int *)((int)this + 0xfd74) != 0) || (*(char *)((int)this + 0xfda1) != '\0')) {
      iVar10 = *(int *)((int)this + 0xf8c8);
      iVar2 = *(int *)((int)this + 0xf8cc);
      iVar3 = *(int *)(*piVar9 + 0x1304);
      if ((iVar10 != *(int *)(iVar3 + 0x98)) || (iVar2 != *(int *)(iVar3 + 0x9c))) {
        FUN_100ba94f(iVar3);
        (**(code **)(**(int **)(iVar3 + 0x638) + 0x80))(*(int **)(iVar3 + 0x638),0xc,iVar10,iVar2);
        *(int *)(iVar3 + 0x98) = iVar10;
        *(undefined1 *)(iVar3 + 0x620) = 1;
        *(int *)(iVar3 + 0x9c) = iVar2;
      }
    }
    if ((*(int *)((int)this + 0xfd20) != 0) || (*(int *)((int)this + 0xfd48) != 0)) {
      iVar10 = *(int *)((int)this + 0xf8e0);
      iVar2 = *(int *)((int)this + 0xf8e4);
      iVar3 = *(int *)(*piVar9 + 0x1304);
      if ((iVar10 != *(int *)(iVar3 + 0xb8)) || (iVar2 != *(int *)(iVar3 + 0xbc))) {
        FUN_100ba94f(iVar3);
        (**(code **)(**(int **)(iVar3 + 0x638) + 0x80))(*(int **)(iVar3 + 0x638),0x10,iVar10,iVar2);
        *(undefined1 *)(iVar3 + 0x620) = 1;
        *(int *)(iVar3 + 0xb8) = iVar10;
        *(int *)(iVar3 + 0xbc) = iVar2;
      }
    }
    *(undefined2 *)((int)this + 0xfda1) = 0;
  }
  return;
LAB_1003ed4f:
  uVar4 = uVar4 + 1;
  if (1 < uVar4) goto LAB_1003eeb6;
  goto LAB_1003ed30;
}

