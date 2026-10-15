/*
 * FUN_10033b00 at 10033b00
 * undefined __thiscall FUN_10033b00(void * this, undefined4 param_1, char param_2)
 * Address ranges: 10033b00-10034103
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10033b00(void *this,undefined4 param_1,char param_2)

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
  
  if ((*(char *)((int)this + 0xde5a) == '\0') && (param_2 == '\0')) goto LAB_10033dad;
  if (*(char *)((int)this + 0x5955) == '\0') {
    bVar6 = -(*(int *)((int)this + 0xdc8c) != 0) & 2U | *(int *)((int)this + 0xdc88) != 0;
    if (bVar6 != 0) {
      iVar10 = *(int *)(*(int *)((int)this + 0xd9b8) + 0x1304);
      if (bVar6 == 1) {
        uVar7 = *(uint *)(iVar10 + 0x24);
        uVar4 = 0;
        if (uVar7 != 0) {
          do {
            if (*(int *)(iVar10 + 0x28 + uVar4 * 4) == *(int *)((int)this + 0xdc88)) break;
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
          goto LAB_10033d78;
        }
      }
      else {
        uVar7 = *(uint *)(iVar10 + 0x24);
        if (bVar6 != 2) {
          uVar4 = 0;
LAB_10033c20:
          uVar5 = 0;
          if (uVar7 != 0) {
            do {
              if (*(int *)(iVar10 + 0x28 + uVar5 * 4) == *(int *)((int)this + uVar4 * 4 + 0xdc88))
              goto LAB_10033c3f;
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar7);
          }
          if (uVar5 != uVar7) goto LAB_10033c3f;
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
                    (*(int **)(iVar10 + 0x638),2,(undefined4 *)((int)this + 0xdc88));
          *(undefined1 *)(iVar10 + 0x620) = 1;
          *(undefined4 *)(iVar10 + 0x24) = 2;
          uVar1 = *(undefined4 *)((int)this + 0xdc8c);
          *(undefined4 *)(iVar10 + 0x28) = *(undefined4 *)((int)this + 0xdc88);
          *(undefined4 *)(iVar10 + 0x2c) = uVar1;
          goto LAB_10033da6;
        }
        uVar4 = 0;
        if (uVar7 != 0) {
          do {
            if (*(int *)(iVar10 + 0x28 + uVar4 * 4) == *(int *)((int)this + 0xdc8c))
            goto LAB_10033da6;
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
          puVar8 = (undefined4 *)((int)this + 0xdc8c);
          goto LAB_10033d7e;
        }
      }
    }
  }
  else if (*(int *)((int)this + 0xdbe0) != 0) {
    iVar10 = *(int *)(*(int *)((int)this + 0xd9b8) + 0x1304);
    uVar4 = 0;
    uVar7 = *(uint *)(iVar10 + 0x24);
    if (uVar7 != 0) {
      do {
        if (*(int *)(iVar10 + 0x28 + uVar4 * 4) == *(int *)((int)this + 0xdc88)) goto LAB_10033da6;
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
LAB_10033d78:
      puVar8 = (undefined4 *)((int)this + 0xdc88);
LAB_10033d7e:
      (**(code **)(**(int **)(iVar10 + 0x638) + 0x70))(*(int **)(iVar10 + 0x638),1,puVar8);
      *(undefined1 *)(iVar10 + 0x620) = 1;
      *(undefined4 *)(iVar10 + 0x24) = 1;
      *(undefined4 *)(iVar10 + 0x28) = *puVar8;
    }
  }
LAB_10033da6:
  *(undefined1 *)((int)this + 0xde5a) = 0;
LAB_10033dad:
  piVar9 = (int *)((int)this + 0xd9b8);
  if (*(char *)((int)this + 0xde5e) != '\0') {
    if (*(char *)((int)this + 0xde69) != '\0') {
      iVar10 = *(int *)((int)this + 0xdb08);
      iVar2 = *(int *)((int)this + 0xdb0c);
      iVar3 = *(int *)(*piVar9 + 0x1304);
      if ((iVar10 != *(int *)(iVar3 + 0x58)) || (iVar2 != *(int *)(iVar3 + 0x5c))) {
        FUN_10098377(iVar3);
        (**(code **)(**(int **)(iVar3 + 0x638) + 0x80))(*(int **)(iVar3 + 0x638),4,iVar10,iVar2);
        *(int *)(iVar3 + 0x58) = iVar10;
        *(undefined1 *)(iVar3 + 0x620) = 1;
        *(int *)(iVar3 + 0x5c) = iVar2;
      }
    }
    *(undefined1 *)((int)this + 0xde5e) = 0;
  }
  if (*(char *)((int)this + 0xde5c) != '\0') {
    if (*(char *)((int)this + 0x5955) == '\0') {
      if ((*(int *)((int)this + 0xde3c) != 0) || (*(char *)((int)this + 0xde5d) != '\0')) {
        iVar10 = *(int *)((int)this + 0xdb20);
        iVar2 = *(int *)((int)this + 0xdb24);
        iVar3 = *(int *)(*piVar9 + 0x1304);
        if ((iVar10 != *(int *)(iVar3 + 0x70)) || (iVar2 != *(int *)(iVar3 + 0x74))) {
          FUN_10098377(iVar3);
          (**(code **)(**(int **)(iVar3 + 0x638) + 0x80))(*(int **)(iVar3 + 0x638),7,iVar10,iVar2);
          *(int *)(iVar3 + 0x70) = iVar10;
          *(undefined1 *)(iVar3 + 0x620) = 1;
          *(int *)(iVar3 + 0x74) = iVar2;
        }
      }
      if ((*(int *)((int)this + 0xde40) != 0) || (*(char *)((int)this + 0xde5d) != '\0')) {
        iVar10 = *(int *)((int)this + 0xdb20);
        iVar2 = *(int *)((int)this + 0xdb24);
        iVar3 = *(int *)(*piVar9 + 0x1304);
        if ((iVar10 != *(int *)(iVar3 + 0x78)) || (iVar2 != *(int *)(iVar3 + 0x7c))) {
          FUN_10098377(iVar3);
          (**(code **)(**(int **)(iVar3 + 0x638) + 0x80))(*(int **)(iVar3 + 0x638),8,iVar10,iVar2);
          *(int *)(iVar3 + 0x78) = iVar10;
          *(undefined1 *)(iVar3 + 0x620) = 1;
          *(int *)(iVar3 + 0x7c) = iVar2;
        }
      }
      if ((*(int *)((int)this + 0xde44) != 0) || (*(char *)((int)this + 0xde5d) != '\0')) {
        iVar10 = *(int *)((int)this + 0xdb20);
        iVar2 = *(int *)((int)this + 0xdb24);
        iVar3 = *(int *)(*piVar9 + 0x1304);
        if ((iVar10 != *(int *)(iVar3 + 0x80)) || (iVar2 != *(int *)(iVar3 + 0x84))) {
          FUN_10098377(iVar3);
          (**(code **)(**(int **)(iVar3 + 0x638) + 0x80))(*(int **)(iVar3 + 0x638),9,iVar10,iVar2);
          *(int *)(iVar3 + 0x80) = iVar10;
          *(undefined1 *)(iVar3 + 0x620) = 1;
          *(int *)(iVar3 + 0x84) = iVar2;
        }
      }
      *(undefined4 *)((int)this + 0xd970) = 0;
      *(undefined1 *)((int)this + 0xde5d) = 0;
    }
    else if (*(int *)((int)this + 0xdbe0) != 0) {
      iVar10 = *(int *)((int)this + 0xdb20);
      iVar2 = *(int *)((int)this + 0xdb24);
      iVar3 = *(int *)(*piVar9 + 0x1304);
      if ((iVar10 != *(int *)(iVar3 + 0x70)) || (iVar2 != *(int *)(iVar3 + 0x74))) {
        FUN_10098377(iVar3);
        (**(code **)(**(int **)(iVar3 + 0x638) + 0x80))(*(int **)(iVar3 + 0x638),7,iVar10,iVar2);
        *(int *)(iVar3 + 0x70) = iVar10;
        *(undefined1 *)(iVar3 + 0x620) = 1;
        *(int *)(iVar3 + 0x74) = iVar2;
      }
    }
    *(undefined1 *)((int)this + 0xde5c) = 0;
  }
  if (((*(char *)((int)this + 0xde62) != '\0') || (param_2 != '\0')) &&
     (*(char *)((int)this + 0x5955) == '\0')) {
    if ((*(int *)((int)this + 0xde30) != 0) || (*(char *)((int)this + 0xde61) != '\0')) {
      iVar10 = *(int *)((int)this + 0xdb28);
      iVar2 = *(int *)((int)this + 0xdb2c);
      iVar3 = *(int *)(*piVar9 + 0x1304);
      if ((iVar10 != *(int *)(iVar3 + 0x88)) || (iVar2 != *(int *)(iVar3 + 0x8c))) {
        FUN_10098377(iVar3);
        (**(code **)(**(int **)(iVar3 + 0x638) + 0x80))(*(int **)(iVar3 + 0x638),10,iVar10,iVar2);
        *(int *)(iVar3 + 0x88) = iVar10;
        *(undefined1 *)(iVar3 + 0x620) = 1;
        *(int *)(iVar3 + 0x8c) = iVar2;
      }
    }
    if ((*(int *)((int)this + 0xde34) != 0) || (*(char *)((int)this + 0xde61) != '\0')) {
      iVar10 = *(int *)((int)this + 0xdb28);
      iVar2 = *(int *)((int)this + 0xdb2c);
      iVar3 = *(int *)(*piVar9 + 0x1304);
      if ((iVar10 != *(int *)(iVar3 + 0x90)) || (iVar2 != *(int *)(iVar3 + 0x94))) {
        FUN_10098377(iVar3);
        (**(code **)(**(int **)(iVar3 + 0x638) + 0x80))(*(int **)(iVar3 + 0x638),0xb,iVar10,iVar2);
        *(undefined1 *)(iVar3 + 0x620) = 1;
        *(int *)(iVar3 + 0x90) = iVar10;
        *(int *)(iVar3 + 0x94) = iVar2;
      }
    }
    *(undefined2 *)((int)this + 0xde61) = 0;
  }
  return;
LAB_10033c3f:
  uVar4 = uVar4 + 1;
  if (1 < uVar4) goto LAB_10033da6;
  goto LAB_10033c20;
}

