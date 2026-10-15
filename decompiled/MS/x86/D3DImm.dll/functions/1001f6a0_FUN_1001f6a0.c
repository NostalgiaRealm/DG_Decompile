/*
 * FUN_1001f6a0 at 1001f6a0
 * undefined __thiscall FUN_1001f6a0(void * this, char param_1)
 * Address ranges: 1001f6a0-1001f9fa;1001fa00-1001fab1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001f6a0(void *this,char param_1)

{
  byte bVar1;
  int iVar2;
  void *this_00;
  SIZE_T SVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint local_34 [3];
  int *local_28;
  undefined4 *local_24;
  int *local_20;
  uint local_1c;
  undefined4 *local_18;
  SIZE_T local_14;
  uint local_10;
  uint local_c;
  uint *local_8;
  
  if ((*(char *)((int)this + 0x21d3) != '\0') || (param_1 != '\0')) {
    if ((*(int *)((int)this + 0x260) == 0) || (uVar9 = 0x10, *(int *)((int)this + 0x264) == 0)) {
      uVar9 = 0x20;
    }
    local_34[1] = 0x20;
    if (*(int *)((int)this + 0x26c) != 0) {
      local_34[1] = 0x10;
    }
    local_34[0] = uVar9;
    uVar8 = *(uint *)((int)this + 0x1ec8);
    local_1c = 0;
    if (uVar8 != 0) {
      local_20 = (int *)0x80;
      local_10 = 8;
      local_14 = 0xffffffff;
      local_c = uVar9;
      do {
        *(undefined4 *)((int)this + 0x1de4) = 0;
        if (local_1c < uVar8) {
          puVar6 = (uint *)(*(int *)((int)this + 0x1ec4) + (local_1c * 3 + 1) * 8);
        }
        else {
          puVar6 = (uint *)0x0;
        }
        if ((*(char *)((int)puVar6 + 10) != '\0') || (param_1 != '\0')) {
          local_28 = (int *)0x0;
          local_8 = puVar6;
          if (((char)puVar6[1] == '\0') ||
             ((local_28 = local_20, *(char *)((int)this + 0x1905) != '\0' &&
              (*puVar6 != *(uint *)((int)this + 0x1fe8))))) {
            uVar9 = 0;
            if (*(char *)((int)puVar6 + 9) == '\0') {
              do {
                bVar1 = *(byte *)((int)puVar6 + uVar9 + 5);
                if (bVar1 != 0) {
                  local_34[2] = bVar1 - 1;
                  local_28 = (int *)*local_8;
                  this_00 = *(void **)(*(int *)((int)this + 0x1d54) + 0x1304);
                  puVar6 = local_8;
                  if ((((*(int *)((int)this_00 + 0x8e0) != 0) && (local_28 != (int *)0x0)) &&
                      (iVar5 = FUN_10055a43(*(void **)((int)this_00 + 0x8e4),(uint)local_28,
                                            local_34[2],0,*(int *)((int)this_00 + 0x8e0),
                                            (int)this_00,4,*(int *)((int)this_00 + 0x938),
                                            *(int *)((int)this_00 + 0x93c)), puVar6 = local_8,
                      *(int *)(*(int *)((int)this_00 + 0x8e0) + 0x20) != 3)) && (iVar5 != 4)) {
                    FUN_10051f2d(this_00,local_28,local_34[2],iVar5,4);
                    puVar6 = local_8;
                  }
                }
                uVar9 = uVar9 + 1;
              } while (uVar9 < 4);
            }
            else {
              do {
                bVar1 = *(byte *)((int)puVar6 + uVar9 + 5);
                if (bVar1 != 0) {
                  local_34[2] = *puVar6;
                  piVar4 = (int *)local_34[uVar9];
                  local_24 = (undefined4 *)(bVar1 - 1);
                  local_18 = *(undefined4 **)(*(int *)((int)this + 0x1d54) + 0x1304);
                  puVar6 = local_8;
                  if (((local_18[0x238] != 0) && (local_34[2] != 0)) &&
                     ((local_28 = (int *)FUN_10055a43((void *)local_18[0x239],local_34[2],
                                                      (uint)local_24,0,local_18[0x238],(int)local_18
                                                      ,(int)piVar4,local_18[0x24e],local_18[0x24f]),
                      puVar6 = local_8, *(int *)(local_18[0x238] + 0x20) != 3 &&
                      (local_28 != piVar4)))) {
                    if (local_28 == (int *)0x0) {
                      piVar7 = piVar4;
                      if ((int *)((uint)piVar4 & 0xcc0) == piVar4) {
                        piVar7 = (int *)0x0;
                      }
                      if (piVar7 == (int *)0x0) goto LAB_1001f9ef;
                    }
                    FUN_10051f2d(local_18,local_34[2],local_24,local_28,piVar4);
                    puVar6 = local_8;
                  }
                }
LAB_1001f9ef:
                uVar9 = uVar9 + 1;
              } while (uVar9 < 2);
            }
          }
          else {
            if (*(char *)((int)puVar6 + 9) == '\0') {
              uVar9 = 0;
              do {
                bVar1 = *(byte *)((int)puVar6 + uVar9 + 5);
                if (bVar1 != 0) {
                  local_18 = (undefined4 *)(bVar1 - 1);
                  iVar5 = *(int *)((int)this + 0x1de8);
                  if (*(int *)((int)this + 0x1de4) == iVar5) {
                    uVar8 = 0x10;
                    if (iVar5 != 0) {
                      uVar8 = iVar5 * 2;
                    }
                    SVar3 = (SIZE_T)((ulonglong)uVar8 * (ulonglong)local_10);
                    if ((int)((ulonglong)uVar8 * (ulonglong)local_10 >> 0x20) != 0) {
                      SVar3 = local_14;
                    }
                    local_24 = (undefined4 *)FUN_1005c789(SVar3);
                    puVar6 = local_8;
                    if (local_24 == (undefined4 *)0x0) goto LAB_1001f907;
                    FUN_1005ca00(local_24,*(undefined4 **)((int)this + 0x1de0),
                                 *(int *)((int)this + 0x1de8) << 3);
                    thunk_FUN_1005c76c(*(LPVOID *)((int)this + 0x1de0));
                    *(undefined4 **)((int)this + 0x1de0) = local_24;
                    *(uint *)((int)this + 0x1de8) = uVar8;
                  }
                  iVar5 = *(int *)((int)this + 0x1de4);
                  iVar2 = *(int *)((int)this + 0x1de0);
                  *(undefined4 *)(iVar2 + iVar5 * 8) = 4;
                  *(undefined4 **)(iVar2 + 4 + iVar5 * 8) = local_18;
                  *(int *)((int)this + 0x1de4) = *(int *)((int)this + 0x1de4) + 1;
                  puVar6 = local_8;
                }
LAB_1001f907:
                uVar9 = uVar9 + 1;
              } while (uVar9 < 4);
            }
            else {
              if (uVar9 == 0x20) {
                local_c = (uint)local_20 | 0x20;
                local_34[0] = local_c;
              }
              uVar9 = 0;
              do {
                bVar1 = *(byte *)((int)puVar6 + uVar9 + 5);
                if (bVar1 != 0) {
                  local_24 = (undefined4 *)(bVar1 - 1);
                  iVar5 = *(int *)((int)this + 0x1de8);
                  if (*(int *)((int)this + 0x1de4) == iVar5) {
                    uVar8 = 0x10;
                    if (iVar5 != 0) {
                      uVar8 = iVar5 * 2;
                    }
                    SVar3 = (SIZE_T)((ulonglong)uVar8 * (ulonglong)local_10);
                    if ((int)((ulonglong)uVar8 * (ulonglong)local_10 >> 0x20) != 0) {
                      SVar3 = local_14;
                    }
                    local_18 = (undefined4 *)FUN_1005c789(SVar3);
                    puVar6 = local_8;
                    if (local_18 == (undefined4 *)0x0) goto LAB_1001f853;
                    FUN_1005ca00(local_18,*(undefined4 **)((int)this + 0x1de0),
                                 *(int *)((int)this + 0x1de8) << 3);
                    thunk_FUN_1005c76c(*(LPVOID *)((int)this + 0x1de0));
                    *(undefined4 **)((int)this + 0x1de0) = local_18;
                    *(uint *)((int)this + 0x1de8) = uVar8;
                  }
                  iVar5 = *(int *)((int)this + 0x1de0);
                  iVar2 = *(int *)((int)this + 0x1de4);
                  *(uint *)(iVar5 + iVar2 * 8) = local_34[uVar9];
                  *(undefined4 **)(iVar5 + 4 + iVar2 * 8) = local_24;
                  *(int *)((int)this + 0x1de4) = *(int *)((int)this + 0x1de4) + 1;
                  puVar6 = local_8;
                }
LAB_1001f853:
                uVar9 = uVar9 + 1;
              } while (uVar9 < 2);
            }
            piVar4 = (int *)0x0;
            if (*(int *)((int)this + 0x1de4) != 0) {
              piVar4 = (int *)((int)this + 0x1de0);
            }
            FUN_1005244c(*(void **)(*(int *)((int)this + 0x1d54) + 0x1304),*puVar6,puVar6,local_28,
                         piVar4);
          }
          *(undefined1 *)((int)local_8 + 10) = 0;
          uVar9 = local_c;
        }
        uVar8 = *(uint *)((int)this + 0x1ec8);
        local_1c = local_1c + 1;
      } while (local_1c < uVar8);
    }
    *(undefined1 *)((int)this + 0x21d3) = 0;
  }
  return;
}

