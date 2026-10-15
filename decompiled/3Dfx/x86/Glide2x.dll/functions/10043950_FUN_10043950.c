/*
 * FUN_10043950 at 10043950
 * int * __thiscall FUN_10043950(void * this, int * param_1)
 * Address ranges: 10043950-10043f74
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_10043950(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  undefined1 uVar5;
  int *piVar6;
  SIZE_T SVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  uint local_70;
  int local_6c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  uint local_34;
  int local_30;
  LPCRITICAL_SECTION local_2c;
  uint local_28;
  int *local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  piVar3 = param_1;
  local_2c = (LPCRITICAL_SECTION)((int)this + 0x4a0);
  local_20 = this;
  EnterCriticalSection(local_2c);
  local_14 = 1;
  if (piVar3[5] != 0) {
    local_14 = piVar3[5];
  }
  local_18 = 1;
  if (piVar3[6] != 0) {
    local_18 = piVar3[6];
  }
  local_c = piVar3[3] * local_14;
  local_10 = piVar3[4] * local_18;
  uVar9 = 0;
  if ((piVar3[3] == 0 && piVar3[4] == 0) && (piVar3[7] == 0)) {
    param_1 = (int *)CONCAT13(1,param_1._0_3_);
    if (piVar3[8] != 0) goto LAB_100439ba;
  }
  else {
LAB_100439ba:
    param_1 = (int *)((uint)param_1 & 0xffffff);
  }
  iVar8 = piVar3[9];
  local_8 = piVar3[10];
  if (((iVar8 == 3) || (iVar8 == 4)) || (iVar8 == 8)) {
    local_8 = 1;
  }
  else if (((iVar8 == 5) || (iVar8 == 6)) || (iVar8 == 7)) {
    local_8 = 2;
  }
  uVar1 = *(uint *)((int)this + 0x4bc);
  local_1c = *(int *)(&DAT_100549ac + iVar8 * 4);
  if (uVar1 != 0) {
    piVar6 = (int *)((int)this + 0x4b8);
    do {
      piVar11 = *(int **)(*piVar6 + uVar9 * 4);
      this = local_20;
      if ((*piVar11 == piVar3[2]) && (piVar11[2] == piVar3[1])) break;
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar1);
  }
  if (uVar9 == uVar1) {
    piVar6 = (int *)0x0;
    if (param_1._3_1_ == '\0') {
      FUN_10043507((HWND)piVar3[2]);
      piVar6 = (int *)(*(code *)**(undefined4 **)this)();
      if (piVar6 != (int *)0x0) {
        iVar8 = *(int *)((int)this + 0x4c0);
        if (*(int *)((int)this + 0x4bc) == iVar8) {
          if (iVar8 == 0) {
            param_1 = (int *)0x10;
          }
          else {
            param_1 = (int *)(iVar8 * 2);
          }
          SVar7 = (SIZE_T)(ZEXT48(param_1) * 4);
          if ((int)(ZEXT48(param_1) * 4 >> 0x20) != 0) {
            SVar7 = 0xffffffff;
          }
          local_24 = (int *)FUN_1004f643(SVar7);
          if (local_24 == (int *)0x0) goto LAB_10043c67;
          FUN_1004fd20(local_24,*(undefined4 **)((int)this + 0x4b8),*(int *)((int)this + 0x4c0) << 2
                      );
          thunk_FUN_1004f626(*(LPVOID *)((int)this + 0x4b8));
          *(int **)((int)this + 0x4b8) = local_24;
          *(int **)((int)this + 0x4c0) = param_1;
        }
        *(int **)(*(int *)((int)this + 0x4b8) + *(int *)((int)this + 0x4bc) * 4) = piVar6;
        *(int *)((int)this + 0x4bc) = *(int *)((int)this + 0x4bc) + 1;
        piVar6[2] = piVar3[1];
        local_48 = local_c;
        local_44 = local_10;
        local_40 = piVar3[7];
        local_3c = piVar3[8];
        local_38 = *(undefined4 *)(&DAT_10051e28 + piVar3[0xb] * 4);
        local_34 = (uint)(*(char *)((int)piVar3 + 0x39) != '\0');
        local_30 = local_1c;
        cVar4 = (**(code **)(*(int *)this + 8))(piVar6,&local_48,piVar3[0xc],piVar3[2]);
        if (cVar4 != '\0') {
          piVar6[4] = local_c;
          piVar6[5] = local_10;
          piVar6[6] = local_14;
          piVar6[7] = local_18;
          piVar6[0xb] = piVar3[0xb];
          piVar6[0xc] = piVar3[0xc];
          piVar6[0xd] = 0;
          piVar6[3] = 0;
          *(undefined1 *)((int)piVar6 + 0xd5b) = 1;
          FUN_100434c4(piVar6);
          cVar4 = (**(code **)(*(int *)this + 0xc))(piVar6,piVar3[0xf]);
          if (cVar4 != '\0') {
            (**(code **)(**(int **)((int)this + 0x4ec) + 0x20))
                      (*(int **)((int)this + 0x4ec),piVar3[2],1);
            *piVar6 = piVar3[2];
            piVar6[0x358] = *piVar3;
            if ((piVar3[9] == 7) && ((char)*(int *)((int)this + 0x4e4) == '\0')) {
              iVar8 = 3;
            }
            else {
              iVar8 = piVar3[9];
            }
            piVar6[9] = iVar8;
            piVar6[10] = local_8;
            if (((char)piVar3[0xe] == '\0') && (*(char *)((int)this + 0x2d6) != '\0')) {
              uVar5 = 0;
            }
            else {
              uVar5 = 1;
            }
            *(undefined1 *)(piVar6 + 0x356) = uVar5;
            iVar8 = piVar3[0x10];
            if (iVar8 == -1) {
              iVar8 = 0;
            }
            piVar6[0x350] = iVar8;
            iVar8 = 1;
            if (piVar3[0x11] != -1) {
              iVar8 = piVar3[0x11];
            }
            piVar6[0x351] = iVar8;
            if (piVar3[0xd] == 1) {
              piVar6[0xd] = 1;
              FUN_10043316(piVar6,(int *)0x0,(int *)0x0);
            }
            FUN_10043148((int)piVar6,piVar3[0x10],piVar3[0x11]);
            (**(code **)(*(int *)this + 0x34))(piVar6);
            *(undefined1 *)((int)piVar6 + 0xd5b) = 0;
            goto LAB_10043c2f;
          }
          *(undefined1 *)((int)piVar6 + 0xd5b) = 0;
        }
        if (*(int *)((int)this + 0x4bc) != 0) {
          *(int *)((int)this + 0x4bc) = *(int *)((int)this + 0x4bc) + -1;
        }
      }
LAB_10043c67:
      FUN_1004f626(piVar6);
      piVar6 = (int *)0x0;
    }
LAB_10043c2f:
    piVar11 = piVar6;
    if (piVar6 == (int *)0x0) goto LAB_10043c3d;
  }
  else {
    piVar6 = *(int **)(*(int *)((int)this + 0x4b8) + uVar9 * 4);
    piVar11 = (int *)0x0;
    local_24 = piVar6;
    if (*(char *)((int)piVar6 + 0xd5b) != '\0') goto LAB_10043c3d;
    *(undefined1 *)((int)piVar6 + 0xd5b) = 1;
    FUN_100501d1(&local_84,0,0x3c);
    piVar11 = (int *)piVar6[1];
    if (piVar11 != (int *)0x0) {
      (**(code **)(*piVar11 + 0x30))(piVar11,&local_84);
    }
    piVar6[0x358] = *piVar3;
    iVar8 = piVar3[0x10];
    if (((piVar6[0x350] != iVar8) && (iVar8 != -1)) ||
       ((piVar6[0x351] != piVar3[0x11] && (piVar3[0x11] != -1)))) {
      piVar6[0x350] = iVar8;
      piVar6[0x351] = piVar3[0x11];
      FUN_10043148((int)piVar6,piVar3[0x10],piVar3[0x11]);
    }
    if (param_1._3_1_ != '\0') goto LAB_10043c2f;
    local_28 = (uint)(*(char *)((int)piVar3 + 0x39) != '\0');
    if ((((((piVar6[4] == local_c) && (piVar6[5] == local_10)) && (piVar6[6] == local_14)) &&
         ((piVar6[7] == local_18 && (local_7c == piVar3[7])))) &&
        ((local_78 == piVar3[8] && ((local_6c == local_1c && (piVar6[10] == local_8)))))) &&
       ((piVar6[0xb] == piVar3[0xb] && ((local_70 == local_28 && (piVar6[1] != 0)))))) {
      (**(code **)(*(int *)this + 0x14))(piVar6,piVar3[0xf]);
    }
    else {
      (**(code **)(*(int *)this + 0x10))(piVar6);
      piVar11 = (int *)piVar6[1];
      piVar6[4] = local_c;
      piVar6[5] = local_10;
      piVar6[6] = local_14;
      piVar6[7] = local_18;
      piVar6[0xb] = piVar3[0xb];
      param_1 = (int *)0x0;
      local_20 = (int *)0x0;
      piVar10 = (int *)0x0;
      if (piVar11 != (int *)0x0) {
        (**(code **)(*piVar11 + 0x2c))(piVar11,&param_1,&local_20);
        piVar10 = (int *)piVar6[1];
      }
      local_40 = piVar3[7];
      local_48 = local_c;
      local_44 = local_10;
      local_3c = piVar3[8];
      local_38 = *(undefined4 *)(&DAT_10051e28 + piVar3[0xb] * 4);
      local_34 = local_28;
      local_30 = local_1c;
      if ((piVar6[0xd] != 0) && ((local_8 == 1 || (local_8 == 2)))) {
        local_48 = local_84;
        local_44 = local_80;
        local_30 = 0;
      }
      if ((local_7c == local_40) && (local_78 == piVar3[8])) {
        FUN_100431fe(piVar6,&local_48,(int *)(uint)(param_1 != (int *)0x0));
      }
      else {
        if (piVar10 != (int *)0x0) {
          (**(code **)(*piVar10 + 0x28))(piVar10,0,0);
          (**(code **)(*(int *)piVar6[1] + 8))((int *)piVar6[1]);
        }
        FUN_10043507((HWND)piVar3[2]);
        cVar4 = (**(code **)(*(int *)this + 8))(piVar6,&local_48,piVar3[0xc],piVar3[2]);
        if (cVar4 != '\0') {
          FUN_100434c4(piVar6);
          (**(code **)(*(int *)piVar6[1] + 0x28))((int *)piVar6[1],param_1,local_20);
        }
        if (local_20 != (int *)0x0) {
          (**(code **)(*local_20 + 8))(local_20);
        }
      }
      if (piVar6[1] == 0) {
        (**(code **)(*(int *)this + 0x18))(piVar6);
        (**(code **)(*(int *)this + 0x20))(piVar6);
        FUN_10042f46(this,piVar6);
        piVar11 = (int *)0x0;
        *(undefined1 *)((int)local_24 + 0xd5b) = 0;
        goto LAB_10043c3d;
      }
      (**(code **)(**(int **)((int)this + 0x4ec) + 0x20))(*(int **)((int)this + 0x4ec),piVar3[2],1);
      (**(code **)(*(int *)this + 0xc))(piVar6,piVar3[0xf]);
      piVar6[10] = local_8;
      if (((char)piVar3[0xe] == '\0') && (*(char *)((int)this + 0x2d6) != '\0')) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      *(undefined1 *)(piVar6 + 0x356) = uVar5;
      (**(code **)(*(int *)this + 0x38))(piVar6);
    }
    piVar11 = local_24;
    if (local_24 == (int *)0x0) goto LAB_10043c3d;
    if ((piVar3[9] == 7) && ((char)*(int *)((int)this + 0x4e4) == '\0')) {
      iVar8 = 3;
    }
    else {
      iVar8 = piVar3[9];
    }
    iVar2 = local_24[0xd];
    local_24[9] = iVar8;
    piVar6 = local_24;
    if ((((iVar2 == 0) || (iVar2 == 1)) && ((iVar8 = piVar3[0xd], iVar8 == 0 || (iVar8 == 1)))) &&
       (iVar8 != iVar2)) {
      local_24[0xd] = iVar8;
      FUN_10043316(local_24,(int *)0x0,(int *)0x0);
      piVar6 = local_24;
    }
  }
  piVar6[3] = piVar6[3] + 1;
  *(undefined1 *)((int)piVar6 + 0xd5b) = 0;
  piVar11 = piVar6;
LAB_10043c3d:
  LeaveCriticalSection(local_2c);
  return piVar11;
}

