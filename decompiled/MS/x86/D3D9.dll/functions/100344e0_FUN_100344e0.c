/*
 * FUN_100344e0 at 100344e0
 * undefined __thiscall FUN_100344e0(void * this, uint param_1, uint param_2, int * param_3, int * param_4)
 * Address ranges: 100344e0-10034ae1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100344e0(void *this,uint param_1,uint param_2,int *param_3,int *param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  char cVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  byte bVar14;
  float10 fVar15;
  float10 fVar16;
  int local_54 [5];
  int *local_40 [5];
  int local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  int *local_1c;
  int *local_18;
  uint local_14;
  int local_10;
  void *local_c;
  uint local_8;
  
  local_c = this;
  FUN_10032e50(this,0,0,0);
  if ((*param_3 == 0) && (*param_4 == 0)) {
    *(undefined4 *)((int)this + 0xf83c) = 0;
    *(undefined4 *)((int)this + 0xf838) = 0;
    *(undefined4 *)((int)this + 0xf834) = 0;
    *(undefined4 *)((int)this + 0xf830) = 0;
    *(undefined4 *)((int)this + 0xf8f8) = 0;
    *(undefined4 *)((int)this + 0xf8f4) = 0;
    *(undefined4 *)((int)this + 0xf8f0) = 0;
    *(undefined4 *)((int)this + 0xf8ec) = 0;
    *(undefined4 *)((int)this + 0xf840) = 0;
    *(undefined4 *)((int)this + 0xf9c4) = 0;
    *(undefined4 *)((int)this + 0x7578) = 0;
    *(undefined4 *)((int)this + 0x757c) = 0;
    *(undefined1 *)((int)this + 0x7645) = 1;
    *(undefined4 *)((int)this + 0xe3c) = 1;
    *(undefined1 *)((int)this + 0xf6a1) = 1;
    *(undefined1 *)((int)this + 0xf66a) = 1;
    return;
  }
  uVar10 = 0;
  local_40[0] = (int *)0x0;
  local_40[1] = (int *)0x0;
  local_40[2] = (int *)0x0;
  local_40[3] = (int *)0x0;
  if (param_1 != 0) {
    do {
      piVar9 = (int *)(param_3[uVar10 * 3] + -0x88);
      if (param_3[uVar10 * 3] == 0) {
        piVar9 = (int *)0x0;
      }
      local_40[uVar10] = piVar9;
      uVar10 = uVar10 + 1;
      this = local_c;
    } while (uVar10 < param_1);
  }
  local_18 = (int *)(*param_4 + -0x88);
  if (*param_4 == 0) {
    local_18 = (int *)0x0;
  }
  local_1c = local_40[0];
  uVar10 = 0;
  do {
    piVar9 = *(int **)((int)this + uVar10 * 4 + 0xf86c);
    if ((piVar9 != (int *)0x0) &&
       ((((((*(int **)((int)this + 0xf830) == piVar9 || (*(int **)((int)this + 0xf840) == piVar9))
           || (local_40[0] == piVar9)) ||
          ((*(int **)((int)this + 0xf834) == piVar9 || (*(int **)((int)this + 0xf838) == piVar9))))
         || (((*(int **)((int)this + 0xf83c) == piVar9 ||
              ((local_40[1] == piVar9 || (local_40[2] == piVar9)))) || (local_40[3] == piVar9)))) ||
        (local_18 == piVar9)))) {
      *(undefined1 *)((int)this + 0xf669) = 1;
      pbVar6 = (byte *)((int)this + ((int)uVar10 >> 3) + 0xf660);
      *pbVar6 = *pbVar6 | '\x01' << (uVar10 & 7);
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 < 0x10);
  uVar10 = 0;
  do {
    piVar9 = *(int **)((int)this + uVar10 * 4 + 0xf978);
    if ((piVar9 != (int *)0x0) &&
       (((((*(int **)((int)this + 0xf830) == piVar9 || (*(int **)((int)this + 0xf840) == piVar9)) ||
          (local_40[0] == piVar9)) ||
         (((*(int **)((int)this + 0xf834) == piVar9 || (*(int **)((int)this + 0xf838) == piVar9)) ||
          ((*(int **)((int)this + 0xf83c) == piVar9 ||
           ((local_40[1] == piVar9 || (local_40[2] == piVar9)))))))) ||
        ((local_40[3] == piVar9 || (local_18 == piVar9)))))) {
      *(undefined1 *)((int)this + 0xf6a0) = 1;
      pbVar6 = (byte *)((int)this + ((int)uVar10 >> 3) + 0xf698);
      *pbVar6 = *pbVar6 | '\x01' << (uVar10 & 7);
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 < 5);
  piVar9 = (int *)((int)this + 0xf830);
  local_8 = 0;
  piVar8 = piVar9;
  if (param_1 != 0) {
    local_14 = (int)this + 0xf854;
    local_10 = (int)this + 0xf844;
    iVar12 = (int)this + 0xf8ec;
    do {
      piVar8 = local_40[local_8];
      local_40[4] = piVar9;
      if (piVar8 == (int *)0x0) {
        piVar9[local_8] = 0;
        *(undefined4 *)(iVar12 + local_8 * 4) = 0;
        *(undefined4 *)(local_10 + local_8 * 4) = 0;
        *(undefined4 *)(local_14 + local_8 * 4) = 0;
        *(undefined4 *)((int)this + local_8 * 4 + 0xf9a0) = 0;
      }
      else {
        iVar3 = piVar8[0xb];
        iVar4 = param_3[local_8 * 3 + 2];
        iVar5 = param_3[local_8 * 3 + 1];
        piVar9[local_8] = (int)piVar8;
        local_2c = (iVar3 * iVar4 + iVar5) * 0x1c;
        uVar10 = *(uint *)(local_2c + piVar8[0x18]);
        local_28 = uVar10;
        *(uint *)(iVar12 + local_8 * 4) = uVar10;
        *(int *)(local_10 + local_8 * 4) = param_3[local_8 * 3 + 1];
        *(int *)(local_14 + local_8 * 4) = param_3[local_8 * 3 + 2];
        if (local_8 == 0) {
          uVar10 = piVar8[9];
          uVar13 = piVar8[0xb];
          local_28 = uVar10;
          local_20 = uVar13;
          if ((*(int *)piVar8[0x18] != 0) && (((int *)piVar8[0x18])[2] == 0)) {
            local_10 = piVar8[0x16];
            local_14 = 0;
            if (uVar10 != 0) {
              do {
                uVar11 = 0;
                if (uVar13 != 0) {
                  local_24 = local_14 * uVar13;
                  do {
                    iVar12 = (local_24 + uVar11) * 0x1c;
                    piVar9 = *(int **)(iVar12 + piVar8[0x18]);
                    if (piVar9 != (int *)0x0) {
                      (**(code **)(*piVar9 + 0x20))(piVar9,local_54);
                      if ((local_54[0] == 0xb) || (local_54[0] == 0x18)) {
LAB_100347f5:
                        (**(code **)(**(int **)piVar8[0x14] + 0x24))
                                  (*(int **)piVar8[0x14],piVar8[(local_10 != 0) + 0x15],local_54,
                                   piVar8[0x18] + 8 + iVar12);
                      }
                      else {
                        if (local_54[0] == 0x1c) {
                          local_54[0] = 0x1d;
                          goto LAB_100347f5;
                        }
                        local_54[0] = 0;
                      }
                      iVar3 = piVar8[0x18];
                      if (*(int *)(iVar3 + 8 + iVar12) == 0) {
                        *(undefined4 *)(iVar3 + 8 + iVar12) = *(undefined4 *)(iVar3 + iVar12);
                        piVar9 = *(int **)(piVar8[0x18] + 8 + iVar12);
                        (**(code **)(*piVar9 + 4))(piVar9);
                      }
                    }
                    uVar11 = uVar11 + 1;
                    uVar10 = local_28;
                    uVar13 = local_20;
                  } while (uVar11 < local_20);
                }
                local_14 = local_14 + 1;
              } while (local_14 < uVar10);
            }
          }
          uVar10 = *(uint *)(local_2c + 8 + piVar8[0x18]);
        }
        piVar9 = (int *)((int)local_c + 0xf830);
        iVar12 = (int)local_c + 0xf8ec;
        local_14 = (int)local_c + 0xf854;
        *(uint *)((int)local_c + local_8 * 4 + 0xf9a0) = uVar10;
        local_10 = (int)local_c + 0xf844;
        this = local_c;
      }
      local_8 = local_8 + 1;
      piVar8 = local_40[4];
    } while (local_8 < param_1);
  }
  if ((int *)*piVar8 == (int *)0x0) {
    bVar14 = false;
  }
  else {
    cVar7 = (**(code **)(*(int *)*piVar8 + 0x40))();
    bVar14 = cVar7 != '\0';
  }
  uVar10 = 1;
  do {
    piVar9 = *(int **)((int)this + uVar10 * 4 + 0xf830);
    if ((piVar9 != (int *)0x0) && (cVar7 = (**(code **)(*piVar9 + 0x40))(), cVar7 != '\0')) {
      bVar14 = bVar14 | (byte)(1 << (uVar10 & 0x1f));
    }
    piVar9 = local_18;
    uVar10 = uVar10 + 1;
  } while (uVar10 < 4);
  bVar1 = *(byte *)((int)this + 0x763c);
  *(byte *)((int)this + 0x763c) = bVar14;
  bVar14 = bVar14 != bVar1 | *(byte *)((int)this + 0xf66c);
  *(byte *)((int)this + 0xf66c) = bVar14;
  if (param_2 != *(uint *)((int)this + 0xe3c)) {
    if (*(uint *)((int)this + 0xe3c) < 2) {
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = *(uint *)((int)this + 0xe38);
    }
    if (param_2 < 2) {
      uVar13 = 0xffffffff;
    }
    else {
      uVar13 = *(uint *)((int)this + 0xe38);
    }
    *(uint *)((int)this + 0xe3c) = param_2;
    uVar11 = (1 << ((byte)param_2 & 0x1f)) - 1;
    *(byte *)((int)this + 0xf66c) = (uVar11 & uVar10) != (uVar11 & uVar13) | bVar14;
  }
  if (local_18 == (int *)0x0) {
    cVar7 = '\0';
  }
  else {
    cVar7 = (**(code **)(*local_18 + 0x44))();
  }
  cVar2 = *(char *)((int)this + 0x7582);
  *(char *)((int)this + 0x7582) = cVar7;
  *(byte *)((int)this + 0xf66b) = *(byte *)((int)this + 0xf66b) | cVar7 != cVar2;
  if (piVar9 == (int *)0x0) {
    *(undefined4 *)((int)this + 0xf840) = 0;
    *(undefined4 *)((int)this + 0xf9c4) = 0;
  }
  else {
    iVar12 = piVar9[0xb];
    iVar3 = param_4[2];
    iVar4 = param_4[1];
    if ((*(int *)((int)this + 0xf840) == 0) ||
       (*(int *)(&DAT_100d2658 + *(int *)(*(int *)((int)this + 0xf840) + 0x1c) * 4) !=
        *(int *)(&DAT_100d2658 + piVar9[7] * 4))) {
      bVar14 = 1;
    }
    else {
      bVar14 = 0;
    }
    *(byte *)((int)this + 0xf66d) = *(byte *)((int)this + 0xf66d) | bVar14;
    *(int **)((int)this + 0xf840) = piVar9;
    *(undefined4 *)((int)this + 0xf9c4) =
         *(undefined4 *)(piVar9[0x18] + 4 + (iVar12 * iVar3 + iVar4) * 0x1c);
    *(int *)((int)this + 0xf864) = param_4[1];
    *(int *)((int)this + 0xf868) = param_4[2];
  }
  if (local_1c != (int *)0x0) {
    piVar9 = local_1c;
  }
  FUN_10053080(this,piVar9);
  FUN_10053210(this,piVar9);
  fVar15 = (float10)(**(code **)(*piVar9 + 0x2c))();
  fVar16 = (float10)(**(code **)(*piVar9 + 0x30))();
  if (((float)fVar15 != *(float *)((int)this + 0x6900)) ||
     ((float)fVar16 != *(float *)((int)this + 0x6904))) {
    *(undefined4 *)((int)this + 0x6908) = 0x3f800000;
    *(undefined4 *)((int)this + 0x690c) = 0x3f800000;
    *(undefined1 *)((int)this + 0xf6a3) = 1;
    *(float *)((int)this + 0x6900) = 1.0 / (float)fVar15;
    *(float *)((int)this + 0x6904) = 1.0 / (float)fVar16;
  }
  *(undefined1 *)((int)this + 0xf66a) = 1;
  return;
}

