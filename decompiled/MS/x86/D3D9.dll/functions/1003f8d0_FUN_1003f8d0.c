/*
 * FUN_1003f8d0 at 1003f8d0
 * undefined __thiscall FUN_1003f8d0(void * this, char param_1)
 * Address ranges: 1003f8d0-1003fc07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003f8d0(void *this,char param_1)

{
  byte bVar1;
  void *pvVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  uint *puVar12;
  uint local_34;
  uint local_28;
  uint local_18;
  int local_14;
  uint local_10 [3];
  
  if ((*(char *)((int)this + 0xfd9b) != '\0') || (param_1 != '\0')) {
    if ((*(int *)((int)this + 0x790) == 0) || (local_34 = 0x10, *(int *)((int)this + 0x794) == 0)) {
      local_34 = 0x20;
    }
    iVar6 = 0xb6c;
    local_10[0] = local_34;
    if (*(char *)((int)this + 0x764a) == '\0') {
      iVar6 = 0x79c;
    }
    local_10[1] = 0x20;
    if (*(int *)(iVar6 + (int)this) != 0) {
      local_10[1] = 0x10;
    }
    uVar10 = *(uint *)((int)this + 0xf8f8);
    local_28 = 0;
    if (uVar10 != 0) {
      do {
        *(undefined4 *)((int)this + 0xf748) = 0;
        if (local_28 < uVar10) {
          puVar12 = (uint *)(*(int *)((int)this + 0xf8f4) + (local_28 * 3 + 1) * 8);
        }
        else {
          puVar12 = (uint *)0x0;
        }
        if ((*(char *)((int)puVar12 + 0xb) != '\0') || (param_1 != '\0')) {
          uVar10 = 0;
          if ((char)puVar12[1] != '\0') {
            uVar10 = 0x80;
          }
          uVar3 = 0;
          if (*(char *)((int)puVar12 + 5) != '\0') {
            uVar3 = 0x40;
          }
          piVar11 = (int *)(uVar10 | uVar3);
          if ((piVar11 == (int *)0x0) ||
             ((*(char *)((int)this + 0x7642) != '\0' && (*puVar12 != *(uint *)((int)this + 0xfb7c)))
             )) {
            uVar10 = 0;
            if (*(char *)((int)puVar12 + 10) == '\0') {
              do {
                bVar1 = *(byte *)((int)puVar12 + uVar10 + 6);
                if (bVar1 != 0) {
                  uVar3 = *puVar12;
                  uVar7 = bVar1 - 1;
                  pvVar2 = *(void **)(*(int *)((int)this + 0xf6b8) + 0x1304);
                  if ((((*(int *)((int)pvVar2 + 0x8e0) != 0) && (uVar3 != 0)) &&
                      (iVar6 = FUN_100c133b(*(void **)((int)pvVar2 + 0x8e4),uVar3,uVar7,0,
                                            *(int *)((int)pvVar2 + 0x8e0),(int)pvVar2,4,
                                            *(int *)((int)pvVar2 + 0x938),
                                            *(int *)((int)pvVar2 + 0x93c)),
                      *(int *)(*(int *)((int)pvVar2 + 0x8e0) + 0x20) != 3)) && (iVar6 != 4)) {
                    FUN_100ba7a8(pvVar2,uVar3,uVar7,iVar6,4);
                  }
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < 4);
            }
            else {
              do {
                bVar1 = *(byte *)((int)puVar12 + uVar10 + 6);
                if (bVar1 != 0) {
                  uVar3 = *puVar12;
                  uVar7 = local_10[uVar10];
                  uVar8 = bVar1 - 1;
                  pvVar2 = *(void **)(*(int *)((int)this + 0xf6b8) + 0x1304);
                  if (((*(int *)((int)pvVar2 + 0x8e0) != 0) && (uVar3 != 0)) &&
                     ((uVar5 = FUN_100c133b(*(void **)((int)pvVar2 + 0x8e4),uVar3,uVar8,0,
                                            *(int *)((int)pvVar2 + 0x8e0),(int)pvVar2,uVar7,
                                            *(int *)((int)pvVar2 + 0x938),
                                            *(int *)((int)pvVar2 + 0x93c)),
                      *(int *)(*(int *)((int)pvVar2 + 0x8e0) + 0x20) != 3 && (uVar5 != uVar7)))) {
                    if (uVar5 == 0) {
                      uVar9 = uVar7;
                      if ((uVar7 & 0xcc0) == uVar7) {
                        uVar9 = 0;
                      }
                      if (uVar9 == 0) goto LAB_1003fb49;
                    }
                    FUN_100ba7a8(pvVar2,uVar3,uVar8,uVar5,uVar7);
                  }
                }
LAB_1003fb49:
                uVar10 = uVar10 + 1;
              } while (uVar10 < 2);
            }
          }
          else {
            if (*(char *)((int)puVar12 + 10) == '\0') {
              uVar10 = 0;
              do {
                bVar1 = *(byte *)((int)puVar12 + uVar10 + 6);
                if (bVar1 != 0) {
                  local_14 = bVar1 - 1;
                  local_18 = 4;
                  FUN_10043f60((void *)((int)this + 0xf744),&local_18);
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < 4);
            }
            else {
              if (local_34 == 0x20) {
                local_34 = (uint)piVar11 | 0x20;
                local_10[0] = local_34;
              }
              uVar10 = 0;
              do {
                bVar1 = *(byte *)((int)puVar12 + uVar10 + 6);
                if (bVar1 != 0) {
                  local_14 = bVar1 - 1;
                  local_18 = local_10[uVar10];
                  FUN_10043f60((void *)((int)this + 0xf744),&local_18);
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < 2);
            }
            piVar4 = (int *)0x0;
            if (*(int *)((int)this + 0xf748) != 0) {
              piVar4 = (int *)((int)this + 0xf744);
            }
            FUN_100baff6(*(void **)(*(int *)((int)this + 0xf6b8) + 0x1304),*puVar12,
                         (int *)((int)this + 0xf744),piVar11,piVar4);
          }
          *(undefined1 *)((int)puVar12 + 0xb) = 0;
        }
        uVar10 = *(uint *)((int)this + 0xf8f8);
        local_28 = local_28 + 1;
      } while (local_28 < uVar10);
    }
    *(undefined1 *)((int)this + 0xfd9b) = 0;
  }
  return;
}

