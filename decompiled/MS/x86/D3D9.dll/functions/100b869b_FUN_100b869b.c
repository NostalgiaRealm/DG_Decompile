/*
 * FUN_100b869b at 100b869b
 * int * __thiscall FUN_100b869b(void * this, int * param_1)
 * Address ranges: 100b869b-100b8c40
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_100b869b(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  undefined1 uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
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
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  piVar3 = param_1;
  local_2c = (LPCRITICAL_SECTION)((int)this + 0x4a0);
  local_c = this;
  EnterCriticalSection(local_2c);
  local_18 = 1;
  if (piVar3[5] != 0) {
    local_18 = piVar3[5];
  }
  local_1c = 1;
  if (piVar3[6] != 0) {
    local_1c = piVar3[6];
  }
  local_10 = piVar3[3] * local_18;
  local_14 = piVar3[4] * local_1c;
  uVar9 = 0;
  if ((piVar3[3] == 0 && piVar3[4] == 0) && (piVar3[7] == 0)) {
    param_1 = (int *)CONCAT13(1,param_1._0_3_);
    if (piVar3[8] != 0) goto LAB_100b8705;
  }
  else {
LAB_100b8705:
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
  local_20 = *(int *)(&DAT_100d8824 + iVar8 * 4);
  if (uVar1 != 0) {
    piVar10 = (int *)((int)this + 0x4b8);
    do {
      piVar6 = *(int **)(*piVar10 + uVar9 * 4);
      this = local_c;
      if ((*piVar6 == piVar3[2]) && (piVar6[2] == piVar3[1])) break;
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar1);
  }
  piVar10 = (int *)0x0;
  if (uVar9 == uVar1) {
    if (param_1._3_1_ != '\0') goto LAB_100b8c2f;
    FUN_100b82f4((HWND)piVar3[2]);
    piVar6 = (int *)(*(code *)**(undefined4 **)this)();
    param_1 = piVar6;
    if ((piVar6 != (int *)0x0) &&
       (uVar7 = FUN_10003d8f((int *)((int)this + 0x4b8),&param_1), piVar6 = param_1,
       (char)uVar7 != '\0')) {
      param_1[2] = piVar3[1];
      local_48 = local_10;
      local_44 = local_14;
      local_40 = piVar3[7];
      local_3c = piVar3[8];
      local_38 = *(undefined4 *)(&DAT_100d3f84 + piVar3[0xb] * 4);
      local_34 = (uint)(*(char *)((int)piVar3 + 0x39) != '\0');
      local_30 = local_20;
      cVar4 = (**(code **)(*(int *)this + 8))(param_1,&local_48,piVar3[0xc],piVar3[2]);
      if (cVar4 != '\0') {
        piVar6[4] = local_10;
        piVar6[5] = local_14;
        piVar6[6] = local_18;
        piVar6[7] = local_1c;
        piVar6[0xb] = piVar3[0xb];
        piVar6[0xc] = piVar3[0xc];
        piVar6[0xd] = 0;
        piVar6[3] = 0;
        *(undefined1 *)((int)piVar6 + 0xd5b) = 1;
        FUN_100b82b1(piVar6);
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
            FUN_100b8103(piVar6,(int *)0x0,(int *)0x0);
          }
          FUN_100b7f35((int)piVar6,piVar3[0x10],piVar3[0x11]);
          (**(code **)(*(int *)this + 0x34))(piVar6);
          *(undefined1 *)((int)piVar6 + 0xd5b) = 0;
          goto LAB_100b8c21;
        }
        *(undefined1 *)((int)piVar6 + 0xd5b) = 0;
      }
      if (*(int *)((int)this + 0x4bc) != 0) {
        *(int *)((int)this + 0x4bc) = *(int *)((int)this + 0x4bc) + -1;
      }
    }
    FUN_100cfd6c(piVar6);
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = *(int **)(*(int *)((int)this + 0x4b8) + uVar9 * 4);
    local_c = piVar6;
    if (*(char *)((int)piVar6 + 0xd5b) != '\0') goto LAB_100b8c2f;
    *(undefined1 *)((int)piVar6 + 0xd5b) = 1;
    FUN_100cfed0(&local_84,0,0x3c);
    piVar10 = (int *)piVar6[1];
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 0x30))(piVar10,&local_84);
    }
    piVar6[0x358] = *piVar3;
    iVar8 = piVar3[0x10];
    if (((piVar6[0x350] != iVar8) && (iVar8 != -1)) ||
       ((piVar10 = piVar6, piVar6[0x351] != piVar3[0x11] && (piVar3[0x11] != -1)))) {
      piVar6[0x350] = iVar8;
      piVar6[0x351] = piVar3[0x11];
      FUN_100b7f35((int)piVar6,piVar3[0x10],piVar3[0x11]);
      piVar10 = local_c;
    }
    if (param_1._3_1_ == '\0') {
      local_28 = (uint)(*(char *)((int)piVar3 + 0x39) != '\0');
      if ((((((piVar10[4] == local_10) && (piVar10[5] == local_14)) && (piVar10[6] == local_18)) &&
           ((piVar10[7] == local_1c && (local_7c == piVar3[7])))) &&
          ((local_78 == piVar3[8] && ((local_6c == local_20 && (piVar10[10] == local_8)))))) &&
         ((piVar10[0xb] == piVar3[0xb] && ((local_70 == local_28 && (piVar10[1] != 0)))))) {
        (**(code **)(*(int *)this + 0x14))(piVar6,piVar3[0xf]);
      }
      else {
        (**(code **)(*(int *)this + 0x10))(piVar6);
        local_c[4] = local_10;
        local_c[5] = local_14;
        local_c[6] = local_18;
        local_c[7] = local_1c;
        local_c[0xb] = piVar3[0xb];
        param_1 = (int *)0x0;
        local_24 = (int *)0x0;
        piVar10 = (int *)local_c[1];
        if (piVar10 != (int *)0x0) {
          (**(code **)(*piVar10 + 0x2c))(piVar10,&param_1,&local_24);
        }
        local_40 = piVar3[7];
        local_48 = local_10;
        local_44 = local_14;
        local_3c = piVar3[8];
        local_38 = *(undefined4 *)(&DAT_100d3f84 + piVar3[0xb] * 4);
        local_34 = local_28;
        local_30 = local_20;
        if ((local_c[0xd] != 0) && ((local_8 == 1 || (local_8 == 2)))) {
          local_48 = local_84;
          local_44 = local_80;
          local_30 = 0;
        }
        if ((local_7c == local_40) && (local_78 == piVar3[8])) {
          FUN_100b7feb(piVar6,&local_48,(int *)(uint)(param_1 != (int *)0x0));
        }
        else {
          piVar10 = (int *)piVar6[1];
          if (piVar10 != (int *)0x0) {
            (**(code **)(*piVar10 + 0x28))(piVar10,0,0);
            (**(code **)(*(int *)piVar6[1] + 8))((int *)piVar6[1]);
          }
          FUN_100b82f4((HWND)piVar3[2]);
          cVar4 = (**(code **)(*(int *)this + 8))(piVar6,&local_48,piVar3[0xc],piVar3[2]);
          if (cVar4 != '\0') {
            FUN_100b82b1(piVar6);
            (**(code **)(*(int *)piVar6[1] + 0x28))((int *)piVar6[1],param_1,local_24);
          }
          if (local_24 != (int *)0x0) {
            (**(code **)(*local_24 + 8))(local_24);
          }
        }
        if (piVar6[1] == 0) {
          (**(code **)(*(int *)this + 0x18))(piVar6);
          (**(code **)(*(int *)this + 0x20))(piVar6);
          FUN_100b7d33(this,piVar6);
          *(undefined1 *)((int)piVar6 + 0xd5b) = 0;
          piVar6 = (int *)0x0;
        }
        else {
          (**(code **)(**(int **)((int)this + 0x4ec) + 0x20))
                    (*(int **)((int)this + 0x4ec),piVar3[2],1);
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
      }
      piVar10 = piVar6;
      if (piVar6 == (int *)0x0) goto LAB_100b8c2f;
      if ((piVar3[9] == 7) && ((char)*(int *)((int)this + 0x4e4) == '\0')) {
        iVar8 = 3;
      }
      else {
        iVar8 = piVar3[9];
      }
      piVar6[9] = iVar8;
      iVar8 = piVar6[0xd];
      if ((((iVar8 == 0) || (iVar8 == 1)) && ((iVar2 = piVar3[0xd], iVar2 == 0 || (iVar2 == 1)))) &&
         (iVar2 != iVar8)) {
        piVar6[0xd] = iVar2;
        FUN_100b8103(piVar6,(int *)0x0,(int *)0x0);
      }
    }
  }
LAB_100b8c21:
  piVar10 = piVar6;
  if (piVar6 != (int *)0x0) {
    piVar6[3] = piVar6[3] + 1;
    *(undefined1 *)((int)piVar6 + 0xd5b) = 0;
  }
LAB_100b8c2f:
  LeaveCriticalSection(local_2c);
  return piVar10;
}

