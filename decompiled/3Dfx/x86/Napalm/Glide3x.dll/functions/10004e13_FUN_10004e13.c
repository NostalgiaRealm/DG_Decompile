/*
 * FUN_10004e13 at 10004e13
 * int __thiscall FUN_10004e13(void * this, int * param_1, uint * param_2)
 * Address ranges: 10004e13-10005055
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10004e13(void *this,int *param_1,uint *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  uint uStack_20;
  int iStack_1c;
  int iStack_10;
  
  local_2c = 0;
  cVar2 = FUN_1000560f((int)this);
  if (cVar2 != '\0') {
    if (((*param_1 == 0x7fff7fff) && (param_1[1] == 0x7fff7fff)) &&
       (uVar3 = FUN_100061fc((int)this), uVar3 == 4)) {
      uVar4 = FUN_1000567d((int)this);
      if ((char)uVar4 != '\0') {
        uVar3 = (**(code **)(**(int **)((int)this + 0x18) + 0x50))
                          (*(undefined4 *)((int)this + 0x10),*(undefined4 *)((int)this + 0x14),
                           *(undefined4 *)(*(int *)((int)this + 0x1c) + 0x77c));
        local_34 = (uint *)0x0;
        if (uVar3 != 0) {
          do {
            uVar5 = 2;
            do {
              local_30 = 0;
              do {
                if (param_2 != (uint *)0x0) {
                  (**(code **)(**(int **)((int)this + 0x18) + 0x54))
                            (&uStack_20,*(undefined4 *)((int)this + 0x10),
                             *(undefined4 *)((int)this + 0x14),
                             *(undefined4 *)(*(int *)((int)this + 0x1c) + 0x77c),local_34);
                  *param_2 = iStack_1c << 0x10 | uStack_20;
                  param_2[1] = iStack_10 << 0x10;
                  param_2[2] = uVar5;
                  param_2[3] = local_30;
                  param_2 = param_2 + 4;
                }
                local_2c = local_2c + 0x10;
                local_30 = local_30 + 1;
              } while (local_30 <= (uVar5 == 2));
              uVar5 = uVar5 + 1;
            } while (uVar5 < 4);
            local_34 = (uint *)((int)local_34 + 1);
          } while (local_34 < uVar3);
        }
      }
    }
    else {
      uVar3 = 0;
      local_34 = param_2;
      do {
        iVar1 = *param_1;
        if (((iVar1 == -1) || (iVar1 == 0xff)) || (iVar1 == (&DAT_10058880)[uVar3])) {
          local_28 = 0;
          do {
            iVar1 = param_1[1];
            if (((iVar1 == -1) || (iVar1 == 0xff)) || (iVar1 == (&DAT_10058858)[local_28])) {
              uVar5 = 2;
              do {
                if ((param_1[2] == -1) || (param_1[2] == uVar5)) {
                  local_30 = 0;
                  do {
                    if (((param_1[3] == -1) || (param_1[3] == local_30)) &&
                       ((uint)(ushort)(&DAT_1005881a)[uVar3 * 2] *
                        (uint)(ushort)(&DAT_10058818)[uVar3 * 2] * (local_30 + uVar5) * 2 <=
                        *(uint *)(*(int *)((int)this + 0x1c) + 0x78f))) {
                      if (local_34 != (uint *)0x0) {
                        *local_34 = (&DAT_10058880)[uVar3];
                        local_34[1] = (&DAT_10058858)[local_28];
                        local_34[2] = uVar5;
                        local_34[3] = local_30;
                        local_34 = local_34 + 4;
                      }
                      local_2c = local_2c + 0x10;
                    }
                    local_30 = local_30 + 1;
                  } while (local_30 <= (uVar5 == 2));
                }
                uVar5 = uVar5 + 1;
              } while (uVar5 < 4);
            }
            local_28 = local_28 + 1;
          } while (local_28 < 9);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 0x10);
    }
  }
  return local_2c;
}

