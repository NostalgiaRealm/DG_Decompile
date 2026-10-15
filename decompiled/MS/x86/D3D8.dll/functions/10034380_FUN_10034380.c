/*
 * FUN_10034380 at 10034380
 * undefined __thiscall FUN_10034380(void * this, char param_1)
 * Address ranges: 10034380-10034697
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10034380(void *this,char param_1)

{
  byte bVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint local_34;
  uint local_28;
  uint local_18;
  int local_14;
  uint local_10 [3];
  
  if ((*(char *)((int)this + 0xde5b) != '\0') || (param_1 != '\0')) {
    if ((*(int *)((int)this + 0x410) == 0) || (local_34 = 0x10, *(int *)((int)this + 0x414) == 0)) {
      local_34 = 0x20;
    }
    local_10[0] = local_34;
    local_10[1] = 0x20;
    if (*(int *)((int)this + 0x41c) != 0) {
      local_10[1] = 0x10;
    }
    uVar10 = *(uint *)((int)this + 0xdb40);
    local_28 = 0;
    if (uVar10 != 0) {
      do {
        *(undefined4 *)((int)this + 0xda48) = 0;
        if (local_28 < uVar10) {
          puVar11 = (uint *)(*(int *)((int)this + 0xdb3c) + (local_28 * 3 + 1) * 8);
        }
        else {
          puVar11 = (uint *)0x0;
        }
        if ((*(char *)((int)puVar11 + 10) != '\0') || (param_1 != '\0')) {
          if (((char)puVar11[1] == '\0') ||
             ((*(char *)((int)this + 0x5955) != '\0' && (*puVar11 != *(uint *)((int)this + 0xdc80)))
             )) {
            uVar10 = 0;
            if (*(char *)((int)puVar11 + 9) == '\0') {
              do {
                bVar1 = *(byte *)((int)puVar11 + uVar10 + 5);
                if (bVar1 != 0) {
                  uVar2 = *puVar11;
                  uVar7 = bVar1 - 1;
                  pvVar3 = *(void **)(*(int *)((int)this + 0xd9b8) + 0x1304);
                  if ((((*(int *)((int)pvVar3 + 0x8e0) != 0) && (uVar2 != 0)) &&
                      (iVar6 = FUN_1009ed73(*(void **)((int)pvVar3 + 0x8e4),uVar2,uVar7,0,
                                            *(int *)((int)pvVar3 + 0x8e0),(int)pvVar3,4,
                                            *(int *)((int)pvVar3 + 0x938),
                                            *(int *)((int)pvVar3 + 0x93c)),
                      *(int *)(*(int *)((int)pvVar3 + 0x8e0) + 0x20) != 3)) && (iVar6 != 4)) {
                    FUN_100981d0(pvVar3,uVar2,uVar7,iVar6,4);
                  }
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < 4);
            }
            else {
              do {
                bVar1 = *(byte *)((int)puVar11 + uVar10 + 5);
                if (bVar1 != 0) {
                  uVar2 = *puVar11;
                  uVar7 = local_10[uVar10];
                  uVar8 = bVar1 - 1;
                  pvVar3 = *(void **)(*(int *)((int)this + 0xd9b8) + 0x1304);
                  if (((*(int *)((int)pvVar3 + 0x8e0) != 0) && (uVar2 != 0)) &&
                     ((uVar5 = FUN_1009ed73(*(void **)((int)pvVar3 + 0x8e4),uVar2,uVar8,0,
                                            *(int *)((int)pvVar3 + 0x8e0),(int)pvVar3,uVar7,
                                            *(int *)((int)pvVar3 + 0x938),
                                            *(int *)((int)pvVar3 + 0x93c)),
                      *(int *)(*(int *)((int)pvVar3 + 0x8e0) + 0x20) != 3 && (uVar5 != uVar7)))) {
                    if (uVar5 == 0) {
                      uVar9 = uVar7;
                      if ((uVar7 & 0xcc0) == uVar7) {
                        uVar9 = 0;
                      }
                      if (uVar9 == 0) goto LAB_100345d9;
                    }
                    FUN_100981d0(pvVar3,uVar2,uVar8,uVar5,uVar7);
                  }
                }
LAB_100345d9:
                uVar10 = uVar10 + 1;
              } while (uVar10 < 2);
            }
          }
          else {
            if (*(char *)((int)puVar11 + 9) == '\0') {
              uVar10 = 0;
              do {
                bVar1 = *(byte *)((int)puVar11 + uVar10 + 5);
                if (bVar1 != 0) {
                  local_14 = bVar1 - 1;
                  local_18 = 4;
                  FUN_100388e0((void *)((int)this + 0xda44),&local_18);
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < 4);
            }
            else {
              if (local_34 == 0x20) {
                local_34 = 0xa0;
                local_10[0] = 0xa0;
              }
              uVar10 = 0;
              do {
                bVar1 = *(byte *)((int)puVar11 + uVar10 + 5);
                if (bVar1 != 0) {
                  local_14 = bVar1 - 1;
                  local_18 = local_10[uVar10];
                  FUN_100388e0((void *)((int)this + 0xda44),&local_18);
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < 2);
            }
            piVar4 = (int *)0x0;
            if (*(int *)((int)this + 0xda48) != 0) {
              piVar4 = (int *)((int)this + 0xda44);
            }
            FUN_10098a1e(*(void **)(*(int *)((int)this + 0xd9b8) + 0x1304),*puVar11,
                         (int *)((int)this + 0xda44),(int *)0x80,piVar4);
          }
          *(undefined1 *)((int)puVar11 + 10) = 0;
        }
        uVar10 = *(uint *)((int)this + 0xdb40);
        local_28 = local_28 + 1;
      } while (local_28 < uVar10);
    }
    *(undefined1 *)((int)this + 0xde5b) = 0;
  }
  return;
}

