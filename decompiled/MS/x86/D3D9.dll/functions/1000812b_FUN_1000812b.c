/*
 * FUN_1000812b at 1000812b
 * uint __thiscall FUN_1000812b(void * this, int param_1, char param_2)
 * Address ranges: 1000812b-10008585
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1000812b(void *this,int param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  BOOL BVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  int *piVar13;
  uint *puVar14;
  char *pcVar15;
  char local_e6;
  byte local_e5;
  uint uStack_e4;
  uint uStack_e0;
  char *local_dc;
  LPVOID local_d8;
  uint local_d4;
  undefined4 local_d0;
  LPVOID local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  uint *puStack_c0;
  int *piStack_bc;
  int *piStack_b8;
  int aiStack_b4 [8];
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_7c;
  uint auStack_78 [29];
  
  if (*(char *)((int)this + 0x66a0) != '\0') {
    return 0;
  }
  if (param_1 == 0) {
    return 0x8876086c;
  }
  FUN_10012ccc(&local_e6);
  pcVar15 = (char *)((int)this + 0x669e);
  *(undefined1 *)((int)this + 0x66a0) = 1;
  local_dc = pcVar15;
  if ((*(char *)((int)this + 0x669d) == '\0') || (*pcVar15 != '\0')) {
    uVar10 = 0;
    if (param_2 != '\0') {
      cVar3 = (**(code **)(*(int *)this + 0x14))();
      uVar10 = -(uint)(cVar3 != '\0') & 0x88760868;
    }
    local_e6 = '\x01';
    if (-1 < (int)uVar10) {
      local_d8 = (LPVOID)0x0;
      local_d4 = 0;
      local_d0 = 0;
      local_cc = (LPVOID)0x0;
      local_c8 = 0;
      local_c4 = 0;
      local_e5 = 1;
      if ((*(uint *)((int)this + 0xdd0) & 0x200) == 0) {
        uStack_e0 = 1;
      }
      else {
        uStack_e0 = *(uint *)((int)this + 0xd98);
      }
      uStack_e4 = 0;
      do {
        if (uStack_e0 <= uStack_e4) {
          if (-1 < (int)uVar10) {
            (**(code **)(*(int *)this + 0x18))();
            FUN_1000602e((int)this);
            if (local_e5 != 0) {
              (**(code **)(*(int *)this + 0x1c))(**(undefined4 **)((int)this + 0xd94));
              uStack_e4 = 0;
              if (uStack_e0 != 0) {
                do {
                  uVar10 = uStack_e4;
                  piVar4 = (int *)(uStack_e4 * 0x40 + (int)local_d8);
                  piStack_bc = piVar4;
                  BVar7 = IsIconic((HWND)piVar4[8]);
                  if (BVar7 != 0) {
                    ShowWindow((HWND)piVar4[8],1);
                  }
                  puVar11 = (uint *)(uVar10 * 0x70 + (int)local_cc);
                  puVar12 = puVar11;
                  puStack_c0 = puVar11;
                  if ((*(char *)((int)puVar11 + 0x6d) == '\0') &&
                     ((*(char *)(DAT_100dea74 + 0x7e5) != '\0' ||
                      (*(char *)(DAT_100dea74 + 0x784) == '\0')))) {
                    piVar4 = *(int **)(*(int *)((int)this + 0xd94) + uVar10 * 4);
                    cVar3 = FUN_1002bf92(piVar4);
                    if (cVar3 == '\0') {
                      FUN_1002beb0(piVar4,'\0');
                    }
                    puVar12 = puStack_c0;
                    puVar14 = auStack_78;
                    for (iVar8 = 6; puVar11 = puVar11 + 1, iVar8 != 0; iVar8 = iVar8 + -1) {
                      *puVar14 = *puVar11;
                      puVar14 = puVar14 + 1;
                    }
                    auStack_78[6] = puStack_c0[0x11];
                    FUN_100034ed(*(void **)((int)this + 0xd90),*piStack_bc,auStack_78,puStack_c0 + 7
                                );
                    uVar10 = uStack_e4;
                  }
                  uVar6 = FUN_10003558(*(void **)((int)this + 0xd90),*(int *)((int)this + 0xdf0));
                  *(undefined4 *)((int)this + 0xde0) = uVar6;
                  (**(code **)(*(int *)this + 0xc))
                            (*(undefined4 *)((int)local_cc + 4),*(undefined4 *)((int)local_cc + 8));
                  if (*(int *)((int)this + 0xdc8) == 1) {
                    iVar8 = FUN_10013887((int)puVar12);
                  }
                  else {
                    iVar8 = 0;
                  }
                  iVar1 = *(int *)(*(int *)((int)this + 0xd94) + uVar10 * 4);
                  puVar11 = (uint *)(iVar1 + 0x48);
                  for (iVar9 = 0x1c; iVar9 != 0; iVar9 = iVar9 + -1) {
                    *puVar11 = *puVar12;
                    puVar12 = puVar12 + 1;
                    puVar11 = puVar11 + 1;
                  }
                  uStack_e4 = uStack_e4 + 1;
                  *(int *)(iVar1 + 0xcc) = iVar8;
                  *(undefined1 *)(iVar1 + 0xd4) = 0;
                  *(undefined1 *)((int)this + 0x669d) = 0;
                  local_e6 = '\0';
                } while (uStack_e4 < uStack_e0);
              }
              goto LAB_10008522;
            }
            FUN_100040a8(this,1);
            iVar8 = FUN_10004000(this,local_d4,(int)local_d8);
            if (iVar8 < 0) {
LAB_10008534:
              uVar10 = 0x80004005;
            }
            else {
              *(undefined1 *)((int)this + 0x669d) = 0;
              local_e6 = '\0';
LAB_10008522:
              (**(code **)(*(int *)this + 0x20))();
              *(undefined1 *)((int)this + 0xcc5) = 0;
              uVar10 = 0;
            }
          }
          break;
        }
        uVar10 = 0x8876086c;
        iStack_7c = *(int *)(*(int *)((int)this + 0xd94) + uStack_e4 * 4);
        piStack_b8 = *(int **)(iStack_7c + 0xa4);
        piVar4 = (int *)(uStack_e4 * 0x38 + param_1);
        if ((piVar4[7] != 0) || (*(HWND *)((int)this + 0xdcc) != (HWND)0x0)) {
          piVar4 = FUN_1000339a((int *)auStack_78,piVar4,*(HWND *)((int)this + 0xdcc));
          piVar13 = aiStack_b4;
          for (iVar8 = 0xe; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar13 = *piVar4;
            piVar4 = piVar4 + 1;
            piVar13 = piVar13 + 1;
          }
          uVar10 = 0;
        }
        uVar2 = uStack_e4;
        if (-1 < (int)uVar10) {
          auStack_78[1] = 0;
          auStack_78[2] = 0;
          auStack_78[3] = 0;
          auStack_78[4] = 0;
          auStack_78[5] = 0;
          auStack_78[6] = 0;
          uVar5 = FUN_10002fa2(*(void **)((int)this + 0xd90),piStack_b8,*(int *)((int)this + 0xdc8),
                               *(HWND *)((int)this + 0xdcc),aiStack_b4,(int *)auStack_78);
          uVar10 = 0;
          if ((int)uVar5 < 0) {
            uVar10 = uVar5;
          }
          if (((-1 < (int)uVar10) && ((*(uint *)((int)this + 0xdd0) & 0x200) != 0)) &&
             (uVar10 = 0x8876086c, iStack_94 == 0)) {
            if (uVar2 == 0) {
              piVar4 = aiStack_b4;
            }
            else {
              piVar4 = (int *)((int)local_d8 + 4);
            }
            if ((piVar4[9] == iStack_90) &&
               ((iStack_90 == 0 ||
                (((piVar4[10] == iStack_8c && (piVar4[2] == aiStack_b4[2])) &&
                 ((*piVar4 == aiStack_b4[0] && (piVar4[1] == aiStack_b4[1])))))))) {
              uVar10 = 0;
            }
          }
          uVar5 = FUN_1001377d(*(void **)(*(int *)((int)this + 0xd94) + uVar2 * 4),auStack_78);
          local_e5 = local_e5 & (byte)uVar5;
          if ((-1 < (int)uVar10) &&
             ((uVar6 = FUN_100085fa(&local_cc,auStack_78), (char)uVar6 == '\0' ||
              (uVar6 = FUN_10008586(&local_d8,&piStack_b8), (char)uVar6 == '\0'))))
          goto LAB_10008534;
        }
        uStack_e4 = uVar2 + 1;
      } while (-1 < (int)uVar10);
      thunk_FUN_100cfd6c(local_cc);
      thunk_FUN_100cfd6c(local_d8);
      pcVar15 = local_dc;
      if (local_e6 == '\0') goto LAB_1000856b;
    }
    if (*(char *)((int)this + 0x669d) == '\0') {
      FUN_100076a2((int)this);
      *pcVar15 = '\x01';
    }
  }
  else {
    uVar10 = 0x88760868;
  }
LAB_1000856b:
  *(undefined1 *)((int)this + 0x66a0) = 0;
  FUN_10012d33();
  return uVar10;
}

