/*
 * FUN_1002799e at 1002799e
 * int __thiscall FUN_1002799e(void * this, int param_1, undefined4 param_2, undefined4 param_3, int * param_4, undefined4 * param_5, undefined4 * param_6, undefined4 * param_7, undefined4 param_8, undefined1 param_9, int * param_10)
 * Address ranges: 1002799e-10027da4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall
FUN_1002799e(void *this,int param_1,undefined4 param_2,undefined4 param_3,int *param_4,
            undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,undefined4 param_8,
            undefined1 param_9,int *param_10)

{
  void *this_00;
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  int extraout_ECX;
  void *this_01;
  ulonglong local_c8 [3];
  int local_ac [26];
  uint local_44;
  uint local_40;
  undefined *local_2c;
  int *local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  undefined1 local_14;
  undefined1 local_13;
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  FUN_10060d45(local_ac,0,0x7c);
  FUN_100318a8(local_ac,param_4);
  uVar3 = local_ac[1] | 1;
  local_1c = local_ac[1] & 0x80808;
  local_20 = 0;
  local_24 = local_44 & 0x30004800;
  local_10 = 0xffffffff;
  local_c = local_c & 0xffffff00;
  local_2c = &DAT_100698d0 + *(int *)((int)this + 0x11c) * 0xa4;
  local_13 = param_1 == 0;
  local_28 = local_ac;
  local_18 = local_40;
  local_14 = param_9;
  local_8 = local_44 >> 9 & 0xffffff01;
  local_ac[1] = uVar3;
  if ((local_44 >> 9 & 1) == 0) {
    if (local_24 == 0) {
      if ((*(char *)((int)this + 0x14c) == '\0' && local_1c == 0) &&
         (((local_44 & 0x1000) == 0 || ((local_40 & 0x10) == 0)))) {
        _param_9 = 0x10004000;
      }
      else {
        _param_9 = 0x800;
      }
      local_44 = local_44 | _param_9;
    }
    else if (local_24 != 0x800) {
      if (local_24 == 0x4000) {
        local_44 = local_44 | 0x10004000;
      }
      else if ((local_24 != 0x10004000) && (local_24 != 0x20004000)) {
        return -0x7789ff9c;
      }
    }
    if (((*(char *)((int)this + 0x14c) != '\0') && (local_24 != 0x800)) && (local_24 != 0)) {
      return -0x7789ff9c;
    }
    uVar3 = local_44 & 0x21040;
    local_20 = local_44 & 0x30004000;
    if ((uVar3 == 0x40) || (uVar3 == 0)) {
      iVar4 = FUN_10028084(this,(int *)&local_2c);
    }
    else if (uVar3 == 0x1000) {
      iVar4 = FUN_1002823c(this,(int)&local_2c);
    }
    else {
      if (uVar3 != 0x20000) {
        return -0x7789ff9c;
      }
      iVar4 = FUN_100285ff(this,(int)&local_2c);
    }
    if (iVar4 < 0) {
      return iVar4;
    }
  }
  else {
    iVar4 = FUN_10027f32(this,(int *)&local_2c);
    if (iVar4 < 0) {
      return iVar4;
    }
    uVar3 = 0;
    param_5 = *(undefined4 **)(&DAT_1006c484 + *(int *)((int)this + 0x11c) * 0x228);
    if (DAT_1006c23c != 0) {
      do {
        if (param_5 != (undefined4 *)0x0) break;
        iVar4 = (**(code **)(**(int **)(DAT_1006c24c + uVar3 * 4) + 0x24))();
        if (iVar4 == *(int *)((int)this + 0x11c)) {
          this_00 = *(void **)(*(int *)(DAT_1006c24c + uVar3 * 4) + 0xf4);
          if (this_00 != (void *)0x0) {
            puVar5 = (uint *)FUN_1002a110(this_00,local_c8);
            uVar6 = FUN_100030bf(*(int *)((int)this + 0x11c),puVar5);
            if ((char)uVar6 != '\0') {
              param_5 = *(undefined4 **)((int)this_00 + 4);
              goto LAB_10027ad1;
            }
          }
          param_5 = (undefined4 *)0x0;
        }
LAB_10027ad1:
        uVar3 = uVar3 + 1;
      } while (uVar3 < DAT_1006c23c);
    }
  }
  if ((char)param_10 == '\0') {
    _param_9 = -0x7789fe84;
    if (((param_5 == (undefined4 *)0x0) && (*(char *)((int)this + 0x14c) == '\0')) &&
       (cVar2 = FUN_10032177((int)local_ac), cVar2 != '\0')) {
      uVar3 = FUN_10024ec6(extraout_ECX);
    }
    else {
      uVar3 = 0;
    }
    iVar4 = *(int *)((int)this + 0x11c) * 0x228;
    if ((*(int *)(&DAT_1006c4ac + iVar4) != 0) || (uVar3 <= *(uint *)(&DAT_1006c4a8 + iVar4))) {
      if (param_5 == (undefined4 *)0x0) {
        bVar1 = 0;
      }
      else {
        bVar1 = *(byte *)(param_5 + 0x32) & 1;
      }
      _param_9 = -0x7ff8fff2;
      piVar7 = FUN_100226a2(param_1,param_2,param_5,*(undefined4 *)((int)this + 0x118),(int)this,0,
                            (undefined2 *)(&DAT_1006c42c + iVar4),local_ac,local_10,0,0,
                            *(undefined4 *)((int)this + 0x124),(char)local_c,bVar1);
      if (piVar7 != (int *)0x0) {
        param_10 = piVar7;
        iVar4 = FUN_1002fae1((int)piVar7);
        *(int *)((int)this + 0x124) = *(int *)((int)this + 0x124) + iVar4;
        _param_9 = -0x7fffbffb;
        cVar2 = FUN_1002a193(this_01,param_3);
        if (cVar2 != '\0') {
          iVar4 = (**(code **)(*piVar7 + 0x34))(param_3,param_6,0);
          if ((iVar4 == 0) &&
             (cVar2 = FUN_10027da5(this,param_1,param_2,(int)piVar7,param_3,(int)&local_2c),
             cVar2 != '\0')) {
            uVar8 = FUN_1000138a((void *)((int)this + 0x128),&param_10);
            if ((char)uVar8 != '\0') {
              if ((local_44 & 0x200) != 0) {
                *(int **)((int)this + 0xf4) = param_10;
              }
              iVar4 = *(int *)((int)this + 0x11c) * 0x228;
              uVar6 = *(uint *)(&DAT_1006c4a8 + iVar4);
              *(uint *)(&DAT_1006c4a8 + iVar4) = uVar6 - uVar3;
              *(uint *)(&DAT_1006c4ac + iVar4) =
                   *(int *)(&DAT_1006c4ac + iVar4) - (uint)(uVar6 < uVar3);
              if ((char)local_8 != '\0') {
                *(int *)(&DAT_1006c484 + *(int *)((int)this + 0x11c) * 0x228) = param_10[1];
              }
              if (param_7 != (undefined4 *)0x0) {
                *param_7 = param_10;
              }
              FUN_1002235f(this,param_10);
              return 0;
            }
            (**(code **)(*(int *)*param_6 + 8))((int *)*param_6);
            *param_6 = 0;
            piVar7 = (int *)0x0;
            _param_9 = -0x7ff8fff2;
          }
          else {
            _param_9 = -0x7fffbffb;
            FUN_1002a1c6(piVar7);
          }
        }
        if (piVar7 != (int *)0x0) {
          FUN_10029e6d(piVar7);
          FUN_10060be1(piVar7);
        }
      }
    }
  }
  else {
    piVar7 = local_ac;
    for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
      *param_4 = *piVar7;
      piVar7 = piVar7 + 1;
      param_4 = param_4 + 1;
    }
    _param_9 = 0;
  }
  return _param_9;
}

