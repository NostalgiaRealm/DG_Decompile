/*
 * FUN_100460c5 at 100460c5
 * undefined4 __thiscall FUN_100460c5(void * this, int param_1, char param_2)
 * Address ranges: 100460c5-10046824
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100460c5(void *this,int param_1,char param_2)

{
  int iVar1;
  byte bVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  uint *puVar11;
  char local_35;
  undefined4 local_34;
  byte *local_30;
  byte *local_2c;
  undefined4 *local_28;
  uint *local_24;
  char local_20;
  undefined3 uStack_1f;
  char local_1c;
  undefined3 uStack_1b;
  undefined4 *local_18;
  void *local_14;
  byte *local_10;
  undefined4 local_c;
  
  iVar6 = 0;
  if (param_2 != '\0') {
    iVar6 = 3;
  }
  iVar1 = *(int *)((int)this + 0x210);
  *(int *)((int)this + 0x210) = iVar6;
  *(byte *)((int)this + 0x932) = *(byte *)((int)this + 0x932) | iVar6 != iVar1;
  local_2c = (byte *)(*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x68));
  local_24 = (uint *)0x3fc0;
  local_c = MXCSR;
  local_34 = 0;
  MXCSR = 0x3fc0;
  local_35 = '\x01';
  local_14 = this;
  local_10 = local_2c;
LAB_1004612d:
  if (*(uint *)(param_1 + 0x6c) <= (uint)((int)local_2c - (int)local_10)) {
    MXCSR = local_c;
    return local_34;
  }
  uVar5 = FUN_10046bb5(this,(int *)&local_2c,'\0',&local_35);
  if ((char)uVar5 == '\0') {
    local_30 = local_2c;
    bVar2 = *local_2c;
    puVar11 = (uint *)(local_2c + 4);
    local_24 = puVar11;
    if (bVar2 < 9) {
      if (bVar2 == 8) {
        uVar5 = 0;
        pbVar10 = local_2c;
        if (*(short *)(local_2c + 2) != 0) {
          do {
            iVar6 = 0;
            if (*puVar11 >= 0x101) {
              iVar6 = 0x100;
            }
            uVar8 = *puVar11 - iVar6;
            if ((uVar8 == 0) || (0x98 < uVar8)) goto LAB_10046251;
            if (*(char *)(*(int *)((int)this + 4) + uVar8 * 8) != '\0') {
              uVar9 = uVar8 >> 5;
              iVar6 = (int)(uVar8 & 0x1f) >> 3;
              if (*puVar11 < 0x101) {
                if ((*(byte *)((int)this + iVar6 + uVar9 * 4 + 0x1540) >> (uVar8 & 7) & 1) == 0) {
                  FUN_10047461(this,'\0');
                  FUN_1003e51d(this,*puVar11,puVar11[1]);
                  if (*puVar11 == 8) {
                    FUN_10047438((int)this);
                  }
                }
              }
              else if (puVar11[1] == 0) {
                pbVar10 = (byte *)((int)this + iVar6 + uVar9 * 4 + 0x1540);
                *pbVar10 = *pbVar10 & ~('\x01' << (uVar8 & 7));
              }
              else {
                pbVar10 = (byte *)((int)this + iVar6 + uVar9 * 4 + 0x1540);
                *pbVar10 = *pbVar10 | '\x01' << (uVar8 & 7);
              }
            }
            puVar11 = puVar11 + 2;
            uVar5 = uVar5 + 1;
            pbVar10 = local_30;
          } while (uVar5 < *(ushort *)(local_30 + 2));
        }
      }
      else if (bVar2 == 1) {
        if (*(int *)((int)this + 0x1568) != 1) {
          FUN_10047461(this,'\0');
          *(undefined4 *)((int)this + 0x1568) = 1;
          *(undefined4 *)((int)this + 0x1574) = 1;
        }
        local_28 = (undefined4 *)0x0;
        pbVar10 = local_30;
        if (*(short *)(local_30 + 2) != 0) {
          do {
            if (0xffff < (uint)(ushort)*puVar11 + *(int *)((int)this + 0x156c)) {
              FUN_10047461(this,'\x01');
              pbVar10 = local_30;
            }
            uVar5 = 0;
            if ((ushort)*puVar11 != 0) {
              do {
                *(ushort *)(*(int *)((int)this + 0x158c) + *(int *)((int)this + 0x156c) * 2) =
                     (short)uVar5 + *(ushort *)((int)puVar11 + 2);
                uVar8 = *(ushort *)((int)puVar11 + 2) + uVar5;
                if (*(uint *)((int)this + 0x1580) < uVar8) {
                  *(uint *)((int)this + 0x1580) = uVar8;
                }
                puVar11 = puVar11 + 1;
                uVar5 = uVar5 + 1;
                *(ulonglong *)((int)this + 0x156c) =
                     CONCAT44((int)((ulonglong)*(undefined8 *)((int)this + 0x156c) >> 0x20) + 1,
                              (int)*(undefined8 *)((int)this + 0x156c) + 1);
                pbVar10 = local_30;
              } while (uVar5 < (ushort)*puVar11);
            }
            local_28 = (undefined4 *)((int)local_28 + 1);
          } while (local_28 < (undefined4 *)(uint)*(ushort *)(pbVar10 + 2));
        }
      }
      else if (bVar2 == 2) {
        cVar7 = '\x01' - (*(int *)((int)this + 0x156c) + (uint)*(ushort *)(local_2c + 2) * 2 <
                         0x10000);
        _local_1c = CONCAT31(uStack_1b,cVar7);
        if ((*(int *)((int)this + 0x1568) != 2) || (cVar7 != '\0')) {
          FUN_10047461(this,cVar7);
          *(undefined4 *)((int)this + 0x1568) = 2;
          *(undefined4 *)((int)this + 0x1574) = 2;
        }
        uVar5 = 0;
        pbVar10 = local_30;
        if (*(short *)(local_30 + 2) != 0) {
          do {
            *(ushort *)(*(int *)((int)this + 0x158c) + *(int *)((int)this + 0x156c) * 2) =
                 (ushort)*puVar11;
            if (*(uint *)((int)this + 0x1580) < (uint)(ushort)*puVar11) {
              *(uint *)((int)this + 0x1580) = (uint)(ushort)*puVar11;
            }
            *(ushort *)(*(int *)((int)this + 0x158c) + 2 + *(int *)((int)this + 0x156c) * 2) =
                 *(ushort *)((int)puVar11 + 2);
            if (*(uint *)((int)this + 0x1580) < (uint)*(ushort *)((int)puVar11 + 2)) {
              *(uint *)((int)this + 0x1580) = (uint)*(ushort *)((int)puVar11 + 2);
            }
            puVar11 = puVar11 + 1;
            *(int *)((int)this + 0x156c) = *(int *)((int)this + 0x156c) + 2;
            *(int *)((int)this + 0x1570) = *(int *)((int)this + 0x1570) + 1;
            uVar5 = uVar5 + 1;
          } while (uVar5 < *(ushort *)(local_30 + 2));
        }
      }
      else if (bVar2 == 3) {
        cVar7 = '\x01' - ((uint)*(ushort *)(local_2c + 2) * *(int *)((int)this + 0x157c) +
                          *(int *)((int)this + 0x156c) < 0x10000);
        _local_20 = CONCAT31(uStack_1f,cVar7);
        if ((*(int *)((int)this + 0x1568) != *(int *)((int)this + 0x1578)) || (cVar7 != '\0')) {
          FUN_10047461(this,cVar7);
          *(undefined4 *)((int)this + 0x1568) = *(undefined4 *)((int)this + 0x1578);
          *(undefined4 *)((int)this + 0x1574) = *(undefined4 *)((int)this + 0x157c);
        }
        uVar5 = 0;
        pbVar10 = local_30;
        if (*(int *)((int)this + 0x2b0) == 2) {
          if (*(short *)(local_30 + 2) != 0) {
            do {
              if ((*(ushort *)((int)puVar11 + 6) & 0x100) != 0) {
                *(ushort *)(*(int *)((int)this + 0x158c) + *(int *)((int)this + 0x156c) * 2) =
                     (ushort)*puVar11;
                if (*(uint *)((int)this + 0x1580) < (uint)(ushort)*puVar11) {
                  *(uint *)((int)this + 0x1580) = (uint)(ushort)*puVar11;
                }
                *(ushort *)(*(int *)((int)this + 0x158c) + 2 + *(int *)((int)this + 0x156c) * 2) =
                     *(ushort *)((int)puVar11 + 2);
                if (*(uint *)((int)this + 0x1580) < (uint)*(ushort *)((int)puVar11 + 2)) {
                  *(uint *)((int)this + 0x1580) = (uint)*(ushort *)((int)puVar11 + 2);
                }
                *(int *)((int)this + 0x156c) = *(int *)((int)this + 0x156c) + 2;
                *(int *)((int)this + 0x1570) = *(int *)((int)this + 0x1570) + 1;
              }
              if ((*(ushort *)((int)puVar11 + 6) & 0x200) != 0) {
                *(ushort *)(*(int *)((int)this + 0x158c) + *(int *)((int)this + 0x156c) * 2) =
                     *(ushort *)((int)puVar11 + 2);
                if (*(uint *)((int)this + 0x1580) < (uint)*(ushort *)((int)puVar11 + 2)) {
                  *(uint *)((int)this + 0x1580) = (uint)*(ushort *)((int)puVar11 + 2);
                }
                *(ushort *)(*(int *)((int)this + 0x158c) + 2 + *(int *)((int)this + 0x156c) * 2) =
                     (ushort)puVar11[1];
                if (*(uint *)((int)this + 0x1580) < (uint)(ushort)puVar11[1]) {
                  *(uint *)((int)this + 0x1580) = (uint)(ushort)puVar11[1];
                }
                *(int *)((int)this + 0x156c) = *(int *)((int)this + 0x156c) + 2;
                *(int *)((int)this + 0x1570) = *(int *)((int)this + 0x1570) + 1;
              }
              if ((*(ushort *)((int)puVar11 + 6) & 0x400) != 0) {
                *(ushort *)(*(int *)((int)this + 0x158c) + *(int *)((int)this + 0x156c) * 2) =
                     (ushort)puVar11[1];
                if (*(uint *)((int)this + 0x1580) < (uint)(ushort)puVar11[1]) {
                  *(uint *)((int)this + 0x1580) = (uint)(ushort)puVar11[1];
                }
                *(ushort *)(*(int *)((int)this + 0x158c) + 2 + *(int *)((int)this + 0x156c) * 2) =
                     (ushort)*puVar11;
                if (*(uint *)((int)this + 0x1580) < (uint)(ushort)*puVar11) {
                  *(uint *)((int)this + 0x1580) = (uint)(ushort)*puVar11;
                }
                *(int *)((int)this + 0x156c) = *(int *)((int)this + 0x156c) + 2;
                *(int *)((int)this + 0x1570) = *(int *)((int)this + 0x1570) + 1;
              }
              puVar11 = puVar11 + 2;
              uVar5 = uVar5 + 1;
            } while (uVar5 < *(ushort *)(local_30 + 2));
          }
        }
        else {
          if (*(short *)(local_30 + 2) != 0) {
            do {
              *(ushort *)(*(int *)((int)this + 0x158c) + *(int *)((int)this + 0x156c) * 2) =
                   (ushort)*puVar11;
              if (*(uint *)((int)this + 0x1580) < (uint)(ushort)*puVar11) {
                *(uint *)((int)this + 0x1580) = (uint)(ushort)*puVar11;
              }
              *(ushort *)(*(int *)((int)this + 0x158c) + 2 + *(int *)((int)this + 0x156c) * 2) =
                   *(ushort *)((int)puVar11 + 2);
              if (*(uint *)((int)this + 0x1580) < (uint)*(ushort *)((int)puVar11 + 2)) {
                *(uint *)((int)this + 0x1580) = (uint)*(ushort *)((int)puVar11 + 2);
              }
              *(ushort *)(*(int *)((int)this + 0x158c) + 4 + *(int *)((int)this + 0x156c) * 2) =
                   (ushort)puVar11[1];
              if (*(uint *)((int)this + 0x1580) < (uint)(ushort)puVar11[1]) {
                *(uint *)((int)this + 0x1580) = (uint)(ushort)puVar11[1];
              }
              puVar11 = puVar11 + 2;
              *(int *)((int)this + 0x156c) = *(int *)((int)this + 0x156c) + 3;
              uVar5 = uVar5 + 1;
            } while (uVar5 < *(ushort *)(local_30 + 2));
          }
          uVar5 = (uint)*(ushort *)(local_30 + 2);
          if (*(int *)((int)this + 0x2b0) == 1) {
            uVar5 = uVar5 * 3;
          }
          *(int *)((int)this + 0x1570) = *(int *)((int)this + 0x1570) + uVar5;
        }
      }
      else {
        if (bVar2 != 7) goto LAB_10046725;
        uVar5 = 0;
        pbVar10 = local_2c;
        if (*(short *)(local_2c + 2) != 0) {
          do {
            iVar6 = 0;
            if (*puVar11 >= 0x101) {
              iVar6 = 0x100;
            }
            uVar8 = *puVar11 - iVar6;
            if ((uVar8 == 0) || (8 < uVar8)) goto LAB_10046251;
            if (*(char *)(*(int *)((int)this + 0xa5c) + uVar8 * 8) != '\0') {
              uVar8 = uVar8 + 0x100;
              uVar9 = uVar8 >> 5;
              iVar6 = (int)(uVar8 & 0x1f) >> 3;
              if (*puVar11 < 0x101) {
                if ((*(byte *)((int)this + iVar6 + uVar9 * 4 + 0x1540) >> (uVar8 & 7) & 1) == 0) {
                  FUN_10047461(this,'\0');
                  uVar8 = puVar11[1];
                  if ((*puVar11 == 4) && (uVar8 != 0)) {
                    uVar8 = 3;
                  }
                  FUN_1003e9d3(this,*puVar11,uVar8);
                }
              }
              else if (puVar11[1] == 0) {
                pbVar10 = (byte *)((int)this + iVar6 + uVar9 * 4 + 0x1540);
                *pbVar10 = *pbVar10 & ~('\x01' << (uVar8 & 7));
              }
              else {
                pbVar10 = (byte *)((int)this + iVar6 + uVar9 * 4 + 0x1540);
                *pbVar10 = *pbVar10 | '\x01' << (uVar8 & 7);
              }
            }
            puVar11 = puVar11 + 2;
            uVar5 = uVar5 + 1;
            pbVar10 = local_30;
          } while (uVar5 < *(ushort *)(local_30 + 2));
        }
      }
    }
    else if (bVar2 == 10) {
      uVar5 = 0;
      pbVar10 = local_2c;
      if (*(short *)(local_2c + 2) != 0) {
        do {
          if ((*puVar11 != 0) && (puVar11[1] != 0)) {
            local_28 = (undefined4 *)*puVar11;
            local_24 = puVar11;
            local_28 = (undefined4 *)FUN_100273a3((void *)((int)this + 0x17b8),(uint *)&local_28);
            local_18 = (undefined4 *)puVar11[1];
            local_18 = (undefined4 *)FUN_100273a3((void *)((int)this + 0x17b8),(uint *)&local_18);
            pbVar10 = local_30;
            if ((local_28 != (undefined4 *)0x0) && (local_18 != (undefined4 *)0x0)) {
              FUN_10047461(this,'\0');
              puVar3 = (undefined4 *)*local_18;
              piVar4 = (int *)*local_28;
              (**(code **)*puVar3)();
              (**(code **)(*piVar4 + 0x50))(puVar3);
              pbVar10 = local_30;
              this = local_14;
              puVar11 = local_24;
            }
          }
          puVar11 = puVar11 + 2;
          uVar5 = uVar5 + 1;
          local_24 = puVar11;
        } while (uVar5 < *(ushort *)(pbVar10 + 2));
      }
    }
    else {
      if (bVar2 != 0xb) {
        pbVar10 = local_2c;
        if (bVar2 == 0xd) goto LAB_100467d7;
LAB_10046725:
        local_34 = 0x80070057;
      }
      local_35 = '\0';
      pbVar10 = local_2c;
    }
    goto LAB_100467d7;
  }
  goto LAB_100467f5;
LAB_10046251:
  local_34 = 0x80070057;
  local_35 = '\0';
  pbVar10 = local_30;
LAB_100467d7:
  local_2c = local_2c + (uint)*(ushort *)(pbVar10 + 2) * (uint)pbVar10[1] + 4;
LAB_100467f5:
  if (local_35 == '\0') {
    MXCSR = local_c;
    return local_34;
  }
  goto LAB_1004612d;
}

