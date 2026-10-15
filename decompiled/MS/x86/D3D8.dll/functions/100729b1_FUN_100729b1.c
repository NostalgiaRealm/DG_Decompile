/*
 * FUN_100729b1 at 100729b1
 * undefined1 __thiscall FUN_100729b1(void * this, int param_1, uint * param_2, uint param_3, int param_4)
 * Address ranges: 100729b1-10072d28
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_100729b1(void *this,int param_1,uint *param_2,uint param_3,int param_4)

{
  void *pvVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int unaff_EBX;
  uint uVar9;
  byte bVar10;
  undefined1 uStack_cc;
  int iStack_c8;
  int local_c4;
  uint local_c0;
  uint local_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  int iStack_a0;
  LPVOID pvStack_9c;
  uint *local_90;
  int local_8c;
  int local_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  int iStack_50;
  undefined1 local_44 [8];
  int iStack_3c;
  int iStack_38;
  
  local_c0 = local_c0 & 0xffffff00;
  pvVar1 = *(void **)((int)this + 0x14);
  local_bc = *(uint *)((int)pvVar1 + 0x1cf00);
  local_c4 = *(int *)((int)pvVar1 + 0x14) * 0x16c0;
  local_90 = (uint *)0x0;
  local_8c = 0;
  local_88 = 0;
  iStack_84 = 0;
  bVar10 = (byte)param_1;
  if (*(char *)((int)this + -3) != '\0') {
    piVar3 = FUN_10079353((void *)((int)this + -0x1c),&local_80,pvVar1,bVar10,(int)param_2,param_3,
                          param_4);
    param_2 = (uint *)*piVar3;
    local_8c = piVar3[1];
    local_88 = piVar3[2];
    iStack_84 = piVar3[3];
    param_3 = local_8c << 2;
    param_4 = local_88 * local_8c * 4;
    local_90 = param_2;
  }
  iVar4 = (**(code **)(**(int **)((int)this + 0x18) + 0x38))(*(int **)((int)this + 0x18),local_44,0)
  ;
  if (-1 < iVar4) {
    if (((*(int *)(unaff_EBX + 0x19a8 + iStack_c8) == 0) && (iStack_50 == 4)) &&
       (cVar2 = FUN_1009f300(*(void **)(iStack_c8 + 0x172c0)), cVar2 != '\0')) {
      iVar4 = (**(code **)(**(int **)((int)this + 0x18) + 0x20))
                        (*(int **)((int)this + 0x18),param_1,0,0);
      if (-1 < iVar4) {
        (**(code **)(**(int **)((int)this + 0x18) + 0x30))
                  (*(int **)((int)this + 0x18),param_1,0,param_2,param_3,param_4);
        (**(code **)(**(int **)((int)this + 0x18) + 0x24))(*(int **)((int)this + 0x18),param_1,0);
      }
    }
    else {
      uStack_b8 = *(uint *)((int)this + -0x18) >> (bVar10 & 0x1f);
      if (uStack_b8 == 0) {
        uStack_b8 = 1;
      }
      uStack_b4 = *(uint *)((int)this + -0x14) >> (bVar10 & 0x1f);
      if (uStack_b4 == 0) {
        uStack_b4 = 1;
      }
      uStack_b0 = *(uint *)((int)this + -0x10) >> (bVar10 & 0x1f);
      if (uStack_b0 == 0) {
        uStack_b0 = 1;
      }
      iVar4 = *(int *)((int)this + -0xc);
      bVar10 = (&DAT_100b0660)[iVar4];
      if (bVar10 != 0) {
        uStack_b8 = (uStack_b8 - 1) + (uint)bVar10 & -(uint)bVar10;
        iVar4 = *(int *)((int)this + -0xc);
      }
      bVar10 = (&DAT_100b067c)[iVar4];
      if (bVar10 != 0) {
        uStack_b4 = (uStack_b4 - 1) + (uint)bVar10 & -(uint)bVar10;
      }
      iVar4 = iStack_c8 + unaff_EBX + 0x6c0;
      local_c4 = 0;
      local_c0 = 0;
      local_bc = 0;
      FUN_1006bef4(&iStack_7c,iVar4,*(void **)(iVar4 + 0x1304),*(int **)((int)this + 0x18),
                   (void *)(iVar4 + 0x1430),&local_c4,param_2,param_3,param_4,0);
      local_8c = (int)this + -0x1c;
      uStack_cc = 1;
      local_88 = iVar4;
      if (uStack_78 == 0) {
        uStack_a8 = FUN_1009b200(extraout_ECX,&local_c4,*(int **)((int)this + 0x18));
        uVar5 = uStack_a8 / (uStack_b4 - local_c0);
        uVar8 = 1;
        if (1 < uVar5) {
          uVar8 = uVar5;
        }
        uStack_ac = uVar8;
        if (local_bc < uStack_b0) {
          iStack_a0 = uVar8 * param_4;
          uVar5 = uStack_b0;
          uVar9 = local_bc;
          do {
            if (local_c0 < uStack_b4) {
              uStack_a4 = uVar9 + uVar8;
              uVar6 = local_c0;
              do {
                iStack_7c = local_c4;
                uStack_70 = uStack_b8;
                uVar7 = uVar6 + uStack_a8;
                uStack_6c = uStack_b4;
                if (uVar7 < uStack_b4) {
                  uStack_6c = uVar7;
                }
                uStack_68 = uVar5;
                if (uStack_a4 < uVar5) {
                  uStack_68 = uStack_a4;
                }
                uStack_78 = uVar6;
                uStack_74 = uVar9;
                FUN_1006bef4(&iStack_3c,iStack_c8 + 0x6c0 + unaff_EBX,
                             *(void **)(unaff_EBX + 0x19c4 + iStack_c8),*(int **)((int)this + 0x18),
                             (void *)(iStack_c8 + 0x1af0 + unaff_EBX),&iStack_7c,param_2,param_3,
                             param_4,0);
                if (iStack_38 == 0) {
                  FUN_10082bc4(
                              "[dgVoodoo] D3D12 Core: FATAL ERROR: Failed to allocate %s. Probably being run out of 2GB address space, try to make the executable Large Address Aware so that the full 4GB is available.\n"
                              );
                  DebugBreak();
                  uStack_cc = 0;
                  uVar5 = uStack_b0;
                  uVar8 = uStack_ac;
                  uVar9 = uStack_b0;
                  break;
                }
                FUN_10072d29(&local_8c,param_1,&iStack_3c,&local_c4);
                uVar5 = uStack_b0;
                uVar8 = uStack_ac;
                uVar6 = uVar7;
              } while (uVar7 < uStack_b4);
            }
            uVar9 = uVar9 + uVar8;
            param_2 = (uint *)((int)param_2 + iStack_a0);
          } while (uVar9 < uVar5);
        }
      }
      else {
        FUN_10072d29(&local_8c,param_1,&iStack_7c,&local_c4);
      }
    }
  }
  if (pvStack_9c != (LPVOID)0x0) {
    thunk_FUN_100ad48c(pvStack_9c);
  }
  return uStack_cc;
}

